/*
 * XREFs of VfThunkApplyPristineToAllSession @ 0x140ADB2EC
 * Callers:
 *     VfSuspectApplyDifVolatileVerification @ 0x140ADA2A8 (VfSuspectApplyDifVolatileVerification.c)
 *     VfSuspectRemoveDifVolatileVerification @ 0x140ADAC94 (VfSuspectRemoveDifVolatileVerification.c)
 * Callees:
 *     MmIsSessionAddress @ 0x1402BCA70 (MmIsSessionAddress.c)
 *     MmDetachSession @ 0x140356450 (MmDetachSession.c)
 *     MmAttachSession @ 0x1403564F0 (MmAttachSession.c)
 *     MmGetNextSession @ 0x14035EE90 (MmGetNextSession.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     MmIsDriverLoadedCurrentSession @ 0x140695E68 (MmIsDriverLoadedCurrentSession.c)
 *     MmQuitNextSession @ 0x140884B50 (MmQuitNextSession.c)
 *     ViThunkApplyPristineCurrentSession @ 0x140ADB5AC (ViThunkApplyPristineCurrentSession.c)
 */

__int64 __fastcall VfThunkApplyPristineToAllSession(__int64 a1)
{
  int v2; // edi
  _KPROCESS *i; // rcx
  _KPROCESS *NextSession; // rax
  _KPROCESS *v6; // rbx
  $115DCDF994C6370D29323EAB0E0C9502 v7; // [rsp+20h] [rbp-48h] BYREF

  memset(&v7, 0, sizeof(v7));
  v2 = 0;
  _InterlockedExchange(&ViLookasideAlreadyLoadedDrivers, 0);
  _InterlockedExchange(&ViResourcesAlreadyLoadedDrivers, 0);
  if ( !MmIsSessionAddress(*(_QWORD *)(a1 + 48)) )
    return ViThunkApplyPristineCurrentSession(a1);
  for ( i = 0LL; ; i = v6 )
  {
    NextSession = (_KPROCESS *)MmGetNextSession(i);
    v6 = NextSession;
    if ( !NextSession )
      break;
    v2 = MmAttachSession(NextSession, (__int64)&v7);
    if ( v2 >= 0 )
    {
      if ( MmIsDriverLoadedCurrentSession(*(_QWORD *)(a1 + 48)) )
      {
        v2 = ViThunkApplyPristineCurrentSession(a1);
        if ( v2 < 0 )
        {
          MmQuitNextSession(v6);
          return (unsigned int)v2;
        }
      }
      MmDetachSession((__int64)v6, &v7);
    }
  }
  return (unsigned int)v2;
}
