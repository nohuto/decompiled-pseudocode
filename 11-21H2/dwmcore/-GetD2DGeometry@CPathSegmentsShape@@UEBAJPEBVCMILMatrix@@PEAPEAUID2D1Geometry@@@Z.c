/*
 * XREFs of ?GetD2DGeometry@CPathSegmentsShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z @ 0x1800CA470
 * Callers:
 *     <none>
 * Callees:
 *     ?GetD2DGeometry@CTransformedGeometryHelper@@AEAAJPEBUID2D1Geometry@@PEAPEAU2@@Z @ 0x180012F0C (-GetD2DGeometry@CTransformedGeometryHelper@@AEAAJPEBUID2D1Geometry@@PEAPEAU2@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18005007C (--2@YAPEAX_K@Z.c)
 *     ?Attach@?$ComPtr@UID2D1Geometry@@@WRL@Microsoft@@QEAAXPEAUID2D1Geometry@@@Z @ 0x18006C0DC (-Attach@-$ComPtr@UID2D1Geometry@@@WRL@Microsoft@@QEAAXPEAUID2D1Geometry@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$IsAffine@$00@CMILMatrix@@AEBA_N_N@Z @ 0x180096590 (--$IsAffine@$00@CMILMatrix@@AEBA_N_N@Z.c)
 *     ?SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z @ 0x1800AEAE0 (-SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z.c)
 *     ?PushIntoSink@CPathData@@AEBAJPEAUID2D1GeometrySink@@@Z @ 0x1800CA8AC (-PushIntoSink@CPathData@@AEBAJPEAUID2D1GeometrySink@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UID2D1PathGeometry@@@WRL@Microsoft@@IEAAKXZ @ 0x1800D2E54 (-InternalRelease@-$ComPtr@UID2D1PathGeometry@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ @ 0x1800D5E60 (-InternalAddRef@-$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x1801000AC (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??4?$ComPtr@UID2D1PathGeometry@@@WRL@Microsoft@@QEAAAEAV012@PEAUID2D1PathGeometry@@@Z @ 0x18026F984 (--4-$ComPtr@UID2D1PathGeometry@@@WRL@Microsoft@@QEAAAEAV012@PEAUID2D1PathGeometry@@@Z.c)
 */

__int64 __fastcall CPathSegmentsShape::GetD2DGeometry(
        CPathSegmentsShape *this,
        const struct CMILMatrix *a2,
        struct ID2D1Geometry **a3)
{
  __int64 v3; // r14
  struct ID2D1Geometry *v4; // rdi
  int v5; // ebx
  __int64 *v8; // r12
  struct ID2D1Geometry *v9; // rdi
  struct ID2D1Geometry *v10; // rcx
  __int64 v11; // rcx
  __int64 v13; // rax
  __int64 (__fastcall *v14)(__int64 *, struct ID2D1Geometry **); // rbx
  int v15; // eax
  __int64 v16; // rcx
  struct ID2D1Geometry *v17; // rbx
  __int64 (__fastcall *v18)(struct ID2D1Geometry *, struct ID2D1GeometrySink **); // rsi
  int v19; // eax
  __int64 v20; // rcx
  int v21; // eax
  __int64 v22; // rcx
  int v23; // eax
  __int64 v24; // rcx
  unsigned int v25; // xmm1_4
  int (__fastcall **v26)(struct ID2D1Geometry *, GUID *, __int64 *); // rax
  unsigned int v27; // xmm0_4
  __int64 v28; // rbx
  void (__fastcall *v29)(__int64, struct ID2D1Geometry **); // rsi
  int v30; // eax
  __int64 v31; // rcx
  __int64 v32; // rcx
  __int64 v33; // rcx
  CTransformedGeometryHelper *v34; // rax
  CTransformedGeometryHelper *v35; // rsi
  int D2DGeometry; // eax
  __int64 v37; // rcx
  struct ID2D1Geometry *v38; // [rsp+30h] [rbp-59h] BYREF
  struct ID2D1Geometry *v39; // [rsp+38h] [rbp-51h] BYREF
  struct ID2D1GeometrySink *v40; // [rsp+40h] [rbp-49h] BYREF
  __int64 v41; // [rsp+48h] [rbp-41h] BYREF
  struct ID2D1Geometry *v42; // [rsp+50h] [rbp-39h] BYREF
  __int64 v43; // [rsp+58h] [rbp-31h] BYREF
  __int128 v44; // [rsp+60h] [rbp-29h] BYREF
  unsigned __int64 v45; // [rsp+70h] [rbp-19h]
  __int128 v46; // [rsp+78h] [rbp-11h] BYREF
  unsigned __int64 v47; // [rsp+88h] [rbp-1h]
  __int128 v48; // [rsp+90h] [rbp+7h] BYREF
  int v49; // [rsp+A0h] [rbp+17h]
  int v50; // [rsp+A4h] [rbp+1Bh]

