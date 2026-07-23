/*
 * XREFs of sub_14075EF9C @ 0x14075EF9C
 * Callers:
 *     sub_14075D4B8 @ 0x14075D4B8 (sub_14075D4B8.c)
 * Callees:
 *     sub_1402E0200 @ 0x1402E0200 (sub_1402E0200.c)
 *     sub_1402E0AC4 @ 0x1402E0AC4 (sub_1402E0AC4.c)
 *     sub_14075F09C @ 0x14075F09C (sub_14075F09C.c)
 *     sub_1407838E0 @ 0x1407838E0 (sub_1407838E0.c)
 *     sub_140783CD8 @ 0x140783CD8 (sub_140783CD8.c)
 */

__int64 __fastcall sub_14075EF9C(__int64 a1, _WORD *a2, __int64 a3, _WORD *a4)
{
  unsigned int v5; // edi
  __int64 v8; // r11
  __int64 v9; // rbp
  __int64 v10; // rsi
  __int16 i; // bx
  __int64 v12; // rax
  int v14; // [rsp+20h] [rbp-38h] BYREF
  _QWORD v15[6]; // [rsp+28h] [rbp-30h] BYREF

  v5 = 0;
  v14 = 0;
  v15[0] = 0LL;
  sub_1402E0AC4(a2, 0x7FFFFFFFuLL, v15);
  sub_1402E0200(a4, a3, v8);
  v9 = sub_140783CD8(a1, 0LL);
  if ( v9 )
  {
    v10 = v15[0] - 1LL;
    for ( i = 90; ; a4[v10] = i )
    {
      v12 = sub_14075F09C(v9, a4, &v14);
      if ( !v12 )
        break;
      sub_1407838E0(&off_140C037A0, v12);
      if ( i == 90 )
      {
        ++v10;
        i = 65;
        if ( v10 == a3 - 1 )
        {
          v5 = -1073741670;
          break;
        }
        a4[v10 + 1] = 0;
      }
      else
      {
        ++i;
      }
    }
    sub_1407838E0(&off_140C037C0, v9);
  }
  return v5;
}
