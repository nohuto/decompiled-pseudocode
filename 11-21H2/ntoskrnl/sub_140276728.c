/*
 * XREFs of sub_140276728 @ 0x140276728
 * Callers:
 *     sub_140242F10 @ 0x140242F10 (sub_140242F10.c)
 *     sub_140275000 @ 0x140275000 (sub_140275000.c)
 *     sub_140275338 @ 0x140275338 (sub_140275338.c)
 *     CcUninitializeCacheMap @ 0x1402761B0 (CcUninitializeCacheMap.c)
 *     sub_1402766A0 @ 0x1402766A0 (sub_1402766A0.c)
 *     CcZeroData @ 0x14029BD20 (CcZeroData.c)
 *     sub_14035D970 @ 0x14035D970 (sub_14035D970.c)
 *     sub_140363C8C @ 0x140363C8C (sub_140363C8C.c)
 *     sub_1403C4AE0 @ 0x1403C4AE0 (sub_1403C4AE0.c)
 *     sub_1403C7DE0 @ 0x1403C7DE0 (sub_1403C7DE0.c)
 *     sub_1403D0750 @ 0x1403D0750 (sub_1403D0750.c)
 *     sub_140539BC4 @ 0x140539BC4 (sub_140539BC4.c)
 *     CcDeferWrite @ 0x140539E20 (CcDeferWrite.c)
 *     sub_14053A100 @ 0x14053A100 (sub_14053A100.c)
 *     sub_14053B3F8 @ 0x14053B3F8 (sub_14053B3F8.c)
 *     sub_14053BFB8 @ 0x14053BFB8 (sub_14053BFB8.c)
 *     sub_14053D730 @ 0x14053D730 (sub_14053D730.c)
 *     sub_14053DAFC @ 0x14053DAFC (sub_14053DAFC.c)
 *     sub_14053E700 @ 0x14053E700 (sub_14053E700.c)
 * Callees:
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 */

char __fastcall sub_140276728(__int64 a1)
{
  signed __int64 v1; // rax
  char v2; // bl
  bool v3; // cc
  signed __int64 v4; // rax

  v1 = _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 1232), 0xFFFFFFFFFFFFFFFFuLL);
  v2 = 0;
  v3 = v1 <= 1;
  v4 = v1 - 1;
  if ( v3 )
  {
    if ( v4 )
      __fastfail(0xEu);
    v2 = 1;
    KeSetEvent((PRKEVENT)(a1 + 1264), 0, 0);
  }
  return v2;
}
