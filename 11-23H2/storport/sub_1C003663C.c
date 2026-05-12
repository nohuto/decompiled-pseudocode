/*
 * XREFs of sub_1C003663C @ 0x1C003663C
 * Callers:
 *     sub_1C0039770 @ 0x1C0039770 (sub_1C0039770.c)
 * Callees:
 *     sub_1C003F7E4 @ 0x1C003F7E4 (sub_1C003F7E4.c)
 *     sub_1C003F828 @ 0x1C003F828 (sub_1C003F828.c)
 */

__int64 __fastcall sub_1C003663C(__int64 a1)
{
  char v1; // al
  NTSTATUS v2; // edi
  __int64 v4; // r8

  v1 = *(_BYTE *)(a1 + 104);
  v2 = 0;
  if ( (v1 & 2) == 0 )
  {
    if ( *(_BYTE *)(a1 + 491) )
    {
      v2 = IoWMIRegistrationControl(*(PDEVICE_OBJECT *)(a1 + 8), (v1 & 4 | 2u) >> 1);
      if ( v2 < 0
        || (*(_BYTE *)(a1 + 104) |= 4u,
            v2 = sub_1C003F828(a1 + 1328, *(_QWORD *)(a1 + 8), v4, 176LL, sub_1C0065A40),
            v2 < 0) )
      {
        if ( (*(_BYTE *)(a1 + 104) & 4) != 0 )
        {
          IoWMIRegistrationControl(*(PDEVICE_OBJECT *)(a1 + 8), 2u);
          *(_BYTE *)(a1 + 104) &= ~4u;
        }
        sub_1C003F7E4(a1 + 1328);
      }
    }
  }
  *(_BYTE *)(a1 + 104) |= 2u;
  return (unsigned int)v2;
}
