/*
 * XREFs of ?SetReferenceParameter@Test@CompositorCommon@Composition@UI@Windows@@UEAAJPEAUIInspectable@@PEAUHSTRING__@@0@Z @ 0x180129D90
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?InternalUnlock@?$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ @ 0x18000BCF4 (-InternalUnlock@-$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXX.c)
 *     ?InternalRelease@?$ComPtr@U?$ITypedEventHandler@PEAVHolographicCompositor@Internal@Composition@UI@Windows@@W4HolographicCompositorStatus@2345@@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000FA18 (-InternalRelease@-$ComPtr@U-$ITypedEventHandler@PEAVHolographicCompositor@Internal@Composition@U.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?ValidateInterface@ContextRuntimeClass@WRL2@Microsoft@@KAJPEAVContextSession@23@PEAUIUnknown@@PEBUInterfaceType@NestableRuntimeClass@23@PEAPEAV123@@Z @ 0x18006BBE0 (-ValidateInterface@ContextRuntimeClass@WRL2@Microsoft@@KAJPEAVContextSession@23@PEAUIUnknown@@PE.c)
 *     ?InternalUnlock@?$RefPtr@VCompositionObject@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ @ 0x18008286C (-InternalUnlock@-$RefPtr@VCompositionObject@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ?SetReferenceParameter@CompositionAnimation@Composition@UI@Windows@@QEAAJPEAUHSTRING__@@PEAVCompositionObject@234@_N@Z @ 0x18014FBA0 (-SetReferenceParameter@CompositionAnimation@Composition@UI@Windows@@QEAAJPEAUHSTRING__@@PEAVComp.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositorCommon::Test::SetReferenceParameter(
        struct _RTL_CRITICAL_SECTION *this,
        struct IInspectable *a2,
        HSTRING a3,
        struct IInspectable *a4)
{
  struct Microsoft::WRL2::ContextSession *v4; // rdi
  unsigned int v8; // ebx
  int v9; // eax
  int v10; // eax
  Windows::UI::Composition::CompositionAnimation *v11; // rsi
  int v12; // eax
  __int64 v13; // rdx
  int v14; // eax
  __int64 v15; // rdx
  unsigned int v16; // edx
  struct IUnknown *v18; // [rsp+20h] [rbp-20h] BYREF
  struct Microsoft::WRL2::ContextRuntimeClass *v19; // [rsp+28h] [rbp-18h] BYREF
  struct IUnknown *v20[2]; // [rsp+30h] [rbp-10h] BYREF
  struct Microsoft::WRL2::ContextRuntimeClass *v21; // [rsp+60h] [rbp+20h] BYREF

  v4 = (struct Microsoft::WRL2::ContextSession *)&this[-9];
  Microsoft::WRL2::ContextSession::BeginApiEntry(this - 9);
  if ( (*((_BYTE *)v4 + 32) & 2) != 0 )
  {
    v20[0] = 0LL;
    v9 = ((__int64 (__fastcall *)(struct IInspectable *, GUID *, struct IUnknown **))a2->lpVtbl->QueryInterface)(
           a2,
           &GUID_464c4c2c_1caa_4061_9b40_e13fde1503ca,
           v20);
    v8 = v9;
    if ( v9 < 0 )
    {
      DoStackCaptureDirect(v9, 0x1F4Bu);
      goto LABEL_18;
    }
    v21 = 0LL;
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertySet>::InternalUnlock(&v21);
    v10 = Microsoft::WRL2::ContextRuntimeClass::ValidateInterface(
            v4,
            v20[0],
            (const struct Microsoft::WRL2::NestableRuntimeClass::InterfaceType *)&Windows::UI::Composition::CompositionAnimation::s_InterfaceType,
            &v21);
    v11 = v21;
    v8 = v10;
    if ( v10 < 0 )
    {
      DoStackCaptureDirect(v10, 0x1F51u);
      goto LABEL_16;
    }
    v18 = 0LL;
    v12 = ((__int64 (__fastcall *)(struct IInspectable *, GUID *, struct IUnknown **))a4->lpVtbl->QueryInterface)(
            a4,
            &GUID_bcb4ad45_7609_4550_934f_16002a68fded,
            &v18);
    v8 = v12;
    if ( v12 < 0 )
    {
      DoStackCaptureDirect(v12, 0x1F54u);
      goto LABEL_14;
    }
    v19 = 0LL;
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionObject>::InternalUnlock(
      (volatile signed __int32 **)&v19,
      v13);
    v14 = Microsoft::WRL2::ContextRuntimeClass::ValidateInterface(
            v4,
            v18,
            (const struct Microsoft::WRL2::NestableRuntimeClass::InterfaceType *)&Windows::UI::Composition::CompositionObject::s_InterfaceType,
            &v19);
    v8 = v14;
    if ( v14 < 0 )
    {
      v16 = 8026;
    }
    else
    {
      v14 = Windows::UI::Composition::CompositionAnimation::SetReferenceParameter(v11, a3, v19, 0);
      v8 = v14;
      if ( v14 >= 0 )
      {
        v8 = 0;
LABEL_12:
        Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionObject>::InternalUnlock(
          (volatile signed __int32 **)&v19,
          v15);
LABEL_14:
        Microsoft::WRL::ComPtr<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::Internal::HolographicCompositor *,enum Windows::UI::Composition::Internal::HolographicCompositorStatus>>::InternalRelease((__int64 *)&v18);
LABEL_16:
        Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertySet>::InternalUnlock(&v21);
LABEL_18:
        Microsoft::WRL::ComPtr<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::Internal::HolographicCompositor *,enum Windows::UI::Composition::Internal::HolographicCompositorStatus>>::InternalRelease((__int64 *)v20);
        goto LABEL_19;
      }
      v16 = 8028;
    }
    DoStackCaptureDirect(v14, v16);
    goto LABEL_12;
  }
  v8 = -2147483629;
  RoOriginateErrorW(
    2147483667LL,
    0LL,
    L"The given object has already been closed / disposed and may no longer be used.");
LABEL_19:
  Microsoft::WRL2::ContextSession::EndApiEntry((struct _RTL_CRITICAL_SECTION *)v4);
  return v8;
}
