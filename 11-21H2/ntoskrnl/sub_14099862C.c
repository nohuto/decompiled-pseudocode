/*
 * XREFs of sub_14099862C @ 0x14099862C
 * Callers:
 *     sub_140998800 @ 0x140998800 (sub_140998800.c)
 *     sub_140998940 @ 0x140998940 (sub_140998940.c)
 * Callees:
 *     ZwUpdateWnfStateData @ 0x14041F2A0 (ZwUpdateWnfStateData.c)
 *     sub_140998888 @ 0x140998888 (sub_140998888.c)
 */

__int64 sub_14099862C()
{
  __int64 result; // rax
  char v1; // [rsp+50h] [rbp+8h] BYREF

  v1 = 0;
  ZwUpdateWnfStateData(&stru_14000E628, &v1, 1u, 0LL, 0LL, 0, 0);
  result = sub_140998888(0LL);
  byte_140C1F900 = 0;
  return result;
}
