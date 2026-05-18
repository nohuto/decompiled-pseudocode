/*
 * XREFs of sub_180037F54 @ 0x180037F54
 * Callers:
 *     sub_180038BBC @ 0x180038BBC (sub_180038BBC.c)
 *     sub_180050D34 @ 0x180050D34 (sub_180050D34.c)
 * Callees:
 *     memcpy @ 0x18000CA61 (memcpy.c)
 *     sub_1800100E8 @ 0x1800100E8 (sub_1800100E8.c)
 */

__int64 __fastcall sub_180037F54(void **a1)
{
  void *v1; // rbx
  __int64 result; // rax

  v1 = *a1;
  memcpy(a1, *a1, (size_t)a1[2] + 1);
  result = sub_1800100E8(v1, (unsigned __int64)a1[3] + 1);
  a1[3] = (void *)15;
  return result;
}
