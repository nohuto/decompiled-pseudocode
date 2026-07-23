/*
 * XREFs of sub_1405302D4 @ 0x1405302D4
 * Callers:
 *     sub_1405307FC @ 0x1405307FC (sub_1405307FC.c)
 * Callees:
 *     sub_1403CE24C @ 0x1403CE24C (sub_1403CE24C.c)
 */

__int64 __fastcall sub_1405302D4(__int64 a1, int a2, unsigned int a3)
{
  unsigned int **v4; // rdi
  __int64 result; // rax
  unsigned int v7; // r9d
  __int64 v8; // rdx
  unsigned int v9; // ecx

  v4 = (unsigned int **)(a1 + 216);
  LODWORD(result) = sub_1403CE24C(a1, 16 * a3 + 8, (_QWORD *)(a1 + 216));
  v7 = 0;
  if ( (int)result >= 0 )
  {
    **v4 = a3;
    if ( a3 )
    {
      v8 = 0LL;
      do
      {
        v9 = v7 + a2;
        ++v7;
        v8 += 4LL;
        (*v4)[v8 - 2] = v9;
      }
      while ( v7 < a3 );
    }
  }
  return (unsigned int)result;
}
