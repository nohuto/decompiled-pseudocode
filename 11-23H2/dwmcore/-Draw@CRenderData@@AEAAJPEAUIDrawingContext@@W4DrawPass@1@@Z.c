/*
 * XREFs of ?Draw@CRenderData@@AEAAJPEAUIDrawingContext@@W4DrawPass@1@@Z @ 0x18007C460
 * Callers:
 *     ?Draw@CRenderData@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x18007C424 (-Draw@CRenderData@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 *     ?AddOcclusionInformation@CRenderData@@UEAAJPEAVCOcclusionContext@@AEBUD2D_SIZE_F@@@Z @ 0x18007C448 (-AddOcclusionInformation@CRenderData@@UEAAJPEAVCOcclusionContext@@AEBUD2D_SIZE_F@@@Z.c)
 *     ?GetBounds@CRenderData@@UEBAJAEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800D9994 (-GetBounds@CRenderData@@UEBAJAEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointA.c)
 * Callees:
 *     ?GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ @ 0x180043C4C (-GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ.c)
 *     ?DrawCommandAsLegacy@CRenderData@@AEAAJPEAUIDrawingContext@@W4DrawPass@1@IV?$span@$$CBE$0?0@gsl@@@Z @ 0x18007CC00 (-DrawCommandAsLegacy@CRenderData@@AEAAJPEAUIDrawingContext@@W4DrawPass@1@IV-$span@$$CBE$0-0@gsl@.c)
 *     ?TryDrawCommandAsDrawList@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListCache@@PEAVCDrawListEntryBuilder@@IV?$span@$$CBE$0?0@gsl@@PEA_N@Z @ 0x18007CE60 (-TryDrawCommandAsDrawList@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListCache@@PEAVCDrawLi.c)
 *     ?GetDrawListCacheForCommandRun@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCTreeData@@IPEAPEAVCDrawListCache@@@Z @ 0x18007D4D0 (-GetDrawListCacheForCommandRun@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCTreeData@@IPEAPEAVCDr.c)
 *     ?FlushDrawListCache@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListCache@@PEAVCDrawListEntryBuilder@@@Z @ 0x18007D580 (-FlushDrawListCache@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListCache@@PEAVCDrawListEntr.c)
 *     ?GetNextItemSafe@CDataStreamReader@@QEAAJPEAIPEAPEAX0@Z @ 0x180096168 (-GetNextItemSafe@CDataStreamReader@@QEAAJPEAIPEAPEAX0@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18009DA0C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?InternalRelease@?$CMILRefCountBaseT@UIMILRefCount@@@@IEAAKXZ @ 0x1800D0654 (-InternalRelease@-$CMILRefCountBaseT@UIMILRefCount@@@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@VCGenericInkTipPointSource@@@WRL@Microsoft@@IEAAKXZ @ 0x1800E20AC (-InternalRelease@-$ComPtr@VCGenericInkTipPointSource@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x18010EE30 (__security_check_cookie.c)
 *     _alloca_probe @ 0x18011B4D0 (_alloca_probe.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18011B6B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?clear_region@?$vector_facade@V?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@V?$buffer_impl@V?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@$09$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1801B1A24 (-clear_region@-$vector_facade@V-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeede.c)
 *     ?clear_region@?$vector_facade@GV?$buffer_impl@G$0KO@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1801FAE4C (-clear_region@-$vector_facade@GV-$buffer_impl@G$0KO@$00Vliberal_expansion_policy@detail@@@detail.c)
 */

