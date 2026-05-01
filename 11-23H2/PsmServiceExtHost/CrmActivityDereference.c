/*
 * XREFs of CrmActivityDereference @ 0x180004AA8
 * Callers:
 *     CrmSrvActivityWindowClosedReasonSubscribe @ 0x180003BDC (CrmSrvActivityWindowClosedReasonSubscribe.c)
 *     CrmSrvActivityQueryWindowClosedReasons @ 0x180003D5C (CrmSrvActivityQueryWindowClosedReasons.c)
 *     CrmRpcSrvActivityAllocate @ 0x18002C280 (CrmRpcSrvActivityAllocate.c)
 *     CrmSrvActivityAllocate @ 0x180038B3C (CrmSrvActivityAllocate.c)
 *     CrmRegistrationCreateActivity @ 0x180043870 (CrmRegistrationCreateActivity.c)
 *     CrmSrvActivityStop @ 0x18006D108 (CrmSrvActivityStop.c)
 *     CrmSrvActivityWindowClosedReasonUnsubscribe @ 0x18006D2BC (CrmSrvActivityWindowClosedReasonUnsubscribe.c)
 *     CrmRegistrationRemoveActivity @ 0x18006DA24 (CrmRegistrationRemoveActivity.c)
 * Callees:
 *     CrmActivityCleanup @ 0x18002CF40 (CrmActivityCleanup.c)
 */

char __fastcall CrmActivityDereference(volatile signed __int64 *a1)
{
  signed __int64 v2; // rax
  bool v3; // zf
  bool v4; // sf
  bool v5; // of
  signed __int64 v6; // rax

  v2 = _InterlockedExchangeAdd64(a1 + 2, 0xFFFFFFFFFFFFFFFFuLL);
  v5 = __OFSUB__(v2, 1LL);
  v3 = v2 == 1;
  v4 = v2 - 1 < 0;
  v6 = v2 - 1;
  if ( v4 ^ v5 | v3 )
  {
    if ( v6 )
      __fastfail(0xEu);
    CrmActivityCleanup(a1);
    LOBYTE(v6) = RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, (PVOID)a1);
  }
  return v6;
}
