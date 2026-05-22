/*
 * XREFs of ?RequestSurface@CSurfaceManager@DirectComposition@@QEAAJW4DXGI_FORMAT@@_NAEBVSizeU@2@PEAPEAVCAtlasSurface@2@@Z @ 0x1800200E0
 * Callers:
 *     ?RequestSurface@CBitmapInfoFront@DirectComposition@@AEAAJIIPEAPEAVCAtlasSurface@2@@Z @ 0x180020070 (-RequestSurface@CBitmapInfoFront@DirectComposition@@AEAAJIIPEAPEAVCAtlasSurface@2@@Z.c)
 * Callees:
 *     ?PreallocateDynamicPools@CSurfaceManager@DirectComposition@@QEAAJXZ @ 0x18001BB98 (-PreallocateDynamicPools@CSurfaceManager@DirectComposition@@QEAAJXZ.c)
 *     ?IsAllocatableOnAtlas@VideoMemoryBreakdown@DirectComposition@@QEBA_NAEBVSizeU@2@0@Z @ 0x18001E8F4 (-IsAllocatableOnAtlas@VideoMemoryBreakdown@DirectComposition@@QEBA_NAEBVSizeU@2@0@Z.c)
 *     ?RequestLargeSurface@CSurfaceManager@DirectComposition@@QEAAJPEAPEAVCAtlasSurface@2@AEBUSurfaceRequestStruct@2@_N@Z @ 0x18001E950 (-RequestLargeSurface@CSurfaceManager@DirectComposition@@QEAAJPEAPEAVCAtlasSurface@2@AEBUSurfaceR.c)
 *     ?NotifyDisposeSurface@CAtlasSurfacePool@DirectComposition@@QEAAXPEAVCAtlasSurface@2@@Z @ 0x18001F284 (-NotifyDisposeSurface@CAtlasSurfacePool@DirectComposition@@QEAAXPEAVCAtlasSurface@2@@Z.c)
 *     ?RequestSurface@CDynamicPoolSet@DirectComposition@@QEAAJAEBVSizeU@2@00W4DXGI_FORMAT@@_N2PEAPEAVCAtlasSurface@2@@Z @ 0x18001FB1C (-RequestSurface@CDynamicPoolSet@DirectComposition@@QEAAJAEBVSizeU@2@00W4DXGI_FORMAT@@_N2PEAPEAVC.c)
 *     ?RequestSurfaceOnPool@CDynamicPoolSet@DirectComposition@@AEAAJPEAVCDynamicPool@2@AEBVSizeU@2@11W4DXGI_FORMAT@@_N33PEAPEAVCAtlasSurface@2@@Z @ 0x18001FC94 (-RequestSurfaceOnPool@CDynamicPoolSet@DirectComposition@@AEAAJPEAVCDynamicPool@2@AEBVSizeU@2@11W.c)
 *     ?DiscardAgedPools@CDynamicPoolSet@DirectComposition@@QEAAX_NPEAUSurfaceRequestStruct@2@@Z @ 0x18001FD40 (-DiscardAgedPools@CDynamicPoolSet@DirectComposition@@QEAAX_NPEAUSurfaceRequestStruct@2@@Z.c)
 *     ?Allocate@CAtlasNode@DirectComposition@@QEAAJKKPEAPEAV12@@Z @ 0x180020ED0 (-Allocate@CAtlasNode@DirectComposition@@QEAAJKKPEAPEAV12@@Z.c)
 *     ?CollectScratchSurfaces@CScratchSurfaceManager@DirectComposition@@QEAAX_N@Z @ 0x180021458 (-CollectScratchSurfaces@CScratchSurfaceManager@DirectComposition@@QEAAX_N@Z.c)
 *     ?CollectLargeSurfaces@CSurfaceManager@DirectComposition@@IEAAX_N0PEAUSurfaceRequestStruct@2@0@Z @ 0x1800214A8 (-CollectLargeSurfaces@CSurfaceManager@DirectComposition@@IEAAX_N0PEAUSurfaceRequestStruct@2@0@Z.c)
 *     ?RecordUtilizationInfo@CAtlasSurfacePool@DirectComposition@@QEAAXXZ @ 0x180021900 (-RecordUtilizationInfo@CAtlasSurfacePool@DirectComposition@@QEAAXXZ.c)
 *     ?CollectDeadSurfaces@CDynamicPoolSet@DirectComposition@@QEAAXXZ @ 0x180024398 (-CollectDeadSurfaces@CDynamicPoolSet@DirectComposition@@QEAAXXZ.c)
 *     ?InternalRelease@?$CMILRefCountBaseT@UIUnknown@@@@IEAAKXZ @ 0x18002AEB8 (-InternalRelease@-$CMILRefCountBaseT@UIUnknown@@@@IEAAKXZ.c)
 *     ?AllocateDynamicPool@CDynamicPoolSet@DirectComposition@@QEAAJPEAPEAVCDynamicPool@2@AEBVSizeU@2@W4DXGI_FORMAT@@_N3@Z @ 0x180035E60 (-AllocateDynamicPool@CDynamicPoolSet@DirectComposition@@QEAAJPEAPEAVCDynamicPool@2@AEBVSizeU@2@W.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18004400C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?AddMultipleAndSet@?$DynArray@PEAVCAtlasSurface@DirectComposition@@$0A@@@QEAAJPEFBQEAVCAtlasSurface@DirectComposition@@I@Z @ 0x18007315C (-AddMultipleAndSet@-$DynArray@PEAVCAtlasSurface@DirectComposition@@$0A@@@QEAAJPEFBQEAVCAtlasSurf.c)
 *     ?ComputeAtlasSize@CSurfaceManager@DirectComposition@@AEAAXAEBUSurfaceRequestStruct@2@W4DXGI_FORMAT@@_NPEAVSizeU@2@@Z @ 0x180083E28 (-ComputeAtlasSize@CSurfaceManager@DirectComposition@@AEAAXAEBUSurfaceRequestStruct@2@W4DXGI_FORM.c)
 *     sqrt @ 0x18009695C (sqrt.c)
 *     ?GetNext@?$CLinkTargetedDoubleLinkedList@VCSurfaceFactory@DirectComposition@@$0BCA@$0BCA@@@QEBAPEAVCSurfaceFactory@DirectComposition@@PEAV23@@Z @ 0x18009B538 (-GetNext@-$CLinkTargetedDoubleLinkedList@VCSurfaceFactory@DirectComposition@@$0BCA@$0BCA@@@QEBAP.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     McTemplateU0xqqqqx_EventWriteTransfer @ 0x1800E93DC (McTemplateU0xqqqqx_EventWriteTransfer.c)
 *     McTemplateU0xqqqf_EventWriteTransfer @ 0x1800EA3A8 (McTemplateU0xqqqf_EventWriteTransfer.c)
 *     ?GetHintTileHeight@CSurfaceManager@DirectComposition@@QEAAIVSizeU@2@@Z @ 0x1800FBCE4 (-GetHintTileHeight@CSurfaceManager@DirectComposition@@QEAAIVSizeU@2@@Z.c)
 *     ?IsKernelDebuggerPresent@@YAHXZ @ 0x18010084C (-IsKernelDebuggerPresent@@YAHXZ.c)
 */

