/*
 * XREFs of ?QueryBufferInfo@CSynchronizationContext@Flip@@QEAAJPEAXPEAW4DXGI_FORMAT@@PEAU_LUID@@@Z @ 0x1801AC4F0
 * Callers:
 *     ?QueryBufferInfo@CFlipProducer@Flip@@UEAAJPEAXPEAW4DXGI_FORMAT@@PEAU_LUID@@@Z @ 0x1801AA9A0 (-QueryBufferInfo@CFlipProducer@Flip@@UEAAJPEAXPEAW4DXGI_FORMAT@@PEAU_LUID@@@Z.c)
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?InternalRelease@?$ComPtr@U?$ITypedEventHandler@PEAVHolographicCompositor@Internal@Composition@UI@Windows@@W4HolographicCompositorStatus@2345@@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000FA18 (-InternalRelease@-$ComPtr@U-$ITypedEventHandler@PEAVHolographicCompositor@Internal@Composition@U.c)
 *     __security_check_cookie @ 0x180095B40 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ?HRESULTFromNTSTATUS@@YAJJ@Z @ 0x1801B246C (-HRESULTFromNTSTATUS@@YAJJ@Z.c)
 */

__int64 __fastcall Flip::CSynchronizationContext::QueryBufferInfo(
        Flip::CSynchronizationContext *this,
        void *a2,
        enum DXGI_FORMAT *a3,
        struct _LUID *a4)
{
  __int64 v4; // rdi
  __int64 (__fastcall *v8)(__int64, void *, GUID *, __int64 *); // rbx
  int v9; // eax
  unsigned int v10; // ebx
  int v11; // eax
  unsigned int v12; // edx
  __int64 v14; // [rsp+30h] [rbp-39h] BYREF
  __int128 v15; // [rsp+38h] [rbp-31h] BYREF
  struct _LUID v16; // [rsp+48h] [rbp-21h]
  _BYTE v17[16]; // [rsp+50h] [rbp-19h] BYREF
  enum DXGI_FORMAT v18; // [rsp+60h] [rbp-9h]

  v4 = *(_QWORD *)this;
  v14 = 0LL;
  v16 = 0LL;
  v15 = 0LL;
  v8 = *(__int64 (__fastcall **)(__int64, void *, GUID *, __int64 *))(*(_QWORD *)v4 + 384LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::Internal::HolographicCompositor *,enum Windows::UI::Composition::Internal::HolographicCompositorStatus>>::InternalRelease(&v14);
  v9 = v8(v4, a2, &GUID_6f15aaf2_d208_4e89_9ab4_489535d34f9c, &v14);
  v10 = v9;
  if ( v9 < 0 )
  {
    v12 = 112;
    goto LABEL_6;
  }
  (*(void (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v14 + 80LL))(v14, v17);
  *((_QWORD *)&v15 + 1) = a2;
  v11 = NtGdiDdDDIGetSharedResourceAdapterLuidFlipManager(&v15);
  v9 = HRESULTFromNTSTATUS(v11);
  v10 = v9;
  if ( v9 < 0 )
  {
    v12 = 119;
LABEL_6:
    DoStackCaptureDirect(v9, v12);
    goto LABEL_7;
  }
  *a3 = v18;
  *a4 = v16;
LABEL_7:
  Microsoft::WRL::ComPtr<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::Internal::HolographicCompositor *,enum Windows::UI::Composition::Internal::HolographicCompositorStatus>>::InternalRelease(&v14);
  return v10;
}
