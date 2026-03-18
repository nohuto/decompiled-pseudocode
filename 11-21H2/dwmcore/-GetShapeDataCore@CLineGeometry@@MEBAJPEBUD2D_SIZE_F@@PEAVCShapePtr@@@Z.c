/*
 * XREFs of ?GetShapeDataCore@CLineGeometry@@MEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x180224340
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x180080A44 (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ??4?$ComPtr@VCPathData@@@WRL@Microsoft@@QEAAAEAV012@PEAVCPathData@@@Z @ 0x1800CE7E8 (--4-$ComPtr@VCPathData@@@WRL@Microsoft@@QEAAAEAV012@PEAVCPathData@@@Z.c)
 *     ??0CPathData@@QEAA@PEAUID2D1Factory@@V?$span@$$CBE$0?0@gsl@@@Z @ 0x1800CE838 (--0CPathData@@QEAA@PEAUID2D1Factory@@V-$span@$$CBE$0-0@gsl@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UID2D1PathGeometry@@@WRL@Microsoft@@IEAAKXZ @ 0x1800D2E54 (-InternalRelease@-$ComPtr@UID2D1PathGeometry@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x1800D36F8 (-Release@CShapePtr@@QEAAXXZ.c)
 *     ??0CPathSegmentsShape@@QEAA@PEBVCPathData@@@Z @ 0x1800EDCE4 (--0CPathSegmentsShape@@QEAA@PEBVCPathData@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x1801000AC (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Open@CPathData@@QEAAJPEAPEAUID2D1SimplifiedGeometrySink@@@Z @ 0x180270078 (-Open@CPathData@@QEAAJPEAPEAUID2D1SimplifiedGeometrySink@@@Z.c)
 */

__int64 __fastcall CLineGeometry::GetShapeDataCore(
        CLineGeometry *this,
        const struct D2D_SIZE_F *a2,
        struct CShapePtr *a3)
{
  __int64 v5; // rax
  __int64 v6; // rcx
  CPathData *v7; // rdi
  unsigned int v8; // ebx
  int v9; // eax
  __int64 v10; // rcx
  struct ID2D1SimplifiedGeometrySink *v11; // rbx
  CPathSegmentsShape *v12; // rax
  __int64 v13; // rcx
  CPathSegmentsShape *v14; // rdi
  unsigned int v16; // [rsp+20h] [rbp-38h]
  struct CPathData *v17[2]; // [rsp+30h] [rbp-28h] BYREF
  __int128 v18; // [rsp+40h] [rbp-18h] BYREF
  struct ID2D1SimplifiedGeometrySink *v19; // [rsp+78h] [rbp+20h] BYREF

  v17[0] = 0LL;
  v19 = 0LL;
  v5 = (__int64)DefaultHeap::Alloc(0x50uLL);
  if ( v5 )
  {
    v18 = 0uLL;
    v5 = CPathData::CPathData(v5, g_DeviceManager, &v18);
  }
  Microsoft::WRL::ComPtr<CPathData>::operator=((__int64 *)v17, v5);
  v7 = v17[0];
  if ( !v17[0] )
  {
    v8 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0LL, -2147024882, 0x53u);
    goto LABEL_14;
  }
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v19);
  v9 = CPathData::Open(v7, &v19);
  v8 = v9;
  if ( v9 < 0 )
  {
    v16 = 85;
    goto LABEL_13;
  }
  v11 = v19;
  (*(void (__fastcall **)(struct ID2D1SimplifiedGeometrySink *, unsigned __int64, __int64))(*(_QWORD *)v19 + 40LL))(
    v19,
    _mm_unpacklo_ps((__m128)*((unsigned int *)this + 36), (__m128)*((unsigned int *)this + 37)).m128_u64[0],
    1LL);
  (*(void (__fastcall **)(struct ID2D1SimplifiedGeometrySink *, char *, __int64))(*(_QWORD *)v11 + 48LL))(
    v11,
    (char *)this + 152,
    1LL);
  (*(void (__fastcall **)(struct ID2D1SimplifiedGeometrySink *, _QWORD))(*(_QWORD *)v11 + 64LL))(v11, 0LL);
  v9 = (*(__int64 (__fastcall **)(struct ID2D1SimplifiedGeometrySink *))(*(_QWORD *)v11 + 72LL))(v11);
  v8 = v9;
  if ( v9 < 0 )
  {
    v16 = 91;
LABEL_13:
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0LL, v9, v16);
    goto LABEL_14;
  }
  v12 = (CPathSegmentsShape *)DefaultHeap::Alloc(0x18uLL);
  if ( v12 && (v14 = CPathSegmentsShape::CPathSegmentsShape(v12, v7)) != 0LL )
  {
    CShapePtr::Release(a3);
    *(_QWORD *)a3 = v14;
    *((_BYTE *)a3 + 8) = 1;
  }
  else
  {
    v8 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0LL, -2147024882, 0x5Eu);
  }
LABEL_14:
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v19);
  Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease((__int64 *)v17);
  return v8;
}
