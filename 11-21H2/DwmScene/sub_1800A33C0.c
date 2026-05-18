/*
 * XREFs of sub_1800A33C0 @ 0x1800A33C0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_1800122C0 @ 0x1800122C0 (sub_1800122C0.c)
 *     sub_1800441CC @ 0x1800441CC (sub_1800441CC.c)
 *     sub_1800441E4 @ 0x1800441E4 (sub_1800441E4.c)
 */

char __fastcall sub_1800A33C0(__int64 a1)
{
  char result; // al
  _QWORD *v2; // r8
  _BYTE *v3; // rax
  char v4; // dl
  __int64 *v5; // r8
  __int64 v6; // rax
  __int64 v7; // rax
  _QWORD v8[2]; // [rsp+20h] [rbp-28h] BYREF
  __int128 v9; // [rsp+30h] [rbp-18h] BYREF
  char v10; // [rsp+50h] [rbp+8h] BYREF

  result = sub_1800122C0((_QWORD *)(a1 + 1768));
  if ( result )
  {
    v10 = 1;
    sub_1800441E4((__int64)&v10);
    v3 = (_BYTE *)sub_1800441CC(*v2 + 168LL);
    *v3 = v4;
    v6 = *v5;
    *v5 = 0LL;
    v8[0] = v6;
    v7 = v5[1];
    v5[1] = 0LL;
    v8[1] = v7;
    v9 = 0LL;
    sub_180010910((__int64)v8);
    return sub_180010910((__int64)&v9);
  }
  return result;
}
