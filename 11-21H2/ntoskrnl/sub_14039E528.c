/*
 * XREFs of sub_14039E528 @ 0x14039E528
 * Callers:
 *     HvlReadPerformanceStateCounters @ 0x14039E4D0 (HvlReadPerformanceStateCounters.c)
 *     sub_1403B6B58 @ 0x1403B6B58 (sub_1403B6B58.c)
 *     sub_140459B00 @ 0x140459B00 (sub_140459B00.c)
 *     HvlGetApicIdFromLpIndex @ 0x1405439E0 (HvlGetApicIdFromLpIndex.c)
 *     HvlQueryHypervisorProcessorNodeNumber @ 0x140543B00 (HvlQueryHypervisorProcessorNodeNumber.c)
 *     HvlQueryProcessorTopologyEx @ 0x140543CA0 (HvlQueryProcessorTopologyEx.c)
 *     sub_1405499F8 @ 0x1405499F8 (sub_1405499F8.c)
 *     sub_1405DC4F8 @ 0x1405DC4F8 (sub_1405DC4F8.c)
 * Callees:
 *     <none>
 */

int *__fastcall sub_14039E528(unsigned int a1)
{
  int *v1; // rdx
  int *result; // rax
  unsigned int v3; // r9d

  v1 = dword_140D125E0;
  if ( a1 >= (unsigned int)NumOfElements || (result = &dword_140D125E0[30 * a1], result[1] != a1) )
  {
    result = 0LL;
    v3 = 0;
    if ( (_DWORD)NumOfElements )
    {
      while ( v1[1] != a1 )
      {
        ++v3;
        v1 += 30;
        if ( v3 >= (unsigned int)NumOfElements )
          goto LABEL_6;
      }
      return v1;
    }
    else
    {
LABEL_6:
      if ( !a1 )
        return v1;
    }
  }
  return result;
}
