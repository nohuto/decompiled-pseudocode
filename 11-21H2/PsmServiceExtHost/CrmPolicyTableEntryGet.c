/*
 * XREFs of CrmPolicyTableEntryGet @ 0x180031360
 * Callers:
 *     CrmActivityStart @ 0x180030D90 (CrmActivityStart.c)
 * Callees:
 *     Feature_IndexerFanBackoff__private_IsEnabledPreCheck @ 0x180031238 (Feature_IndexerFanBackoff__private_IsEnabledPreCheck.c)
 */

char *__fastcall CrmPolicyTableEntryGet(int a1)
{
  char *v1; // rbx
  void *v2; // rax
  int Key; // [rsp+40h] [rbp+8h] BYREF

  Key = a1;
  v1 = (char *)&CrmPolicyTable + 648 * a1;
  Feature_IndexerFanBackoff__private_IsEnabledPreCheck();
  v2 = bsearch(&Key, &CrmPolicyTableIndexerExperimentOverride, 6uLL, 0x288uLL, CrmPolicyTableCompare);
  if ( v2 )
    return (char *)v2;
  return v1;
}
