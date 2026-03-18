/*
 * XREFs of DifDeregisterAllPlugins @ 0x1405D4C98
 * Callers:
 *     VfVolatileClearDifRuleClass @ 0x140ADEA7C (VfVolatileClearDifRuleClass.c)
 * Callees:
 *     CarDeregisterRuleClassConfiguration @ 0x1405D3C10 (CarDeregisterRuleClassConfiguration.c)
 *     DifDeregisterPlugin @ 0x1405D4CF0 (DifDeregisterPlugin.c)
 */

void DifDeregisterAllPlugins()
{
  unsigned int v0; // ebx
  char *v1; // rdi
  int *v2; // rbx
  __int64 v3; // rdi

  v0 = 0;
  v1 = DifPluginStates;
  do
  {
    if ( *v1 )
      DifDeregisterPlugin(v0);
    ++v0;
    ++v1;
  }
  while ( v0 < 0x40 );
  v2 = &DifKernelPluginRules;
  v3 = 4LL;
  do
  {
    CarDeregisterRuleClassConfiguration((unsigned int)*v2);
    v2 += 4;
    --v3;
  }
  while ( v3 );
}
