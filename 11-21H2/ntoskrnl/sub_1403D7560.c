/*
 * XREFs of sub_1403D7560 @ 0x1403D7560
 * Callers:
 *     <none>
 * Callees:
 *     sub_1403A2FA8 @ 0x1403A2FA8 (sub_1403A2FA8.c)
 *     sub_1403A346C @ 0x1403A346C (sub_1403A346C.c)
 *     sub_1403A34E0 @ 0x1403A34E0 (sub_1403A34E0.c)
 *     sub_1403D20CC @ 0x1403D20CC (sub_1403D20CC.c)
 *     sub_1403D75CC @ 0x1403D75CC (sub_1403D75CC.c)
 */

__int64 __fastcall sub_1403D7560(__int64 a1)
{
  unsigned int v2; // eax
  unsigned __int16 *v3; // rax
  __int64 v4; // rdx
  unsigned __int16 *v5; // r8

  sub_1403A346C(a1);
  if ( *(_BYTE *)(a1 + 137) )
    v2 = sub_1403D20CC(a1);
  else
    v2 = (unsigned __int16)sub_1403A34E0(a1);
  v3 = (unsigned __int16 *)sub_1403D75CC(a1, v2);
  v4 = a1 + 24;
  v5 = v3;
  if ( (*(_DWORD *)(a1 + 112) & 2) != 0 )
  {
    v3 = (unsigned __int16 *)(a1 + 24);
    v4 = (__int64)v5;
  }
  *(_QWORD *)(a1 + 88) = v4;
  sub_1403A2FA8(a1, v3);
  return 1LL;
}
