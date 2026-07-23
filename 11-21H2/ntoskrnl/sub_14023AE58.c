/*
 * XREFs of sub_14023AE58 @ 0x14023AE58
 * Callers:
 *     sub_14023AC88 @ 0x14023AC88 (sub_14023AC88.c)
 *     sub_1403CAB68 @ 0x1403CAB68 (sub_1403CAB68.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 __fastcall sub_14023AE58(__int64 a1, __int64 a2, __int64 a3, int a4, int a5)
{
  __int64 result; // rax
  int i; // ebx
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF

  result = (__int64)&retaddr;
  for ( i = a5; i; i -= result )
  {
    result = sub_14042A5E0(a2, a3);
    a4 += result;
    a3 += (unsigned int)result;
  }
  return result;
}
