/*
 * XREFs of ??$ToApi@UICompositionProjectedShadowCaster@Composition@UI@Windows@@@CompositionProjectedShadowCaster@Composition@UI@Windows@@SAXPEAV0123@V?$ComPtrRef@V?$ComPtr@UICompositionProjectedShadowCaster@Composition@UI@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x18018B268
 * Callers:
 *     ?GetMany@Api@CompositionProjectedShadowCasterIterator@Composition@UI@Windows@@UEAAJIPEAPEAUICompositionProjectedShadowCaster@345@PEAI@Z @ 0x18018B2B0 (-GetMany@Api@CompositionProjectedShadowCasterIterator@Composition@UI@Windows@@UEAAJIPEAPEAUIComp.c)
 *     ?get_Current@Api@CompositionProjectedShadowCasterIterator@Composition@UI@Windows@@UEAAJPEAPEAUICompositionProjectedShadowCaster@345@@Z @ 0x18018B4D0 (-get_Current@Api@CompositionProjectedShadowCasterIterator@Composition@UI@Windows@@UEAAJPEAPEAUIC.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$ITypedEventHandler@PEAVHolographicCompositor@Internal@Composition@UI@Windows@@W4HolographicCompositorStatus@2345@@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000FA18 (-InternalRelease@-$ComPtr@U-$ITypedEventHandler@PEAVHolographicCompositor@Internal@Composition@U.c)
 *     ?InternalAddRef@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18001EE7C (-InternalAddRef@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionProjectedShadowCaster::ToApi<Windows::UI::Composition::ICompositionProjectedShadowCaster>(
        Microsoft::WRL2::NestableRuntimeClass *this,
        __int64 *a2)
{
  __int64 result; // rax

  if ( this )
  {
    Microsoft::WRL::ComPtr<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::Internal::HolographicCompositor *,enum Windows::UI::Composition::Internal::HolographicCompositorStatus>>::InternalRelease(a2);
    *a2 = (__int64)this + 136;
    return Microsoft::WRL2::NestableRuntimeClass::InternalAddRef(this);
  }
  return result;
}
