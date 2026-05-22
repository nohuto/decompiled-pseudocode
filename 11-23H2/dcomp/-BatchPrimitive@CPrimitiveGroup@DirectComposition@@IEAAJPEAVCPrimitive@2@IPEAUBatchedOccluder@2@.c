/*
 * XREFs of ?BatchPrimitive@CPrimitiveGroup@DirectComposition@@IEAAJPEAVCPrimitive@2@IPEAUBatchedOccluder@2@PEAPEAVCPrimitiveBatch@2@@Z @ 0x180032F84
 * Callers:
 *     ?AddPrimitiveInternal@CPrimitiveGroup@DirectComposition@@IEAAJPEAVCPrimitive@2@IPEAUBatchedOccluder@2@1@Z @ 0x180032EB0 (-AddPrimitiveInternal@CPrimitiveGroup@DirectComposition@@IEAAJPEAVCPrimitive@2@IPEAUBatchedOcclu.c)
 * Callees:
 *     ?DoesIntersect@CPrimitiveBatch@DirectComposition@@QEBA_NPEAVCPrimitive@2@PEAVCPrimitiveGroup@2@@Z @ 0x180007DE4 (-DoesIntersect@CPrimitiveBatch@DirectComposition@@QEBA_NPEAVCPrimitive@2@PEAVCPrimitiveGroup@2@@.c)
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?DoesContain@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x18000E03C (-DoesContain@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     ?UnionUnsafe@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x180033B14 (-UnionUnsafe@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     ?AreaUnsafe@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBAMXZ @ 0x18003C0C4 (-AreaUnsafe@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBAMXZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180073310 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     __security_check_cookie @ 0x180095B40 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ?SetColorBrushAtlasSurfacePool@CPrimitive@DirectComposition@@QEAAXPEAVCAtlasSurfacePool@2@@Z @ 0x1800F9374 (-SetColorBrushAtlasSurfacePool@CPrimitive@DirectComposition@@QEAAXPEAVCAtlasSurfacePool@2@@Z.c)
 *     ?SetOpacityBrushAtlasSurfacePool@CPrimitive@DirectComposition@@QEAAXPEAVCAtlasSurfacePool@2@@Z @ 0x1800F9600 (-SetOpacityBrushAtlasSurfacePool@CPrimitive@DirectComposition@@QEAAXPEAVCAtlasSurfacePool@2@@Z.c)
 *     ??$EnsureValuePresentInDynArray@PEAUIDCompositionColorPartner@@@CPrimitiveGroup@DirectComposition@@AEAAJAEAV?$DynArray@PEAUIDCompositionColorPartner@@$0A@@@AEBQEAUIDCompositionColorPartner@@PEAI@Z @ 0x1800F9800 (--$EnsureValuePresentInDynArray@PEAUIDCompositionColorPartner@@@CPrimitiveGroup@DirectCompositio.c)
 *     ??$EnsureValuePresentInDynArray@PEAVCAtlasSurfacePool@DirectComposition@@@CPrimitiveGroup@DirectComposition@@AEAAJAEAV?$DynArray@PEAVCAtlasSurfacePool@DirectComposition@@$0A@@@AEBQEAVCAtlasSurfacePool@1@PEAI@Z @ 0x1800F98B8 (--$EnsureValuePresentInDynArray@PEAVCAtlasSurfacePool@DirectComposition@@@CPrimitiveGroup@Direct.c)
 */

