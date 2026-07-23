/*
 * XREFs of sub_1402DCA80 @ 0x1402DCA80
 * Callers:
 *     sub_1402DC420 @ 0x1402DC420 (sub_1402DC420.c)
 *     sub_1402DC668 @ 0x1402DC668 (sub_1402DC668.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_1402DCA80(__int64 a1, __int64 *a2, _DWORD *a3)
{
  __int64 result; // rax
  unsigned __int64 v4; // r9
  unsigned __int64 v5; // r10

  result = *a2;
  v4 = (a1 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
  if ( !*a2 )
    return ExAllocatePool2(256LL, a1, 1986350405LL);
  v5 = (unsigned int)*a3;
  if ( v5 < v4 )
    return ExAllocatePool2(256LL, a1, 1986350405LL);
  *a2 = result + v4;
  *a3 = v5 - v4;
  return result;
}
