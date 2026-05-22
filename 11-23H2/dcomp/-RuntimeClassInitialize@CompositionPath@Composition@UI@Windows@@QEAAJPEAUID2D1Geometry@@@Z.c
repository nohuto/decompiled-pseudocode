/*
 * XREFs of ?RuntimeClassInitialize@CompositionPath@Composition@UI@Windows@@QEAAJPEAUID2D1Geometry@@@Z @ 0x180040FF8
 * Callers:
 *     ??$MakeAndInitialize2@VCompositionPath@Composition@UI@Windows@@V1234@PEAUID2D1Geometry@@@Details@WRL2@Microsoft@@YAJPEAPEAVCompositionPath@Composition@UI@Windows@@$$QEAPEAUID2D1Geometry@@@Z @ 0x180040D74 (--$MakeAndInitialize2@VCompositionPath@Composition@UI@Windows@@V1234@PEAUID2D1Geometry@@@Details.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@U?$ITypedEventHandler@PEAVHolographicCompositor@Internal@Composition@UI@Windows@@W4HolographicCompositorStatus@2345@@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000FA18 (-InternalRelease@-$ComPtr@U-$ITypedEventHandler@PEAVHolographicCompositor@Internal@Composition@U.c)
 *     ??$As@UID2D1PathGeometry@@@?$ComPtr@UID2D1Geometry@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UID2D1PathGeometry@@@WRL@Microsoft@@@Details@12@@Z @ 0x180040EE0 (--$As@UID2D1PathGeometry@@@-$ComPtr@UID2D1Geometry@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@.c)
 *     ?Open@CPathData@@QEAAJPEAPEAUID2D1GeometrySink@@@Z @ 0x180040F3C (-Open@CPathData@@QEAAJPEAPEAUID2D1GeometrySink@@@Z.c)
 *     ??4?$ComPtr@VCPathData@@@WRL@Microsoft@@QEAAAEAV012@PEAVCPathData@@@Z @ 0x180040F88 (--4-$ComPtr@VCPathData@@@WRL@Microsoft@@QEAAAEAV012@PEAVCPathData@@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x180043FCC (--2@YAPEAX_K@Z.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x18007EC48 (-InternalRelease@-$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     memset_0 @ 0x18009698C (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionPath::RuntimeClassInitialize(
        Windows::UI::Composition::CompositionPath *this,
        struct ID2D1Geometry *a2)
{
  void *v4; // rax
  __int64 v5; // rdi
  CPathData *v6; // rbx
  int v7; // eax
  unsigned int v8; // ebx
  struct ID2D1GeometrySink *v9; // rbx
  int v10; // edi
  __int64 v12; // rdx
  __int64 v13; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  struct ID2D1GeometrySink *v15; // [rsp+58h] [rbp+28h] BYREF
  __int64 v16; // [rsp+60h] [rbp+30h] BYREF
  __int64 (__fastcall ***v17)(_QWORD, GUID *, __int64); // [rsp+68h] [rbp+38h] BYREF

  v15 = 0LL;
  v17 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64))a2;
  if ( a2 )
    (*(void (__fastcall **)(struct ID2D1Geometry *))(*(_QWORD *)a2 + 8LL))(a2);
  v16 = 0LL;
  v4 = operator new(0x50uLL);
  v5 = (__int64)v4;
  if ( v4 )
  {
    memset_0(v4, 0, 0x50uLL);
    *(_DWORD *)(v5 + 52) = 0;
    *(_DWORD *)(v5 + 56) = 0;
    *(_QWORD *)v5 = &CPathData::`vftable';
    *(_QWORD *)(v5 + 24) = 0LL;
    *(_QWORD *)(v5 + 32) = 0LL;
    *(_QWORD *)(v5 + 40) = 0LL;
    *(_QWORD *)(v5 + 64) = 0LL;
    *(_BYTE *)(v5 + 72) = 0;
  }
  else
  {
    v5 = 0LL;
  }
  Microsoft::WRL::ComPtr<CPathData>::operator=((__int64 *)this + 8, v5);
  v6 = (CPathData *)*((_QWORD *)this + 8);
  Microsoft::WRL::ComPtr<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::Internal::HolographicCompositor *,enum Windows::UI::Composition::Internal::HolographicCompositorStatus>>::InternalRelease((__int64 *)&v15);
  v7 = CPathData::Open(v6, &v15);
  v8 = v7;
  if ( v7 < 0 )
  {
    v12 = 68LL;
LABEL_18:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v12,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositionpath.cpp",
      (const char *)(unsigned int)v7);
    goto LABEL_10;
  }
  if ( (int)Microsoft::WRL::ComPtr<ID2D1Geometry>::As<ID2D1PathGeometry>(&v17, (__int64)&v16) >= 0 )
  {
    v9 = v15;
    v10 = (*(__int64 (__fastcall **)(__int64, struct ID2D1GeometrySink *))(*(_QWORD *)v16 + 144LL))(v16, v15);
    if ( v10 >= 0 )
      goto LABEL_8;
    v13 = 72LL;
LABEL_16:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v13,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositionpath.cpp",
      (const char *)(unsigned int)v10);
    v8 = v10;
    goto LABEL_10;
  }
  v9 = v15;
  v10 = (*(__int64 (__fastcall **)(struct ID2D1Geometry *, _QWORD, _QWORD))(*(_QWORD *)a2 + 72LL))(a2, 0LL, 0LL);
  if ( v10 < 0 )
  {
    v13 = 80LL;
    goto LABEL_16;
  }
LABEL_8:
  v7 = (*(__int64 (__fastcall **)(struct ID2D1GeometrySink *))(*(_QWORD *)v9 + 72LL))(v9);
  v8 = v7;
  if ( v7 < 0 )
  {
    v12 = 83LL;
    goto LABEL_18;
  }
  v8 = 0;
LABEL_10:
  Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v16);
  Microsoft::WRL::ComPtr<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::Internal::HolographicCompositor *,enum Windows::UI::Composition::Internal::HolographicCompositorStatus>>::InternalRelease((__int64 *)&v17);
  Microsoft::WRL::ComPtr<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::Internal::HolographicCompositor *,enum Windows::UI::Composition::Internal::HolographicCompositorStatus>>::InternalRelease((__int64 *)&v15);
  return v8;
}
