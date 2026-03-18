/*
 * XREFs of PopPowerRequestCreateUserModeRequest @ 0x14036D81C
 * Callers:
 *     NtPowerInformation @ 0x140784430 (NtPowerInformation.c)
 * Callees:
 *     PoCaptureReasonContext @ 0x140209BF8 (PoCaptureReasonContext.c)
 *     ObfDereferenceObjectWithTag @ 0x14022F5D0 (ObfDereferenceObjectWithTag.c)
 *     ObfReferenceObjectWithTag @ 0x1402B6890 (ObfReferenceObjectWithTag.c)
 *     PopPowerRequestCreateCommon @ 0x14032BB98 (PopPowerRequestCreateCommon.c)
 *     PoDestroyReasonContext @ 0x14032D130 (PoDestroyReasonContext.c)
 *     ObInsertObject @ 0x14076BAA0 (ObInsertObject.c)
 *     TtmIsEnabled @ 0x1407A65A0 (TtmIsEnabled.c)
 *     TtmNotifySessionPowerRequestCreated @ 0x1409A45D0 (TtmNotifySessionPowerRequestCreated.c)
 */

__int64 __fastcall PopPowerRequestCreateUserModeRequest(unsigned __int64 a1, char a2, HANDLE *a3)
{
  int v5; // eax
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  _QWORD *v9; // rdi
  NTSTATUS inserted; // esi
  int Common; // eax
  unsigned int *v12; // rbx
  PVOID Object[3]; // [rsp+30h] [rbp-18h] BYREF
  PVOID P; // [rsp+68h] [rbp+20h] BYREF

  P = 0LL;
  Object[0] = 0LL;
  v5 = PoCaptureReasonContext(a1, 1, 0LL, 1, 0LL, (__int64 *)&P);
  v9 = P;
  inserted = v5;
  if ( v5 >= 0 )
  {
    Common = PopPowerRequestCreateCommon(P, a2, Object);
    v12 = (unsigned int *)Object[0];
    inserted = Common;
    if ( Common >= 0 )
    {
      v9 = 0LL;
      ObfReferenceObjectWithTag(Object[0], 0x72506F50u);
      inserted = ObInsertObject(v12, 0LL, 0, 0, 0LL, a3);
      if ( inserted >= 0 )
      {
        if ( (unsigned __int8)TtmIsEnabled() )
          TtmNotifySessionPowerRequestCreated(v12[4], v12[9], v12[26], *a3);
        inserted = 0;
      }
    }
    if ( v12 )
      ObfDereferenceObjectWithTag(v12, 0x72506F50u);
  }
  if ( v9 )
    PoDestroyReasonContext(v9, v6, v7, v8);
  return (unsigned int)inserted;
}
