/*
 * XREFs of sub_1800A3440 @ 0x1800A3440
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_1800122C0 @ 0x1800122C0 (sub_1800122C0.c)
 *     sub_1800441CC @ 0x1800441CC (sub_1800441CC.c)
 *     sub_1800441E4 @ 0x1800441E4 (sub_1800441E4.c)
 */

char __fastcall sub_1800A3440(__int64 a1)
{
  char result; // al
  _QWORD *v3; // r8
  _BYTE *v4; // rax
  char v5; // dl
  __int64 *v6; // r8
  __int64 v7; // rax
  __int64 v8; // rax
  _QWORD v9[2]; // [rsp+20h] [rbp-28h] BYREF
  __int128 v10; // [rsp+30h] [rbp-18h] BYREF
  char v11; // [rsp+50h] [rbp+8h] BYREF

  result = sub_1800122C0((_QWORD *)(a1 + 1784));
  if ( result )
  {
    v11 = 1;
    sub_1800441E4((__int64)&v11);
    v4 = (_BYTE *)sub_1800441CC(*v3 + 168LL);
    *v4 = v5;
    v7 = *v6;
    *v6 = 0LL;
    v9[0] = v7;
    v8 = v6[1];
    v6[1] = 0LL;
    v9[1] = v8;
    v10 = 0LL;
    sub_180010910((__int64)v9);
    result = sub_180010910((__int64)&v10);
  }
  *(_BYTE *)(a1 + 1898) = 0;
  return result;
}
