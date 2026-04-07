/*
 * XREFs of ??1AtlasedRects@@QEAA@XZ @ 0x1800A8104
 * Callers:
 *     ?Validate@CAtlasedImage@@QEAAJXZ @ 0x18002AD90 (-Validate@CAtlasedImage@@QEAAJXZ.c)
 *     _CAtlasedImage::Validate_::_1_::dtor$0 @ 0x180065100 (_CAtlasedImage--Validate_--_1_--dtor$0.c)
 * Callees:
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x18001FB8C (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 */

void __fastcall AtlasedRects::~AtlasedRects(AtlasedRects *this)
{
  DynArrayImpl<0>::~DynArrayImpl<0>((_QWORD *)this + 8);
  DynArrayImpl<0>::~DynArrayImpl<0>((_QWORD *)this + 4);
  DynArrayImpl<0>::~DynArrayImpl<0>(this);
}