__int64 __fastcall CRenderData::Draw(unsigned int *a1, unsigned int *a2, unsigned __int64 a3)
{
  CRenderData *v3; // r12
  unsigned int *v4; // rbx
  unsigned int **v5; // rax
  struct CTreeData *p_Blink; // rdi
  __int64 v7; // r9
  unsigned int *v8; // r13
  struct CDrawingContext *v9; // r15
  struct CDrawListCache *v10; // r10
  unsigned int v11; // r11d
  unsigned int **v12; // r14
  unsigned __int64 v13; // rax
  int v14; // esi
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // rcx
  int i; // ebx
  _QWORD *v18; // rbx
  _QWORD *v19; // rdi
  __int64 v20; // rax
  __int64 v21; // rcx
  _BYTE *v22; // rbx
  _BYTE *v23; // rbx
  __int64 v24; // r8
  _BYTE *v25; // rbx
  __int64 v26; // r8
  __int64 v27; // rax
  void *v28; // rbx
  bool v29; // zf
  __int64 v30; // rcx
  __int64 v32; // rax
  struct _LIST_ENTRY *v33; // r14
  CVisual *v34; // rsi
  struct _LIST_ENTRY *Flink; // rcx
  unsigned __int128 v36; // xmm6
  int v37; // eax
  unsigned __int64 v38; // rax
  int NextItemSafe; // eax
  int DrawListCacheForCommandRun; // eax
  unsigned int v41; // ecx
  int v42; // eax
  struct CDrawListCache *v43; // rbx
  int v44; // eax
  unsigned int v45; // ecx
  int v46; // eax
  int v47; // eax
  struct _LIST_ENTRY *TreeDataListHead; // rax
  int v49; // eax
  unsigned int v50; // ecx
  HANDLE v51; // rax
  unsigned int **v52; // rcx
  unsigned int v53; // eax
  int v54; // eax
  unsigned int v55; // ecx
  HANDLE ProcessHeap; // rax
  HANDLE v57; // rax
  HANDLE v58; // rax
  char v59; // [rsp+40h] [rbp-C0h]
  char v60[3]; // [rsp+41h] [rbp-BFh] BYREF
  int v61; // [rsp+44h] [rbp-BCh]
  unsigned int v62; // [rsp+48h] [rbp-B8h] BYREF
  int v63; // [rsp+4Ch] [rbp-B4h]
  struct CDrawListCache *v64; // [rsp+50h] [rbp-B0h]
  unsigned int v65; // [rsp+58h] [rbp-A8h] BYREF
  unsigned int v66; // [rsp+5Ch] [rbp-A4h]
  struct CDrawListCache *v67; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int *v68; // [rsp+68h] [rbp-98h]
  CRenderData *v69; // [rsp+70h] [rbp-90h]
  CRenderData *v70; // [rsp+78h] [rbp-88h]
  void *v71[2]; // [rsp+80h] [rbp-80h] BYREF
  unsigned __int128 v72; // [rsp+90h] [rbp-70h]
  unsigned int *v73; // [rsp+A0h] [rbp-60h]
  unsigned int *v74; // [rsp+A8h] [rbp-58h]
  unsigned int *v75; // [rsp+B0h] [rbp-50h] BYREF
  unsigned int *v76; // [rsp+B8h] [rbp-48h]
  unsigned int v77; // [rsp+C0h] [rbp-40h]
  _OWORD v78[5]; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v79; // [rsp+120h] [rbp+20h]
  _BYTE *v80; // [rsp+128h] [rbp+28h]
  _BYTE *v81; // [rsp+130h] [rbp+30h]
  __int64 *v82; // [rsp+138h] [rbp+38h]
  _BYTE v83[32]; // [rsp+140h] [rbp+40h] BYREF
  __int64 v84; // [rsp+160h] [rbp+60h] BYREF
  LPVOID v85; // [rsp+170h] [rbp+70h] BYREF
  _BYTE *v86; // [rsp+178h] [rbp+78h]
  LPVOID *v87; // [rsp+180h] [rbp+80h]
  _BYTE v88[1920]; // [rsp+190h] [rbp+90h] BYREF
  LPVOID v89; // [rsp+910h] [rbp+810h] BYREF
  _BYTE *v90; // [rsp+918h] [rbp+818h]
  int *v91; // [rsp+920h] [rbp+820h]
  _BYTE v92[1920]; // [rsp+930h] [rbp+830h] BYREF
  int v93; // [rsp+10B0h] [rbp+FB0h] BYREF
  LPVOID lpMem; // [rsp+10B8h] [rbp+FB8h] BYREF
  _BYTE *v95; // [rsp+10C0h] [rbp+FC0h]
  char *v96; // [rsp+10C8h] [rbp+FC8h]
  _BYTE v97[348]; // [rsp+10D0h] [rbp+FD0h] BYREF
  char v98; // [rsp+122Ch] [rbp+112Ch] BYREF
  int v99; // [rsp+1230h] [rbp+1130h]
  __int64 v100; // [rsp+1240h] [rbp+1140h]
  int v101; // [rsp+1248h] [rbp+1148h]
  __int16 v102; // [rsp+124Ch] [rbp+114Ch]

  v70 = (CRenderData *)a1;
  v3 = 0LL;
  v66 = a3;
  v79 = 0LL;
  v80 = v83;
  v84 = 0LL;
  v81 = v83;
  v4 = a1 + 18;
  v5 = (unsigned int **)*((_QWORD *)a1 + 13);
  v82 = &v84;
  v85 = v88;
  v86 = v88;
  v87 = &v89;
  v89 = v92;
  v90 = v92;
  v91 = &v93;
  lpMem = v97;
  v95 = v97;
  v96 = &v98;
  p_Blink = 0LL;
  v93 = 0;
  v7 = (unsigned int)a3;
  v99 = 0;
  v8 = a2;
  v100 = 0LL;
  v9 = 0LL;
  v101 = 0;
  v10 = 0LL;
  v102 = 0;
  v61 = 0;
  v64 = 0LL;
  v67 = 0LL;
  v59 = 0;
  memset(v78, 0, 32);
  if ( v5 )
  {
    v52 = (unsigned int **)*((_QWORD *)a1 + 10);
    if ( *v52 != v4 )
      __fastfail(3u);
    *v5 = v4;
    v5[1] = (unsigned int *)v52;
    *v52 = (unsigned int *)v5;
    *((_QWORD *)v4 + 1) = v5;
    *((_QWORD *)v4 + 4) = 0LL;
  }
  v11 = 0;
  v73 = v4;
  v74 = 0LL;
  v63 = 0;
  v72 = 0uLL;
  if ( !(_DWORD)a3 )
  {
    if ( a2 )
      v9 = (struct CDrawingContext *)(a2 - 4);
    v32 = (*(__int64 (__fastcall **)(_QWORD *, unsigned int *, unsigned __int64, _QWORD))(*((_QWORD *)v9 + 3) + 32LL))(
            (_QWORD *)v9 + 3,
            a2,
            a3,
            (unsigned int)a3);
    v33 = (struct _LIST_ENTRY *)*((_QWORD *)v9 + 1007);
    v34 = (CVisual *)v32;
    if ( ((unsigned __int8 (__fastcall *)(struct _LIST_ENTRY *))v33->Flink[11].Blink)(v33) )
    {
      p_Blink = (CVisual *)((char *)v34 + 336);
    }
    else
    {
      TreeDataListHead = CVisual::GetTreeDataListHead(v34);
      if ( TreeDataListHead )
      {
        Flink = TreeDataListHead->Flink;
        if ( TreeDataListHead->Flink != TreeDataListHead )
        {
          while ( 1 )
          {
            p_Blink = (struct CTreeData *)&Flink[-23].Blink;
            if ( Flink[2].Flink == v33 )
              break;
            Flink = Flink->Flink;
            if ( Flink == TreeDataListHead )
              goto LABEL_102;
          }
        }
      }
    }
    if ( !p_Blink )
    {
LABEL_102:
      v14 = -2003292412;
      MilInstrumentationCheckHR_MaybeFailFast((unsigned int)Flink, 0LL, 0, -2003292412, 0xDAu, 0LL);
      goto LABEL_14;
    }
    v7 = v66;
    v10 = 0LL;
    v11 = 0;
  }
  v12 = *(unsigned int ***)v4;
  if ( v4 == *(unsigned int **)v4 )
    goto LABEL_13;
  v13 = *((unsigned int *)v12 + 5);
  a2 = (unsigned int *)(v12 + 3);
  v68 = (unsigned int *)(v12 + 3);
  v14 = -2147467259;
  v75 = (unsigned int *)(v12 + 3);
  v77 = v13;
  if ( (_DWORD)v13 )
  {
    if ( (unsigned int)v13 < 8
      || (v15 = *a2, (unsigned int)v15 < 8)
      || (v15 & 3) != 0
      || (a3 = (unsigned int)v15, v15 > v13) )
    {
      v16 = v66;
      v3 = v70;
    }
    else
    {
      v3 = (CRenderData *)((char *)v12 + 28);
      a2 = (unsigned int *)((char *)a2 + (unsigned int)v15);
      v62 = *((_DWORD *)v12 + 7);
      v16 = (unsigned int)(v15 - 4);
      v68 = a2;
      v14 = 0;
    }
  }
  else
  {
    v14 = 1;
    v16 = 0LL;
    if ( *v12 != v4 )
      v14 = -2147467259;
  }
  if ( v14 )
  {
    if ( v14 >= 0 )
      goto LABEL_12;
    MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v14, 0xDFu, 0LL);
    goto LABEL_14;
  }
  if ( !v3 && (_DWORD)v16 )
  {
    ((void (__fastcall *)(unsigned __int64, unsigned int *, unsigned __int64, __int64))`gsl::details::get_terminate_handler'::`2'::handler)(
      v16,
      a2,
      a3,
      v7);
    __debugbreak();
  }
  *(_QWORD *)&v72 = (unsigned int)v16;
  v69 = (CRenderData *)v71[0];
  *((_QWORD *)&v72 + 1) = v3;
  while ( 1 )
  {
    v36 = v72;
    if ( v10 || (_DWORD)v7 )
    {
      v60[0] = 0;
      if ( (_DWORD)v7 )
        goto LABEL_57;
    }
    else
    {
      DrawListCacheForCommandRun = CRenderData::GetDrawListCacheForCommandRun(v70, v9, p_Blink, v11, &v67);
      v14 = DrawListCacheForCommandRun;
      if ( DrawListCacheForCommandRun < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v41, 0LL, 0, DrawListCacheForCommandRun, 0xEDu, 0LL);
        v64 = v67;
        goto LABEL_14;
      }
      v64 = v67;
      v59 = 0;
      v60[0] = 0;
    }
    *(_OWORD *)v71 = v36;
    v42 = CRenderData::TryDrawCommandAsDrawList(v70, v9, v62, (CRenderData *)v71, (__int64)v60);
    v14 = v42;
    if ( v42 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v42, 0xF9u, 0LL);
      goto LABEL_14;
    }
    if ( v60[0] )
    {
      v59 = 1;
      goto LABEL_62;
    }
    v10 = v64;
