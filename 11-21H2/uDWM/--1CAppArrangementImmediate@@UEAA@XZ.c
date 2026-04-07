/*
 * XREFs of ??1CAppArrangementImmediate@@UEAA@XZ @ 0x1800D4870
 * Callers:
 *     ??_ECAppArrangementImmediate@@UEAAPEAXI@Z @ 0x1800D4B80 (--_ECAppArrangementImmediate@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000FF20 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x18001FB8C (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180028A00 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ??$_Destroy_range@V?$allocator@UUnifiedTargetRect@CStoryboard@@@std@@@std@@YAXPEAUUnifiedTargetRect@CStoryboard@@QEAU12@AEAV?$allocator@UUnifiedTargetRect@CStoryboard@@@0@@Z @ 0x1800D4070 (--$_Destroy_range@V-$allocator@UUnifiedTargetRect@CStoryboard@@@std@@@std@@YAXPEAUUnifiedTargetR.c)
 */

void __fastcall CAppArrangementImmediate::~CAppArrangementImmediate(CAppArrangementImmediate *this)
{
  CBaseObject *v2; // rcx
  _QWORD *v3; // rcx

  *(_QWORD *)this = &CAppArrangementImmediate::`vftable'{for `CBaseObject'};
  *((_QWORD *)this + 2) = &CAppLaunch::`vftable'{for `IAnimationListener'};
  v2 = (CBaseObject *)*((_QWORD *)this + 23);
  if ( v2 )
    CBaseObject::Release(v2);
  DynArrayImpl<0>::~DynArrayImpl<0>((_QWORD *)this + 19);
  v3 = (_QWORD *)*((_QWORD *)this + 16);
  if ( v3 )
  {
    std::_Destroy_range<std::allocator<CStoryboard::UnifiedTargetRect>>(v3, *((_QWORD **)this + 17));
    std::_Deallocate<16,0>(
      *((void **)this + 16),
      16 * ((__int64)(*((_QWORD *)this + 18) - *((_QWORD *)this + 16)) >> 4));
    *((_QWORD *)this + 16) = 0LL;
    *((_QWORD *)this + 17) = 0LL;
    *((_QWORD *)this + 18) = 0LL;
  }
  CStoryboard::~CStoryboard(this);
}
