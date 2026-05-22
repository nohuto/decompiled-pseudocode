/*
 * XREFs of ?Release@CWeakReferenceBase@@QEAAKXZ @ 0x18008C060
 * Callers:
 *     ?InternalRelease@?$ComPtr@V?$CWeakReference@VVisual@Composition@UI@Windows@@@@@WRL@Microsoft@@IEAAKXZ @ 0x18008C038 (-InternalRelease@-$ComPtr@V-$CWeakReference@VVisual@Composition@UI@Windows@@@@@WRL@Microsoft@@IE.c)
 *     ??1CompositionPointerEventRouter@Composition@UI@Windows@@UEAA@XZ @ 0x18008D694 (--1CompositionPointerEventRouter@Composition@UI@Windows@@UEAA@XZ.c)
 *     _lambda_77e0b98c14905edf0ce113f93d19e093_::_lambda_invoker_cdecl_ @ 0x18008E840 (_lambda_77e0b98c14905edf0ce113f93d19e093_--_lambda_invoker_cdecl_.c)
 *     ?Destroy@VisualInteractionSource@Interactions@Composition@UI@Windows@@UEAAXXZ @ 0x18011D840 (-Destroy@VisualInteractionSource@Interactions@Composition@UI@Windows@@UEAAXXZ.c)
 *     ??_GDebugReference@Private@Composition@UI@Windows@@UEAAPEAXI@Z @ 0x18016B060 (--_GDebugReference@Private@Composition@UI@Windows@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18001B130 (--3@YAXPEAX@Z.c)
 *     ?ClearWeakReference@CompositorCommon@Composition@UI@Windows@@QEAAXPEAVCompositionObject@234@@Z @ 0x18008C0BC (-ClearWeakReference@CompositorCommon@Composition@UI@Windows@@QEAAXPEAVCompositionObject@234@@Z.c)
 */

__int64 __fastcall CWeakReferenceBase::Release(CWeakReferenceBase *this)
{
  bool v1; // zf
  unsigned int v3; // esi
  Windows::UI::Composition::CompositorCommon *v5; // rcx
  __int64 v6; // rdi

  v1 = (*((_DWORD *)this + 6))-- == 1;
  v3 = *((_DWORD *)this + 6);
  if ( v1 )
  {
    v5 = *(Windows::UI::Composition::CompositorCommon **)this;
    if ( v5 )
    {
      v6 = *((_QWORD *)this + 1);
      if ( v6 )
      {
        Windows::UI::Composition::CompositorCommon::ClearWeakReference(
          v5,
          *((struct Windows::UI::Composition::CompositionObject **)this + 1));
        *(_DWORD *)(v6 + 124) &= ~2u;
      }
    }
    operator delete(this);
  }
  return v3;
}