LABEL_57:
    if ( v59 )
    {
      v49 = CRenderData::FlushDrawListCache((CRenderData *)v16, v9, v10, (struct CDrawListEntryBuilder *)v78);
      v14 = v49;
      if ( v49 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v50, 0LL, 0, v49, 0x109u, 0LL);
        goto LABEL_14;
      }
      Microsoft::WRL::ComPtr<CGenericInkTipPointSource>::InternalRelease(&v67);
      v64 = v67;
      v59 = 0;
    }
    if ( v62 == 453 )
    {
      v46 = (*(__int64 (__fastcall **)(unsigned int *, _QWORD, unsigned __int64))(*(_QWORD *)v8 + 104LL))(
              v8,
              *(_QWORD *)(*((_QWORD *)v70 + 17) + 8LL * *((unsigned int *)v3 + 1)),
              a3);
      v14 = v46;
      if ( v46 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v46, 0x119u, 0LL);
        goto LABEL_14;
      }
      ++v61;
    }
    else if ( v62 == 452 )
    {
      if ( !v61 )
      {
        v14 = -2003292412;
        MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, -2003292412, 0x129u, 0LL);
        goto LABEL_14;
      }
      v47 = (*(__int64 (__fastcall **)(unsigned int *, unsigned int *, unsigned __int64))(*(_QWORD *)v8 + 96LL))(
              v8,
              a2,
              a3);
      v14 = v47;
      if ( v47 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v47, 0x123u, 0LL);
        goto LABEL_14;
      }
      --v61;
    }
    else
    {
      *(_OWORD *)v71 = v36;
      v37 = CRenderData::DrawCommandAsLegacy((_DWORD)v70, (_DWORD)v8, a3, v62, (__int64)v71);
      v14 = v37;
      if ( v37 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v37, 0x12Eu, 0LL);
        goto LABEL_14;
      }
    }
    if ( v14 == 1 )
      break;
