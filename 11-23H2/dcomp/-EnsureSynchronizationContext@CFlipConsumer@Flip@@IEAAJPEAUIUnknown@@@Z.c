/*
 * XREFs of ?EnsureSynchronizationContext@CFlipConsumer@Flip@@IEAAJPEAUIUnknown@@@Z @ 0x1801AAFDC
 * Callers:
 *     ?ReturnPoolBuffer@CFlipConsumer@Flip@@UEAAJPEAUIUnknown@@_K0@Z @ 0x1801ABDB0 (-ReturnPoolBuffer@CFlipConsumer@Flip@@UEAAJPEAUIUnknown@@_K0@Z.c)
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?InternalRelease@?$ComPtr@U?$ITypedEventHandler@PEAVHolographicCompositor@Internal@Composition@UI@Windows@@W4HolographicCompositorStatus@2345@@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000FA18 (-InternalRelease@-$ComPtr@U-$ITypedEventHandler@PEAVHolographicCompositor@Internal@Composition@U.c)
 *     ??3@YAXPEAX@Z @ 0x18001B130 (--3@YAXPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Create@CSynchronizationContext@Flip@@SAJPEAUIUnknown@@PEAPEAV12@@Z @ 0x1801AC238 (-Create@CSynchronizationContext@Flip@@SAJPEAUIUnknown@@PEAPEAV12@@Z.c)
 */

__int64 __fastcall Flip::CFlipConsumer::EnsureSynchronizationContext(
        Flip::CFlipConsumer *this,
        struct IUnknown *a2,
        __int64 a3)
{
  __int64 **v3; // rsi
  struct IUnknown *v4; // r9
  int v5; // eax
  int v6; // ebx
  __int64 v7; // rbx
  __int64 (__fastcall *v8)(__int64, GUID *, _QWORD); // rdi
  __int64 (__fastcall ***v9)(_QWORD, _QWORD, _QWORD); // rbx
  __int64 (__fastcall *v10)(_QWORD, GUID *, struct IUnknown **); // rdi
  __int64 *v11; // rdi
  int v12; // eax
  unsigned int v14; // edx
  int v15; // ecx
  struct CSynchronizationContext *v16; // [rsp+28h] [rbp-18h] BYREF
  char v17; // [rsp+30h] [rbp-10h]
  struct IUnknown *v18; // [rsp+60h] [rbp+20h] BYREF
  __int64 (__fastcall ***v19)(_QWORD, GUID *, struct IUnknown **); // [rsp+70h] [rbp+30h] BYREF
  __int64 v20; // [rsp+78h] [rbp+38h] BYREF

  v3 = (__int64 **)((char *)this + 96);
  v4 = a2;
  if ( !*((_QWORD *)this + 12) )
  {
    v20 = 0LL;
    v19 = 0LL;
    v18 = 0LL;
    v5 = ((__int64 (__fastcall *)(struct IUnknown *, GUID *, __int64 *))a2->lpVtbl->QueryInterface)(
           a2,
           &GUID_035f3ab4_482e_4e50_b41f_8a7f8bd8960b,
           &v20);
    v6 = v5;
    if ( v5 < 0 )
    {
      v14 = 649;
    }
    else
    {
      v7 = v20;
      v8 = *(__int64 (__fastcall **)(__int64, GUID *, _QWORD))(*(_QWORD *)v20 + 48LL);
      Microsoft::WRL::ComPtr<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::Internal::HolographicCompositor *,enum Windows::UI::Composition::Internal::HolographicCompositorStatus>>::InternalRelease((__int64 *)&v19);
      v5 = v8(v7, &GUID_77db970f_6276_48ba_ba28_070143b4392c, &v19);
      v6 = v5;
      if ( v5 < 0 )
      {
        v14 = 650;
      }
      else
      {
        v9 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v19;
        v10 = **v19;
        Microsoft::WRL::ComPtr<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::Internal::HolographicCompositor *,enum Windows::UI::Composition::Internal::HolographicCompositorStatus>>::InternalRelease((__int64 *)&v18);
        v5 = v10(v9, &GUID_a04bfb29_08ef_43d6_a49c_a9bdbdcbe686, &v18);
        v6 = v5;
        if ( v5 >= 0 )
        {
          v16 = 0LL;
          v17 = 1;
          v6 = Flip::CSynchronizationContext::Create(v18, &v16);
          if ( v17 )
          {
            v11 = *v3;
            *v3 = (__int64 *)v16;
            if ( v11 )
            {
              Microsoft::WRL::ComPtr<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::Internal::HolographicCompositor *,enum Windows::UI::Composition::Internal::HolographicCompositorStatus>>::InternalRelease(v11 + 1);
              Microsoft::WRL::ComPtr<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::Internal::HolographicCompositor *,enum Windows::UI::Composition::Internal::HolographicCompositorStatus>>::InternalRelease(v11);
              operator delete(v11);
            }
          }
          if ( v6 >= 0 )
          {
            Microsoft::WRL::ComPtr<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::Internal::HolographicCompositor *,enum Windows::UI::Composition::Internal::HolographicCompositorStatus>>::InternalRelease((__int64 *)&v18);
            Microsoft::WRL::ComPtr<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::Internal::HolographicCompositor *,enum Windows::UI::Composition::Internal::HolographicCompositorStatus>>::InternalRelease((__int64 *)&v19);
            Microsoft::WRL::ComPtr<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::Internal::HolographicCompositor *,enum Windows::UI::Composition::Internal::HolographicCompositorStatus>>::InternalRelease(&v20);
            goto LABEL_10;
          }
          v14 = 656;
          v15 = v6;
LABEL_18:
          DoStackCaptureDirect(v15, v14);
          Microsoft::WRL::ComPtr<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::Internal::HolographicCompositor *,enum Windows::UI::Composition::Internal::HolographicCompositorStatus>>::InternalRelease((__int64 *)&v18);
          Microsoft::WRL::ComPtr<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::Internal::HolographicCompositor *,enum Windows::UI::Composition::Internal::HolographicCompositorStatus>>::InternalRelease((__int64 *)&v19);
          Microsoft::WRL::ComPtr<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::Internal::HolographicCompositor *,enum Windows::UI::Composition::Internal::HolographicCompositorStatus>>::InternalRelease(&v20);
          return (unsigned int)v6;
        }
        v14 = 651;
      }
    }
    v15 = v5;
    goto LABEL_18;
  }
LABEL_10:
  v12 = (*(__int64 (__fastcall **)(__int64, struct IUnknown *, __int64, struct IUnknown *))(*(_QWORD *)**v3 + 312LL))(
          **v3,
          a2,
          a3,
          v4);
  v6 = v12;
  if ( v12 < 0 )
    DoStackCaptureDirect(v12, 0x294u);
  return (unsigned int)v6;
}
