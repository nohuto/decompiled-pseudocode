/*
 * XREFs of sub_14094F860 @ 0x14094F860
 * Callers:
 *     <none>
 * Callees:
 *     IoInvalidateDeviceRelations @ 0x1402DCE90 (IoInvalidateDeviceRelations.c)
 *     sub_14066044C @ 0x14066044C (sub_14066044C.c)
 *     sub_140764FE4 @ 0x140764FE4 (sub_140764FE4.c)
 *     sub_140765114 @ 0x140765114 (sub_140765114.c)
 *     sub_140765430 @ 0x140765430 (sub_140765430.c)
 *     sub_14076B030 @ 0x14076B030 (sub_14076B030.c)
 */

__int64 __fastcall sub_14094F860(__int64 a1)
{
  int v2; // ecx

  v2 = *(_DWORD *)(a1 + 300);
  if ( v2 == 778 )
  {
    if ( !(unsigned int)sub_14076B030(0LL, a1 + 40, 0) )
      sub_140765430(a1, 0, 22, 0);
  }
  else if ( ((v2 - 771) & 0xFFFFFFEE) == 0
         && v2 != 787
         && (*(_DWORD *)(a1 + 396) & 0x2000) != 0
         && *(_DWORD *)(a1 + 404) == 22 )
  {
    sub_140764FE4(a1);
    if ( (unsigned int)sub_14076B030(0LL, a1 + 40, 0) )
    {
      sub_14066044C(a1);
      IoInvalidateDeviceRelations(*(PDEVICE_OBJECT *)(*(_QWORD *)(a1 + 16) + 32LL), BusRelations);
    }
    else
    {
      sub_140765114(a1, 22, 0);
    }
  }
  return 0LL;
}
