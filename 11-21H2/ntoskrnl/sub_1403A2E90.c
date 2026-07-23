/*
 * XREFs of sub_1403A2E90 @ 0x1403A2E90
 * Callers:
 *     <none>
 * Callees:
 *     sub_1403A2FA8 @ 0x1403A2FA8 (sub_1403A2FA8.c)
 *     sub_1403A3038 @ 0x1403A3038 (sub_1403A3038.c)
 */

__int64 __fastcall sub_1403A2E90(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r8
  __int64 v5; // rdx

  v4 = *(_DWORD *)(a1 + 112) & 7;
  *(_DWORD *)(a1 + 120) = *(_BYTE *)(a1 + 138) != 0 ? 3 : 1;
  v5 = a1 + 4 * ((unsigned int)v4 + 6LL);
  if ( *(_DWORD *)(a1 + 124) == 36 )
    sub_1403A2FA8(a1, v5, v4, a4);
  else
    sub_1403A3038(a1, v5);
  return 1LL;
}
