/*
 * XREFs of sub_14098194C @ 0x14098194C
 * Callers:
 *     sub_1405BCBC4 @ 0x1405BCBC4 (sub_1405BCBC4.c)
 * Callees:
 *     sub_1402B2E00 @ 0x1402B2E00 (sub_1402B2E00.c)
 *     sub_1402C3410 @ 0x1402C3410 (sub_1402C3410.c)
 *     sub_1405875A0 @ 0x1405875A0 (sub_1405875A0.c)
 */

__int64 __fastcall sub_14098194C(ULONG_PTR *a1, unsigned __int64 a2, unsigned __int64 a3, int a4)
{
  __int64 result; // rax
  __int64 v9; // rbx
  unsigned __int64 v10; // rdi
  int i; // esi

  result = sub_1402B2E00(a2);
  if ( (_DWORD)result )
  {
    result = sub_1402C3410(a2, a3, a4 != 0);
    if ( result && a1 == &StartContext )
      return _InterlockedExchangeAdd64(&qword_140C53530, -result);
  }
  else
  {
    v9 = (a2 >> 18) & 0x3FFFFF;
    v10 = a3 >> 18;
    for ( i = a4 != 0 ? 2 : 0; v10; --v10 )
    {
      sub_1405875A0(0LL, v9, i);
      result = (v9 ^ (v9 + 1)) & 0x3FFFFF;
      v9 ^= result;
    }
  }
  return result;
}
