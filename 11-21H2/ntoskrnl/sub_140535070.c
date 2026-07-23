/*
 * XREFs of sub_140535070 @ 0x140535070
 * Callers:
 *     <none>
 * Callees:
 *     sub_1403A2FA8 @ 0x1403A2FA8 (sub_1403A2FA8.c)
 *     sub_1403A3038 @ 0x1403A3038 (sub_1403A3038.c)
 *     sub_1403A30B4 @ 0x1403A30B4 (sub_1403A30B4.c)
 *     sub_1403D75CC @ 0x1403D75CC (sub_1403D75CC.c)
 */

__int64 __fastcall sub_140535070(__int64 a1)
{
  __int64 v2; // rcx
  int *v3; // r8
  int v4; // edx
  int v5; // ecx
  unsigned int v7; // [rsp+30h] [rbp+8h] BYREF

  v7 = 0;
  *(_DWORD *)(a1 + 120) = *(_BYTE *)(a1 + 138) != 0 ? 3 : 1;
  sub_1403A30B4(a1, (int *)&v7);
  sub_1403A2FA8(a1, (unsigned __int16 *)(a1 + 4 * (v7 + 6LL)));
  if ( !*(_BYTE *)(a1 + 142) )
  {
    v4 = 536870908;
    if ( *(_DWORD *)(a1 + 120) != 3 )
      v4 = 536870910;
    v3 = sub_1403D75CC(v2, *(_DWORD *)(a1 + 128) + ((*(_DWORD *)(a1 + 108) >> 3) & (unsigned int)v4));
  }
  v5 = 31;
  if ( *(_DWORD *)(a1 + 120) != 3 )
    v5 = 15;
  *(_DWORD *)(a1 + 108) &= v5;
  sub_1403A3038(a1, (unsigned __int16 *)v3);
  return 1LL;
}
