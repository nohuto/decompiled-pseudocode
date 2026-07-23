/*
 * XREFs of sub_1406B9830 @ 0x1406B9830
 * Callers:
 *     sub_140700460 @ 0x140700460 (sub_140700460.c)
 *     sub_140700A40 @ 0x140700A40 (sub_140700A40.c)
 * Callees:
 *     sub_1406B9878 @ 0x1406B9878 (sub_1406B9878.c)
 */

__int64 __fastcall sub_1406B9830(__int64 a1, unsigned int *a2, _DWORD *a3)
{
  __int64 result; // rax

  *(_QWORD *)a2 = 0LL;
  a2[2] = 0;
  result = **(unsigned int **)(a1 + 16);
  *a2 = result;
  a2[2] = 4;
  if ( a3 )
  {
    *a3 = sub_1406B9878();
    return *a2;
  }
  return result;
}
