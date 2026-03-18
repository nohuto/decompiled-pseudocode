/*
 * XREFs of ?TryEnableHardwareCursor@COverlayContext@@QEAAXPEAVCCursorVisual@@AEBVCMILMatrix@@PEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801B86B0
 * Callers:
 *     ?CollectCursor@COcclusionContext@@QEAAXPEAVCCursorVisual@@@Z @ 0x1801C03D0 (-CollectCursor@COcclusionContext@@QEAAXPEAVCCursorVisual@@@Z.c)
 * Callees:
 *     ?IsEmpty@?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x18006A3C0 (-IsEmpty@-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x1800A6570 (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     ?Is2DAxisAlignedPreserving@CMILMatrix@@QEBA_NXZ @ 0x1800AE2B4 (-Is2DAxisAlignedPreserving@CMILMatrix@@QEBA_NXZ.c)
 *     ??$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x1800AE2E0 (--$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ?OverlaysEnabled@COverlayContext@@AEBA_NXZ @ 0x1800B9CC8 (-OverlaysEnabled@COverlayContext@@AEBA_NXZ.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??4?$com_ptr_t@VCCursorVisual@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCCursorVisual@@@Z @ 0x1801B7CEC (--4-$com_ptr_t@VCCursorVisual@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCCursorVisual@@@.c)
 *     ?TryEnableHardwareCursor@CCursorVisual@@QEAA_NU_LUID@@IAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@AEBVCMILMatrix@@@Z @ 0x180212104 (-TryEnableHardwareCursor@CCursorVisual@@QEAA_NU_LUID@@IAEBV-$TMilRect@IUMilRectU@@UMil3DRectU@@U.c)
 */

char __fastcall COverlayContext::TryEnableHardwareCursor(COverlayContext *this, __int64 a2, __int128 *a3, __int64 a4)
{
  __int64 v7; // rax
  __int64 v8; // r14
  __int64 v9; // rax
  __int64 v10; // r9
  __int128 v11; // xmm0
  __int64 v12; // r8
  __int64 v13; // rdx
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  signed __int32 v17; // r13d
  CMILMatrix *v18; // rbx
  int v19; // eax
  signed __int32 v20; // r15d
  int v21; // r12d
  __int64 v22; // r9
  __m128 v23; // xmm3
  __m128 v24; // xmm1
  signed __int32 v25; // ecx
  __m128 v26; // xmm1
  int v27; // eax
  __m128 v28; // xmm1
  __m128 v29; // xmm0
  int v30; // ecx
  signed __int32 v31; // eax
  int v32; // ebx
  _QWORD *v33; // rax
  __int64 v35; // [rsp+30h] [rbp-79h] BYREF
  __int128 v36; // [rsp+38h] [rbp-71h] BYREF
  int v37; // [rsp+48h] [rbp-61h]
  _OWORD v38[4]; // [rsp+50h] [rbp-59h] BYREF
  int v39; // [rsp+90h] [rbp-19h]
  __int128 v40; // [rsp+A0h] [rbp-9h] BYREF

  v35 = a4;
  v7 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)this + 184LL))(*(_QWORD *)this);
  v8 = v7;
  if ( v7 )
  {
    v9 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)this + 168LL))(*(_QWORD *)this);
    v11 = *a3;
    v12 = 0LL;
    v13 = v9;
    v39 = *((_DWORD *)a3 + 16);
    v14 = a3[1];
    v38[0] = v11;
    v15 = a3[2];
    v38[1] = v14;
    v16 = a3[3];
    v38[2] = v15;
    v38[3] = v16;
    if ( !*((_BYTE *)this + 11025) )
      goto LABEL_6;
    if ( *((_DWORD *)this + 17) && !COverlayContext::OverlaysEnabled(this) )
    {
      v17 = *(_DWORD *)(v13 + 36);
      v18 = (CMILMatrix *)(v13 + 184);
      v19 = *(_DWORD *)(v13 + 40);
      v20 = v12;
      *((_QWORD *)&v36 + 1) = __PAIR64__(v19, v17);
      v21 = v12;
      *(_QWORD *)&v36 = v12;
    }
    else
    {
LABEL_6:
      v18 = (CMILMatrix *)(v13 + 48);
      v36 = *(_OWORD *)(v13 + 20);
      v19 = HIDWORD(v36);
      v17 = DWORD2(v36);
      v21 = DWORD1(v36);
      v20 = v36;
    }
    v37 = v19;
    if ( v35 == v12 )
      goto LABEL_18;
    LOBYTE(v7) = CMILMatrix::Is2DAxisAlignedPreserving(v18, v13, v12, v10);
    if ( (_BYTE)v7 )
    {
      v40 = 0LL;
      CMILMatrix::Transform2DBoundsHelper<1>((__int64)v18, v35, (float *)&v40, v22);
      v23 = 0LL;
      v24.m128_f32[0] = (float)(int)*(float *)&v40;
      v25 = _mm_cmplt_ss((__m128)(unsigned int)v40, v24).m128_u32[0] + (int)*(float *)&v40;
      if ( v20 < v25 )
        v20 = v25;
      LODWORD(v36) = v20;
      v26.m128_f32[0] = (float)(int)*((float *)&v40 + 1);
      v27 = (int)*((float *)&v40 + 2);
      LODWORD(v35) = _mm_cmplt_ss((__m128)DWORD1(v40), v26).m128_u32[0];
      v28.m128_i32[0] = DWORD2(v40);
      v29 = 0LL;
      if ( v21 < (int)v35 + (int)*((float *)&v40 + 1) )
        v21 = v35 + (int)*((float *)&v40 + 1);
      v30 = v37;
      v29.m128_f32[0] = (float)v27;
      DWORD1(v36) = v21;
      v31 = v27 - _mm_cmplt_ss(v29, v28).m128_u32[0];
      v29.m128_i32[0] = HIDWORD(v40);
      if ( v31 < v17 )
        v17 = v31;
      DWORD2(v36) = v17;
      v23.m128_f32[0] = (float)(int)*((float *)&v40 + 3);
      LODWORD(v35) = _mm_cmplt_ss(v23, v29).m128_u32[0];
      if ( (int)*((float *)&v40 + 3) - (int)v35 < v37 )
        v30 = (int)*((float *)&v40 + 3) - v35;
      HIDWORD(v36) = v30;
      LOBYTE(v7) = TMilRect<unsigned int,MilRectU,Mil3DRectU,RectUniqueness::NotNeeded>::IsEmpty(&v36);
      if ( !(_BYTE)v7 )
      {
LABEL_18:
        CMILMatrix::Multiply((CMILMatrix *)v38, v18, v12, v10);
        v32 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v8 + 56LL))(v8);
        v33 = (_QWORD *)(*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v8 + 48LL))(v8, &v35);
        LOBYTE(v7) = CCursorVisual::TryEnableHardwareCursor(a2, *v33, v32, (unsigned int)&v36, (__int64)v38);
        if ( (_BYTE)v7 )
        {
          if ( *((_QWORD *)this + 1379) != a2 )
          {
            *((_BYTE *)this + 11310) = 1;
            LOBYTE(v7) = (unsigned __int8)wil::com_ptr_t<CCursorVisual,wil::err_returncode_policy>::operator=(
                                            (CResource **)this + 1379,
                                            a2);
          }
          *((_BYTE *)this + 11312) = 1;
        }
      }
    }
  }
  if ( !*((_BYTE *)this + 11312) && *((_QWORD *)this + 1379) == a2 )
    *((_BYTE *)this + 11310) = 1;
  return v7;
}
