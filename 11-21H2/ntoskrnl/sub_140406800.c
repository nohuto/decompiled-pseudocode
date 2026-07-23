/*
 * XREFs of sub_140406800 @ 0x140406800
 * Callers:
 *     sub_140405BF0 @ 0x140405BF0 (sub_140405BF0.c)
 *     sub_140406130 @ 0x140406130 (sub_140406130.c)
 *     sub_140406784 @ 0x140406784 (sub_140406784.c)
 * Callees:
 *     sub_14040A580 @ 0x14040A580 (sub_14040A580.c)
 *     sub_14040A5C4 @ 0x14040A5C4 (sub_14040A5C4.c)
 */

__int64 __fastcall sub_140406800(int a1, unsigned int a2, _QWORD *a3, int a4, __int64 a5, __int64 a6)
{
  _QWORD *v6; // rbx
  __int64 result; // rax
  _QWORD *v11; // rdi
  __int64 v12; // rsi

  v6 = a3;
  result = sub_14040A5C4(a1, *a3, a4, 0, a5, a6);
  if ( a2 > 1 )
  {
    v11 = v6 + 1;
    v12 = a2 - 1;
    do
    {
      result = sub_14040A580(a1, a4, *v6++, *v11++, a5, a6);
      --v12;
    }
    while ( v12 );
  }
  return result;
}
