/*
 * XREFs of HvlRegisterLogicalProcessorFrequency @ 0x140549E34
 * Callers:
 *     PpmScaleIdleStateValues @ 0x14023BC48 (PpmScaleIdleStateValues.c)
 * Callees:
 *     memset @ 0x140435E00 (memset.c)
 *     HvlpSetPowerProperty @ 0x14054A3D8 (HvlpSetPowerProperty.c)
 */

__int64 __fastcall HvlRegisterLogicalProcessorFrequency(int a1, int a2)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  _DWORD v7[106]; // [rsp+20h] [rbp-1A8h] BYREF

  memset(v7, 0, 0x194uLL);
  v7[0] = 2;
  v7[2] = a1;
  v7[4] = a2;
  return HvlpSetPowerProperty(v7, v4, v5);
}
