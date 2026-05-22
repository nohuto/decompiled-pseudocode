/*
 * XREFs of ?UpdateTreeEffectCounter@CompositionEffectBrush@Composition@UI@Windows@@AEAAXH@Z @ 0x1800937F0
 * Callers:
 *     ?Destroy@CompositionEffectBrush@Composition@UI@Windows@@UEAAXXZ @ 0x18002E620 (-Destroy@CompositionEffectBrush@Composition@UI@Windows@@UEAAXXZ.c)
 *     ?SetSourceParameter@CompositionEffectBrush@Composition@UI@Windows@@QEAAJPEAUHSTRING__@@PEAUICompositionBrush@234@@Z @ 0x1800459F0 (-SetSourceParameter@CompositionEffectBrush@Composition@UI@Windows@@QEAAJPEAUHSTRING__@@PEAUIComp.c)
 *     ?SetEffect@LayerVisual@Composition@UI@Windows@@QEAAJPEAVCompositionEffectBrush@234@@Z @ 0x180086560 (-SetEffect@LayerVisual@Composition@UI@Windows@@QEAAJPEAVCompositionEffectBrush@234@@Z.c)
 *     ?UpdateTreeEffectCounter@CompositionEffectBrush@Composition@UI@Windows@@AEAAXH@Z @ 0x1800937F0 (-UpdateTreeEffectCounter@CompositionEffectBrush@Composition@UI@Windows@@AEAAXH@Z.c)
 * Callees:
 *     ?InternalAddRef@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18001EE7C (-InternalAddRef@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 *     ?ValidateInterface@ContextRuntimeClass@WRL2@Microsoft@@KAJPEAVContextSession@23@PEAUIUnknown@@PEBUInterfaceType@NestableRuntimeClass@23@PEAPEAV123@@Z @ 0x18006BBE0 (-ValidateInterface@ContextRuntimeClass@WRL2@Microsoft@@KAJPEAVContextSession@23@PEAUIUnknown@@PE.c)
 *     ?InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18007BB44 (-InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 *     ?InternalUnlock@?$RefPtr@VAnimationPropertyInfo@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ @ 0x18008282C (-InternalUnlock@-$RefPtr@VAnimationPropertyInfo@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ.c)
 *     ?UpdateTreeEffectCounter@CompositionEffectBrush@Composition@UI@Windows@@AEAAXH@Z @ 0x1800937F0 (-UpdateTreeEffectCounter@CompositionEffectBrush@Composition@UI@Windows@@AEAAXH@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall Windows::UI::Composition::CompositionEffectBrush::UpdateTreeEffectCounter(
        Windows::UI::Composition::CompositionEffectBrush *this,
        int a2)
{
  unsigned int v4; // eax
  __int64 v5; // rdx
  __int64 v6; // rsi
  __int64 v7; // rbp
  volatile signed __int32 *v8; // rbx
  int v9; // eax
  Microsoft::WRL2::NestableRuntimeClass *v10; // rbx
  Microsoft::WRL2::NestableRuntimeClass *v11; // [rsp+40h] [rbp+8h] BYREF
  volatile signed __int32 *v12; // [rsp+50h] [rbp+18h] BYREF

  *((_DWORD *)this + 46) += a2;
  if ( *((_QWORD *)this + 22) )
  {
    v4 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)this + 21) + 152LL) + 24LL))(*(_QWORD *)(*((_QWORD *)this + 21) + 152LL));
    if ( v4 )
    {
      v6 = 0LL;
      v7 = v4;
      do
      {
        v8 = *(volatile signed __int32 **)(v6 + *((_QWORD *)this + 22));
        v12 = v8;
        if ( v8 )
        {
          Microsoft::WRL2::NestableRuntimeClass::InternalAddRef((Microsoft::WRL2::NestableRuntimeClass *)v8);
          v9 = Microsoft::WRL2::ContextRuntimeClass::ValidateInterface(
                 *((struct Microsoft::WRL2::ContextSession **)this + 3),
                 (struct IUnknown *)v8,
                 (const struct Microsoft::WRL2::NestableRuntimeClass::InterfaceType *)&Windows::UI::Composition::CompositionEffectBrushT<Windows::UI::Composition::CompositionEffectBrush,Windows::UI::Composition::CompositionBrush>::s_InterfaceType,
                 &v11);
          v10 = v11;
          if ( v9 >= 0 )
            Windows::UI::Composition::CompositionEffectBrush::UpdateTreeEffectCounter(v11, a2);
          if ( v10 )
            Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v10);
        }
        Microsoft::WRL2::RefPtr<Windows::UI::Composition::AnimationPropertyInfo>::InternalUnlock(&v12, v5);
        v6 += 8LL;
        --v7;
      }
      while ( v7 );
    }
  }
}
