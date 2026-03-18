/*
 * XREFs of ?IsProtected@CBitmapRealization@@UEBA_NXZ @ 0x1800E12B4
 * Callers:
 *     ?IsProtected@CBitmapRealization@@$4PPPPPPPM@A@EBA_NXZ @ 0x180121D00 (-IsProtected@CBitmapRealization@@$4PPPPPPPM@A@EBA_NXZ.c)
 *     ?IsProtected@CBitmapRealization@@$4PPPPPPPM@FI@EBA_NXZ @ 0x1801224E0 (-IsProtected@CBitmapRealization@@$4PPPPPPPM@FI@EBA_NXZ.c)
 *     ?IsProtected@CBitmapRealization@@$4PPPPPPPM@HI@EBA_NXZ @ 0x180122500 (-IsProtected@CBitmapRealization@@$4PPPPPPPM@HI@EBA_NXZ.c)
 *     ?IsProtected@CBitmapRealization@@$4PPPPPPPM@II@EBA_NXZ @ 0x180122B60 (-IsProtected@CBitmapRealization@@$4PPPPPPPM@II@EBA_NXZ.c)
 *     ?IsProtected@CBitmapRealization@@$4PPPPPPPM@MA@EBA_NXZ @ 0x180122DE0 (-IsProtected@CBitmapRealization@@$4PPPPPPPM@MA@EBA_NXZ.c)
 *     ?IsProtected@CBitmapRealization@@$4PPPPPPPM@FA@EBA_NXZ @ 0x1801232E0 (-IsProtected@CBitmapRealization@@$4PPPPPPPM@FA@EBA_NXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall CBitmapRealization::IsProtected(CBitmapRealization *this)
{
  return (*((_DWORD *)this - 36) & 2) != 0;
}