  v3 = *((_QWORD *)this + 2);
  v4 = 0LL;
  v5 = 0;
  v38 = 0LL;
  v8 = *(__int64 **)(v3 + 40);
  if ( *(_QWORD *)(v3 + 64) )
  {
    v9 = *(struct ID2D1Geometry **)(v3 + 64);
    if ( v38 != v9 )
    {
      if ( v9 )
        (*(void (__fastcall **)(struct ID2D1Geometry *))(*(_QWORD *)v9 + 8LL))(v9);
      v38 = v9;
    }
LABEL_6:
    v4 = v38;
    v38 = 0LL;
    goto LABEL_7;
  }
  v13 = *v8;
  v40 = 0LL;
  v14 = *(__int64 (__fastcall **)(__int64 *, struct ID2D1Geometry **))(v13 + 80);
  Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease(&v38);
  v15 = v14(v8, &v38);
  v5 = v15;
  if ( v15 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0LL, v15, 0x67u);
  }
  else
  {
    v17 = v38;
    v18 = *(__int64 (__fastcall **)(struct ID2D1Geometry *, struct ID2D1GeometrySink **))(*(_QWORD *)v38 + 136LL);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v40);
    v19 = v18(v17, &v40);
    v5 = v19;
    if ( v19 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0LL, v19, 0x68u);
    }
    else
    {
      v21 = CPathData::PushIntoSink((CPathData *)v3, v40);
      v5 = v21;
      if ( v21 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v22, 0LL, 0LL, v21, 0x6Au);
      }
      else
      {
        v23 = (*(__int64 (__fastcall **)(struct ID2D1GeometrySink *))(*(_QWORD *)v40 + 72LL))(v40);
        v5 = v23;
        if ( v23 >= 0 )
        {
          if ( v8 == *(__int64 **)(v3 + 40) )
          {
            if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v3 + 64), (signed __int64)v38, 0LL) )
              Microsoft::WRL::ComPtr<ID2D1PathGeometry>::operator=(&v38, *(_QWORD *)(v3 + 64));
            else
              (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v3 + 64) + 8LL))(*(_QWORD *)(v3 + 64));
          }
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v40);
          goto LABEL_6;
        }
        MilInstrumentationCheckHR_MaybeFailFast(v24, 0LL, 0LL, v23, 0x6Cu);
      }
    }
  }
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v40);
LABEL_7:
  v10 = v38;
  if ( v38 )
  {
    v38 = 0LL;
    (*(void (__fastcall **)(struct ID2D1Geometry *))(*(_QWORD *)v10 + 16LL))(v10);
  }
  if ( v5 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast((__int64)v10, 0LL, 0LL, v5, 0x1Au);
    goto LABEL_17;
  }
  v42 = 0LL;
  v5 = 0;
  if ( v4 )
  {
    if ( a2 )
    {
      if ( !CMILMatrix::IsAffine<1>((__int64)a2, 1) )
      {
        v34 = (CTransformedGeometryHelper *)operator new(0x40uLL);
        v35 = v34;
        if ( v34 )
        {
          *((_DWORD *)v34 + 2) = 0;
          *(_QWORD *)v34 = &CTransformedGeometryHelper::`vftable';
          *((_QWORD *)v34 + 5) = 0LL;
          *((_QWORD *)v34 + 6) = 0LL;
          *((_QWORD *)v34 + 7) = 0LL;
          *((_QWORD *)v34 + 2) = a2;
          *((_QWORD *)v34 + 3) = 0LL;
          *((_QWORD *)v34 + 4) = 0LL;
          (*(void (__fastcall **)(CTransformedGeometryHelper *))(*(_QWORD *)v34 + 8LL))(v34);
        }
        else
        {
          v35 = 0LL;
        }
        Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease(&v42);
        D2DGeometry = CTransformedGeometryHelper::GetD2DGeometry(v35, v4, &v42);
        v5 = D2DGeometry;
        if ( D2DGeometry < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v37, 0LL, 0LL, D2DGeometry, 0x36u);
          if ( v35 )
            (*(void (__fastcall **)(CTransformedGeometryHelper *))(*(_QWORD *)v35 + 16LL))(v35);
          goto LABEL_15;
        }
        if ( v35 )
          (*(void (__fastcall **)(CTransformedGeometryHelper *))(*(_QWORD *)v35 + 16LL))(v35);
        goto LABEL_14;
      }
      v39 = v4;
      Microsoft::WRL::ComPtr<IMessageCallSendHost>::InternalAddRef(&v39);
      v25 = *((_DWORD *)a2 + 1);
      v26 = *(int (__fastcall ***)(struct ID2D1Geometry *, GUID *, __int64 *))v4;
      LODWORD(v46) = *(_DWORD *)a2;
      *(_QWORD *)((char *)&v46 + 4) = __PAIR64__(*((_DWORD *)a2 + 4), v25);
      v27 = *((_DWORD *)a2 + 12);
      HIDWORD(v46) = *((_DWORD *)a2 + 5);
      v47 = __PAIR64__(*((_DWORD *)a2 + 13), v27);
      v41 = 0LL;
      if ( (*v26)(v4, &GUID_2cd906bb_12e2_11dc_9fed_001143a055f9, &v41) >= 0 )
      {
        v28 = v41;
        v29 = *(void (__fastcall **)(__int64, struct ID2D1Geometry **))(*(_QWORD *)v41 + 136LL);
        Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease(&v39);
        v29(v28, &v39);
        v49 = 0;
        v50 = 0;
        v48 = *(_OWORD *)&_xmm;
        (*(void (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v41 + 144LL))(v41, &v48);
        D2D1::Matrix3x2F::SetProduct(
          (D2D1::Matrix3x2F *)&v44,
          (const struct D2D1::Matrix3x2F *)&v48,
          (const struct D2D1::Matrix3x2F *)&v46);
        v46 = v44;
        v47 = v45;
      }
      v30 = (*(__int64 (__fastcall **)(_QWORD, struct ID2D1Geometry *, __int128 *, __int64 *))(*g_DeviceManager + 72LL))(
              g_DeviceManager,
              v39,
              &v46,
              &v43);
      v5 = v30;
      if ( v30 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v31, 0LL, 0LL, v30, 0x2Eu);
        v33 = v41;
        if ( v41 )
        {
          v41 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v33 + 16LL))(v33);
        }
        Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease(&v39);
        goto LABEL_15;
      }
      Microsoft::WRL::ComPtr<ID2D1Geometry>::Attach((__int64 *)&v42, v43);
      v32 = v41;
      if ( v41 )
      {
        v41 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v32 + 16LL))(v32);
      }
    }
    else
    {
      v39 = v4;
      Microsoft::WRL::ComPtr<IMessageCallSendHost>::InternalAddRef(&v39);
      v39 = 0LL;
      v42 = v4;
    }
    Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease(&v39);
  }
LABEL_14:
  *a3 = v42;
  v42 = 0LL;
LABEL_15:
  Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease(&v42);
  if ( v5 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0LL, v5, 0x1Cu);
LABEL_17:
  if ( v4 )
    (*(void (__fastcall **)(struct ID2D1Geometry *))(*(_QWORD *)v4 + 16LL))(v4);
  return (unsigned int)v5;
}
