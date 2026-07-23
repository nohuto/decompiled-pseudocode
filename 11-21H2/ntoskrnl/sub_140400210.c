/*
 * XREFs of sub_140400210 @ 0x140400210
 * Callers:
 *     sub_140400318 @ 0x140400318 (sub_140400318.c)
 * Callees:
 *     sub_140400C30 @ 0x140400C30 (sub_140400C30.c)
 *     sub_140400C90 @ 0x140400C90 (sub_140400C90.c)
 *     sub_1404068E0 @ 0x1404068E0 (sub_1404068E0.c)
 *     sub_140407254 @ 0x140407254 (sub_140407254.c)
 *     sub_14040A64C @ 0x14040A64C (sub_14040A64C.c)
 *     sub_14040A720 @ 0x14040A720 (sub_14040A720.c)
 *     sub_14040A750 @ 0x14040A750 (sub_14040A750.c)
 */

__int64 __fastcall sub_140400210(__int64 a1, char a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdi
  __int64 v9; // rbx
  __int64 v10; // r15
  int v11; // eax
  __int64 result; // rax

  v4 = *(_QWORD *)(a1 + 8);
  if ( (unsigned int)sub_14040A64C(v4, *(_QWORD *)(a1 + 16))
    || *(_DWORD *)(v4 + 4) != 3 && !(unsigned int)sub_14040A720(v4, *(_QWORD *)(a1 + 16), a3, a4) )
  {
    return 209715726LL;
  }
  if ( (a2 & 0x30) != 0x30 || (unsigned int)sub_140400C90(*(_QWORD *)(v4 + 656), 1LL) )
    return 0LL;
  v9 = (unsigned int)sub_140407254(v4);
  v10 = sub_1404068E0(a3, v9, v4);
  v11 = sub_140400C30(*(_QWORD *)(v4 + 624));
  result = sub_14040A750(v4, v11, *(_QWORD *)(a1 + 16), 0, v10, v9 + a3, a4 - v9);
  if ( (_DWORD)result )
    return result;
  if ( (unsigned int)sub_14040A64C(v4, v10) )
    return 0LL;
  else
    return 209715726LL;
}
