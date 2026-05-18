/*
 * XREFs of sub_180021E5C @ 0x180021E5C
 * Callers:
 *     sub_180021990 @ 0x180021990 (sub_180021990.c)
 *     sub_180024160 @ 0x180024160 (sub_180024160.c)
 * Callees:
 *     _CxxThrowException @ 0x18000CA79 (_CxxThrowException.c)
 */

__int64 sub_180021E5C()
{
  __int64 result; // rax
  _QWORD pExceptionObject[3]; // [rsp+20h] [rbp-18h] BYREF

  result = o__aligned_malloc(160LL, 8LL);
  if ( !result )
  {
    pExceptionObject[1] = "bad allocation";
    pExceptionObject[0] = &stdext::bad_alloc::`vftable';
    throw (stdext::bad_alloc *)pExceptionObject;
  }
  return result;
}
