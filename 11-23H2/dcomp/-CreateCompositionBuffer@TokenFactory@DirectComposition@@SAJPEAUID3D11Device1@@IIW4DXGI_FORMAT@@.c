/*
 * XREFs of ?CreateCompositionBuffer@TokenFactory@DirectComposition@@SAJPEAUID3D11Device1@@IIW4DXGI_FORMAT@@HIIPEAPEAXPEAPEAUIUnknown@@@Z @ 0x180034B60
 * Callers:
 *     ?CreateCompositionBuffer@CDxDevice@DirectComposition@@QEAAJIIW4DXGI_FORMAT@@HIIPEAPEAXPEAPEAUIUnknown@@@Z @ 0x180034A9C (-CreateCompositionBuffer@CDxDevice@DirectComposition@@QEAAJIIW4DXGI_FORMAT@@HIIPEAPEAXPEAPEAUIUn.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@U?$ITypedEventHandler@PEAVHolographicCompositor@Internal@Composition@UI@Windows@@W4HolographicCompositorStatus@2345@@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000FA18 (-InternalRelease@-$ComPtr@U-$ITypedEventHandler@PEAVHolographicCompositor@Internal@Composition@U.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::TokenFactory::CreateCompositionBuffer(
        struct ID3D11Device1 *a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        int a5,
        unsigned int a6,
        unsigned int a7,
        void **a8,
        struct IUnknown **a9)
{
  struct ID3D11Device1Vtbl *lpVtbl; // rax
  HRESULT (__stdcall *QueryInterface)(ID3D11Device1 *, const IID *const, void **); // rbx
  int v15; // eax
  unsigned int v16; // ebx
  __int64 v18; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  __int64 v20; // [rsp+80h] [rbp+8h] BYREF

  lpVtbl = a1->lpVtbl;
  v20 = 0LL;
  QueryInterface = lpVtbl->QueryInterface;
  Microsoft::WRL::ComPtr<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::Internal::HolographicCompositor *,enum Windows::UI::Composition::Internal::HolographicCompositorStatus>>::InternalRelease(&v20);
  v15 = ((__int64 (__fastcall *)(struct ID3D11Device1 *, GUID *, __int64 *))QueryInterface)(
          a1,
          &GUID_26c5dc23_e49c_4b0a_8f79_e7b1ac804d32,
          &v20);
  v16 = v15;
  if ( v15 < 0 )
  {
    v18 = 26LL;
LABEL_7:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v18,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\dll\\kerneltokenfactory.cpp",
      (const char *)(unsigned int)v15);
    goto LABEL_4;
  }
  v15 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, _DWORD, unsigned int, unsigned int, GUID *, void **, struct IUnknown **))(*(_QWORD *)v20 + 96LL))(
          v20,
          a2,
          a3,
          a4,
          0,
          a6,
          a7,
          &GUID_00000000_0000_0000_c000_000000000046,
          a8,
          a9);
  v16 = v15;
  if ( v15 < 0 )
  {
    v18 = 36LL;
    goto LABEL_7;
  }
  v16 = 0;
LABEL_4:
  Microsoft::WRL::ComPtr<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::Internal::HolographicCompositor *,enum Windows::UI::Composition::Internal::HolographicCompositorStatus>>::InternalRelease(&v20);
  return v16;
}