LABEL_62:
    a2 = v68;
    v38 = (unsigned __int64)v75 + v77 - (_QWORD)v68;
    if ( v38 )
    {
      if ( v38 >= 8 )
      {
        a3 = *v68;
        if ( (unsigned int)a3 >= 8 && (a3 & 3) == 0 && a3 <= v38 )
        {
          v16 = (unsigned __int64)(v68 + 1);
          v62 = v68[1];
          v69 = (CRenderData *)(v68 + 1);
          v65 = a3 - 4;
          NextItemSafe = 0;
          v14 = 0;
          v68 = (unsigned int *)((char *)v68 + a3);
LABEL_79:
          a2 = (unsigned int *)v65;
          if ( !v16 && v65 )
          {
            ((void (__fastcall *)(_QWORD, _QWORD))`gsl::details::get_terminate_handler'::`2'::handler)(0LL, v65);
            __debugbreak();
          }
          v72 = __PAIR128__(v16, v65);
          v3 = (CRenderData *)v16;
          goto LABEL_66;
        }
      }
      v16 = (unsigned __int64)v69;
      NextItemSafe = -2147467259;
    }
    else
    {
      a2 = *v12;
      v16 = 0LL;
      v69 = 0LL;
      v71[0] = 0LL;
      v65 = 0;
      NextItemSafe = 1;
      if ( a2 != v4 )
      {
        v53 = a2[5];
        v75 = a2 + 6;
        v76 = a2 + 6;
        v74 = a2;
        v77 = v53;
        NextItemSafe = CDataStreamReader::GetNextItemSafe((CDataStreamReader *)&v75, &v62, v71, &v65);
        v4 = v73;
        v12 = (unsigned int **)v74;
        if ( NextItemSafe == 1 && *(unsigned int **)v74 != v73 )
        {
          NextItemSafe = -2147467259;
          v14 = -2147467259;
LABEL_111:
          MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, NextItemSafe, 0x13Du, 0LL);
          goto LABEL_14;
        }
        v68 = v76;
        v16 = (unsigned __int64)v71[0];
        v69 = (CRenderData *)v71[0];
      }
    }
    v14 = NextItemSafe;
    if ( !NextItemSafe )
      goto LABEL_79;
    *((_QWORD *)&v72 + 1) = v3;
    if ( NextItemSafe < 0 )
      goto LABEL_111;
