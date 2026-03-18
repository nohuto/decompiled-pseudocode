/*
 * XREFs of ?GetDisplayId@CBitmapRealization@@UEBA?AVDisplayId@@XZ @ 0x180108B2C
 * Callers:
 *     ?GetDisplayId@CBitmapRealization@@$4PPPPPPPM@A@EBA?AVDisplayId@@XZ @ 0x180121890 (-GetDisplayId@CBitmapRealization@@$4PPPPPPPM@A@EBA-AVDisplayId@@XZ.c)
 *     ?GetDisplayId@CBitmapRealization@@$4PPPPPPPM@FI@EBA?AVDisplayId@@XZ @ 0x180122030 (-GetDisplayId@CBitmapRealization@@$4PPPPPPPM@FI@EBA-AVDisplayId@@XZ.c)
 *     ?GetDisplayId@CBitmapRealization@@$4PPPPPPPM@HI@EBA?AVDisplayId@@XZ @ 0x180122050 (-GetDisplayId@CBitmapRealization@@$4PPPPPPPM@HI@EBA-AVDisplayId@@XZ.c)
 *     ?GetDisplayId@CBitmapRealization@@$4PPPPPPPM@II@EBA?AVDisplayId@@XZ @ 0x180122770 (-GetDisplayId@CBitmapRealization@@$4PPPPPPPM@II@EBA-AVDisplayId@@XZ.c)
 *     ?GetDisplayId@CBitmapRealization@@$4PPPPPPPM@MA@EBA?AVDisplayId@@XZ @ 0x1801229F0 (-GetDisplayId@CBitmapRealization@@$4PPPPPPPM@MA@EBA-AVDisplayId@@XZ.c)
 *     ?GetDisplayId@CBitmapRealization@@$4PPPPPPPM@FA@EBA?AVDisplayId@@XZ @ 0x180122CF0 (-GetDisplayId@CBitmapRealization@@$4PPPPPPPM@FA@EBA-AVDisplayId@@XZ.c)
 * Callees:
 *     <none>
 */

_DWORD *__fastcall CBitmapRealization::GetDisplayId(__int64 a1, _DWORD *a2)
{
  *a2 = *(_DWORD *)(a1 - 96);
  return a2;
}
