/*
 * XREFs of sub_140293004 @ 0x140293004
 * Callers:
 *     sub_140292BA4 @ 0x140292BA4 (sub_140292BA4.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140293004(unsigned __int16 *a1, unsigned __int16 a2, int a3)
{
  __int64 result; // rax
  unsigned __int16 v4; // r10
  __int64 v5; // r9
  unsigned __int16 v6; // r8
  __int64 v7; // r11
  __int64 *v8; // r9
  __int64 *v9; // rdx
  __int64 v10; // rax

  result = a1[1];
  v4 = a2;
  v5 = a3;
  if ( a2 > (unsigned __int16)result )
    v4 = a1[1];
  *a1 = v4;
  v6 = 0;
  if ( v4 )
  {
    v7 = v4;
    v8 = &qword_140D08090[v5];
    v6 = v4;
    v9 = (__int64 *)(a1 + 4);
    do
    {
      v10 = *v8;
      v8 += 2;
      *v9++ = v10;
      --v7;
    }
    while ( v7 );
    result = a1[1];
  }
  if ( v6 < (unsigned __int16)result )
  {
    do
    {
      result = v6++;
      *(_QWORD *)&a1[4 * result + 4] = 0LL;
    }
    while ( v6 < a1[1] );
  }
  return result;
}
