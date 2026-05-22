/*
 * XREFs of ??$ToApi@UICompositionShadow@Composition@UI@Windows@@@CompositionShadow@Composition@UI@Windows@@SAXPEAV0123@V?$ComPtrRef@V?$ComPtr@UICompositionShadow@Composition@UI@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180179F9C
 * Callers:
 *     ?get_Shadow@Api@LayerVisual@Composition@UI@Windows@@UEAAJPEAPEAUICompositionShadow@345@@Z @ 0x18017A080 (-get_Shadow@Api@LayerVisual@Composition@UI@Windows@@UEAAJPEAPEAUICompositionShadow@345@@Z.c)
 *     ?get_Shadow@Api@SpriteVisual@Composition@UI@Windows@@UEAAJPEAPEAUICompositionShadow@345@@Z @ 0x18017BFA0 (-get_Shadow@Api@SpriteVisual@Composition@UI@Windows@@UEAAJPEAPEAUICompositionShadow@345@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$ITypedEventHandler@PEAVHolographicCompositor@Internal@Composition@UI@Windows@@W4HolographicCompositorStatus@2345@@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000FA18 (-InternalRelease@-$ComPtr@U-$ITypedEventHandler@PEAVHolographicCompositor@Internal@Composition@U.c)
 *     ?InternalAddRef@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18001EE7C (-InternalAddRef@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionShadow::ToApi<Windows::UI::Composition::ICompositionShadow>(
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
