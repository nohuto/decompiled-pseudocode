/*
 * XREFs of sub_140535670 @ 0x140535670
 * Callers:
 *     <none>
 * Callees:
 *     sub_1403A2FA8 @ 0x1403A2FA8 (sub_1403A2FA8.c)
 *     sub_1403D75CC @ 0x1403D75CC (sub_1403D75CC.c)
 */

__int64 __fastcall sub_140535670(__int64 a1)
{
  __int64 v1; // rdi
  int v3; // ecx
  int v4; // eax
  int *v5; // rax

  *(_DWORD *)(a1 + 120) = 0;
  v1 = a1 + 24;
  v3 = *(unsigned __int8 *)(a1 + 24);
  if ( *(_BYTE *)(a1 + 137) )
    v4 = *(_DWORD *)(a1 + 36);
  else
    v4 = *(unsigned __int16 *)(a1 + 36);
  v5 = sub_1403D75CC(a1, v3 + v4);
  sub_1403A2FA8(a1, (unsigned __int16 *)v5);
  *(_QWORD *)(a1 + 88) = v1;
  return 1LL;
}
