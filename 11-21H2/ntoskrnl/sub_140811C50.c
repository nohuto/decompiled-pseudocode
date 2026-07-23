/*
 * XREFs of sub_140811C50 @ 0x140811C50
 * Callers:
 *     sub_140767040 @ 0x140767040 (sub_140767040.c)
 *     sub_140811C50 @ 0x140811C50 (sub_140811C50.c)
 *     sub_140953700 @ 0x140953700 (sub_140953700.c)
 * Callees:
 *     sub_140561048 @ 0x140561048 (sub_140561048.c)
 *     sub_14076E854 @ 0x14076E854 (sub_14076E854.c)
 *     sub_140811C50 @ 0x140811C50 (sub_140811C50.c)
 *     sub_14095341C @ 0x14095341C (sub_14095341C.c)
 */

int __fastcall sub_140811C50(__int64 a1, char a2)
{
  _QWORD *v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  _QWORD *v8; // rdi
  _QWORD **v9; // rdi
  _QWORD *v10; // rbx
  _QWORD *v11; // rsi

  v4 = sub_14076E854(a1);
  v8 = v4;
  if ( v4 )
  {
    if ( (byte_140C0DD4C & 2) != 0 )
      LODWORD(v4) = sub_140561048(v6, (const EVENT_DESCRIPTOR *)qword_14003B440, v7, *(const wchar_t **)(a1 + 8));
    v9 = (_QWORD **)(v8 + 2);
    v10 = *v9;
    while ( v10 != v9 )
    {
      v11 = v10 - 12;
      v10 = (_QWORD *)*v10;
      LODWORD(v4) = *((_DWORD *)v11 + 1);
      if ( ((unsigned __int8)v4 & 1) == 0 )
      {
        if ( !a2 || (v4 = v11 + 16, (_QWORD *)*v4 == v4) )
        {
          LOBYTE(v5) = a2;
          sub_140811C50(v11 + 9, v5);
          LODWORD(v4) = sub_14095341C(v11);
        }
      }
    }
  }
  return (int)v4;
}
