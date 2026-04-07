/*
 * XREFs of ??1CButton@@MEAA@XZ @ 0x18001FA0C
 * Callers:
 *     ??_GCButton@@MEAAPEAXI@Z @ 0x18001DD50 (--_GCButton@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?RemoveAtlasImage@CAtlasedRectsVisual@@QEAAXPEAVCAtlasedImage@@@Z @ 0x18000E4C8 (-RemoveAtlasImage@CAtlasedRectsVisual@@QEAAXPEAVCAtlasedImage@@@Z.c)
 *     ?DeactivateTimeline@CButton@@AEAAXPEAPEAV?$CTimeline@M@@@Z @ 0x18001DDAC (-DeactivateTimeline@CButton@@AEAAXPEAPEAV-$CTimeline@M@@@Z.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x18001FB8C (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?ReleaseContents@CBitmapSourceArray@@QEAAX_N@Z @ 0x18001FBD0 (-ReleaseContents@CBitmapSourceArray@@QEAAX_N@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180028A00 (-Release@CBaseObject@@QEAAKXZ.c)
 */

void __fastcall CButton::~CButton(CButton *this)
{
  CAtlasedRectsVisual **v2; // rcx
  CBaseObject *v3; // rcx

  *(_QWORD *)this = &CButton::`vftable';
  CButton::DeactivateTimeline(this, (__int64 *)this + 49);
  v2 = (CAtlasedRectsVisual **)*((_QWORD *)this + 37);
  if ( v2 )
  {
    if ( !v2[10]
      || (CAtlasedRectsVisual::RemoveAtlasImage(v2[10], *((struct CAtlasedImage **)this + 37)),
          (v2 = (CAtlasedRectsVisual **)*((_QWORD *)this + 37)) != 0LL) )
    {
      CBaseObject::Release((CBaseObject *)v2);
      *((_QWORD *)this + 37) = 0LL;
    }
  }
  v3 = (CBaseObject *)*((_QWORD *)this + 38);
  if ( v3 )
  {
    CBaseObject::Release(v3);
    *((_QWORD *)this + 38) = 0LL;
  }
  CBitmapSourceArray::ReleaseContents((CButton *)((char *)this + 312), 1);
  CBitmapSourceArray::ReleaseContents((CButton *)((char *)this + 344), 1);
  DynArrayImpl<0>::~DynArrayImpl<0>((char *)this + 344);
  DynArrayImpl<0>::~DynArrayImpl<0>((char *)this + 312);
  CAtlasedRectsVisual::~CAtlasedRectsVisual(this);
}
