/*
 * XREFs of ??$ToApi@UICompositionInteractionSource@Interactions@Composition@UI@Windows@@@VisualInteractionSource@Interactions@Composition@UI@Windows@@SAXPEAV01234@V?$ComPtrRef@V?$ComPtr@UICompositionInteractionSource@Interactions@Composition@UI@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x1801A1FD0
 * Callers:
 *     ?GetMany@Api@CompositionInteractionSourceIterator@Interactions@Composition@UI@Windows@@UEAAJIPEAPEAUICompositionInteractionSource@3456@PEAI@Z @ 0x1801A2060 (-GetMany@Api@CompositionInteractionSourceIterator@Interactions@Composition@UI@Windows@@UEAAJIPEA.c)
 *     ?get_Current@Api@CompositionInteractionSourceIterator@Interactions@Composition@UI@Windows@@UEAAJPEAPEAUICompositionInteractionSource@3456@@Z @ 0x1801A2260 (-get_Current@Api@CompositionInteractionSourceIterator@Interactions@Composition@UI@Windows@@UEAAJ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$ITypedEventHandler@PEAVHolographicCompositor@Internal@Composition@UI@Windows@@W4HolographicCompositorStatus@2345@@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000FA18 (-InternalRelease@-$ComPtr@U-$ITypedEventHandler@PEAVHolographicCompositor@Internal@Composition@U.c)
 *     ?InternalAddRef@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18001EE7C (-InternalAddRef@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 */

__int64 __fastcall Windows::UI::Composition::Interactions::VisualInteractionSource::ToApi<Windows::UI::Composition::Interactions::ICompositionInteractionSource>(
        Microsoft::WRL2::NestableRuntimeClass *this,
        __int64 *a2)
{
  __int64 result; // rax

  if ( this )
  {
    Microsoft::WRL::ComPtr<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::Internal::HolographicCompositor *,enum Windows::UI::Composition::Internal::HolographicCompositorStatus>>::InternalRelease(a2);
    *a2 = ((unsigned __int64)this + 152) & ((unsigned __int128)-(__int128)((unsigned __int64)this + 128) >> 64);
    return Microsoft::WRL2::NestableRuntimeClass::InternalAddRef(this);
  }
  return result;
}
