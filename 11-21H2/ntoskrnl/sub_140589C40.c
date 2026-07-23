/*
 * XREFs of sub_140589C40 @ 0x140589C40
 * Callers:
 *     sub_140589B90 @ 0x140589B90 (sub_140589B90.c)
 * Callees:
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     sub_14045B962 @ 0x14045B962 (sub_14045B962.c)
 */

__int64 __fastcall sub_140589C40(__int64 a1, __int64 a2, unsigned __int64 a3, unsigned __int64 a4, unsigned int a5)
{
  unsigned __int64 *v7; // rsi
  unsigned int v9; // r14d
  volatile signed __int32 *v10; // rdi
  __int64 result; // rax
  int v12; // [rsp+50h] [rbp+8h] BYREF

  v7 = (unsigned __int64 *)(a1 + 48 * a2);
  if ( v7 != (unsigned __int64 *)a1 )
  {
    v9 = a5;
    v10 = (volatile signed __int32 *)(v7 + 3);
    do
    {
      v7 -= 6;
      v10 -= 12;
      v12 = 0;
      while ( _interlockedbittestandset64(v10, 0x3FuLL) )
      {
        do
          sub_1402F32E0(&v12, a2, a3, a4);
        while ( *(__int64 *)v10 < 0 );
      }
      sub_14045B962(a1, v7, a3, a4, v9);
      result = 0x7FFFFFFFFFFFFFFFLL;
      _InterlockedAnd64((volatile signed __int64 *)v10, 0x7FFFFFFFFFFFFFFFuLL);
    }
    while ( v7 != (unsigned __int64 *)a1 );
  }
  return result;
}