__int64 __fastcall DirectComposition::CSurfaceManager::RequestSurface(
        DirectComposition::CSurfaceManager *this,
        enum DXGI_FORMAT a2,
        bool a3,
        const struct DirectComposition::SizeU *a4,
        struct DirectComposition::CAtlasSurface **a5)
{
  __int64 v5; // rax
  __int64 v6; // r10
  DirectComposition::CSurfaceManager *v7; // r13
  int v8; // r11d
  DirectComposition::VideoMemoryBreakdown *v9; // rcx
  char v10; // r12
  char v11; // r15
  unsigned int v12; // r8d
  unsigned int v13; // edi
  int v14; // r9d
  __int64 v15; // rax
  __int64 v16; // rbx
  int v17; // eax
  __int64 v18; // rax
  __int64 v19; // r12
  __int64 Next; // r14
  __int64 v21; // rsi
  __int64 v22; // rax
  __int64 v23; // rbx
  __int64 v24; // rax
  __int64 v25; // rdi
  __int64 v26; // rax
  __int64 v27; // rdi
  __int64 v28; // rbx
  DirectComposition::CAtlasSurfacePool *v29; // rcx
  __int64 v30; // rax
  DirectComposition::CDynamicPoolSet *v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  int v34; // r14d
  DirectComposition::CDynamicPoolSet *v35; // rcx
  volatile signed __int32 *v36; // r15
  unsigned int v37; // ebx
  unsigned int v38; // eax
  unsigned int v39; // r12d
  struct DirectComposition::CAtlasSurface *v40; // rsi
  char *v41; // r13
  char *v42; // rcx
  __int64 v43; // rdx
  bool v44; // r8
  char v45; // al
  bool v46; // zf
  int v47; // edi
  struct DirectComposition::CAtlasNode *v48; // r8
  DirectComposition::CAtlasNode *v49; // r10
  DirectComposition::CAtlasNode *v50; // rax
  int v51; // ecx
  int v52; // ecx
  int v53; // eax
  int v54; // eax
  int v55; // edi
  DirectComposition::CAtlasSurfacePool *v56; // r15
  int v57; // eax
  HANDLE ProcessHeap; // rax
  volatile signed __int32 *v59; // rax
  volatile signed __int32 *v60; // r14
  int v61; // r15d
  unsigned int v62; // eax
  __int64 v63; // rcx
  __int64 v64; // rsi
  __int64 v65; // rcx
  int v66; // edx
  int v67; // r9d
  float v68; // xmm1_4
  DirectComposition::CDynamicPoolSet *v69; // rax
  __int64 v70; // rax
  float v71; // xmm1_4
  char v72; // al
  float v73; // xmm1_4
  bool v74; // sf
  int v75; // eax
  int v76; // edi
  BOOL v77; // eax
  CHAR v78; // cl
  HANDLE CurrentProcess; // rax
  HANDLE CurrentThread; // rax
  struct DirectComposition::CAtlasNode *v81; // r8
  unsigned int v82; // eax
  unsigned int v83; // eax
  char *v84; // rdi
  char *v85; // r15
  char *v86; // rax
  DirectComposition::CDynamicPoolSet *v87; // r12
  int v88; // ebx
  int v89; // eax
  char *v90; // rax
  unsigned int v91; // edx
  char v92; // r8
  unsigned int v93; // ebx
  _DWORD *v94; // rax
  unsigned int v95; // ecx
  bool v96; // di
  enum DXGI_FORMAT v97; // ebx
  DirectComposition::CDynamicPoolSet *v98; // rcx
  int v99; // eax
  unsigned int v100; // edi
  __m128d v101; // xmm1
  double v102; // xmm0_8
  unsigned int v103; // eax
  int v104; // eax
  DWORD TickCount; // eax
  __int64 v106; // rcx
  __int64 v107; // rbx
  __int64 v108; // rcx
  __int64 v109; // r9
  __int64 v110; // rdx
  __int64 v111; // rax
  __int64 v112; // rcx
  _QWORD *v113; // rax
  __int64 v114; // rax
  __int64 v115; // rcx
  _QWORD *v116; // r8
  _QWORD *v117; // r8
  struct DirectComposition::CAtlasSurface **v118; // rax
  CHAR Response[8]; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v121; // [rsp+68h] [rbp-98h]
  struct DirectComposition::CAtlasSurface *v122[2]; // [rsp+70h] [rbp-90h] BYREF
  unsigned int v123[4]; // [rsp+80h] [rbp-80h] BYREF
  int v124; // [rsp+90h] [rbp-70h]
  DirectComposition::CDynamicPoolSet *v125[2]; // [rsp+A0h] [rbp-60h] BYREF
  int v126; // [rsp+B0h] [rbp-50h] BYREF
  unsigned int v127; // [rsp+B4h] [rbp-4Ch]
  int v128; // [rsp+B8h] [rbp-48h] BYREF
  int v129; // [rsp+BCh] [rbp-44h]
  __int64 v130; // [rsp+C0h] [rbp-40h] BYREF
  int v131; // [rsp+C8h] [rbp-38h]
  struct DirectComposition::CAtlasNode *v132; // [rsp+D0h] [rbp-30h] BYREF
  volatile signed __int32 *v133; // [rsp+D8h] [rbp-28h]
  __int128 v134; // [rsp+E0h] [rbp-20h]
  volatile signed __int32 *v135; // [rsp+F0h] [rbp-10h] BYREF
  DirectComposition::CSurfaceManager *v136; // [rsp+160h] [rbp+60h] BYREF
  enum DXGI_FORMAT v137; // [rsp+168h] [rbp+68h]
  bool v138; // [rsp+170h] [rbp+70h]
  struct DirectComposition::CDynamicPool *v139; // [rsp+178h] [rbp+78h] BYREF

