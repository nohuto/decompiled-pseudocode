/*
 * XREFs of sub_1403A2770 @ 0x1403A2770
 * Callers:
 *     <none>
 * Callees:
 *     sub_1403A2FA8 @ 0x1403A2FA8 (sub_1403A2FA8.c)
 *     sub_1403A3038 @ 0x1403A3038 (sub_1403A3038.c)
 *     sub_1403A3060 @ 0x1403A3060 (sub_1403A3060.c)
 *     sub_1403A30B4 @ 0x1403A30B4 (sub_1403A30B4.c)
 *     sub_1403A346C @ 0x1403A346C (sub_1403A346C.c)
 */

__int64 __fastcall sub_1403A2770(__int64 a1)
{
  __int64 v2; // rdi
  __int64 v3; // r8
  __int64 v4; // r9
  char v5; // al
  int v6; // r8d
  __int64 v8; // rdx
  int v9; // [rsp+30h] [rbp+8h] BYREF

  v9 = 0;
  sub_1403A346C();
  v2 = sub_1403A30B4(a1, &v9);
  v5 = v9;
  *(_DWORD *)(a1 + 124) += v9;
  if ( *(_DWORD *)(a1 + 124) == 22 )
  {
    sub_1403A3060(a1, 0LL);
    sub_1403A3038(a1, v2);
    *(_DWORD *)(a1 + 108) = v6;
  }
  else if ( (v5 & 4) != 0 )
  {
    v8 = a1 + 24;
    if ( (v5 & 2) != 0 )
      *(_QWORD *)(a1 + 88) = v8;
    else
      sub_1403A3038(a1, v8);
    sub_1403A2FA8(a1, v2, v3, v4);
  }
  else
  {
    sub_1403A3038(a1, v2);
  }
  return 1LL;
}
