/*
 * XREFs of RmpWnfCreateStateNameForClient @ 0x180005AA8
 * Callers:
 *     CrmSrvActivityWindowClosedReasonSubscribe @ 0x180003BDC (CrmSrvActivityWindowClosedReasonSubscribe.c)
 *     ?HampClientStart@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAT_RM_SID@@PEAXKKPEAU_HAM_CLIENT_CONNECTION_PARAMETERS@@@Z @ 0x18004E660 (-HampClientStart@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAT_RM_SID@@PEAXKKPEAU_HAM_CLIENT_CONNECTION_PARA.c)
 *     ?RmpCpuSetManagerAllocateObjectsForAllocation@@YAJPEAU_RM_CPU_SET_ALLOCATION@@@Z @ 0x180086250 (-RmpCpuSetManagerAllocateObjectsForAllocation@@YAJPEAU_RM_CPU_SET_ALLOCATION@@@Z.c)
 * Callees:
 *     RmpWnfGetPublisherSid @ 0x180005B38 (RmpWnfGetPublisherSid.c)
 *     ?RmpWnfCreateStateNameForIpcEx@@YAJPEAT_RM_SID@@0KKPEAU_WNF_STATE_NAME@@@Z @ 0x18002C110 (-RmpWnfCreateStateNameForIpcEx@@YAJPEAT_RM_SID@@0KKPEAU_WNF_STATE_NAME@@@Z.c)
 *     __security_check_cookie @ 0x180049550 (__security_check_cookie.c)
 */

__int64 __fastcall RmpWnfCreateStateNameForClient(
        PSID a1,
        unsigned int a2,
        unsigned int a3,
        struct _WNF_STATE_NAME *a4)
{
  __int64 result; // rax
  _BYTE DestinationSid[80]; // [rsp+30h] [rbp-88h] BYREF

  if ( (a3 & 0xFFFFFFFE) != 0 )
    return 3221225485LL;
  result = RmpWnfGetPublisherSid(DestinationSid);
  if ( (int)result >= 0 )
  {
    result = RmpWnfCreateStateNameForIpcEx(DestinationSid, a1, a2, a3, a4);
    if ( (int)result >= 0 )
      return 0LL;
  }
  return result;
}
