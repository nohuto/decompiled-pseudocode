/*
 * XREFs of CrmPolicyTableEntryGet @ 0x18002BFE4
 * Callers:
 *     CrmActivityStart @ 0x18002B870 (CrmActivityStart.c)
 * Callees:
 *     Feature_IndexerFanBackoff__private_ReportDeviceUsage @ 0x18004BA8C (Feature_IndexerFanBackoff__private_ReportDeviceUsage.c)
 */

char *__fastcall CrmPolicyTableEntryGet(int a1)
{
  char *v1; // rbx
  void *v2; // rax
  int Key; // [rsp+40h] [rbp+8h] BYREF

  Key = a1;
  v1 = (char *)&CrmPolicyTable + 680 * a1;
  Feature_IndexerFanBackoff__private_ReportDeviceUsage();
  v2 = bsearch(&Key, &CrmPolicyTableIndexerExperimentOverride, 6uLL, 0x2A8uLL, CrmPolicyTableCompare);
  if ( v2 )
    return (char *)v2;
  return v1;
}
