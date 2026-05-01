/*
 * XREFs of ?HampSystemCheckLocationCapability@@YAJPEAXPEAE@Z @ 0x180092AA8
 * Callers:
 *     ?HampExtendedExecutionCheckPolicy@@YAJPEAU_HAM_ACTIVITY_PROPERTIES@@PEAXPEAU_RM_PSM_HOST_INFO@@W4_HAM_EXTENDED_EXECUTION_REASON@@@Z @ 0x18007B85C (-HampExtendedExecutionCheckPolicy@@YAJPEAU_HAM_ACTIVITY_PROPERTIES@@PEAXPEAU_RM_PSM_HOST_INFO@@W.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HampSystemCheckLocationCapability(void *a1, unsigned __int8 *a2)
{
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  RtlInitUnicodeString(&DestinationString, L"location");
  return RtlCapabilityCheck(a1, &DestinationString, a2);
}
