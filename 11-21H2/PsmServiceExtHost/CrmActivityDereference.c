/*
 * XREFs of CrmActivityDereference @ 0x18003B650
 * Callers:
 *     CrmRpcSrvActivityAllocate @ 0x1800308F0 (CrmRpcSrvActivityAllocate.c)
 *     CrmSrvActivityWindowClosedReasonSubscribe @ 0x18003B34C (CrmSrvActivityWindowClosedReasonSubscribe.c)
 *     CrmSrvActivityQueryWindowClosedReasons @ 0x18003B4CC (CrmSrvActivityQueryWindowClosedReasons.c)
 *     CrmSrvActivityWindowClosedReasonUnsubscribe @ 0x180040618 (CrmSrvActivityWindowClosedReasonUnsubscribe.c)
 *     CrmRegistrationCreateActivity @ 0x180048A74 (CrmRegistrationCreateActivity.c)
 *     CrmRegistrationRemoveActivity @ 0x18006DCC0 (CrmRegistrationRemoveActivity.c)
 * Callees:
 *     CrmActivityCleanup @ 0x180035860 (CrmActivityCleanup.c)
 */

char __fastcall CrmActivityDereference(volatile signed __int64 *P)
{
  signed __int64 v2; // rax
  bool v3; // zf
  bool v4; // sf
  bool v5; // of
  signed __int64 v6; // rax

  v2 = _InterlockedExchangeAdd64(P + 2, 0xFFFFFFFFFFFFFFFFuLL);
  v5 = __OFSUB__(v2, 1LL);
  v3 = v2 == 1;
  v4 = v2 - 1 < 0;
  v6 = v2 - 1;
  if ( v4 ^ v5 | v3 )
  {
    if ( v6 )
      __fastfail(0xEu);
    CrmActivityCleanup((__int64)P);
    LOBYTE(v6) = RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, (PVOID)P);
  }
  return v6;
}
