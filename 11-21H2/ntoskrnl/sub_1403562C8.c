/*
 * XREFs of sub_1403562C8 @ 0x1403562C8
 * Callers:
 *     sub_140354990 @ 0x140354990 (sub_140354990.c)
 *     sub_140354CBC @ 0x140354CBC (sub_140354CBC.c)
 * Callees:
 *     sub_140356454 @ 0x140356454 (sub_140356454.c)
 *     sub_1403B17EC @ 0x1403B17EC (sub_1403B17EC.c)
 *     sub_1405CAE6C @ 0x1405CAE6C (sub_1405CAE6C.c)
 */

__int64 __fastcall sub_1403562C8(__int64 a1, char a2, __int64 a3)
{
  __int64 v3; // rbx
  __int64 v4; // rsi
  int v5; // edi
  __int64 result; // rax

  v3 = *(_QWORD *)(a1 + 56);
  v4 = a3;
  if ( a2 )
  {
    v5 = 0;
    if ( *(int *)(v3 + 132) > 0 && _InterlockedExchangeAdd((volatile signed __int32 *)(v3 + 132), 0xFFFFFFFF) == 1 )
    {
      LOBYTE(a3) = 1;
      sub_1403B17EC(v3, 4LL, a3);
    }
  }
  else
  {
    v5 = 4;
  }
  result = sub_140356454(v3, 0, v5, 6);
  if ( (_BYTE)result )
  {
    if ( !v4 )
      sub_1405CAE6C(0x612uLL, 0LL, 0LL, 0LL);
  }
  return result;
}
