/*
 * XREFs of sub_14068E4E0 @ 0x14068E4E0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1402AD030 @ 0x1402AD030 (sub_1402AD030.c)
 *     sub_14068E564 @ 0x14068E564 (sub_14068E564.c)
 *     sub_14071B350 @ 0x14071B350 (sub_14071B350.c)
 *     sub_140AB4260 @ 0x140AB4260 (sub_140AB4260.c)
 *     sub_140AB42A0 @ 0x140AB42A0 (sub_140AB42A0.c)
 *     sub_140AB4370 @ 0x140AB4370 (sub_140AB4370.c)
 *     sub_140AB46D0 @ 0x140AB46D0 (sub_140AB46D0.c)
 */

char __fastcall sub_14068E4E0(_BYTE *a1, _QWORD *a2)
{
  char v2; // di
  struct _EX_RUNDOWN_REF *i; // rcx
  __int64 v4; // rdx
  __int64 v5; // rcx
  struct _EX_RUNDOWN_REF *v6; // rsi
  int v7; // ebx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9

  v2 = 0;
  *a2 = 10000000LL * (unsigned int)dword_140C01BD4;
  *a1 = 0;
  if ( !(unsigned __int8)sub_140AB46D0() )
    return 1;
  for ( i = 0LL; ; i = v6 )
  {
    v6 = (struct _EX_RUNDOWN_REF *)sub_14071B350(i);
    if ( !v6 )
      break;
    sub_140AB4370();
    v7 = sub_14068E564(v6);
    sub_140AB4260(v9, v8, v10, v11);
    if ( v7 < 0 )
    {
      sub_1402AD030(v6 + 205);
      v2 = 1;
      break;
    }
  }
  sub_140AB42A0(v5, v4);
  return v2;
}
