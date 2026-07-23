/*
 * XREFs of sub_140651D0C @ 0x140651D0C
 * Callers:
 *     sub_140651254 @ 0x140651254 (sub_140651254.c)
 *     sub_14065193C @ 0x14065193C (sub_14065193C.c)
 * Callees:
 *     <none>
 */

bool __fastcall sub_140651D0C(__int64 a1, int a2, unsigned __int64 a3)
{
  int v3; // r11d
  char v4; // al
  char v5; // r9
  unsigned __int64 v6; // r10

  v3 = *(_DWORD *)(a1 + 8);
  v4 = *(_BYTE *)(a1 + 4);
  v5 = 1;
  v6 = (unsigned int)(v3 + a2);
  if ( v4 && v4 != -18 )
  {
    if ( (v5 = 0, v4 != 5) && v4 != 15 || v3 )
    {
      if ( v6 < a3 )
        return *(unsigned int *)(a1 + 12) <= ((3 * a3) >> 1) - v6;
    }
  }
  return v5;
}
