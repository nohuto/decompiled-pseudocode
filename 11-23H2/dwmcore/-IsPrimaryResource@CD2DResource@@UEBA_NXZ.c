/*
 * XREFs of ?IsPrimaryResource@CD2DResource@@UEBA_NXZ @ 0x180108198
 * Callers:
 *     ?IsPrimaryResource@CD2DResource@@$4PPPPPPPM@A@EBA_NXZ @ 0x18011EAD0 (-IsPrimaryResource@CD2DResource@@$4PPPPPPPM@A@EBA_NXZ.c)
 *     ?IsPrimaryResource@CD2DResource@@$4PPPPPPPM@BA@EBA_NXZ @ 0x18011FA90 (-IsPrimaryResource@CD2DResource@@$4PPPPPPPM@BA@EBA_NXZ.c)
 *     ?IsPrimaryResource@CD2DResource@@$4PPPPPPPM@7EBA_NXZ @ 0x18011FB90 (-IsPrimaryResource@CD2DResource@@$4PPPPPPPM@7EBA_NXZ.c)
 *     ?IsPrimaryResource@CD2DResource@@$4PPPPPPPM@KI@EBA_NXZ @ 0x18011FF30 (-IsPrimaryResource@CD2DResource@@$4PPPPPPPM@KI@EBA_NXZ.c)
 *     ?IsPrimaryResource@CD2DResource@@$4PPPPPPPM@NA@EBA_NXZ @ 0x180120210 (-IsPrimaryResource@CD2DResource@@$4PPPPPPPM@NA@EBA_NXZ.c)
 *     ?IsPrimaryResource@CD2DResource@@$4PPPPPPPM@BAA@EBA_NXZ @ 0x180123490 (-IsPrimaryResource@CD2DResource@@$4PPPPPPPM@BAA@EBA_NXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall CD2DResource::IsPrimaryResource(CD2DResource *this)
{
  return *((_BYTE *)this - 71);
}
