/*
 * XREFs of ?InitializeFromSurface@CBitmapInfoBack@DirectComposition@@QEAAXPEAVCAtlasSurface@2@AEBUtagRECT@@PEBU4@@Z @ 0x180030238
 * Callers:
 *     ?CreateFlipUpdate@CBitmapInfoFront@DirectComposition@@QEAAJPEAUIDCompositionSurface@@AEBUtagRECT@@PEAPEAVCBitmapInfoBack@2@PEAUDCOMPOSITION_GUTTERS@@@Z @ 0x18002FFB8 (-CreateFlipUpdate@CBitmapInfoFront@DirectComposition@@QEAAJPEAUIDCompositionSurface@@AEBUtagRECT.c)
 * Callees:
 *     ?CopySurface@CDxDevice@DirectComposition@@QEAAXPEAUID3D11Resource@@II0AEBUtagRECT@@PEAVCScratchSurfaceManager@2@@Z @ 0x18000BE74 (-CopySurface@CDxDevice@DirectComposition@@QEAAXPEAUID3D11Resource@@II0AEBUtagRECT@@PEAVCScratchS.c)
 *     ??$ReleaseInterface@UID3D11Resource@@@@YAXAEAPEAUID3D11Resource@@@Z @ 0x18000BF70 (--$ReleaseInterface@UID3D11Resource@@@@YAXAEAPEAUID3D11Resource@@@Z.c)
 *     ?RestoreGuardRect@CAtlasSurfacePool@DirectComposition@@QEAAXXZ @ 0x180023DD4 (-RestoreGuardRect@CAtlasSurfacePool@DirectComposition@@QEAAXXZ.c)
 *     ?RemoveGuardRect@CAtlasSurfacePool@DirectComposition@@QEAAXXZ @ 0x180034F84 (-RemoveGuardRect@CAtlasSurfacePool@DirectComposition@@QEAAXXZ.c)
 *     ??1SwapDeviceContextState@DirectComposition@@QEAA@XZ @ 0x180035000 (--1SwapDeviceContextState@DirectComposition@@QEAA@XZ.c)
 *     ?IntersectUnsafe@?$TMilRect@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x1800827A4 (-IntersectUnsafe@-$TMilRect@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@QEAA_NA.c)
 *     ??0?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@QEAA@XZ @ 0x18008EA30 (--0-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x180095B40 (__security_check_cookie.c)
 *     ??0SwapDeviceContextState@DirectComposition@@QEAA@PEBVCDxDevice@1@@Z @ 0x18009B9F4 (--0SwapDeviceContextState@DirectComposition@@QEAA@PEBVCDxDevice@1@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall DirectComposition::CBitmapInfoBack::InitializeFromSurface(
        DirectComposition::CBitmapInfoBack *this,
        DirectComposition::CAtlasSurfacePool **a2,
        const struct tagRECT *a3,
        const struct tagRECT *a4)
{
  _DWORD *v4; // rax
  int v8; // ecx
  int v9; // r12d
  int v10; // r15d
  LONG bottom; // eax
  _OWORD *v12; // rbx
  __int64 v13; // rsi
  struct tagRECT *v14; // rbx
  __int64 v15; // rsi
  int v16; // ecx
  unsigned int v17; // ebx
  LONG v18; // r8d
  int v19; // r9d
  int v20; // r10d
  int v21; // edx
  int v22; // ecx
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  unsigned int v26; // esi
  int v27; // r13d
  __int64 v28; // rdx
  unsigned int v29; // eax
  int v30; // r8d
  int v31; // ecx
  int v32; // ecx
  int v33; // r9d
  int v34; // ecx
  int v35; // ecx
  int v36; // r10d
  int v37; // ecx
  int v38; // ecx
  int v39; // r11d
  int v40; // ecx
  int v41; // ecx
  void (__fastcall ***v42)(_QWORD, GUID *, struct ID3D11Resource **); // rcx
  __int64 v43; // r14
  _OWORD *v44; // rbx
  const struct tagRECT *v45; // rsi
  unsigned int v46; // [rsp+40h] [rbp-C0h]
  int v47; // [rsp+44h] [rbp-BCh]
  int v48; // [rsp+48h] [rbp-B8h]
  int v49; // [rsp+50h] [rbp-B0h]
  LONG v50; // [rsp+54h] [rbp-ACh]
  __int64 v51; // [rsp+58h] [rbp-A8h]
  _BYTE v53[16]; // [rsp+68h] [rbp-98h] BYREF
  struct ID3D11Resource *v54[2]; // [rsp+78h] [rbp-88h] BYREF
  struct ID3D11Resource *v55; // [rsp+88h] [rbp-78h] BYREF
  LONG right; // [rsp+90h] [rbp-70h]
  LONG v57; // [rsp+94h] [rbp-6Ch]
  _OWORD v58[4]; // [rsp+A0h] [rbp-60h] BYREF
  struct tagRECT v59[4]; // [rsp+E0h] [rbp-20h] BYREF

  v4 = (_DWORD *)*((_QWORD *)this + 2);
  v8 = v4[20];
  v9 = v4[18] + (v4[22] & 1);
  v49 = v8;
  v10 = v4[19] + ((v4[22] >> 2) & 1);
  bottom = v4[21];
  v50 = bottom;
  if ( a4 )
  {
    v54[0] = *(struct ID3D11Resource **)&a4->left;
    LODWORD(v54[1]) = a4->right;
    bottom = a4->bottom;
  }
  else
  {
    v54[0] = 0LL;
    LODWORD(v54[1]) = v8;
  }
  HIDWORD(v54[1]) = bottom;
  v12 = v58;
  v13 = 4LL;
  do
  {
    TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>::TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>(v12++);
    --v13;
  }
  while ( v13 );
  v14 = v59;
  v15 = 4LL;
  do
  {
    TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>::TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>(v14++);
    --v15;
  }
  while ( v15 );
  v55 = *(struct ID3D11Resource **)&a3->left;
  right = a3->right;
  v57 = a3->bottom;
  if ( !(unsigned __int8)TMilRect<int,tagRECT,MilPointAndSizeL,RectUniqueness::_CMilRectL_>::IntersectUnsafe(&v55, v54) )
  {
    v17 = 1;
    v46 = 1;
    v58[0] = *(_OWORD *)v54;
LABEL_22:
    DirectComposition::SwapDeviceContextState::SwapDeviceContextState(
      (DirectComposition::SwapDeviceContextState *)v53,
      (const struct DirectComposition::CDxDevice *)((*((_QWORD *)this + 3) + 8LL) & ((unsigned __int128)-(__int128)*((unsigned __int64 *)this + 3) >> 64)));
    DirectComposition::CAtlasSurfacePool::RemoveGuardRect(*(DirectComposition::CAtlasSurfacePool **)(*((_QWORD *)this + 2) + 64LL));
    DirectComposition::CAtlasSurfacePool::RemoveGuardRect(a2[8]);
    v26 = *((_DWORD *)a2 + 22);
    v47 = (v26 & 1) + *((_DWORD *)a2 + 18);
    v27 = (v26 >> 2) & 1;
    v51 = v17;
    v48 = v27 + *((_DWORD *)a2 + 19);
    v28 = 0LL;
    v29 = *(_DWORD *)(*((_QWORD *)this + 2) + 88LL);
    do
    {
      v30 = v58[v28];
      if ( !v30 && (v29 & 1) != 0 )
      {
        if ( (v26 & 1) != 0 )
        {
          v30 = -(v29 & 1);
        }
        else
        {
          v31 = *((_DWORD *)this + 26);
          if ( v31 >= SDWORD1(v58[v28]) )
            v31 = DWORD1(v58[v28]);
          *((_DWORD *)this + 26) = v31;
          v32 = *((_DWORD *)this + 27);
          if ( v32 <= SHIDWORD(v58[v28]) )
            v32 = HIDWORD(v58[v28]);
          *((_DWORD *)this + 27) = v32;
        }
      }
      v33 = DWORD1(v58[v28]);
      if ( !v33 && ((v29 >> 2) & 1) != 0 )
      {
        if ( v27 )
        {
          v33 = -((v29 >> 2) & 1);
        }
        else
        {
          v34 = *((_DWORD *)this + 28);
          if ( v34 >= v30 )
            v34 = v30;
          *((_DWORD *)this + 28) = v34;
          v35 = *((_DWORD *)this + 29);
          if ( v35 <= SDWORD2(v58[v28]) )
            v35 = DWORD2(v58[v28]);
          *((_DWORD *)this + 29) = v35;
        }
      }
      v36 = DWORD2(v58[v28]);
      if ( v36 == v49 && ((v29 >> 1) & 1) != 0 )
      {
        if ( (v26 & 2) != 0 )
        {
          v36 += (v29 >> 1) & 1;
        }
        else
        {
          v37 = *((_DWORD *)this + 30);
          if ( v37 >= v33 )
            v37 = v33;
          *((_DWORD *)this + 30) = v37;
          v38 = *((_DWORD *)this + 31);
          if ( v38 <= SHIDWORD(v58[v28]) )
            v38 = HIDWORD(v58[v28]);
          *((_DWORD *)this + 31) = v38;
        }
      }
      v39 = HIDWORD(v58[v28]);
      if ( v39 == v50 && ((v29 >> 3) & 1) != 0 )
      {
        if ( (v26 & 8) != 0 )
        {
          v39 += (v29 >> 3) & 1;
        }
        else
        {
          v40 = *((_DWORD *)this + 32);
          if ( v40 >= v30 )
            v40 = v30;
          *((_DWORD *)this + 32) = v40;
          v41 = *((_DWORD *)this + 33);
          if ( v41 <= v36 )
            v41 = v36;
          *((_DWORD *)this + 33) = v41;
        }
      }
      v59[v28].left = v30 + v47;
      v59[v28].top = v33 + v48;
      v59[v28].right = v36 + v47;
      v59[v28].bottom = v39 + v48;
      LODWORD(v58[v28]) = v9 + v30;
      DWORD1(v58[v28]) = v10 + v33;
      DWORD2(v58[v28]) = v9 + v36;
      HIDWORD(v58[v28++]) = v10 + v39;
      --v51;
    }
    while ( v51 );
    (***((void (__fastcall ****)(_QWORD, GUID *, struct ID3D11Resource **))a2[8] + 2))(
      *((_QWORD *)a2[8] + 2),
      &GUID_dc8e63f3_d12b_4952_b47b_5e45026a862d,
      &v55);
    v42 = *(void (__fastcall ****)(_QWORD, GUID *, struct ID3D11Resource **))(*(_QWORD *)(*((_QWORD *)this + 2) + 64LL)
                                                                            + 16LL);
    (**v42)(v42, &GUID_dc8e63f3_d12b_4952_b47b_5e45026a862d, v54);
    v43 = v46;
    if ( v46 )
    {
      v44 = v58;
      v45 = v59;
      do
      {
        DirectComposition::CDxDevice::CopySurface(
          (DirectComposition::CDxDevice *)(*((_QWORD *)this + 3) + 8LL),
          v54[0],
          *(_DWORD *)v44,
          *((_DWORD *)v44 + 1),
          v55,
          v45++,
          *(struct DirectComposition::CScratchSurfaceManager **)(*((_QWORD *)this + 3) + 304LL));
        ++v44;
        --v43;
      }
      while ( v43 );
    }
    ReleaseInterface<ID3D11Resource>((__int64 *)&v55);
    ReleaseInterface<ID3D11Resource>((__int64 *)v54);
    DirectComposition::CAtlasSurfacePool::RestoreGuardRect(*(DirectComposition::CAtlasSurfacePool **)(*((_QWORD *)this + 2) + 64LL));
    DirectComposition::CAtlasSurfacePool::RestoreGuardRect(a2[8]);
    DirectComposition::SwapDeviceContextState::~SwapDeviceContextState((DirectComposition::SwapDeviceContextState *)v53);
    return;
  }
  v16 = HIDWORD(v55);
  v17 = 0;
  v18 = (LONG)v54[1];
  v19 = (int)v54[0];
  v46 = 0;
  if ( SHIDWORD(v55) > SHIDWORD(v54[0]) )
  {
    v17 = 1;
    v46 = 1;
    *(struct ID3D11Resource **)&v58[0] = v54[0];
    *((_QWORD *)&v58[0] + 1) = __PAIR64__(HIDWORD(v55), (unsigned int)v54[1]);
  }
  v20 = (int)v55;
  v21 = v57;
  if ( (int)v55 > SLODWORD(v54[0]) )
  {
    v23 = v17++;
    v46 = v17;
    LODWORD(v58[v23]) = v54[0];
    DWORD2(v58[v23]) = v20;
    DWORD1(v58[v23]) = v16;
    HIDWORD(v58[v23]) = v21;
  }
  if ( v18 > right )
  {
    v24 = v17++;
    v46 = v17;
    LODWORD(v58[v24]) = right;
    DWORD2(v58[v24]) = v18;
    DWORD1(v58[v24]) = v16;
    HIDWORD(v58[v24]) = v21;
  }
  v22 = HIDWORD(v54[1]);
  if ( SHIDWORD(v54[1]) > v21 )
  {
    if ( v17 < 4 )
    {
      v25 = v17;
      DWORD1(v58[v25]) = v21;
      HIDWORD(v58[v25]) = v22;
      LODWORD(v58[v25]) = v19;
      DWORD2(v58[v25]) = v18;
    }
    v46 = ++v17;
  }
  if ( v17 )
    goto LABEL_22;
}
