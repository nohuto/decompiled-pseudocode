/*
 * XREFs of PfSnAppLaunchScenarioControl @ 0x14097F8E0
 * Callers:
 *     PfSnSetPrefetcherInformation @ 0x14074D774 (PfSnSetPrefetcherInformation.c)
 * Callees:
 *     KiStackAttachProcess @ 0x14022D710 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x14022DAD0 (KiUnstackDetachProcess.c)
 *     ObfDereferenceObjectWithTag @ 0x14022F6C0 (ObfDereferenceObjectWithTag.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1406E6330 (ObpReferenceObjectByHandleWithTag.c)
 *     PfSnBeginAppLaunch @ 0x1407606E8 (PfSnBeginAppLaunch.c)
 */

__int64 __fastcall PfSnAppLaunchScenarioControl(__int64 a1, char a2)
{
  int v2; // esi
  bool v3; // zf
  int v4; // edi
  PVOID v5; // rbx
  PVOID Object; // [rsp+40h] [rbp-48h] BYREF
  $115DCDF994C6370D29323EAB0E0C9502 v8; // [rsp+48h] [rbp-40h] BYREF

  Object = 0LL;
  v2 = 0;
  v3 = *(_DWORD *)a1 == 1;
  memset(&v8, 0, sizeof(v8));
  if ( v3 )
  {
    if ( *(_DWORD *)(a1 + 4) )
    {
      v4 = ObpReferenceObjectByHandleWithTag(
             *(_QWORD *)(a1 + 8),
             8,
             (__int64)PsProcessType,
             a2,
             0x73576650u,
             &Object,
             0LL,
             0LL);
      if ( v4 < 0 )
      {
        v5 = Object;
      }
      else
      {
        v5 = Object;
        if ( KeGetCurrentThread()->ApcState.Process != Object )
        {
          v2 = 1;
          KiStackAttachProcess((_KPROCESS *)Object, 0, (__int64)&v8);
        }
        PfSnBeginAppLaunch(v5, 0LL, 17);
        v4 = 0;
        if ( v2 )
          KiUnstackDetachProcess(&v8);
      }
      if ( v5 )
        ObfDereferenceObjectWithTag(v5, 0x73576650u);
    }
    else
    {
      return (unsigned int)-1073741811;
    }
  }
  else
  {
    return (unsigned int)-1073741735;
  }
  return (unsigned int)v4;
}
