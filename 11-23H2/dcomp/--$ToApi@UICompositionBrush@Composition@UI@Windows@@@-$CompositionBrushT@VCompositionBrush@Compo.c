/*
 * XREFs of ??$ToApi@UICompositionBrush@Composition@UI@Windows@@@?$CompositionBrushT@VCompositionBrush@Composition@UI@Windows@@VProxyObject@234@@Composition@UI@Windows@@SAXPEAVCompositionBrush@123@V?$ComPtrRef@V?$ComPtr@UICompositionBrush@Composition@UI@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x18017BEBC
 * Callers:
 *     ?get_Mask@Api@DropShadow@Composition@UI@Windows@@UEAAJPEAPEAUICompositionBrush@345@@Z @ 0x180183250 (-get_Mask@Api@DropShadow@Composition@UI@Windows@@UEAAJPEAPEAUICompositionBrush@345@@Z.c)
 *     ?get_Brush@Api@CompositionProjectedShadowCaster@Composition@UI@Windows@@UEAAJPEAPEAUICompositionBrush@345@@Z @ 0x180183F70 (-get_Brush@Api@CompositionProjectedShadowCaster@Composition@UI@Windows@@UEAAJPEAPEAUIComposition.c)
 *     ?get_Mask@Velocity@CompositionProjectedShadowCaster@Composition@UI@Windows@@UEAAJPEAPEAUICompositionBrush@345@@Z @ 0x180184010 (-get_Mask@Velocity@CompositionProjectedShadowCaster@Composition@UI@Windows@@UEAAJPEAPEAUIComposi.c)
 *     ?get_Mask@Velocity@CompositionProjectedShadowReceiver@Composition@UI@Windows@@UEAAJPEAPEAUICompositionBrush@345@@Z @ 0x1801842F0 (-get_Mask@Velocity@CompositionProjectedShadowReceiver@Composition@UI@Windows@@UEAAJPEAPEAUICompo.c)
 * Callees:
 *     ?InternalAddRef@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18001EE7C (-InternalAddRef@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionBrushT<Windows::UI::Composition::CompositionBrush,Windows::UI::Composition::ProxyObject>::ToApi<Windows::UI::Composition::ICompositionBrush>(
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
