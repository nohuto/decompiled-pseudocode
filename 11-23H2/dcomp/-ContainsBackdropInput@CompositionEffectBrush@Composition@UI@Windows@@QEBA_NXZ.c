/*
 * XREFs of ?ContainsBackdropInput@CompositionEffectBrush@Composition@UI@Windows@@QEBA_NXZ @ 0x18009466C
 * Callers:
 *     ?SetSourceParameter@CompositionEffectBrush@Composition@UI@Windows@@QEAAJPEAUHSTRING__@@PEAUICompositionBrush@234@@Z @ 0x1800459F0 (-SetSourceParameter@CompositionEffectBrush@Composition@UI@Windows@@QEAAJPEAUHSTRING__@@PEAUIComp.c)
 *     ?SetEffect@LayerVisual@Composition@UI@Windows@@QEAAJPEAVCompositionEffectBrush@234@@Z @ 0x180086560 (-SetEffect@LayerVisual@Composition@UI@Windows@@QEAAJPEAVCompositionEffectBrush@234@@Z.c)
 *     ?ContainsBackdropInput@CompositionEffectBrush@Composition@UI@Windows@@QEBA_NXZ @ 0x18009466C (-ContainsBackdropInput@CompositionEffectBrush@Composition@UI@Windows@@QEBA_NXZ.c)
 * Callees:
 *     ?InternalAddRef@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18001EE7C (-InternalAddRef@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 *     ?ValidateInterface@ContextRuntimeClass@WRL2@Microsoft@@KAJPEAVContextSession@23@PEAUIUnknown@@PEBUInterfaceType@NestableRuntimeClass@23@PEAPEAV123@@Z @ 0x18006BBE0 (-ValidateInterface@ContextRuntimeClass@WRL2@Microsoft@@KAJPEAVContextSession@23@PEAUIUnknown@@PE.c)
 *     ?InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18007BB44 (-InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 *     ?InternalUnlock@?$RefPtr@VAnimationPropertyInfo@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ @ 0x18008282C (-InternalUnlock@-$RefPtr@VAnimationPropertyInfo@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ.c)
 *     ?ContainsBackdropInput@CompositionEffectBrush@Composition@UI@Windows@@QEBA_NXZ @ 0x18009466C (-ContainsBackdropInput@CompositionEffectBrush@Composition@UI@Windows@@QEBA_NXZ.c)
 *     ??1?$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@Microsoft@@QEAA@XZ @ 0x1800A203C (--1-$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@M.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

char __fastcall Windows::UI::Composition::CompositionEffectBrush::ContainsBackdropInput(
        Windows::UI::Composition::CompositionEffectBrush *this)
{
  int v2; // ebp
  __int64 v3; // rdx
  unsigned int v4; // r15d
  __int64 i; // r14
  volatile signed __int32 *v6; // rbx
  int v8; // eax
  Microsoft::WRL2::NestableRuntimeClass *v9; // rdi
  int v10; // eax
  Microsoft::WRL2::NestableRuntimeClass *v11; // rbx
  volatile signed __int32 *v12; // [rsp+60h] [rbp+8h] BYREF
  Microsoft::WRL2::NestableRuntimeClass *v13; // [rsp+68h] [rbp+10h] BYREF
  Microsoft::WRL2::NestableRuntimeClass *v14; // [rsp+70h] [rbp+18h] BYREF
  Microsoft::WRL2::NestableRuntimeClass *v15; // [rsp+78h] [rbp+20h] BYREF

  if ( !*((_QWORD *)this + 22) )
    return 0;
  v2 = 0;
  v4 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)this + 21) + 152LL) + 24LL))(*(_QWORD *)(*((_QWORD *)this + 21) + 152LL));
  if ( !v4 )
    return 0;
  for ( i = 0LL; ; i += 8LL )
  {
    v6 = *(volatile signed __int32 **)(i + *((_QWORD *)this + 22));
    v12 = v6;
    if ( v6 )
      break;
LABEL_5:
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::AnimationPropertyInfo>::InternalUnlock(&v12, v3);
    if ( ++v2 >= v4 )
      return 0;
  }
  Microsoft::WRL2::NestableRuntimeClass::InternalAddRef((Microsoft::WRL2::NestableRuntimeClass *)v6);
  v8 = Microsoft::WRL2::ContextRuntimeClass::ValidateInterface(
         *((struct Microsoft::WRL2::ContextSession **)this + 3),
         (struct IUnknown *)v6,
         (const struct Microsoft::WRL2::NestableRuntimeClass::InterfaceType *)&Windows::UI::Composition::CompositionBackdropBrushT<Windows::UI::Composition::CompositionBackdropBrush,Windows::UI::Composition::CompositionBrush>::s_InterfaceType,
         &v13);
  v9 = v13;
  v15 = v13;
  if ( v8 >= 0 )
  {
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>::~RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>(&v15);
    goto LABEL_19;
  }
  v10 = Microsoft::WRL2::ContextRuntimeClass::ValidateInterface(
          *((struct Microsoft::WRL2::ContextSession **)this + 3),
          (struct IUnknown *)v6,
          (const struct Microsoft::WRL2::NestableRuntimeClass::InterfaceType *)&Windows::UI::Composition::CompositionEffectBrushT<Windows::UI::Composition::CompositionEffectBrush,Windows::UI::Composition::CompositionBrush>::s_InterfaceType,
          &v14);
  v11 = v14;
  if ( v10 < 0 || !Windows::UI::Composition::CompositionEffectBrush::ContainsBackdropInput(v14) )
  {
    if ( v11 )
      Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v11);
    if ( v9 )
      Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v9);
    goto LABEL_5;
  }
  if ( v11 )
    Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v11);
  if ( v9 )
    Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v9);
LABEL_19:
  Microsoft::WRL2::RefPtr<Windows::UI::Composition::AnimationPropertyInfo>::InternalUnlock(&v12, v3);
  return 1;
}
