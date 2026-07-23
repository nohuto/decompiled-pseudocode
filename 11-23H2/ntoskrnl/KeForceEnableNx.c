/*
 * XREFs of KeForceEnableNx @ 0x140A89690
 * Callers:
 *     HalpInterruptSetProcessorStartContext @ 0x140376A10 (HalpInterruptSetProcessorStartContext.c)
 * Callees:
 *     <none>
 */

char KeForceEnableNx()
{
  return KiNxForceEnable;
}
