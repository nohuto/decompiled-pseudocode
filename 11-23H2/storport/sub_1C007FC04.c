/*
 * XREFs of sub_1C007FC04 @ 0x1C007FC04
 * Callers:
 *     sub_1C0080710 @ 0x1C0080710 (sub_1C0080710.c)
 * Callees:
 *     sub_1C003EDF0 @ 0x1C003EDF0 (sub_1C003EDF0.c)
 */

__int64 __fastcall sub_1C007FC04(__int64 a1)
{
  __int64 v1; // r8
  __int64 v2; // rbx

  v1 = *(unsigned int *)(a1 + 36);
  v2 = 0LL;
  if ( (unsigned int)v1 >= 0x100 )
  {
    if ( off_1C0093070 != (PDEVICE_OBJECT)&off_1C0093070 && BYTE1(off_1C0093070->Timer) >= 2u )
      sub_1C003EDF0((__int64)off_1C0093070->AttachedDevice, 0x26u, (__int64)&unk_1C008B728);
  }
  else
  {
    *(_DWORD *)(a1 + 36) = v1 + 1;
    return a1 + 8 * (v1 + 2 * v1 + 5);
  }
  return v2;
}
