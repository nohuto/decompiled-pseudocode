/*
 * XREFs of sub_1403D0DF0 @ 0x1403D0DF0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1403A2FA8 @ 0x1403A2FA8 (sub_1403A2FA8.c)
 *     sub_1403A3038 @ 0x1403A3038 (sub_1403A3038.c)
 */

__int64 __fastcall sub_1403D0DF0(__int64 a1)
{
  __int64 v1; // rdx
  unsigned __int16 *v2; // rdx
  unsigned int v3; // r8d

  v1 = *(unsigned __int8 *)(a1 + 81) + 28LL;
  *(_DWORD *)(a1 + 120) = 1;
  v2 = (unsigned __int16 *)(a1 + 2 * v1);
  if ( *(_DWORD *)(a1 + 124) == 36 )
    sub_1403A2FA8(a1, v2);
  else
    sub_1403A3038(a1, v2);
  return v3;
}
