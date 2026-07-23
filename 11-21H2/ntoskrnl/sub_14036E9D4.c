/*
 * XREFs of sub_14036E9D4 @ 0x14036E9D4
 * Callers:
 *     sub_14036EBE8 @ 0x14036EBE8 (sub_14036EBE8.c)
 * Callees:
 *     sub_14036EA64 @ 0x14036EA64 (sub_14036EA64.c)
 */

__int64 __fastcall sub_14036E9D4(__int64 a1)
{
  __int64 *v2; // rbx
  __int64 v3; // rbp
  __int64 result; // rax
  __int64 v5; // rdi
  __int64 v6; // r14
  __int64 v7; // r15

  v2 = (__int64 *)(a1 + 128);
  v3 = 129LL;
  do
  {
    result = *v2;
    if ( (*v2 & 1) == 0 )
    {
      v5 = *v2;
      if ( *(_BYTE *)(*v2 + 2) )
      {
        v6 = 0LL;
        v7 = *(unsigned __int8 *)(*v2 + 2);
        do
        {
          sub_14036EA64(a1, *(_QWORD *)(v6 + *(_QWORD *)(v5 + 96)));
          v6 += 8LL;
          --v7;
        }
        while ( v7 );
      }
      result = sub_14036EA64(a1, v5);
    }
    ++v2;
    --v3;
  }
  while ( v3 );
  return result;
}
