/*
 * XREFs of sub_18001EE0C @ 0x18001EE0C
 * Callers:
 *     sub_18003F0C8 @ 0x18003F0C8 (sub_18003F0C8.c)
 * Callees:
 *     sub_18001F810 @ 0x18001F810 (sub_18001F810.c)
 */

char __fastcall sub_18001EE0C(__int64 a1, unsigned __int64 a2, __int64 a3, unsigned __int64 a4)
{
  unsigned __int64 v5; // r8
  int v6; // ecx
  unsigned __int64 v7; // r10
  unsigned __int64 v8; // r11

  v5 = a4;
  if ( a4 >= a2 )
    v5 = a2;
  v6 = sub_18001F810(a1, a3, v5);
  if ( v6 )
    return v6;
  if ( v8 >= v7 )
    return v8 > v7;
  return -1;
}
