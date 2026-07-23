/*
 * XREFs of sub_14091BD30 @ 0x14091BD30
 * Callers:
 *     sub_14069FCD0 @ 0x14069FCD0 (sub_14069FCD0.c)
 * Callees:
 *     sub_14091B7D8 @ 0x14091B7D8 (sub_14091B7D8.c)
 *     sub_14091BB78 @ 0x14091BB78 (sub_14091BB78.c)
 */

__int64 __fastcall sub_14091BD30(unsigned int *a1, unsigned int *a2, __int64 a3, struct _LOOKASIDE_LIST_EX *a4)
{
  __int64 v4; // rbx
  __int64 result; // rax
  __int64 v8; // rbp

  v4 = *a1;
  if ( !(_DWORD)v4 )
    __fastfail(5u);
  LODWORD(v4) = v4 & 0x7FFFFFFF;
  result = sub_14091BB78(a2, v4, a3, a4);
  if ( (int)result >= 0 )
  {
    if ( (_DWORD)v4 == 1 )
    {
      sub_14091B7D8(a2, *((_QWORD *)a1 + 1));
    }
    else if ( (_DWORD)v4 )
    {
      v8 = 0LL;
      do
      {
        sub_14091B7D8(a2, *(_QWORD *)(*((_QWORD *)a1 + 1) + v8));
        v8 += 8LL;
        --v4;
      }
      while ( v4 );
    }
    return 0LL;
  }
  return result;
}