__int64 __fastcall DirectComposition::CPrimitiveGroup::BatchPrimitive(
        DirectComposition::CPrimitiveGroup *this,
        struct DirectComposition::CPrimitive *a2,
        __int32 a3,
        struct DirectComposition::BatchedOccluder *a4,
        struct DirectComposition::CPrimitiveBatch **a5)
{
  struct DirectComposition::CPrimitiveBatch **v5; // r12
  __int64 v6; // rax
  unsigned int v7; // edi
  struct DirectComposition::CPrimitive *v8; // rsi
  DirectComposition::CPrimitiveGroup *v9; // r15
  __int64 v10; // rax
  __int64 v11; // r14
  __int64 v12; // rbx
  struct DirectComposition::CAtlasSurfacePool *v13; // rcx
  __int64 v14; // rax
  float v15; // xmm0_4
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // r8
  unsigned int v19; // ebx
  __int64 v20; // r9
  unsigned int v21; // edx
  int v22; // eax
  _DWORD *v23; // r14
  __int64 v24; // r13
  struct DirectComposition::CAtlasSurfacePool *v25; // r12
  __int64 v26; // rbx
  __int64 v27; // rcx
  __int128 v28; // xmm6
  struct DirectComposition::CAtlasSurfacePool *v29; // r13
  __int64 v30; // rcx
  int v31; // eax
  int v32; // r14d
  _QWORD *v33; // rcx
  __int64 v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rdx
  DirectComposition::CPrimitiveGroup **v37; // rdx
  DirectComposition::CPrimitiveGroup *v38; // rcx
  __int128 v39; // xmm0
  bool v40; // zf
  __int128 v41; // xmm0
  int v42; // eax
  __int64 v43; // rcx
  unsigned int v44; // eax
  __int64 *v45; // rbx
  __int64 v46; // rax
  __int64 v47; // r8
  int v48; // eax
  __int64 v50; // rcx
  __int64 v51; // rax
  int v52; // r15d
  char *v53; // r14
  int v54; // ebx
  __int32 v55; // edi
  char *v56; // rsi
  char *v57; // rax
  __int64 v58; // r10
  char v59; // r11
  unsigned int v60; // edx
  int v61; // ecx
  char v62; // [rsp+28h] [rbp-E0h]
  char v63; // [rsp+29h] [rbp-DFh]
  unsigned int v64; // [rsp+2Ch] [rbp-DCh] BYREF
  int i; // [rsp+30h] [rbp-D8h]
  int v66; // [rsp+34h] [rbp-D4h]
  __int32 v67; // [rsp+38h] [rbp-D0h]
  int v68; // [rsp+3Ch] [rbp-CCh]
  __int128 v69; // [rsp+48h] [rbp-C0h] BYREF
  struct DirectComposition::CAtlasSurfacePool *v70; // [rsp+58h] [rbp-B0h] BYREF
  DirectComposition::CPrimitiveGroup *v71; // [rsp+60h] [rbp-A8h]
  struct DirectComposition::CPrimitiveBatch **v72; // [rsp+68h] [rbp-A0h]
  __int64 v73; // [rsp+70h] [rbp-98h]
  __int64 v74; // [rsp+78h] [rbp-90h] BYREF
  __int64 v75; // [rsp+80h] [rbp-88h]
  __int64 v76; // [rsp+88h] [rbp-80h]
  struct DirectComposition::CPrimitive *v77; // [rsp+90h] [rbp-78h]
  struct DirectComposition::BatchedOccluder *v78; // [rsp+98h] [rbp-70h]
  __int128 v79; // [rsp+A8h] [rbp-60h]
  __int128 v80; // [rsp+B8h] [rbp-50h] BYREF
  __int128 v81; // [rsp+C8h] [rbp-40h]
  __m256i v82; // [rsp+D8h] [rbp-30h]
  __int128 v83; // [rsp+F8h] [rbp-10h]