  v138 = a3;
  v137 = a2;
  v136 = this;
  v5 = *((_QWORD *)this + 16);
  v6 = *(_QWORD *)a4;
  v7 = this;
  v8 = !a3;
  v122[0] = 0LL;
  v9 = *(DirectComposition::VideoMemoryBreakdown **)(v5 + 24);
  v128 = v8;
  v129 = v8;
  v10 = *((_BYTE *)v9 + 376);
  LOBYTE(v139) = v10;
  BYTE1(v123[3]) = v10;
  v130 = v6;
  v123[0] = a2;
  *(_QWORD *)&v123[1] = v6;
  LOBYTE(v123[3]) = 0;
  *a5 = 0LL;
  if ( !a3 )
  {
    v12 = v6 + 2 * v8;
    v123[1] = v12;
    v13 = v123[2] + 2 * v8;
    v121 = v13;
    v123[2] = v13;
    if ( v12 < (unsigned int)v6 || v13 < HIDWORD(v6) )
      return 2147942487LL;
    if ( *((_DWORD *)v7 + 30) >= 5u )
    {
      if ( !DirectComposition::VideoMemoryBreakdown::IsAllocatableOnAtlas(
              v9,
              (const struct DirectComposition::SizeU *)&v123[1],
              (DirectComposition::CSurfaceManager *)((char *)v7 + 104)) )
      {
LABEL_12:
        v11 = 0;
        *(_QWORD *)&v123[1] = v130;
        v121 = HIDWORD(v130);
        goto LABEL_13;
      }
    }
    else if ( (v12 > *((_DWORD *)v7 + 24) >> 1 || v13 > *((_DWORD *)v7 + 25))
           && (v13 > *((_DWORD *)v7 + 25) >> 1 || v12 > *((_DWORD *)v7 + 24)) )
    {
      if ( DirectComposition::VideoMemoryBreakdown::IsAllocatableOnAtlas(
             v9,
             (const struct DirectComposition::SizeU *)&v123[1],
             (DirectComposition::CSurfaceManager *)((char *)v7 + 104)) )
      {
        *((_DWORD *)v7 + 30) = v14 + 1;
      }
      goto LABEL_12;
    }
    if ( !*((_DWORD *)v7 + 44)
      || (unsigned int)DirectComposition::CSurfaceManager::GetHintTileHeight(v7, *(_QWORD *)&v123[1]) )
    {
      v11 = 1;
      goto LABEL_13;
    }
    goto LABEL_12;
  }
  v11 = 1;
  v121 = v123[2];
LABEL_13:
  v15 = *((_QWORD *)v7 + 16);
  v126 = 0;
  LOBYTE(v123[3]) = v11;
  v16 = *(_QWORD *)(v15 + 24);
  if ( (*(int (__fastcall **)(_QWORD, __int64, int *))(**(_QWORD **)(v16 + 160) + 56LL))(
         *(_QWORD *)(v16 + 160),
         2LL,
         &v126) >= 0 )
  {
    v17 = v126;
    *(_DWORD *)(v16 + 420) = v126;
    if ( v17 != *(_DWORD *)(v16 + 424) )
    {
      *(_DWORD *)(v16 + 424) = v17;
      v18 = *(_QWORD *)(v16 + 616);
      v19 = v16 + 608;
      Next = v18 - 288;
      if ( v18 == v16 + 616 )
        Next = 0LL;
      if ( Next )
      {
        do
        {
          DirectComposition::CScratchSurfaceManager::CollectScratchSurfaces(
            *(DirectComposition::CScratchSurfaceManager **)(Next + 304),
            0);
          v21 = *(_QWORD *)(Next + 312);
          if ( (Microsoft_Windows_DirectCompositionEnableBits & 8) != 0 )
          {
            v22 = *(_QWORD *)(v21 + 32);
            v23 = v22 - 32;
            if ( v22 == v21 + 32 )
              v23 = 0LL;
            while ( v23 )
            {
              DirectComposition::CAtlasSurfacePool::RecordUtilizationInfo(*(DirectComposition::CAtlasSurfacePool **)(v23 + 64));
              v24 = *(_QWORD *)(v23 + 32);
              v23 = v24 - 32;
              if ( v24 == v21 + 32 )
                v23 = 0LL;
            }
            v25 = *(_QWORD *)(v21 + 16);
            if ( v25 )
            {
              v26 = *(_QWORD *)(v25 + 32);
              v27 = v25 + 32;
              v28 = v26 - 16;
              if ( v26 == v27 )
                v28 = 0LL;
              while ( v28 )
              {
                v29 = *(DirectComposition::CAtlasSurfacePool **)(v28 + 32);
                if ( v29 )
                  DirectComposition::CAtlasSurfacePool::RecordUtilizationInfo(v29);
                v30 = *(_QWORD *)(v28 + 16);
                v28 = v30 - 16;
                if ( v30 == v27 )
                  v28 = 0LL;
              }
            }
          }
          v31 = *(DirectComposition::CDynamicPoolSet **)(v21 + 16);
          if ( v31 )
          {
            DirectComposition::CDynamicPoolSet::CollectDeadSurfaces(v31);
            DirectComposition::CDynamicPoolSet::DiscardAgedPools(
              *(DirectComposition::CDynamicPoolSet **)(v21 + 16),
              1,
              (struct DirectComposition::SurfaceRequestStruct *)v123);
          }
          DirectComposition::CSurfaceManager::CollectLargeSurfaces(
            (DirectComposition::CSurfaceManager *)v21,
            0,
            1,
            (struct DirectComposition::SurfaceRequestStruct *)v123,
            1);
          Next = CLinkTargetedDoubleLinkedList<DirectComposition::CSurfaceFactory,288,288>::GetNext(v19, Next, v32, v33);
        }
        while ( Next );
        v7 = v136;
      }
      v10 = (char)v139;
    }
  }
  if ( !v11 )
  {
LABEL_155:
    v104 = DirectComposition::CSurfaceManager::RequestLargeSurface(
             v7,
             (DirectComposition::CAtlasSurfacePool ***)v122,
             (const struct DirectComposition::SurfaceRequestStruct *)v123,
             1);
    v34 = v104;
    if ( (v104 == -2147024882 || v104 == -2147024809) && v10 )
    {
      *(_OWORD *)v125 = *(_OWORD *)v123;
      BYTE5(v125[1]) = 0;
      v34 = DirectComposition::CSurfaceManager::RequestLargeSurface(
              v7,
              (DirectComposition::CAtlasSurfacePool ***)v122,
              (const struct DirectComposition::SurfaceRequestStruct *)v125,
              1);
    }
    if ( v34 >= 0 )
    {
      v40 = v122[0];
      goto LABEL_161;
    }
    goto LABEL_179;
  }
  if ( !*((_QWORD *)v7 + 2) )
  {
    v34 = DirectComposition::CSurfaceManager::PreallocateDynamicPools(v7);
    if ( v34 < 0 )
      return (unsigned int)v34;
  }
  v35 = (DirectComposition::CDynamicPoolSet *)*((_QWORD *)v7 + 2);
  v36 = 0LL;
  v37 = v127;
  v38 = 0;
  v39 = v121;
  v34 = 0;
  v40 = 0LL;
  v124 = 0;
  v125[0] = v35;
  v122[0] = 0LL;
  while ( !v40 && v38 < 2 )
  {
    v41 = (char *)*((_QWORD *)v35 + 6);
    v42 = v41;
    if ( !v41 )
    {
      v69 = v125[0];
      goto LABEL_112;
    }
    v43 = *((_QWORD *)v41 + 4);
    v34 = 0;
    v122[0] = 0LL;
    v44 = v38 == 1;
    v40 = 0LL;
    v45 = *(_BYTE *)(v43 + 172);
    if ( (v45 & 1) != 0 )
      v46 = *(_QWORD *)(v43 + 184) == 0LL;
    else
      v46 = *(_DWORD *)(v43 + 136) == 0;
    if ( v46 != v44
      || *(_DWORD *)(v43 + 160) != v137
      || ((v45 & 4) != 0) != v138
      || (unsigned __int8)v139 != (*(_QWORD *)(v43 + 200) != 0LL) )
    {
LABEL_109:
      v69 = v125[0];
LABEL_110:
      v41 = (char *)*((_QWORD *)v69 + 6);
      v42 = v41;
      goto LABEL_112;
    }
    v46 = *(_QWORD *)(v43 + 16) == 0LL;
    v47 = 0;
    v48 = 0LL;
    v132 = 0LL;
    if ( !v46 )
    {
      v49 = (DirectComposition::CAtlasNode *)*((_QWORD *)v41 + 5);
      if ( !v49 )
      {
        v50 = (DirectComposition::CAtlasNode *)DefaultHeap::Alloc(0x50uLL);
        v49 = v50;
        if ( !v50 )
        {
          v69 = v125[0];
          v34 = -2147024882;
          *((_QWORD *)v41 + 5) = 0LL;
          v41 = (char *)*((_QWORD *)v69 + 6);
          v42 = v41;
          goto LABEL_112;
        }
        DWORD2(v134) = *((_DWORD *)v41 + 12);
        v51 = *((_DWORD *)v41 + 13);
        *((_QWORD *)v50 + 2) = 0LL;
        *((_QWORD *)v50 + 3) = 0LL;
        *((_QWORD *)v50 + 4) = 0LL;
        *((_QWORD *)v50 + 5) = 0LL;
        *((_QWORD *)v50 + 7) = 0LL;
        HIDWORD(v134) = v51;
        *(_QWORD *)&v134 = 0LL;
        *(_OWORD *)v50 = v134;
        v52 = *((_DWORD *)v50 + 2) - *(_DWORD *)v50;
        *((_DWORD *)v50 + 16) = v52;
        v53 = *((_DWORD *)v50 + 3) - *((_DWORD *)v50 + 1);
        *((_DWORD *)v49 + 17) = v53;
        *((_DWORD *)v49 + 18) = v52 * v53;
        *((_QWORD *)v41 + 5) = v49;
      }
      v54 = DirectComposition::CAtlasNode::Allocate(v49, v123[1], v39, &v132);
      v48 = v132;
      v47 = v54;
    }
    v133 = 0LL;
    if ( v47 < 0 )
      goto LABEL_106;
    if ( v48 )
    {
      v55 = *((_DWORD *)v48 + 1);
      v56 = (DirectComposition::CAtlasSurfacePool *)*((_QWORD *)v41 + 4);
      v37 = (v129 != 0 ? 8 : 0) | (v129 != 0 ? 4 : 0) | (v128 != 0 ? 2 : 0) | (v128 != 0) | v37 & 0xFFFFFFF0;
      v57 = *(_DWORD *)v48;
      v127 = v37;
      v131 = v57;
      ProcessHeap = GetProcessHeap();
      v59 = (volatile signed __int32 *)HeapAlloc(ProcessHeap, 8u, 0x70uLL);
      v60 = v59;
      if ( v59 )
      {
        *((_QWORD *)v59 + 8) = v56;
        *((_DWORD *)v59 + 2) = 0;
        *(_QWORD *)v59 = &DirectComposition::CAtlasSurface::`vftable'{for `CMILCOMBaseT<IUnknown>'};
        *((_QWORD *)v59 + 2) = &DirectComposition::CAtlasSurface::`vftable'{for `DirectComposition::CCompositorSynchronizedObject'};
        *((_DWORD *)v59 + 18) = v131;
        *((_QWORD *)v59 + 10) = v130;
        *((_DWORD *)v59 + 19) = v55;
        *((_DWORD *)v59 + 22) = v37;
        _InterlockedIncrement(v59 + 2);
        v61 = 0;
        v62 = *((_DWORD *)v59 + 22);
        v135 = v60;
        *((_QWORD *)v60 + 13) = (*((_DWORD *)v60 + 21) + ((v62 >> 2) & 1) + ((v62 >> 3) & 1))
                              * (*((_DWORD *)v60 + 20) + (v62 & 1) + ((v62 >> 1) & 1));
        v63 = *((_QWORD *)v60 + 8);
        if ( v60 != *(volatile signed __int32 **)(v63 + 200) )
          v61 = DynArray<DirectComposition::CAtlasSurface *,0>::AddMultipleAndSet(v63 + 112, &v135);
        v47 = v61;
        if ( v61 < 0 )
        {
          CMILRefCountBaseT<IUnknown>::InternalRelease(v60);
          v39 = v123[2];
          v36 = v133;
          v40 = v122[0];
          v121 = v123[2];
        }
        else
        {
          (*(void (__fastcall **)(_QWORD *, __int64))(*((_QWORD *)v60 + 2) + 40LL))((_QWORD *)v60 + 2, 2LL);
          *((_DWORD *)v60 + 6) = 2;
          v64 = *((_QWORD *)v60 + 8);
          if ( (*(_BYTE *)(v64 + 172) & 2) != 0 )
          {
            if ( (Microsoft_Windows_DirectCompositionEnableBits & 8) != 0 )
            {
              v65 = *(_QWORD *)(v64 + 184);
              v66 = *(_DWORD *)(v64 + 156);
              v67 = *(_DWORD *)(v64 + 152);
              if ( v65 < 0 )
              {
                v70 = *(_QWORD *)(v64 + 184) & 1LL | (*(_QWORD *)(v64 + 184) >> 1);
                v68 = (float)(int)v70 + (float)(int)v70;
              }
              else
              {
                v68 = (float)(int)v65;
              }
              v71 = v68 * 100.0;
              v72 = 64;
              if ( *(_DWORD *)(v64 + 160) != 10 )
                v72 = 32;
              v73 = v71 / (float)(v66 * v67);
              McTemplateU0xqqqf_EventWriteTransfer(32, v66, *((_QWORD *)v60 + 8), v67, v66, v72, SLOBYTE(v73));
            }
            *(_BYTE *)(v64 + 172) &= ~2u;
          }
          if ( (Microsoft_Windows_DirectCompositionEnableBits & 8) != 0 )
            McTemplateU0xqqqqx_EventWriteTransfer(
              v60[22] & 1,
              (unsigned int)&DCOMPEVENT_ATLAS_ENTRY_ALLOCATE,
              *((_QWORD *)v60 + 8),
              *((_DWORD *)v60 + 18),
              *((_DWORD *)v60 + 19),
              *((_BYTE *)v60 + 80) + (v60[22] & 1) + ((v60[22] & 2) != 0),
              *((_BYTE *)v60 + 84) + ((v60[22] & 4) != 0) + ((v60[22] & 8) != 0),
              (char)v60);
          v36 = v60;
          v40 = v122[0];
          v39 = v123[2];
          v121 = v123[2];
        }
      }
      else
      {
        v47 = -2147024882;
        DirectComposition::CAtlasSurfacePool::NotifyDisposeSurface(v56, 0LL);
        v36 = 0LL;
      }
    }
    v34 = v47;
    if ( v47 >= 0 && v36 )
    {
      v74 = *((int *)v36 + 2) < 0;
      v122[0] = (struct DirectComposition::CAtlasSurface *)v36;
      if ( v74 && (IsDebuggerPresent() || (unsigned int)IsKernelDebuggerPresent()) )
      {
        while ( 1 )
        {
          v75 = IsKernelDebuggerPresent();
          strcpy(Response, "?");
          v76 = v75;
          if ( !v75 )
          {
            v77 = IsDebuggerPresent();
            v78 = Response[0];
            if ( v77 )
              v78 = 103;
            Response[0] = v78;
          }
          DbgPrintEx(
            0x65u,
            0,
            "\n*** Assertion failed: %ls%ls%ls\n***   %s%ls%sSource: `%ls:%ld`\n\n",
            L"Tried to AddRef an object which has previously been freed (refcount went to 0).",
            word_1801E5750,
            word_1801E5750,
            "Function: ",
            L"CMILRefCountImpl::AddReference",
            ", ",
            L"onecoreuap\\windows\\dwm\\common\\shared\\refcountbase.cpp",
            23);
          if ( v76 )
          {
            DbgPrompt("Break, Go (continue), terminate Process, or terminate Thread (bgpt)? ", Response, 2u);
          }
          else
          {
            DbgPrintEx(
              0x65u,
              0,
              "(No kernel debugger is present.) Respond with:\n"
              "  g                    -- Go (continue)\n"
              "  eb 0x%p 'p';g  -- terminate Process\n"
              "  eb 0x%p 't';g  -- terminate Thread\n"
              " or regular debugging.\n",
              Response,
              Response);
            __debugbreak();
          }
          switch ( Response[0] )
          {
            case 'B':
            case 'b':
              __debugbreak();
              goto LABEL_101;
            case 'G':
            case 'g':
              goto LABEL_101;
            case 'I':
            case 'i':
              DbgPrintEx(0x65u, 0, "'i' is only supported with debug builds.\n");
              continue;
            case 'P':
            case 'p':
              CurrentProcess = GetCurrentProcess();
              TerminateProcess(CurrentProcess, 0xC0000001);
              goto LABEL_99;
            case 'T':
            case 't':
              CurrentThread = GetCurrentThread();
              TerminateThread(CurrentThread, 0xC0000001);
              goto LABEL_99;
            default:
LABEL_99:
              DbgPrintEx(0x65u, 0, "Unrecognized response.\n");
              break;
          }
        }
      }
LABEL_101:
      _InterlockedIncrement(v36 + 2);
      v81 = v132;
      v40 = v122[0];
      *((_QWORD *)v132 + 2) = v36;
      v82 = *((_DWORD *)v41 + 14);
      if ( v82 <= *(_DWORD *)v81 + *((_DWORD *)v81 + 14) )
        v82 = *(_DWORD *)v81 + *((_DWORD *)v81 + 14);
      *((_DWORD *)v41 + 14) = v82;
      v83 = *((_DWORD *)v41 + 15);
      if ( v83 <= *((_DWORD *)v81 + 1) + *((_DWORD *)v81 + 15) )
        v83 = *((_DWORD *)v81 + 1) + *((_DWORD *)v81 + 15);
      *((_DWORD *)v41 + 15) = v83;
      v39 = v123[2];
      v121 = v123[2];
    }
    else
    {
LABEL_106:
      v34 = v47;
      if ( v47 < 0 )
        goto LABEL_109;
    }
    v69 = v125[0];
    if ( !v40 )
      goto LABEL_110;
    *((_QWORD *)v125[0] + 6) = v41;
    v42 = v41;
LABEL_112:
    v84 = 0LL;
    v85 = (char *)v69 + 32;
    v86 = (char *)*((_QWORD *)v69 + 5);
    if ( v86 == v85 )
      v42 = v41;
    else
      v84 = v86 - 16;
    if ( v34 >= 0 )
    {
      v87 = v125[0];
      v88 = v124;
      do
      {
        if ( v40 || !v84 )
          break;
        if ( v84 != v42 )
        {
          v89 = DirectComposition::CDynamicPoolSet::RequestSurfaceOnPool(
                  v87,
                  (DirectComposition::CAtlasSurfacePool **)v84,
                  (const struct DirectComposition::SizeU *)&v123[1],
                  (const struct DirectComposition::SizeU *)&v130,
                  (const struct DirectComposition::SizeU *)&v128,
                  v137,
                  v138,
                  (bool)v139,
                  v88 == 1,
                  v122);
          v42 = (char *)*((_QWORD *)v87 + 6);
          v34 = v89;
          v40 = v122[0];
        }
        v90 = (char *)*((_QWORD *)v84 + 3);
        v84 = v90 - 16;
        if ( v90 == v85 )
          v84 = 0LL;
      }
      while ( v34 >= 0 );
      v37 = v127;
      v39 = v121;
    }
    v36 = 0LL;
    v35 = v125[0];
    v38 = ++v124;
    if ( v34 < 0 )
      break;
  }
  if ( v34 < 0 )
  {
LABEL_180:
    if ( v40 )
      CMILRefCountBaseT<IUnknown>::InternalRelease(v40);
    return (unsigned int)v34;
  }
  v10 = BYTE1(v123[3]);
  v7 = v136;
  if ( v40 )
    goto LABEL_161;
  v91 = *((_DWORD *)v136 + 44);
  v92 = 0;
  v93 = v121;
  v139 = 0LL;
  if ( v91 )
  {
    v94 = (_DWORD *)((char *)v136 + 136);
    v92 = 1;
    v95 = 0;
    while ( v94[1] != v121 || *v94 != v123[1] )
    {
      ++v95;
      v94 += 2;
      if ( v95 >= v91 )
        goto LABEL_135;
    }
    v92 = 0;
  }
LABEL_135:
  v96 = v138;
  if ( v138 )
  {
    v97 = v137;
    v98 = (DirectComposition::CDynamicPoolSet *)*((_QWORD *)v136 + 2);
    v136 = (DirectComposition::CSurfaceManager *)0x1000000800LL;
    v99 = DirectComposition::CDynamicPoolSet::AllocateDynamicPool(
            v98,
            &v139,
            (const struct DirectComposition::SizeU *)&v136,
            v137,
            v138,
            SBYTE1(v123[3]));
  }
  else
  {
    v100 = v123[1];
    if ( v123[1] >= 0x10 || v121 >= 0x10 )
    {
      if ( v92 )
      {
        v101 = 0LL;
        v101.m128d_f64[0] = (double)(*((_DWORD *)v136 + 24) * *((_DWORD *)v136 + 25));
        if ( v101.m128d_f64[0] < 0.0 )
          v102 = sqrt(v101.m128d_f64[0]);
        else
          *(_QWORD *)&v102 = *(_OWORD *)&_mm_sqrt_pd(v101);
        v103 = (int)(v102 * 0.5);
        if ( v103 < v100 || v103 < v93 )
        {
          if ( v100 > v93 )
            v93 = v100;
          v103 = v93;
        }
        v97 = v137;
        LODWORD(v136) = v103;
        HIDWORD(v136) = v103;
      }
      else
      {
        v97 = v137;
        v136 = 0LL;
        DirectComposition::CSurfaceManager::ComputeAtlasSize(
          v7,
          (const struct DirectComposition::SurfaceRequestStruct *)v123,
          v137,
          0,
          (struct DirectComposition::SizeU *)&v136);
      }
    }
    else
    {
      v97 = v137;
      v136 = (DirectComposition::CSurfaceManager *)0x2000000020LL;
    }
    v99 = DirectComposition::CDynamicPoolSet::AllocateDynamicPool(
            *((DirectComposition::CDynamicPoolSet **)v7 + 2),
            &v139,
            (const struct DirectComposition::SizeU *)&v136,
            v97,
            0,
            v10);
    v96 = v138;
  }
  v34 = v99;
  if ( v99 < 0 )
    return (unsigned int)v34;
  v34 = DirectComposition::CDynamicPoolSet::RequestSurface(
          *((DirectComposition::CDynamicPoolSet **)v7 + 2),
          (const struct DirectComposition::SizeU *)&v123[1],
          (const struct DirectComposition::SizeU *)&v130,
          (const struct DirectComposition::SizeU *)&v128,
          v97,
          v96,
          v10,
          v122);
  if ( v34 < 0 )
  {
LABEL_179:
    v40 = v122[0];
    goto LABEL_180;
  }
  v40 = v122[0];
  if ( !v122[0] )
    goto LABEL_155;
LABEL_161:
  TickCount = GetTickCount();
  v106 = *((_QWORD *)v40 + 8);
  if ( *(struct DirectComposition::CAtlasSurface **)(v106 + 200) == v40 )
    goto LABEL_173;
  *(_DWORD *)(v106 + 164) = TickCount;
  v107 = *(_QWORD *)(*((_QWORD *)v40 + 8) + 144LL);
  v108 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v107 + 128) + 24LL) + 96LL);
  if ( v108 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v108 + 24LL))(v108);
  v109 = *((_QWORD *)v40 + 8);
  if ( (*(_BYTE *)(v109 + 172) & 1) != 0 )
    goto LABEL_173;
  v110 = *(_QWORD *)(v107 + 16);
  if ( !*(_DWORD *)(v110 + 24) )
    goto LABEL_173;
  v111 = *(_QWORD *)(v110 + 32);
  v112 = v111 - 16;
  if ( v111 == v110 + 32 )
    v112 = 0LL;
  if ( !v112 )
  {
LABEL_173:
    *a5 = v40;
  }
  else
  {
    while ( 1 )
    {
      v113 = (_QWORD *)(v112 + 16);
      if ( *(_QWORD *)(v112 + 32) == v109 )
        break;
      v114 = *v113;
      v112 = v114 - 16;
      if ( v114 == v110 + 32 )
        v112 = 0LL;
      if ( !v112 )
        goto LABEL_173;
    }
    v115 = *v113;
    if ( *(_QWORD **)(*v113 + 8LL) != v113
      || (v116 = (_QWORD *)v113[1], (_QWORD *)*v116 != v113)
      || (*v116 = v115,
          *(_QWORD *)(v115 + 8) = v116,
          *(_OWORD *)v113 = 0LL,
          --*(_DWORD *)(v110 + 24),
          v117 = *(_QWORD **)(v110 + 40),
          *v117 != v110 + 32) )
    {
      __fastfail(3u);
    }
    *v113 = v110 + 32;
    v113[1] = v117;
    *v117 = v113;
    *(_QWORD *)(v110 + 40) = v113;
    v118 = a5;
    ++*(_DWORD *)(v110 + 24);
    *v118 = v40;
  }
  return (unsigned int)v34;
}
