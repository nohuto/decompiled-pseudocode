/*
 * XREFs of sub_1407750C0 @ 0x1407750C0
 * Callers:
 *     sub_140777C08 @ 0x140777C08 (sub_140777C08.c)
 *     sub_1409428B8 @ 0x1409428B8 (sub_1409428B8.c)
 * Callees:
 *     sub_140775110 @ 0x140775110 (sub_140775110.c)
 *     sub_140942730 @ 0x140942730 (sub_140942730.c)
 *     sub_140942B10 @ 0x140942B10 (sub_140942B10.c)
 */

char __fastcall sub_1407750C0(__int64 a1, unsigned __int8 a2)
{
  __int64 v2; // rcx
  _QWORD **v4; // rdi
  __int64 v5; // r11
  _QWORD *v6; // rbx
  __int64 v8; // rcx
  int v9; // [rsp+30h] [rbp+8h] BYREF
  __int64 v10; // [rsp+40h] [rbp+18h] BYREF

  v2 = *(_QWORD *)(a1 + 32);
  v9 = 0;
  v10 = 0LL;
  v4 = (_QWORD **)sub_140775110(v2);
  v6 = *v4;
  if ( *v4 != v4 )
  {
    while ( 1 )
    {
      sub_140942730(v6, &v10, &v9);
      v6 = (_QWORD *)*v6;
      v8 = v10 ? *(_QWORD *)(*(_QWORD *)(v10 + 312) + 40LL) : v5;
      if ( !v10 || !v8 || (a2 & (unsigned __int8)v9 & 3) != 0 && !(unsigned __int8)sub_140942B10(v8) )
        break;
      if ( v6 == v4 )
        return v5;
    }
    LOBYTE(v5) = 1;
  }
  return v5;
}
