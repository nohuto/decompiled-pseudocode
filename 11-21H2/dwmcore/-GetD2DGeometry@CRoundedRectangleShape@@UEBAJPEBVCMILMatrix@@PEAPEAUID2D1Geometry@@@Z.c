/*
 * XREFs of ?GetD2DGeometry@CRoundedRectangleShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z @ 0x18006C130
 * Callers:
 *     <none>
 * Callees:
 *     ?GetD2DGeometry@CTransformedGeometryHelper@@AEAAJPEBUID2D1Geometry@@PEAPEAU2@@Z @ 0x180012F0C (-GetD2DGeometry@CTransformedGeometryHelper@@AEAAJPEBUID2D1Geometry@@PEAPEAU2@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18005007C (--2@YAPEAX_K@Z.c)
 *     ?CreateIntersectedD2DGeometry@CRoundedRectangleShape@@AEBAJPEAPEAUID2D1Geometry@@@Z @ 0x18006B960 (-CreateIntersectedD2DGeometry@CRoundedRectangleShape@@AEBAJPEAPEAUID2D1Geometry@@@Z.c)
 *     ?Attach@?$ComPtr@UID2D1Geometry@@@WRL@Microsoft@@QEAAXPEAUID2D1Geometry@@@Z @ 0x18006C0DC (-Attach@-$ComPtr@UID2D1Geometry@@@WRL@Microsoft@@QEAAXPEAUID2D1Geometry@@@Z.c)
 *     ?CreateNonIntersectedD2DGeometry@CRoundedRectangleShape@@AEBAJPEAPEAUID2D1Geometry@@@Z @ 0x18006C96C (-CreateNonIntersectedD2DGeometry@CRoundedRectangleShape@@AEBAJPEAPEAUID2D1Geometry@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?HasIntersectingCorners@CRoundedRectangleGeometryData@@QEBA_NXZ @ 0x1800865D4 (-HasIntersectingCorners@CRoundedRectangleGeometryData@@QEBA_NXZ.c)
 *     ??$IsAffine@$00@CMILMatrix@@AEBA_N_N@Z @ 0x180096590 (--$IsAffine@$00@CMILMatrix@@AEBA_N_N@Z.c)
 *     ?SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z @ 0x1800AEAE0 (-SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z.c)
 *     ?InternalRelease@?$ComPtr@UID2D1PathGeometry@@@WRL@Microsoft@@IEAAKXZ @ 0x1800D2E54 (-InternalRelease@-$ComPtr@UID2D1PathGeometry@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ @ 0x1800D5E60 (-InternalAddRef@-$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CRoundedRectangleShape::GetD2DGeometry(
        CRoundedRectangleShape *this,
        const struct CMILMatrix *a2,
        struct ID2D1Geometry **a3)
{
  __int64 v4; // rcx
  const struct CMILMatrix *v6; // r14
  __int64 v7; // rax
  int v8; // edi
  struct ID2D1Geometry *v9; // rsi
  struct ID2D1Geometry *v10; // rcx
  unsigned int v11; // esi
  int v13; // eax
  unsigned int v14; // ecx
  int v15; // ebx
  __int64 v16; // rcx
  int v17; // eax
  unsigned int v18; // ecx
  CTransformedGeometryHelper *v19; // rax
  CTransformedGeometryHelper *v20; // rbx
  int D2DGeometry; // eax
  unsigned int v22; // ecx
  unsigned int v23; // ecx
  unsigned int v24; // xmm1_4
  int (__fastcall **v25)(struct ID2D1Geometry *, GUID *, __int64 *); // rax
  unsigned int v26; // xmm0_4
  __int64 v27; // rbx
  void (__fastcall *v28)(__int64, struct ID2D1Geometry **); // rdi
  int v29; // eax
  unsigned int v30; // ecx
  __int64 v31; // rcx
  __int64 v32; // rcx
  struct ID2D1Geometry *v33; // [rsp+30h] [rbp-49h] BYREF
  __int64 v34; // [rsp+38h] [rbp-41h] BYREF
  struct ID2D1Geometry *v35; // [rsp+40h] [rbp-39h] BYREF
  __int64 v36; // [rsp+48h] [rbp-31h] BYREF
  __int128 v37; // [rsp+50h] [rbp-29h] BYREF
  unsigned __int64 v38; // [rsp+60h] [rbp-19h]
  __int128 v39; // [rsp+68h] [rbp-11h] BYREF
  unsigned __int64 v40; // [rsp+78h] [rbp-1h]
  __int128 v41; // [rsp+80h] [rbp+7h] BYREF
  int v42; // [rsp+90h] [rbp+17h]
  int v43; // [rsp+94h] [rbp+1Bh]

  v4 = *((_QWORD *)this + 2);
  v6 = a2;
  if ( !*(_QWORD *)(v4 + 72) )
  {
    v33 = 0LL;
    if ( CRoundedRectangleGeometryData::HasIntersectingCorners((CRoundedRectangleGeometryData *)(v4 + 16)) )
    {
      Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease(&v33);
      v13 = CRoundedRectangleShape::CreateIntersectedD2DGeometry(this, &v33);
      v15 = v13;
      if ( v13 >= 0 )
      {
LABEL_12:
        v16 = -(__int64)(_InterlockedCompareExchange64(
                           (volatile signed __int64 *)(*((_QWORD *)this + 2) + 72LL),
                           (signed __int64)v33,
                           0LL) != 0);
        v33 = (struct ID2D1Geometry *)(v16 & (unsigned __int64)v33);
        Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease(&v33);
        goto LABEL_2;
      }
      MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0xDDu, 0LL);
      v11 = v15;
    }
    else
    {
      Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease(&v33);
      v17 = CRoundedRectangleShape::CreateNonIntersectedD2DGeometry(this, &v33);
      v15 = v17;
      v11 = v17;
      if ( v17 >= 0 )
        goto LABEL_12;
      MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, v17, 0xE1u, 0LL);
    }
    Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease(&v33);
    MilInstrumentationCheckHR_MaybeFailFast(v23, 0LL, 0, v15, 0xCCu, 0LL);
    return v11;
  }
LABEL_2:
  v7 = *((_QWORD *)this + 2);
  v8 = 0;
  v33 = 0LL;
  v9 = *(struct ID2D1Geometry **)(v7 + 72);
  if ( !v9 )
  {
LABEL_5:
    v10 = 0LL;
    *a3 = v33;
    goto LABEL_6;
  }
  if ( !v6 )
  {
    (*(void (__fastcall **)(struct ID2D1Geometry *))(*(_QWORD *)v9 + 8LL))(v9);
    v33 = v9;
    goto LABEL_5;
  }
  LOBYTE(a2) = 1;
  if ( (unsigned __int8)CMILMatrix::IsAffine<1>(v6, a2) )
  {
    v35 = v9;
    Microsoft::WRL::ComPtr<IMessageCallSendHost>::InternalAddRef(&v35);
    v24 = *((_DWORD *)v6 + 1);
    v25 = *(int (__fastcall ***)(struct ID2D1Geometry *, GUID *, __int64 *))v9;
    LODWORD(v39) = *(_DWORD *)v6;
    *(_QWORD *)((char *)&v39 + 4) = __PAIR64__(*((_DWORD *)v6 + 4), v24);
    v26 = *((_DWORD *)v6 + 12);
    HIDWORD(v39) = *((_DWORD *)v6 + 5);
    v40 = __PAIR64__(*((_DWORD *)v6 + 13), v26);
    v34 = 0LL;
    if ( (*v25)(v9, &GUID_2cd906bb_12e2_11dc_9fed_001143a055f9, &v34) >= 0 )
    {
      v27 = v34;
      v28 = *(void (__fastcall **)(__int64, struct ID2D1Geometry **))(*(_QWORD *)v34 + 136LL);
      Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease(&v35);
      v28(v27, &v35);
      v42 = 0;
      v43 = 0;
      v41 = *(_OWORD *)&_xmm;
      (*(void (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v34 + 144LL))(v34, &v41);
      D2D1::Matrix3x2F::SetProduct(
        (D2D1::Matrix3x2F *)&v37,
        (const struct D2D1::Matrix3x2F *)&v41,
        (const struct D2D1::Matrix3x2F *)&v39);
      v39 = v37;
      v40 = v38;
    }
    v29 = (*(__int64 (__fastcall **)(_QWORD, struct ID2D1Geometry *, __int128 *, __int64 *))(*g_DeviceManager + 72LL))(
            g_DeviceManager,
            v35,
            &v39,
            &v36);
    v8 = v29;
    v11 = v29;
    if ( v29 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v30, 0LL, 0, v29, 0x2Eu, 0LL);
      v32 = v34;
      if ( v34 )
      {
        v34 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v32 + 16LL))(v32);
      }
      Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease(&v35);
      goto LABEL_33;
    }
    Microsoft::WRL::ComPtr<ID2D1Geometry>::Attach((__int64 *)&v33, v36);
    v31 = v34;
    if ( v34 )
    {
      v34 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 16LL))(v31);
    }
    Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease(&v35);
    goto LABEL_5;
  }
  v19 = (CTransformedGeometryHelper *)operator new(0x40uLL);
  v20 = v19;
  if ( v19 )
  {
    *((_DWORD *)v19 + 2) = 0;
    *(_QWORD *)v19 = &CTransformedGeometryHelper::`vftable';
    *((_QWORD *)v19 + 5) = 0LL;
    *((_QWORD *)v19 + 6) = 0LL;
    *((_QWORD *)v19 + 7) = 0LL;
    *((_QWORD *)v19 + 2) = v6;
    *((_QWORD *)v19 + 3) = 0LL;
    *((_QWORD *)v19 + 4) = 0LL;
    (*(void (__fastcall **)(CTransformedGeometryHelper *))(*(_QWORD *)v19 + 8LL))(v19);
  }
  else
  {
    v20 = 0LL;
  }
  Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease(&v33);
  D2DGeometry = CTransformedGeometryHelper::GetD2DGeometry(v20, v9, &v33);
  v8 = D2DGeometry;
  if ( D2DGeometry >= 0 )
  {
    if ( v20 )
      (*(void (__fastcall **)(CTransformedGeometryHelper *))(*(_QWORD *)v20 + 16LL))(v20);
    goto LABEL_5;
  }
  MilInstrumentationCheckHR_MaybeFailFast(v22, 0LL, 0, D2DGeometry, 0x36u, 0LL);
  if ( v20 )
    (*(void (__fastcall **)(CTransformedGeometryHelper *))(*(_QWORD *)v20 + 16LL))(v20);
  v10 = v33;
LABEL_6:
  if ( v10 )
    (*(void (__fastcall **)(struct ID2D1Geometry *))(*(_QWORD *)v10 + 16LL))(v10);
  v11 = v8;
  if ( v8 < 0 )
LABEL_33:
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v10, 0LL, 0, v8, 0xCDu, 0LL);
  return v11;
}
