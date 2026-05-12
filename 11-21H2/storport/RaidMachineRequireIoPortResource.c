/*
 * XREFs of RaidMachineRequireIoPortResource @ 0x1C00656F8
 * Callers:
 *     RaidAdapterFilterResourceRequirementsIrp @ 0x1C008C490 (RaidAdapterFilterResourceRequirementsIrp.c)
 * Callees:
 *     <none>
 */

__int64 RaidMachineRequireIoPortResource()
{
  __int64 result; // rax
  int v1; // [rsp+30h] [rbp+8h] BYREF

  v1 = 1;
  EmClientQueryRuleState(&GUID_KEEP_IO_PORT_RESOURCE_REQUIREMENT_RULE, &v1);
  result = (unsigned __int8)g_OSisClient;
  if ( v1 == 2 )
    return 1LL;
  return result;
}
