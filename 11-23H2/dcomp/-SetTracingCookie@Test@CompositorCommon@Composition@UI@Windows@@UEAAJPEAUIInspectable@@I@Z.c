/*
 * XREFs of ?SetTracingCookie@Test@CompositorCommon@Composition@UI@Windows@@UEAAJPEAUIInspectable@@I@Z @ 0x180129F60
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?InternalUnlock@?$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ @ 0x18000BCF4 (-InternalUnlock@-$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXX.c)
 *     ?InternalRelease@?$ComPtr@U?$ITypedEventHandler@PEAVHolographicCompositor@Internal@Composition@UI@Windows@@W4HolographicCompositorStatus@2345@@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000FA18 (-InternalRelease@-$ComPtr@U-$ITypedEventHandler@PEAVHolographicCompositor@Internal@Composition@U.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?ValidateInterface@ContextRuntimeClass@WRL2@Microsoft@@KAJPEAVContextSession@23@PEAUIUnknown@@PEBUInterfaceType@NestableRuntimeClass@23@PEAPEAV123@@Z @ 0x18006BBE0 (-ValidateInterface@ContextRuntimeClass@WRL2@Microsoft@@KAJPEAVContextSession@23@PEAUIUnknown@@PE.c)
 *     ?ResourceSetIntegerProperty@CDevice@DirectComposition@@QEAAXII_J@Z @ 0x1800707B0 (-ResourceSetIntegerProperty@CDevice@DirectComposition@@QEAAXII_J@Z.c)
 *     ?InternalUnlock@?$RefPtr@VCompositionDrawingSurface@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ @ 0x180080BA8 (-InternalUnlock@-$RefPtr@VCompositionDrawingSurface@Composition@UI@Windows@@@WRL2@Microsoft@@IEA.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositorCommon::Test::SetTracingCookie(
        struct _RTL_CRITICAL_SECTION *this,
        struct IInspectable *a2,
        unsigned int a3)
{
  struct Microsoft::WRL2::ContextSession *v3; // rsi
  __int64 v4; // rdi
  int v6; // ebx
  struct IInspectableVtbl *lpVtbl; // rax
  struct IUnknown *v8; // rcx
  struct IInspectableVtbl *v9; // rax
  struct IUnknown *v10; // rcx
  struct IInspectableVtbl *v11; // rax
  struct IInspectableVtbl *v12; // rax
  int v13; // eax
  struct IUnknown *v14; // rcx
  struct IUnknown *v15; // rcx
  struct IUnknown *v16; // rcx
  struct IUnknown *v18; // [rsp+20h] [rbp-20h] BYREF
  struct IUnknown *v19; // [rsp+28h] [rbp-18h] BYREF
  struct Microsoft::WRL2::ContextRuntimeClass *v20[2]; // [rsp+30h] [rbp-10h] BYREF
  struct IUnknown *v21; // [rsp+60h] [rbp+20h] BYREF
  struct IUnknown *v22; // [rsp+78h] [rbp+38h] BYREF

  v3 = (struct Microsoft::WRL2::ContextSession *)&this[-9];
  v4 = a3;
  Microsoft::WRL2::ContextSession::BeginApiEntry(this - 9);
  if ( (*((_BYTE *)v3 + 32) & 2) == 0 )
  {
    v6 = -2147483629;
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
    goto LABEL_41;
  }
  lpVtbl = a2->lpVtbl;
  v21 = 0LL;
  if ( ((int (__fastcall *)(struct IInspectable *, GUID *, struct IUnknown **))lpVtbl->QueryInterface)(
         a2,
         &GUID_6acc5431_7d3d_4bf3_abb6_f44bdc4888c1,
         &v21) >= 0
    && v21 )
  {
    v20[0] = 0LL;
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionDrawingSurface>::InternalUnlock(v20);
    v6 = Microsoft::WRL2::ContextRuntimeClass::ValidateInterface(
           v3,
           v21,
           (const struct Microsoft::WRL2::NestableRuntimeClass::InterfaceType *)&Windows::UI::Composition::ExpressionAnimation::s_InterfaceType,
           v20);
    if ( v6 < 0 )
    {
      DoStackCaptureDirect(v6, 0x1EB7u);
    }
    else
    {
      *((_DWORD *)v20[0] + 75) = v4;
      v6 = 0;
    }
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionDrawingSurface>::InternalUnlock(v20);
    goto LABEL_9;
  }
  v9 = a2->lpVtbl;
  v22 = 0LL;
  if ( ((int (__fastcall *)(struct IInspectable *, GUID *, struct IUnknown **))v9->QueryInterface)(
         a2,
         &GUID_126e7f22_3ae9_4540_9a8a_deae8a4a4a84,
         &v22) >= 0
    && v22 )
  {
    v20[0] = 0LL;
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertySet>::InternalUnlock(v20);
    v6 = Microsoft::WRL2::ContextRuntimeClass::ValidateInterface(
           v3,
           v22,
           (const struct Microsoft::WRL2::NestableRuntimeClass::InterfaceType *)&Windows::UI::Composition::KeyFrameAnimation::s_InterfaceType,
           v20);
    if ( v6 < 0 )
    {
      DoStackCaptureDirect(v6, 0x1ECDu);
    }
    else
    {
      *((_DWORD *)v20[0] + 75) = v4;
      v6 = 0;
    }
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertySet>::InternalUnlock(v20);
LABEL_17:
    v10 = v22;
    if ( v22 )
    {
      v22 = 0LL;
      ((void (__fastcall *)(struct IUnknown *))v10->lpVtbl->Release)(v10);
    }
LABEL_9:
    v8 = v21;
    if ( !v21 )
      goto LABEL_41;
LABEL_40:
    v21 = 0LL;
    ((void (__fastcall *)(struct IUnknown *))v8->lpVtbl->Release)(v8);
    goto LABEL_41;
  }
  v11 = a2->lpVtbl;
  v19 = 0LL;
  if ( ((int (__fastcall *)(struct IInspectable *, GUID *, struct IUnknown **))v11->QueryInterface)(
         a2,
         &GUID_c9d6d202_5f67_4453_9117_9eadd430d3c2,
         &v19) >= 0
    && v19 )
  {
    v20[0] = 0LL;
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertySet>::InternalUnlock(v20);
    v6 = Microsoft::WRL2::ContextRuntimeClass::ValidateInterface(
           v3,
           v19,
           (const struct Microsoft::WRL2::NestableRuntimeClass::InterfaceType *)&Windows::UI::Composition::CompositionPropertySet::s_InterfaceType,
           v20);
    if ( v6 < 0 )
    {
      DoStackCaptureDirect(v6, 0x1EE3u);
    }
    else
    {
      DirectComposition::CDevice::ResourceSetIntegerProperty(
        *(DirectComposition::CDevice **)(*((_QWORD *)v20[0] + 3) + 456LL),
        *((_DWORD *)v20[0] + 32),
        3,
        v4);
      v6 = 0;
    }
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertySet>::InternalUnlock(v20);
LABEL_25:
    Microsoft::WRL::ComPtr<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::Internal::HolographicCompositor *,enum Windows::UI::Composition::Internal::HolographicCompositorStatus>>::InternalRelease((__int64 *)&v19);
    goto LABEL_17;
  }
  v12 = a2->lpVtbl;
  v18 = 0LL;
  v13 = ((__int64 (__fastcall *)(struct IInspectable *, GUID *, struct IUnknown **))v12->QueryInterface)(
          a2,
          &GUID_438de12d_769b_4821_a949_284a6547e873,
          &v18);
  v6 = v13;
  if ( v13 >= 0 )
  {
    v14 = v18;
    if ( v18 )
    {
      v20[0] = 0LL;
      Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertySet>::InternalUnlock(v20);
      v6 = Microsoft::WRL2::ContextRuntimeClass::ValidateInterface(
             v3,
             v18,
             (const struct Microsoft::WRL2::NestableRuntimeClass::InterfaceType *)&Windows::UI::Composition::NaturalMotionAnimation::s_InterfaceType,
             v20);
      if ( v6 < 0 )
      {
        DoStackCaptureDirect(v6, 0x1EF9u);
      }
      else
      {
        *((_DWORD *)v20[0] + 75) = v4;
        v6 = 0;
      }
      Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertySet>::InternalUnlock(v20);
      v14 = v18;
    }
    else
    {
      v6 = 0;
    }
    if ( v14 )
    {
      v18 = 0LL;
      ((void (__fastcall *)(struct IUnknown *))v14->lpVtbl->Release)(v14);
    }
    goto LABEL_25;
  }
  DoStackCaptureDirect(v13, 0x1F06u);
  v15 = v18;
  if ( v18 )
  {
    v18 = 0LL;
    ((void (__fastcall *)(struct IUnknown *))v15->lpVtbl->Release)(v15);
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::Internal::HolographicCompositor *,enum Windows::UI::Composition::Internal::HolographicCompositorStatus>>::InternalRelease((__int64 *)&v19);
  v16 = v22;
  if ( v22 )
  {
    v22 = 0LL;
    ((void (__fastcall *)(struct IUnknown *))v16->lpVtbl->Release)(v16);
  }
  v8 = v21;
  if ( v21 )
    goto LABEL_40;
LABEL_41:
  Microsoft::WRL2::ContextSession::EndApiEntry((struct _RTL_CRITICAL_SECTION *)v3);
  return (unsigned int)v6;
}
