/*
 * XREFs of sub_140687598 @ 0x140687598
 * Callers:
 *     sub_140683F18 @ 0x140683F18 (sub_140683F18.c)
 *     sub_140684158 @ 0x140684158 (sub_140684158.c)
 * Callees:
 *     sub_1406FFE90 @ 0x1406FFE90 (sub_1406FFE90.c)
 *     sub_1406FFED4 @ 0x1406FFED4 (sub_1406FFED4.c)
 */

__int64 __fastcall sub_140687598(__int64 a1, __int64 a2, _QWORD *a3, _QWORD *a4)
{
  __int64 v6; // rdi
  __int64 result; // rax
  __int64 v9; // [rsp+40h] [rbp+8h]
  __int64 i; // [rsp+50h] [rbp+18h]

  v9 = *(_QWORD *)(a1 + 1296);
  v6 = a2;
  for ( i = *(_QWORD *)(v9 + 1272); ; i = *(_QWORD *)(v9 + 1272) )
  {
    sub_1406FFED4(i, a2);
    if ( v9 == *(_QWORD *)(a1 + 1296) && i == *(_QWORD *)(v9 + 1272) )
      break;
    sub_1406FFE90(i, v6);
    a2 = v6;
    v9 = *(_QWORD *)(a1 + 1296);
  }
  *a3 = v9;
  result = i;
  *a4 = i;
  return result;
}