LABEL_66:
    v11 = ++v63;
    if ( NextItemSafe )
      break;
    v10 = v64;
    LODWORD(v7) = v66;
  }
  if ( !v59 )
    goto LABEL_12;
  v43 = v64;
  v44 = CRenderData::FlushDrawListCache((CRenderData *)v16, v9, v64, (struct CDrawListEntryBuilder *)v78);
  v14 = v44;
  if ( v44 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v45, 0LL, 0, v44, 0x146u, 0LL);
    goto LABEL_14;
  }
  if ( v43 )
  {
    v64 = 0LL;
    CMILRefCountBaseT<IMILRefCount>::InternalRelease(v43);
  }
LABEL_12:
  if ( v14 == 1 )
LABEL_13:
    v14 = 0;
LABEL_14:
  for ( i = v61; i; v61 = i )
  {
    v54 = (*(__int64 (__fastcall **)(unsigned int *, unsigned int *, unsigned __int64, __int64))(*(_QWORD *)v8 + 96LL))(
            v8,
            a2,
            a3,
            v7);
    v14 = v54;
    if ( v54 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v55, 0LL, 0, v54, 0x155u, 0LL);
      goto LABEL_14;
    }
    --i;
  }
  if ( v64 )
    CMILRefCountBaseT<IMILRefCount>::InternalRelease(v64);
  v18 = v80;
  v19 = v81;
  while ( v18 != v19 )
  {
    if ( *v18 )
    {
      (*(void (__fastcall **)(_QWORD, unsigned int *, unsigned __int64, __int64))(*(_QWORD *)*v18 + 8LL))(
        *v18,
        a2,
        a3,
        v7);
      *v18 = 0LL;
    }
    ++v18;
  }
  v20 = (v81 - v80) >> 3;
  if ( v20 )
    v81 -= 8 * v20;
  v21 = v79;
  LOBYTE(v101) = 0;
  if ( v79 )
  {
    v79 = 0LL;
    (*(void (__fastcall **)(__int64, unsigned int *, unsigned __int64, __int64))(*(_QWORD *)v21 + 8LL))(v21, a2, a3, v7);
  }
  if ( v100 )
    CMILRefCountBaseT<IMILRefCount>::InternalRelease(v100);
  v22 = lpMem;
  if ( (v95 - (_BYTE *)lpMem) >> 1 )
  {
    detail::vector_facade<unsigned short,detail::buffer_impl<unsigned short,174,1,detail::liberal_expansion_policy>>::clear_region(
      &lpMem,
      0LL,
      (v95 - (_BYTE *)lpMem) >> 1,
      v7);
    v22 = lpMem;
  }
  lpMem = 0LL;
  if ( v22 != v97 && v22 )
  {
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, v22);
  }
  v23 = v89;
  v24 = (v90 - (_BYTE *)v89) >> 4;
  if ( v24 )
  {
    detail::vector_facade<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,detail::buffer_impl<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,10,1,detail::liberal_expansion_policy>>::clear_region(
      &v89,
      0LL,
      v24);
    v23 = v89;
  }
  v89 = 0LL;
  if ( v23 != v92 && v23 )
  {
    v57 = GetProcessHeap();
    HeapFree(v57, 0, v23);
  }
  v25 = v85;
  v26 = (v86 - (_BYTE *)v85) >> 4;
  if ( v26 )
  {
    detail::vector_facade<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,detail::buffer_impl<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,10,1,detail::liberal_expansion_policy>>::clear_region(
      &v85,
      0LL,
      v26);
    v25 = v85;
  }
  v85 = 0LL;
  if ( v25 != v88 && v25 )
  {
    v58 = GetProcessHeap();
    HeapFree(v58, 0, v25);
  }
  if ( v84 )
    (*(void (__fastcall **)(__int64, unsigned int *, __int64, __int64))(*(_QWORD *)v84 + 16LL))(v84, a2, v26, v7);
  v27 = (v81 - v80) >> 3;
  if ( v27 )
    v81 -= 8 * v27;
  v28 = v80;
  v29 = v80 == v83;
  v80 = 0LL;
  if ( v29 )
    v28 = 0LL;
  if ( v28 )
  {
    v51 = GetProcessHeap();
    HeapFree(v51, 0, v28);
  }
  v30 = v79;
  if ( v79 )
  {
    v79 = 0LL;
    (*(void (__fastcall **)(__int64, unsigned int *, __int64, __int64))(*(_QWORD *)v30 + 8LL))(v30, a2, v26, v7);
  }
  return (unsigned int)v14;
}
