/*
 * XREFs of sub_1405355F0 @ 0x1405355F0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1403A2FA8 @ 0x1403A2FA8 (sub_1403A2FA8.c)
 *     sub_1403A3038 @ 0x1403A3038 (sub_1403A3038.c)
 *     sub_1403A30B4 @ 0x1403A30B4 (sub_1403A30B4.c)
 *     sub_1403A340C @ 0x1403A340C (sub_1403A340C.c)
 */

__int64 __fastcall sub_1405355F0(__int64 a1)
{
  unsigned __int16 *v2; // rdi
  char v3; // al
  __int64 v4; // rcx
  __int64 v5; // rcx
  unsigned int v7; // [rsp+30h] [rbp+8h] BYREF

  v7 = 0;
  *(_DWORD *)(a1 + 120) = *(_BYTE *)(a1 + 138) != 0 ? 3 : 1;
  v2 = (unsigned __int16 *)sub_1403A30B4(a1, (int *)&v7);
  if ( (*(_DWORD *)(a1 + 112) & 1) != 0 )
    v3 = *(_BYTE *)(a1 + 28);
  else
    v3 = sub_1403A340C(a1);
  v4 = v7 + 6LL;
  *(_BYTE *)(a1 + 144) = v3 & 0x1F;
  sub_1403A2FA8(a1, (unsigned __int16 *)(a1 + 4 * v4));
  sub_1403A3038(v5, v2);
  return 1LL;
}
