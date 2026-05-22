/*
 * XREFs of ??$ToApi@UICompositionProjectedShadowReceiver@Composition@UI@Windows@@@CompositionProjectedShadowReceiver@Composition@UI@Windows@@SAXPEAV0123@V?$ComPtrRef@V?$ComPtr@UICompositionProjectedShadowReceiver@Composition@UI@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x1801A349C
 * Callers:
 *     ?GetMany@Api@CompositionProjectedShadowReceiverIterator@Composition@UI@Windows@@UEAAJIPEAPEAUICompositionProjectedShadowReceiver@345@PEAI@Z @ 0x1801A34E0 (-GetMany@Api@CompositionProjectedShadowReceiverIterator@Composition@UI@Windows@@UEAAJIPEAPEAUICo.c)
 *     ?get_Current@Api@CompositionProjectedShadowReceiverIterator@Composition@UI@Windows@@UEAAJPEAPEAUICompositionProjectedShadowReceiver@345@@Z @ 0x1801A3700 (-get_Current@Api@CompositionProjectedShadowReceiverIterator@Composition@UI@Windows@@UEAAJPEAPEAU.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$ITypedEventHandler@PEAVHolographicCompositor@Internal@Composition@UI@Windows@@W4HolographicCompositorStatus@2345@@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000FA18 (-InternalRelease@-$ComPtr@U-$ITypedEventHandler@PEAVHolographicCompositor@Internal@Composition@U.c)
 *     ?InternalAddRef@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18001EE7C (-InternalAddRef@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionProjectedShadowReceiver::ToApi<Windows::UI::Composition::ICompositionProjectedShadowReceiver>(
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
