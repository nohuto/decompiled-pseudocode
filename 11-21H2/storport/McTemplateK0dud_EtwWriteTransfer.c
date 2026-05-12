/*
 * XREFs of McTemplateK0dud_EtwWriteTransfer @ 0x1C004FEDC
 * Callers:
 *     RaidUnitClaimIrp @ 0x1C0004810 (RaidUnitClaimIrp.c)
 *     RaidUnitCompleteRequest @ 0x1C0006E70 (RaidUnitCompleteRequest.c)
 *     RaUnitRemoveFromPendingList @ 0x1C000BF10 (RaUnitRemoveFromPendingList.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1C0013144 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C0022BF0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0dud_EtwWriteTransfer(__int64 a1, __int64 a2, const GUID *a3, __int64 a4, char a5)
{
  int v6; // [rsp+30h] [rbp-19h] BYREF
  int v7; // [rsp+38h] [rbp-11h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v8; // [rsp+40h] [rbp-9h] BYREF
  int *v9; // [rsp+50h] [rbp+7h]
  __int64 v10; // [rsp+58h] [rbp+Fh]
  char *v11; // [rsp+60h] [rbp+17h]
  __int64 v12; // [rsp+68h] [rbp+1Fh]
  int *v13; // [rsp+70h] [rbp+27h]
  __int64 v14; // [rsp+78h] [rbp+2Fh]

  v6 = 3;
  v7 = 0;
  v9 = &v6;
  v12 = 1LL;
  v11 = &a5;
  v10 = 4LL;
  v13 = &v7;
  v14 = 4LL;
  return McGenEventWrite_EtwWriteTransfer(0LL, &EventQueue, a3, 4u, &v8);
}
