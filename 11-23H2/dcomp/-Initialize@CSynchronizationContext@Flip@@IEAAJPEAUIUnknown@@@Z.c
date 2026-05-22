/*
 * XREFs of ?Initialize@CSynchronizationContext@Flip@@IEAAJPEAUIUnknown@@@Z @ 0x1801AC2CC
 * Callers:
 *     ?Create@CSynchronizationContext@Flip@@SAJPEAUIUnknown@@PEAPEAV12@@Z @ 0x1801AC238 (-Create@CSynchronizationContext@Flip@@SAJPEAUIUnknown@@PEAPEAV12@@Z.c)
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?InternalRelease@?$ComPtr@U?$ITypedEventHandler@PEAVHolographicCompositor@Internal@Composition@UI@Windows@@W4HolographicCompositorStatus@2345@@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000FA18 (-InternalRelease@-$ComPtr@U-$ITypedEventHandler@PEAVHolographicCompositor@Internal@Composition@U.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Flip::CSynchronizationContext::Initialize(Flip::CSynchronizationContext *this, struct IUnknown *a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  __int64 (__fastcall ***v5)(_QWORD, _QWORD, _QWORD); // rbx
  __int64 (__fastcall *v6)(_QWORD, GUID *, Flip::CSynchronizationContext *); // rsi
  __int64 (__fastcall ***v7)(_QWORD, _QWORD, _QWORD); // rbx
  __int64 (__fastcall *v8)(_QWORD, GUID *, Flip::CSynchronizationContext *); // rdi
  unsigned int v9; // edx
  __int64 (__fastcall ***v10)(_QWORD, _QWORD, _QWORD); // rcx
  __int64 (__fastcall ***v12)(_QWORD, GUID *, Flip::CSynchronizationContext *); // [rsp+38h] [rbp+10h] BYREF

  v12 = 0LL;
  v3 = ((__int64 (__fastcall *)(struct IUnknown *, GUID *, _QWORD))a2->lpVtbl->QueryInterface)(
         a2,
         &GUID_9ea90e78_15ac_48b4_83c9_664cab2f71cd,
         &v12);
  v4 = v3;
  if ( v3 < 0 )
  {
    v9 = 87;
  }
  else
  {
    v5 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v12;
    v6 = (*v12)[15];
    Microsoft::WRL::ComPtr<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::Internal::HolographicCompositor *,enum Windows::UI::Composition::Internal::HolographicCompositorStatus>>::InternalRelease((__int64 *)this + 1);
    v3 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD), char *))v6)(v5, (char *)this + 8);
    v4 = v3;
    if ( v3 < 0 )
    {
      v9 = 80;
    }
    else
    {
      v7 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v12;
      v8 = **v12;
      Microsoft::WRL::ComPtr<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::Internal::HolographicCompositor *,enum Windows::UI::Composition::Internal::HolographicCompositorStatus>>::InternalRelease((__int64 *)this);
      v3 = v8(v7, &GUID_a04bfb29_08ef_43d6_a49c_a9bdbdcbe686, this);
      v4 = v3;
      if ( v3 >= 0 )
        goto LABEL_8;
      v9 = 81;
    }
  }
  DoStackCaptureDirect(v3, v9);
LABEL_8:
  v10 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v12;
  if ( v12 )
  {
    v12 = 0LL;
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD)))(*v10)[2])(v10);
  }
  return v4;
}
