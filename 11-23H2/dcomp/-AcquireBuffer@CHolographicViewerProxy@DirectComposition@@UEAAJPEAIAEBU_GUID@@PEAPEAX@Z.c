/*
 * XREFs of ?AcquireBuffer@CHolographicViewerProxy@DirectComposition@@UEAAJPEAIAEBU_GUID@@PEAPEAX@Z @ 0x1800E7C20
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?InternalRelease@?$ComPtr@U?$ITypedEventHandler@PEAVHolographicCompositor@Internal@Composition@UI@Windows@@W4HolographicCompositorStatus@2345@@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000FA18 (-InternalRelease@-$ComPtr@U-$ITypedEventHandler@PEAVHolographicCompositor@Internal@Composition@U.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CHolographicViewerProxy::AcquireBuffer(
        DirectComposition::CHolographicViewerProxy *this,
        unsigned int *a2,
        const struct _GUID *a3,
        void **a4)
{
  __int64 v5; // rdi
  unsigned int v8; // ebx
  unsigned int v9; // edx
  int v10; // ecx
  __int64 (__fastcall *v11)(__int64, unsigned int *, _QWORD); // rbx
  int v12; // eax
  __int64 (__fastcall ***v14)(_QWORD, const struct _GUID *, void **); // [rsp+40h] [rbp+8h] BYREF

  v14 = 0LL;
  v5 = *((_QWORD *)this + 3);
  if ( !v5 )
  {
    v8 = -2147019873;
    v9 = 163;
    v10 = -2147019873;
LABEL_8:
    DoStackCaptureDirect(v10, v9);
    goto LABEL_9;
  }
  v11 = *(__int64 (__fastcall **)(__int64, unsigned int *, _QWORD))(*(_QWORD *)v5 + 56LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::Internal::HolographicCompositor *,enum Windows::UI::Composition::Internal::HolographicCompositorStatus>>::InternalRelease((__int64 *)&v14);
  v12 = v11(v5, a2, &v14);
  v8 = v12;
  if ( v12 < 0 )
  {
    v9 = 165;
    goto LABEL_7;
  }
  v12 = (**v14)(v14, a3, a4);
  v8 = v12;
  if ( v12 < 0 )
  {
    v9 = 166;
LABEL_7:
    v10 = v12;
    goto LABEL_8;
  }
LABEL_9:
  Microsoft::WRL::ComPtr<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::Internal::HolographicCompositor *,enum Windows::UI::Composition::Internal::HolographicCompositorStatus>>::InternalRelease((__int64 *)&v14);
  return v8;
}
