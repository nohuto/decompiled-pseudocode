/*
 * XREFs of ??1AtlasedRects@@QEAA@XZ @ 0x1800AC5DC
 * Callers:
 *     _CAtlasedImage::Validate_::_1_::dtor$0 @ 0x180067860 (_CAtlasedImage--Validate_--_1_--dtor$0.c)
 * Callees:
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180038C6C (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 */

void __fastcall AtlasedRects::~AtlasedRects(AtlasedRects *this)
{
  DynArrayImpl<0>::~DynArrayImpl<0>((_QWORD *)this + 4);
  DynArrayImpl<0>::~DynArrayImpl<0>(this);
}
