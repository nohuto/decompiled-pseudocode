/*
 * XREFs of sub_1403D2130 @ 0x1403D2130
 * Callers:
 *     <none>
 * Callees:
 *     sub_1403A2FA8 @ 0x1403A2FA8 (sub_1403A2FA8.c)
 *     sub_1403A3038 @ 0x1403A3038 (sub_1403A3038.c)
 */

__int64 __fastcall sub_1403D2130(__int64 a1)
{
  unsigned int v1; // r8d
  __int64 v2; // rcx

  v1 = *(_DWORD *)(a1 + 112) & 7;
  *(_DWORD *)(a1 + 120) = *(_BYTE *)(a1 + 138) != 0 ? 3 : 1;
  sub_1403A2FA8(a1, (unsigned __int16 *)(a1 + 4 * (v1 + 6LL)));
  sub_1403A3038(v2, (unsigned __int16 *)(v2 + 24));
  return 1LL;
}
