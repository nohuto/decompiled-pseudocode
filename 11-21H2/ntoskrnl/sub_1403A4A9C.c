/*
 * XREFs of sub_1403A4A9C @ 0x1403A4A9C
 * Callers:
 *     sub_1403A4A60 @ 0x1403A4A60 (sub_1403A4A60.c)
 *     sub_1403D94C0 @ 0x1403D94C0 (sub_1403D94C0.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall sub_1403A4A9C(unsigned int a1, unsigned int a2, _BYTE *a3)
{
  __int64 v3; // rax
  bool v5; // zf
  char v6; // r10
  char v7; // r10
  unsigned __int64 v8; // r8
  unsigned __int64 v9; // rdi
  char v10; // r11
  unsigned __int64 v11; // rdi
  unsigned __int64 v12; // r8

  v3 = a1;
  v5 = !_BitScanReverse(&a1, a1);
  if ( v5 )
    v6 = 32;
  else
    v6 = 31 - a1;
  v7 = v6 + 32;
  v8 = (v3 << v7) / (unsigned __int64)a2;
  v9 = (v3 << v7) % (unsigned __int64)a2;
  v5 = !_BitScanReverse64((unsigned __int64 *)&v3, v8);
  if ( v5 )
    v10 = 64;
  else
    v10 = 63 - v3;
  v11 = v9 << v10;
  v12 = v11 / a2 + (v8 << v10);
  if ( 2 * (v11 % a2) > a2 && v12 + 1 >= v12 )
    ++v12;
  *a3 = 64 - v7 - v10;
  return v12;
}
