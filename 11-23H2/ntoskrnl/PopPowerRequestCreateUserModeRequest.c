/*
 * XREFs of PopPowerRequestCreateUserModeRequest @ 0x14036E00C
 * Callers:
 *     NtPowerInformation @ 0x140784110 (NtPowerInformation.c)
 * Callees:
 *     PoCaptureReasonContext @ 0x140209BF8 (PoCaptureReasonContext.c)
 *     ObfDereferenceObjectWithTag @ 0x14022F6C0 (ObfDereferenceObjectWithTag.c)
 *     ObfReferenceObjectWithTag @ 0x1402B6B50 (ObfReferenceObjectWithTag.c)
 *     PopPowerRequestCreateCommon @ 0x14032C008 (PopPowerRequestCreateCommon.c)
 *     PoDestroyReasonContext @ 0x14032D55C (PoDestroyReasonContext.c)
 *     ObInsertObject @ 0x14076B780 (ObInsertObject.c)
 *     TtmIsEnabled @ 0x1407A6280 (TtmIsEnabled.c)
 *     TtmNotifySessionPowerRequestCreated @ 0x1409A4720 (TtmNotifySessionPowerRequestCreated.c)
 */

__int64 __fastcall PopPowerRequestCreateUserModeRequest(unsigned __int64 a1, char a2, HANDLE *a3)
{
  int v5; // eax
  _QWORD *v6; // rdi
  NTSTATUS inserted; // esi
  int Common; // eax
  unsigned int *v9; // rbx
  PVOID Object[3]; // [rsp+30h] [rbp-18h] BYREF
  PVOID P; // [rsp+68h] [rbp+20h] BYREF

  P = 0LL;
  Object[0] = 0LL;
  v5 = PoCaptureReasonContext(a1, 1, 0LL, 1, 0LL, (__int64 *)&P);
  v6 = P;
  inserted = v5;
  if ( v5 >= 0 )
  {
    Common = PopPowerRequestCreateCommon(P, a2, Object);
    v9 = (unsigned int *)Object[0];
    inserted = Common;
    if ( Common >= 0 )
    {
      v6 = 0LL;
      ObfReferenceObjectWithTag(Object[0], 0x72506F50u);
      inserted = ObInsertObject(v9, 0LL, 0, 0, 0LL, a3);
      if ( inserted >= 0 )
      {
        if ( (unsigned __int8)TtmIsEnabled() )
          TtmNotifySessionPowerRequestCreated(v9[4], v9[9], v9[26], *a3);
        inserted = 0;
      }
    }
    if ( v9 )
      ObfDereferenceObjectWithTag(v9, 0x72506F50u);
  }
  if ( v6 )
    PoDestroyReasonContext(v6);
  return (unsigned int)inserted;
}
