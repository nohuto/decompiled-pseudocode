/*
 * XREFs of RmpWnfCreateStateNameForClient @ 0x18002FB98
 * Callers:
 *     ?HampClientAllocateState@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAT_RM_SID@@PEAX@Z @ 0x180006974 (-HampClientAllocateState@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAT_RM_SID@@PEAX@Z.c)
 *     CrmSrvActivityWindowClosedReasonSubscribe @ 0x18003B34C (CrmSrvActivityWindowClosedReasonSubscribe.c)
 *     ?RmpActivatorRegister@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAT_RM_SID@@KPEAPEAU_RM_ACTIVATOR@@@Z @ 0x18004C2EC (-RmpActivatorRegister@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAT_RM_SID@@KPEAPEAU_RM_ACTIVATOR@@@Z.c)
 *     ?RmpCpuSetManagerAllocateObjectsForAllocation@@YAJPEAU_RM_CPU_SET_ALLOCATION@@@Z @ 0x1800885CC (-RmpCpuSetManagerAllocateObjectsForAllocation@@YAJPEAU_RM_CPU_SET_ALLOCATION@@@Z.c)
 * Callees:
 *     RmpWnfGetPublisherSid @ 0x18002FABC (RmpWnfGetPublisherSid.c)
 *     ?RmpWnfCreateStateNameForIpcEx@@YAJPEAT_RM_SID@@0KKPEAU_WNF_STATE_NAME@@@Z @ 0x180030B54 (-RmpWnfCreateStateNameForIpcEx@@YAJPEAT_RM_SID@@0KKPEAU_WNF_STATE_NAME@@@Z.c)
 *     __security_check_cookie @ 0x18004E310 (__security_check_cookie.c)
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
