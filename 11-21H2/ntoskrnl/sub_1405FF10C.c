/*
 * XREFs of sub_1405FF10C @ 0x1405FF10C
 * Callers:
 *     sub_140A8C5D4 @ 0x140A8C5D4 (sub_140A8C5D4.c)
 * Callees:
 *     sub_1405FF02C @ 0x1405FF02C (sub_1405FF02C.c)
 */

void __fastcall sub_1405FF10C(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rbx
  int v4; // esi
  _QWORD *v5; // rax
  __int64 v6; // r11
  __int64 v7; // r11
  _QWORD *v8; // r11

  v2 = *(_QWORD **)(a2 + 8);
  if ( !*v2 )
  {
    if ( (v4 = *(char *)(a2 + 67), v4 >= *(char *)(a2 + 66) - 1) && (v5 = sub_1405FF02C(a1, *(_QWORD *)(a2 + 8))) != 0LL
      || (v6 = *(_QWORD *)(a1 + 224)) != 0
      && (v7 = *(_QWORD *)(v6 + 16)) != 0
      && (v5 = sub_1405FF02C(a1, v7)) != 0LL
      && (*((char *)v5 + 28) == v4 + 1 || v8 != v2) )
    {
      *(_OWORD *)v5 = 0LL;
      *((_OWORD *)v5 + 1) = 0LL;
    }
  }
}
