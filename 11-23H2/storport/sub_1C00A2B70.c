/*
 * XREFs of sub_1C00A2B70 @ 0x1C00A2B70
 * Callers:
 *     sub_1C00A2788 @ 0x1C00A2788 (sub_1C00A2788.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1C00A2B70(__int64 a1)
{
  __int64 v1; // rdi
  char v3; // al

  v1 = *(_QWORD *)(a1 + 24);
  v3 = *(_BYTE *)(v1 + 104);
  if ( (v3 & 2) == 0 && *(_BYTE *)(v1 + 491) == 1 )
  {
    IoWMIRegistrationControl(*(PDEVICE_OBJECT *)(v1 + 8), (v3 & 4 | 2u) >> 1);
    *(_BYTE *)(v1 + 104) |= 6u;
  }
  if ( (*(_BYTE *)(a1 + 448) & 0x10) == 0 && *(_BYTE *)(v1 + 491) == 1 )
  {
    IoWMIRegistrationControl(*(PDEVICE_OBJECT *)(a1 + 8), 1u);
    *(_BYTE *)(a1 + 448) |= 0x10u;
  }
  return 0LL;
}
