/*
 * XREFs of ??1CHwndTarget@DirectComposition@@IEAA@XZ @ 0x18006A3C8
 * Callers:
 *     ?Release@CHwndTarget@DirectComposition@@UEAAKXZ @ 0x18006A380 (-Release@CHwndTarget@DirectComposition@@UEAAKXZ.c)
 * Callees:
 *     ?SetReferenceProperty@CResourceProxy@DirectComposition@@QEAAJIPEAUIUnknown@@@Z @ 0x180023E78 (-SetReferenceProperty@CResourceProxy@DirectComposition@@QEAAJIPEAUIUnknown@@@Z.c)
 *     ?Release@CSharedManipulationTransformProxy@DirectComposition@@UEAAKXZ @ 0x18006A840 (-Release@CSharedManipulationTransformProxy@DirectComposition@@UEAAKXZ.c)
 */

void __fastcall DirectComposition::CHwndTarget::~CHwndTarget(DirectComposition::CHwndTarget *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx

  *(_QWORD *)this = &DirectComposition::CHwndTarget::`vftable';
  v2 = *((_QWORD *)this + 4);
  if ( v2 )
  {
    DirectComposition::CResourceProxy::SetReferenceProperty((DirectComposition::CResourceProxy *)(v2 + 8), 52, 0LL);
    DirectComposition::CSharedManipulationTransformProxy::Release(*((DirectComposition::CSharedManipulationTransformProxy **)this
                                                                  + 4));
  }
  v3 = *((_QWORD *)this + 2);
  if ( v3 )
    DestroyDCompositionHwndTarget(v3, *((unsigned int *)this + 6));
}