  v5 = a5;
  v6 = *(_QWORD *)a2;
  v7 = 0;
  v72 = a5;
  v8 = a2;
  i = 0;
  v9 = this;
  v78 = a4;
  v67 = a3;
  v77 = a2;
  v71 = this;
  v10 = (*(__int64 (__fastcall **)(struct DirectComposition::CPrimitive *))(v6 + 80))(a2);
  v11 = *((_QWORD *)v8 + 13);
  v12 = v10;
  v75 = v10;
  v73 = v11;
  if ( v10 )
  {
    *(_QWORD *)&v69 = *(_QWORD *)(*(_QWORD *)(v10 + 16) + 64LL);
    DWORD2(v69) = *(_DWORD *)(v10 + 40);
  }
  else
  {
    *(_QWORD *)&v69 = 0LL;
    DWORD2(v69) = 0;
  }
  if ( v11 )
    v13 = *(struct DirectComposition::CAtlasSurfacePool **)(*(_QWORD *)(v11 + 16) + 64LL);
  else
    v13 = 0LL;
  v14 = *(_QWORD *)v8;
  v70 = v13;
  v74 = (*(__int64 (__fastcall **)(struct DirectComposition::CPrimitive *))(v14 + 88))(v8);
  v68 = (*(__int64 (__fastcall **)(struct DirectComposition::CPrimitive *))(*(_QWORD *)v8 + 88LL))(v8) != 0;
  v15 = TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::AreaUnsafe((char *)v8 + 184);
  v16 = *(_QWORD *)v8;
  LOBYTE(v66) = v15 < 47863.0;
  if ( !(*(unsigned __int8 (__fastcall **)(struct DirectComposition::CPrimitive *))(v16 + 96))(v8) )
  {
    v62 = 1;
LABEL_7:
    v63 = 0;
    goto LABEL_8;
  }
  v62 = 0;
  v63 = 1;
  if ( v15 >= 47863.0 )
    goto LABEL_7;
LABEL_8:
  if ( !v12 )
  {
LABEL_18:
    if ( v11 )
    {
      i = DirectComposition::CPrimitiveGroup::EnsureValuePresentInDynArray<DirectComposition::CAtlasSurfacePool *>(
            v17,
            (char *)v9 + 120,
            &v70,
            &v64);
      v7 = i;
      if ( i >= 0 )
      {
        v17 = v64;
        *((_DWORD *)v8 + 51) = v64;
      }
    }
    goto LABEL_19;
  }
  v17 = *((unsigned int *)v9 + 28);
  v19 = 0;
  v20 = *((_QWORD *)v9 + 11);
  for ( i = 0; v19 < (unsigned int)v17; ++v19 )
  {
    if ( (_QWORD)v69 == *(_QWORD *)(v20 + 16LL * v19) && DWORD2(v69) == *(_DWORD *)(v20 + 16LL * v19 + 8) )
      break;
  }
  if ( v19 != (_DWORD)v17 )
  {
LABEL_17:
    *((_DWORD *)v8 + 50) = v19;
    goto LABEL_18;
  }
  v21 = v17 + 1;
  if ( (int)v17 + 1 < (unsigned int)v17 )
  {
    DoStackCaptureDirect(-2147024362, 0xB5u);
    v7 = -2147024362;
    i = -2147024362;
  }
  else
  {
    if ( v21 <= *((_DWORD *)v9 + 27) )
    {
      *(_OWORD *)(v20 + 16 * v17) = v69;
      *((_DWORD *)v9 + 28) = v21;
      goto LABEL_16;
    }
    v22 = DynArrayImpl<0>::AddMultipleAndSet((char *)v9 + 88, 16LL, v18, &v69);
    i = v22;
    v7 = v22;
    if ( v22 >= 0 )
    {
LABEL_16:
      i = v7;
      goto LABEL_17;
    }
    DoStackCaptureDirect(v22, 0xC0u);
  }
LABEL_19:
  if ( v74 )
  {
    if ( (v7 & 0x80000000) != 0 )
      return v7;
    i = DirectComposition::CPrimitiveGroup::EnsureValuePresentInDynArray<IDCompositionColorPartner *>(
          v17,
          (char *)v9 + 152,
          &v74,
          &v64);
    v7 = i;
    if ( i < 0 )
      return v7;
    v23 = (_DWORD *)((char *)v8 + 208);
    *((_DWORD *)v8 + 52) = v64;
  }
  else
  {
    v23 = (_DWORD *)((char *)v8 + 208);
    if ( (v7 & 0x80000000) != 0 )
      return v7;
  }
  LODWORD(v24) = *((_DWORD *)v9 + 52);
  if ( !(_DWORD)v24 )
  {
LABEL_54:
    v37 = (DirectComposition::CPrimitiveGroup **)*((_QWORD *)v9 + 33);
    v38 = (struct DirectComposition::CPrimitive *)((char *)v8 + 24);
    if ( *v37 == (DirectComposition::CPrimitiveGroup *)((char *)v9 + 256) )
    {
      *(_QWORD *)v38 = (char *)v9 + 256;
      *((_QWORD *)v8 + 4) = v37;
      *v37 = v38;
      v39 = v69;
      *((_QWORD *)v9 + 33) = v38;
      ++*((_DWORD *)v9 + 62);
      v40 = *v23 == -1;
      v81 = v39;
      *(_QWORD *)&v80 = v8;
      v41 = *(_OWORD *)((char *)v8 + 184);
      HIDWORD(v80) = !v40;
      v82.m256i_i64[0] = (__int64)v70;
      v82.m256i_i32[2] = v67;
      DWORD2(v80) = 1;
      *(_OWORD *)((char *)&v82.m256i_u64[1] + 4) = v41;
      if ( v62 || (v82.m256i_i8[28] = 0, v63) )
        v82.m256i_i8[28] = 1;
      LODWORD(v83) = (*(__int64 (__fastcall **)(struct DirectComposition::CPrimitive *))(*(_QWORD *)v8 + 120LL))(v8);
      v42 = (*(__int64 (__fastcall **)(struct DirectComposition::CPrimitive *))(*(_QWORD *)v8 + 128LL))(v8);
      v43 = *((_QWORD *)v8 + 13);
      DWORD1(v83) = v42;
      v44 = 0;
      if ( v43 )
        v44 = *(_DWORD *)(v43 + 116);
      v45 = (__int64 *)((char *)v9 + 184);
      *((_QWORD *)&v83 + 1) = v44;
      v46 = *((unsigned int *)v9 + 52);
      v47 = (unsigned int)(v46 + 1);
      if ( (unsigned int)v47 < (unsigned int)v46 )
      {
        v7 = -2147024362;
        v60 = 181;
        v61 = -2147024362;
      }
      else
      {
        v7 = 0;
        if ( (unsigned int)v47 <= *((_DWORD *)v9 + 51) )
        {
          v50 = 5 * v46;
          v51 = *v45;
          v50 *= 2LL;
          *(_OWORD *)(v51 + 8 * v50) = v80;
          *(_OWORD *)(v51 + 8 * v50 + 16) = v81;
          *(__m256i *)(v51 + 8 * v50 + 32) = v82;
          *(_OWORD *)(v51 + 8 * v50 + 64) = v83;
          *((_DWORD *)v9 + 52) = v47;
LABEL_62:
          if ( v5 )
            *v5 = (struct DirectComposition::CPrimitiveBatch *)(*v45 + 80LL * (unsigned int)(*((_DWORD *)v9 + 52) - 1));
          return v7;
        }
        v48 = DynArrayImpl<0>::AddMultipleAndSet((char *)v9 + 184, 80LL, v47, &v80);
        v7 = v48;
        if ( v48 >= 0 )
          goto LABEL_62;
        v60 = 192;
        v61 = v48;
      }
      DoStackCaptureDirect(v61, v60);
      return v7;
    }
LABEL_121:
    __fastfail(3u);
  }
  v25 = v70;
  while ( 1 )
  {
    v24 = (unsigned int)(v24 - 1);
    v64 = v24;
    v26 = *((_QWORD *)v9 + 23) + 80 * v24;
    v76 = v26;
    if ( !(_BYTE)v66 && (v75 || v73) )
      goto LABEL_66;
    v27 = *(_QWORD *)(v26 + 16);
    if ( (_QWORD)v69 == v27 && DWORD2(v69) == *(_DWORD *)(v26 + 24)
      || (i = v7, !v27) && (i = v7, *(_QWORD *)(v69 + 200)) )
    {
      v28 = v69;
    }
    else
    {
      if ( (_QWORD)v69 || !*(_QWORD *)(v27 + 200) )
        goto LABEL_66;
      v28 = *(_OWORD *)(v26 + 16);
    }
    v29 = *(struct DirectComposition::CAtlasSurfacePool **)(v26 + 32);
    v79 = v28;
    if ( v25 == v29 || !v29 && *((_QWORD *)v25 + 25) )
    {
      v29 = v25;
    }
    else if ( v25 || !*((_QWORD *)v29 + 25) )
    {
      goto LABEL_106;
    }
    if ( *(_DWORD *)(v26 + 12) || v68 || v67 != *(_DWORD *)(v26 + 40) || v62 && !*(_BYTE *)(v26 + 60) )
      goto LABEL_106;
    if ( !*(_BYTE *)(v26 + 60) )
      break;
    i = v7;
    if ( v62 )
      goto LABEL_36;
    i = v7;
    if ( v63 )
      goto LABEL_36;
    i = v7;
LABEL_106:
    LODWORD(v24) = v64;
LABEL_66:
    if ( DirectComposition::CPrimitiveBatch::DoesIntersect((DirectComposition::CPrimitiveBatch *)v26, v8, v9)
      || !(_DWORD)v24 )
    {
      v5 = v72;
      goto LABEL_54;
    }
  }
  if ( DirectComposition::CPrimitiveBatch::DoesIntersect((DirectComposition::CPrimitiveBatch *)v26, v8, v9) )
    goto LABEL_106;
LABEL_36:
  if ( (*(unsigned int (__fastcall **)(struct DirectComposition::CPrimitive *))(*(_QWORD *)v8 + 120LL))(v8) != *(_DWORD *)(v26 + 64)
    || (*(unsigned int (__fastcall **)(struct DirectComposition::CPrimitive *))(*(_QWORD *)v8 + 128LL))(v8) != *(_DWORD *)(v26 + 68) )
  {
    goto LABEL_105;
  }
  v30 = *((_QWORD *)v8 + 13);
  v31 = 0;
  if ( v30 )
    v31 = *(_DWORD *)(v30 + 116);
  if ( v31 != *(_DWORD *)(v26 + 72) || *(_DWORD *)(v26 + 76) )
  {
LABEL_105:
    v25 = v70;
    goto LABEL_106;
  }
  v32 = DWORD2(v79);
  if ( (_QWORD)v69 != (_QWORD)v28 || DWORD2(v69) != DWORD2(v79) )
  {
    *((_DWORD *)v8 + 50) = *(_DWORD *)(*(_QWORD *)v26 + 200LL);
    DirectComposition::CPrimitive::SetColorBrushAtlasSurfacePool(
      v8,
      *(struct DirectComposition::CAtlasSurfacePool **)(v26 + 16));
  }
  if ( v70 != v29 )
  {
    *((_DWORD *)v8 + 51) = *(_DWORD *)(*(_QWORD *)v26 + 204LL);
    DirectComposition::CPrimitive::SetOpacityBrushAtlasSurfacePool(
      v8,
      *(struct DirectComposition::CAtlasSurfacePool **)(v26 + 32));
  }
  if ( *(_QWORD *)(v26 + 16) != (_QWORD)v28
    || *(_DWORD *)(v26 + 24) != v32
    || *(struct DirectComposition::CAtlasSurfacePool **)(v26 + 32) != v29 )
  {
    v52 = *(_DWORD *)(v26 + 8);
    v53 = *(char **)v26;
    v68 = *((_DWORD *)v8 + 50);
    v67 = *((_DWORD *)v8 + 51);
    *(_QWORD *)(v26 + 32) = v29;
    *(_OWORD *)(v26 + 16) = v28;
    if ( v52 )
    {
      v54 = v68;
      v55 = v67;
      v56 = (char *)v71 + 256;
      do
      {
        if ( !(*(__int64 (__fastcall **)(char *))(*(_QWORD *)v53 + 80LL))(v53) )
        {
          DirectComposition::CPrimitive::SetColorBrushAtlasSurfacePool(
            (DirectComposition::CPrimitive *)v53,
            (struct DirectComposition::CAtlasSurfacePool *)v28);
          *((_DWORD *)v53 + 50) = v54;
        }
        if ( !*((_QWORD *)v53 + 13) )
        {
          DirectComposition::CPrimitive::SetOpacityBrushAtlasSurfacePool((DirectComposition::CPrimitive *)v53, v29);
          *((_DWORD *)v53 + 51) = v55;
        }
        v57 = (char *)*((_QWORD *)v53 + 4);
        v53 = v57 - 24;
        if ( v57 == v56 )
          v53 = 0LL;
        --v52;
      }
      while ( v52 );
      v26 = v76;
      v7 = i;
      v8 = v77;
    }
    v9 = v71;
  }
  v33 = (_QWORD *)((char *)v8 + 24);
  v34 = *(_QWORD *)v26 + 24LL;
  v35 = *(_QWORD *)v34;
  if ( *(_QWORD *)(*(_QWORD *)v34 + 8LL) != v34 )
    goto LABEL_121;
  *v33 = v35;
  *((_QWORD *)v8 + 4) = v34;
  *(_QWORD *)(v35 + 8) = v33;
  *(_QWORD *)v34 = v33;
  ++*((_DWORD *)v9 + 62);
  ++*(_DWORD *)(v26 + 8);
  *(_QWORD *)v26 = v8;
  TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::UnionUnsafe(v26 + 44, (char *)v8 + 184);
  if ( *((_BYTE *)v78 + 16)
    && *((_DWORD *)v78 + 11) > v64
    && !TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::DoesContain((__int64)v78, v36) )
  {
    *(_BYTE *)(v58 + 16) = v59;
  }
  if ( v72 )
    *v72 = (struct DirectComposition::CPrimitiveBatch *)v26;
  return v7;
}
