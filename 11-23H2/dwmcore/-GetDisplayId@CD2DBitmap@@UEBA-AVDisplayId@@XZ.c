/*
 * XREFs of ?GetDisplayId@CD2DBitmap@@UEBA?AVDisplayId@@XZ @ 0x1801084D0
 * Callers:
 *     ?GetDisplayId@CD2DBitmap@@$4PPPPPPPM@OA@EBA?AVDisplayId@@XZ @ 0x18011FE70 (-GetDisplayId@CD2DBitmap@@$4PPPPPPPM@OA@EBA-AVDisplayId@@XZ.c)
 *     ?GetDisplayId@CD2DBitmap@@$4PPPPPPPM@BAI@EBA?AVDisplayId@@XZ @ 0x1801200F0 (-GetDisplayId@CD2DBitmap@@$4PPPPPPPM@BAI@EBA-AVDisplayId@@XZ.c)
 * Callees:
 *     <none>
 */

_DWORD *__fastcall CD2DBitmap::GetDisplayId(__int64 a1, _DWORD *a2)
{
  *a2 = *(_DWORD *)(a1 + 140);
  return a2;
}
