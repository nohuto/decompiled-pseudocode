/*
 * XREFs of ??$ToPartner@UICompositionAnimatorPartner@Composition@UI@Windows@@@CompositionPropertyAnimator@Composition@UI@Windows@@SAXPEAV0123@V?$ComPtrRef@V?$ComPtr@UICompositionAnimatorPartner@Composition@UI@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180109428
 * Callers:
 *     ?TryGetPropertyAnimator@Partner@CompositionObject@Composition@UI@Windows@@UEAAJPEBGPEAPEAUICompositionAnimatorPartner@345@@Z @ 0x180109C00 (-TryGetPropertyAnimator@Partner@CompositionObject@Composition@UI@Windows@@UEAAJPEBGPEAPEAUICompo.c)
 * Callees:
 *     ?InternalAddRef@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18001EE7C (-InternalAddRef@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionPropertyAnimator::ToPartner<Windows::UI::Composition::ICompositionAnimatorPartner>(
        Microsoft::WRL2::NestableRuntimeClass *this,
        __int64 *a2)
{
  __int64 v4; // rcx
  __int64 result; // rax

  if ( this )
  {
    v4 = *a2;
    if ( *a2 )
    {
      *a2 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
    }
    *a2 = (__int64)this + 136;
    return Microsoft::WRL2::NestableRuntimeClass::InternalAddRef(this);
  }
  return result;
}
