/*
 * XREFs of _IsNonwritableInCurrentImage @ 0x18000AEE0
 * Callers:
 *     sub_18000A81C @ 0x18000A81C (sub_18000A81C.c)
 * Callees:
 *     sub_18000AE90 @ 0x18000AE90 (sub_18000AE90.c)
 *     sub_18000AF40 @ 0x18000AF40 (sub_18000AF40.c)
 */

__int64 __fastcall IsNonwritableInCurrentImage(__int64 a1)
{
  __int64 result; // rax

  result = sub_18000AF40(&_ImageBase);
  if ( (_DWORD)result )
  {
    result = sub_18000AE90((__int64)&_ImageBase, a1 - (_QWORD)&_ImageBase);
    if ( result )
      return *(int *)(result + 36) >= 0;
  }
  return result;
}
