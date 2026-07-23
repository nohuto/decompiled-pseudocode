/*
 * XREFs of HalpIsLmceSupported @ 0x140380504
 * Callers:
 *     HalpMcaSetProcessorConfig @ 0x140A8ABB4 (HalpMcaSetProcessorConfig.c)
 * Callees:
 *     HalpGetCpuVendor @ 0x140380794 (HalpGetCpuVendor.c)
 */

bool HalpIsLmceSupported()
{
  unsigned __int64 v0; // rax
  unsigned __int64 v2; // rax

  if ( (unsigned __int8)HalpGetCpuVendor() != 2 )
    return 0;
  v0 = __readmsr(0x179u);
  if ( (v0 & 0x8000000) == 0 )
    return 0;
  v2 = __readmsr(0x3Au);
  return (v2 & 0x100001) == 1048577;
}
