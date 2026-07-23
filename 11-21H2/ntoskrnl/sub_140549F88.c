/*
 * XREFs of sub_140549F88 @ 0x140549F88
 * Callers:
 *     sub_14039E130 @ 0x14039E130 (sub_14039E130.c)
 *     sub_14039E160 @ 0x14039E160 (sub_14039E160.c)
 * Callees:
 *     memset @ 0x140435E00 (memset.c)
 *     HvlGetLpIndexFromProcessorIndex @ 0x140459BC0 (HvlGetLpIndexFromProcessorIndex.c)
 *     sub_14054A3D8 @ 0x14054A3D8 (sub_14054A3D8.c)
 */

__int64 __fastcall sub_140549F88(int a1)
{
  unsigned int LockArray_high; // ecx
  __int64 v3; // rdx
  __int64 v4; // r8
  _DWORD v6[106]; // [rsp+20h] [rbp-1A8h] BYREF

  memset(v6, 0, 0x194uLL);
  LockArray_high = HIDWORD(KeGetPcr()[1].LockArray);
  v6[0] = 3;
  v6[2] = HvlGetLpIndexFromProcessorIndex(LockArray_high);
  v6[4] = a1;
  return sub_14054A3D8(v6, v3, v4);
}
