/*
 * XREFs of sub_140535030 @ 0x140535030
 * Callers:
 *     <none>
 * Callees:
 *     sub_1403A2FA8 @ 0x1403A2FA8 (sub_1403A2FA8.c)
 *     sub_1403A3038 @ 0x1403A3038 (sub_1403A3038.c)
 */

__int64 __fastcall sub_140535030(__int64 a1)
{
  unsigned __int16 *v1; // rdx

  *(_DWORD *)(a1 + 120) = *(_BYTE *)(a1 + 138) != 0 ? 3 : 1;
  v1 = (unsigned __int16 *)(a1 + 16);
  if ( *(_DWORD *)(a1 + 124) == 36 )
    sub_1403A2FA8(a1, v1);
  else
    sub_1403A3038(a1, v1);
  return 1LL;
}
