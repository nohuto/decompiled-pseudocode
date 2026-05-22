/*
 * XREFs of ??4?$RefPtr@VCompositionBrush@Composition@UI@Windows@@@WRL2@Microsoft@@QEAAAEAV012@PEAVCompositionBrush@Composition@UI@Windows@@@Z @ 0x18002B180
 * Callers:
 *     ?SetStrokeBrush@CompositionSpriteShape@Composition@UI@Windows@@QEAAXPEAVCompositionBrush@234@@Z @ 0x18000C8F4 (-SetStrokeBrush@CompositionSpriteShape@Composition@UI@Windows@@QEAAXPEAVCompositionBrush@234@@Z.c)
 *     ?SetMask@CompositionProjectedShadowCaster@Composition@UI@Windows@@QEAAJPEAVCompositionBrush@234@@Z @ 0x18000D52C (-SetMask@CompositionProjectedShadowCaster@Composition@UI@Windows@@QEAAJPEAVCompositionBrush@234@.c)
 *     ?SetBrush@CompositionProjectedShadowCaster@Composition@UI@Windows@@QEAAJPEAVCompositionBrush@234@@Z @ 0x18000D584 (-SetBrush@CompositionProjectedShadowCaster@Composition@UI@Windows@@QEAAJPEAVCompositionBrush@234.c)
 *     ?SetMask@CompositionProjectedShadowReceiver@Composition@UI@Windows@@QEAAJPEAVCompositionBrush@234@@Z @ 0x180010A30 (-SetMask@CompositionProjectedShadowReceiver@Composition@UI@Windows@@QEAAJPEAVCompositionBrush@23.c)
 *     ?SetBrush@SpriteVisual@Composition@UI@Windows@@QEAAXPEAVCompositionBrush@234@@Z @ 0x180015AF4 (-SetBrush@SpriteVisual@Composition@UI@Windows@@QEAAXPEAVCompositionBrush@234@@Z.c)
 *     ?Destroy@CompositionMaskBrush@Composition@UI@Windows@@UEAAXXZ @ 0x18002B060 (-Destroy@CompositionMaskBrush@Composition@UI@Windows@@UEAAXXZ.c)
 *     ?SetMask@DropShadow@Composition@UI@Windows@@QEAAJPEAVCompositionBrush@234@@Z @ 0x180182FE8 (-SetMask@DropShadow@Composition@UI@Windows@@QEAAJPEAVCompositionBrush@234@@Z.c)
 * Callees:
 *     ?InternalAddRef@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18001EE7C (-InternalAddRef@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

volatile signed __int32 **__fastcall Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionBrush>::operator=(
        volatile signed __int32 **a1,
        Microsoft::WRL2::NestableRuntimeClass *a2)
{
  Microsoft::WRL2::NestableRuntimeClass *v2; // rbx
  volatile signed __int32 *v4; // rcx

  v2 = a2;
  if ( *a1 != (volatile signed __int32 *)a2 )
  {
    if ( a2 )
      Microsoft::WRL2::NestableRuntimeClass::InternalAddRef(a2);
    v4 = *a1;
    *a1 = (volatile signed __int32 *)v2;
    if ( v4 && _InterlockedExchangeAdd(v4 + 4, 0xFFFFFFFF) == 1 )
    {
      LOBYTE(a2) = 1;
      (*(void (__fastcall **)(volatile signed __int32 *, Microsoft::WRL2::NestableRuntimeClass *))(*(_QWORD *)v4 + 64LL))(
        v4,
        a2);
    }
  }
  return a1;
}
