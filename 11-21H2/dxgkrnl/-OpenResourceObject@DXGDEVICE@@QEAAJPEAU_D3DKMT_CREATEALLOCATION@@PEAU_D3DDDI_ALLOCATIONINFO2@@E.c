/*
 * XREFs of ?OpenResourceObject@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@PEAU_D3DDDI_ALLOCATIONINFO2@@EPEAU_EPROCESS@@PEAU_DXGSHAREDALLOCOBJECT@@PEAVDXGRESOURCEREFERENCE@@PEAEPEBU_D3DKM_CREATESTANDARDALLOCATION@@PEAVDXGAUTOMUTEX@@PEAVDXGAUTOPUSHLOCK@@@Z @ 0x1C01887E0
 * Callers:
 *     ?CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEBU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@IPEAU_EPROCESS@@PEAIPEA_K6PEAU_D3DKMT_CREATESTANDARDALLOCATION@@PEAXI@Z @ 0x1C0191710 (-CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEB.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ??2?$DXGQUOTAALLOCATOR@$0BAA@$0ELGHHIEE@@@SAPEAX_K@Z @ 0x1C00096C0 (--2-$DXGQUOTAALLOCATOR@$0BAA@$0ELGHHIEE@@@SAPEAX_K@Z.c)
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C000A924 (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000C3F8 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000CD40 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C000D990 (--_V@YAXPEAX@Z.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000E350 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000E420 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??_GDXGRESOURCE@@QEAAPEAXI@Z @ 0x1C000E63C (--_GDXGRESOURCE@@QEAAPEAXI@Z.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000EE00 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000F574 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000F5FC (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000FA80 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000FABC (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002B284 (McTemplateK0q_EtwWriteTransfer.c)
 *     ??0DXGADAPTERALLOCATION_VGPU@@QEAA@XZ @ 0x1C004A86C (--0DXGADAPTERALLOCATION_VGPU@@QEAA@XZ.c)
 *     ?Initialize@DXGAUTOMUTEX@@QEAAXQEAVDXGFASTMUTEX@@E@Z @ 0x1C004AB40 (-Initialize@DXGAUTOMUTEX@@QEAAXQEAVDXGFASTMUTEX@@E@Z.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1C017D000 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 *     ?DxgkReferenceDxgResource@@YAXPEAVDXGRESOURCE@@@Z @ 0x1C01890DC (-DxgkReferenceDxgResource@@YAXPEAVDXGRESOURCE@@@Z.c)
 *     ?CreateSharedResource@DXGSHAREDRESOURCE@@SAPEAV1@PEAVADAPTER_RENDER@@PEAVDXGADAPTER@@E@Z @ 0x1C0189364 (-CreateSharedResource@DXGSHAREDRESOURCE@@SAPEAV1@PEAVADAPTER_RENDER@@PEAVDXGADAPTER@@E@Z.c)
 *     ?DxgkThreadObjectCreateDxgThread@@YAPEAVDXGTHREAD@@XZ @ 0x1C018B028 (-DxgkThreadObjectCreateDxgThread@@YAPEAVDXGTHREAD@@XZ.c)
 *     ??1DXGRESOURCEREFERENCE@@QEAA@XZ @ 0x1C0195040 (--1DXGRESOURCEREFERENCE@@QEAA@XZ.c)
 *     ?AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z @ 0x1C0195A00 (-AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z.c)
 *     ??0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z @ 0x1C019E94C (--0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z.c)
 *     ?Destroy@DXGSHAREDRESOURCE@@IEAAXPEAPEAXI@Z @ 0x1C019EFEC (-Destroy@DXGSHAREDRESOURCE@@IEAAXPEAPEAXI@Z.c)
 *     ?FreeResourceHandleAndWaitForZeroReferences@ADAPTER_RENDER@@QEAAXPEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C019F348 (-FreeResourceHandleAndWaitForZeroReferences@ADAPTER_RENDER@@QEAAXPEAVDXGRESOURCE@@PEAVCOREDEVICE.c)
 *     ?HasContextWithHintType@DXGDEVICE@@QEAAEW4_D3DKMT_CLIENTHINT@@@Z @ 0x1C01C4AF8 (-HasContextWithHintType@DXGDEVICE@@QEAAEW4_D3DKMT_CLIENTHINT@@@Z.c)
 *     ?MoveAssign@DXGRESOURCEREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1C01D98D8 (-MoveAssign@DXGRESOURCEREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 *     ??0DXGRESOURCE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C02D593C (--0DXGRESOURCE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 */

__int64 __fastcall DXGDEVICE::OpenResourceObject(
        DXGDEVICE *this,
        struct _D3DKMT_CREATEALLOCATION *a2,
        struct _D3DDDI_ALLOCATIONINFO2 *a3,
        __int64 a4,
        struct _EPROCESS *a5,
        struct _DXGSHAREDALLOCOBJECT *a6,
        struct DXGRESOURCEREFERENCE *a7,
        unsigned __int8 *a8,
        const struct _D3DKM_CREATESTANDARDALLOCATION *a9,
        struct DXGAUTOMUTEX *a10,
        struct DXGAUTOPUSHLOCK *a11)
{
  __int64 v13; // rcx
  struct _EX_RUNDOWN_REF *v14; // rbx
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rdi
  __int64 v21; // r14
  unsigned __int8 *v22; // r12
  char v23; // di
  D3DKMT_HANDLE hResource; // r15d
  D3DKMT_CREATEALLOCATIONFLAGS v25; // eax
  __int64 v26; // rdi
  struct DXGTHREAD *DxgThread; // rax
  __int64 Pool2; // r15
  __int64 v30; // rbx
  __int64 v31; // rcx
  __int64 v32; // r8
  struct DXGGLOBAL *Global; // rax
  __int64 CurrentThread; // rcx
  D3DKMT_CREATEALLOCATIONFLAGS v35; // eax
  int v36; // ebx
  struct DXGGLOBAL *v37; // rax
  struct DXGGLOBAL *v38; // rbx
  D3DKMT_HANDLE v39; // r14d
  __int64 v40; // rax
  __int64 v41; // r8
  __int64 v42; // rbx
  __int64 v43; // rax
  __int64 v44; // r8
  __int64 v45; // rax
  __int64 v46; // rbx
  __int64 v47; // r9
  __int64 v48; // rax
  __int64 v49; // r8
  __int64 v50; // r9
  UINT v51; // r11d
  _QWORD *v52; // r10
  __int64 v53; // rax
  signed __int32 v54; // eax
  signed __int32 v55; // ett
  bool v56; // di
  __int64 v57; // r8
  _QWORD *v58; // rax
  _QWORD *v59; // rdx
  __int64 v60; // rax
  __int64 v61; // rbx
  unsigned int v62; // r8d
  struct DXGRESOURCEREFERENCE *v63; // rbx
  struct DXGTHREAD *v64; // rax
  int v65; // r14d
  DXGAUTOPUSHLOCK *v66; // r14
  struct DXGSHAREDRESOURCE *SharedResource; // rax
  __int64 v68; // r9
  __int64 v69; // r14
  unsigned __int64 v70; // rbx
  DXGADAPTERALLOCATION_VGPU *v71; // rax
  __int64 *v72; // rcx
  __int64 v73; // rax
  __int64 **v74; // rdx
  int v75; // edx
  D3DKMT_CREATEALLOCATIONFLAGS v76; // eax
  struct _DXGSHAREDALLOCOBJECT *v77; // r8
  __int64 v78; // rax
  __int64 v79; // rax
  __int64 v80; // r9
  __int64 v81; // rbx
  __int64 v82; // rsi
  void *v83; // rsi
  __int64 v84; // r9
  __int64 v85; // rax
  __int64 v86; // rcx
  _QWORD *v87; // rax
  struct DXGTHREAD *Current; // rax
  __int64 v89; // rbx
  __int64 v90; // rax
  __int64 v91; // r8
  int v92; // ecx
  struct DXGRESOURCE *v93; // rdx
  D3DKMT_CREATEALLOCATIONFLAGS Flags; // eax
  DXGDEVICE *v95; // r9
  __int64 v96; // rax
  __int64 v97; // rcx
  UINT PrivateDriverDataSize; // eax
  DXGPUSHLOCK *v99; // rcx
  ULONG_PTR Count; // r8
  UINT NumAllocations; // r10d
  __int64 i; // r9
  __int64 v103; // rax
  unsigned int v104; // edi
  unsigned int v105; // r15d
  unsigned __int64 v106; // rax
  __int64 v107; // r12
  ULONG_PTR v108; // rdx
  void *v109; // rcx
  UINT v110; // r15d
  DXGADAPTERALLOCATION_VGPU *v111; // rax
  DXGADAPTERALLOCATION_VGPU *v112; // rax
  __int64 *v113; // rcx
  __int64 v114; // rax
  __int64 **v115; // rdx
  DXGRESOURCE *v116; // rax
  int v117; // r9d
  int v118; // eax
  __int64 v119; // rbx
  D3DKMT_HANDLE hGlobalShare; // r14d
  __int64 v121; // rax
  __int64 v122; // r8
  int v123; // ecx
  __int64 v124; // r9
  __int64 v125; // r8
  DXGADAPTER *v126; // rcx
  DXGADAPTERALLOCATION_VGPU *v127; // rax
  unsigned __int64 v128; // rax
  struct DXGTHREAD *v129; // [rsp+50h] [rbp-31h] BYREF
  char v130; // [rsp+58h] [rbp-29h]
  DXGAUTOPUSHLOCK *v131; // [rsp+60h] [rbp-21h]
  DXGFASTMUTEX *v132; // [rsp+68h] [rbp-19h] BYREF
  char v133; // [rsp+70h] [rbp-11h]
  __int64 v134; // [rsp+D0h] [rbp+4Fh]
  int v135; // [rsp+D0h] [rbp+4Fh]
  __int64 v136; // [rsp+D0h] [rbp+4Fh]
  __int64 v137; // [rsp+D8h] [rbp+57h] BYREF
  struct _D3DDDI_ALLOCATIONINFO2 *v138; // [rsp+E0h] [rbp+5Fh]
  char v139; // [rsp+E8h] [rbp+67h]

  v139 = a4;
  v138 = a3;
  v13 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
  if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v13 + 184)
    && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v13 + 168)) )
  {
    WdLogSingleEntry1(1LL, 2075LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"GetRenderCore()->IsCoreResourceSharedOwner()",
      2075LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v14 = 0LL;
  v137 = 0LL;
  CurrentProcess = PsGetCurrentProcess(v13, a2, a3, a4);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v20 = ProcessDxgProcess;
  if ( ProcessDxgProcess && (*(_DWORD *)(ProcessDxgProcess + 424) & 0x80) == 0
    || (Current = DXGTHREAD::GetCurrent()) == 0LL
    || (v21 = *((_QWORD *)Current + 3)) == 0 )
  {
    v21 = v20;
  }
  v22 = a8;
  v23 = BYTE1(*(_DWORD *)(v21 + 424)) & 1;
  v131 = 0LL;
  *a8 = 0;
  hResource = a2->hResource;
  if ( hResource )
  {
    v89 = *((_QWORD *)this + 5);
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v89 + 248));
    v90 = (hResource >> 6) & 0xFFFFFF;
    if ( (unsigned int)v90 < *(_DWORD *)(v89 + 296) )
    {
      v91 = *(_QWORD *)(v89 + 280);
      v92 = *(_DWORD *)(v91 + 16 * v90 + 8);
      if ( ((hResource >> 25) & 0x60) == (*(_BYTE *)(v91 + 16 * v90 + 8) & 0x60)
        && (v92 & 0x2000) == 0
        && (v92 & 0x1F) != 0 )
      {
        if ( (v92 & 0x1F) == 4 )
        {
          v93 = *(struct DXGRESOURCE **)(v91 + 16LL * (unsigned int)v90);
LABEL_138:
          DXGRESOURCEREFERENCE::DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v129, v93);
          ExReleasePushLockSharedEx(v89 + 248, 0LL);
          KeLeaveCriticalRegion();
          DXGRESOURCEREFERENCE::MoveAssign(&v137, &v129);
          DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v129);
          v14 = (struct _EX_RUNDOWN_REF *)v137;
          if ( !v137 )
          {
            LODWORD(v26) = -1073741816;
            WdLogSingleEntry3(3LL, this, a2->hResource, -1073741816LL);
            goto LABEL_83;
          }
          Flags = a2->Flags;
          if ( (*(_DWORD *)&Flags & 0x20020) != 0 )
          {
            LODWORD(v26) = -1073741811;
            WdLogSingleEntry2(3LL, this, -1073741811LL);
            goto LABEL_83;
          }
          v95 = *(DXGDEVICE **)(v137 + 8);
          if ( v95 != this )
          {
            LODWORD(v26) = -1073741811;
            WdLogSingleEntry4(3LL, this, a2->hResource, v95, -1073741811LL);
            goto LABEL_83;
          }
          if ( (*(_WORD *)&Flags & 0x800) != 0 )
          {
            v96 = *(_QWORD *)(v137 + 56);
            if ( !v96 || (*(_DWORD *)(v96 + 12) & 0x20) == 0 )
            {
              LODWORD(v26) = -1073741811;
              WdLogSingleEntry2(3LL, a2->hResource, -1073741811LL);
              goto LABEL_83;
            }
          }
          if ( (*(_DWORD *)(v137 + 4) & 1) != 0 )
          {
            v97 = *(_QWORD *)(v137 + 56);
            if ( !v97 )
            {
              LODWORD(v26) = -1073741811;
              WdLogSingleEntry3(3LL, this, v137, -1073741811LL);
              goto LABEL_83;
            }
            PrivateDriverDataSize = a2->PrivateDriverDataSize;
            if ( *(_DWORD *)(v97 + 128) != PrivateDriverDataSize )
            {
              LODWORD(v26) = -1073741811;
              WdLogSingleEntry4(3LL, this, *(_QWORD *)(v137 + 56), PrivateDriverDataSize, -1073741811LL);
              goto LABEL_83;
            }
            v66 = a11;
            v99 = (DXGPUSHLOCK *)(v97 + 32);
            *((_QWORD *)a11 + 1) = v99;
            DXGPUSHLOCK::AcquireExclusive(v99);
            *((_DWORD *)v66 + 4) = 2;
            Count = v14[7].Count;
            NumAllocations = a2->NumAllocations;
            for ( i = 0LL; (unsigned int)i < NumAllocations; i = (unsigned int)(i + 1) )
            {
              v103 = v138[i].PrivateDriverDataSize;
              if ( *(_DWORD *)(*(_QWORD *)(Count + 136) - 8LL) != (_DWORD)v103 )
              {
                LODWORD(v26) = -1073741811;
                WdLogSingleEntry5(3LL, this, Count, i, v103, -1073741811LL);
                goto LABEL_84;
              }
            }
            if ( (*(_DWORD *)(Count + 12) & 0x100) != 0 )
            {
              v26 = -1073741811LL;
LABEL_173:
              WdLogSingleEntry3(3LL, this, Count, v26);
              goto LABEL_84;
            }
            v104 = NumAllocations + *(_DWORD *)(Count + 132);
            if ( v104 > 0x100 )
            {
              LODWORD(v26) = -1073741811;
              WdLogSingleEntry4(3LL, this, Count, 256LL, -1073741811LL);
              goto LABEL_84;
            }
            *(_DWORD *)&a2->Flags |= 2u;
            if ( v104 > 1 )
            {
              v105 = v104;
              v106 = 8LL * v104;
              if ( !is_mul_ok(v104, 8uLL) )
                v106 = -1LL;
              v107 = operator new[](v106, 0x4B677844u, 256LL, i);
              if ( !v107 )
              {
                LODWORD(v26) = -1073741801;
                WdLogSingleEntry3(3LL, this, v105, -1073741801LL);
                goto LABEL_84;
              }
              v108 = v14[7].Count;
              v109 = *(void **)(v108 + 168);
              if ( v109 != (void *)(v108 + 160) )
              {
                operator delete[](v109);
                v108 = v14[7].Count;
              }
              *(_QWORD *)(v108 + 168) = v107;
              NumAllocations = a2->NumAllocations;
            }
            v110 = 0;
            if ( NumAllocations )
            {
              do
              {
                if ( *(_BYTE *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 209LL) )
                {
                  v111 = (DXGADAPTERALLOCATION_VGPU *)operator new[](0x78uLL, 0x4B677844u, 256LL, i);
                  if ( !v111 || (v112 = DXGADAPTERALLOCATION_VGPU::DXGADAPTERALLOCATION_VGPU(v111)) == 0LL )
                  {
LABEL_172:
                    Count = a2->NumAllocations;
                    v26 = -1073741801LL;
                    goto LABEL_173;
                  }
                }
                else
                {
                  v112 = (DXGADAPTERALLOCATION_VGPU *)operator new[](0x40uLL, 0x4B677844u, 256LL, i);
                  if ( !v112 )
                    goto LABEL_172;
                  *((_DWORD *)v112 + 1) = 0;
                  *((_QWORD *)v112 + 1) = 0LL;
                  *((_QWORD *)v112 + 2) = 0LL;
                  *((_QWORD *)v112 + 4) = 0LL;
                  *((_DWORD *)v112 + 10) = 0;
                  *((_QWORD *)v112 + 7) = 0LL;
                  *((_QWORD *)v112 + 6) = 0LL;
                }
                v113 = (__int64 *)((char *)v112 + 48);
                v114 = v14[7].Count + 136;
                v115 = *(__int64 ***)(v14[7].Count + 144);
                if ( *v115 != (__int64 *)v114 )
                  goto LABEL_251;
                *v113 = v114;
                ++v110;
                v113[1] = (__int64)v115;
                *v115 = v113;
                *(_QWORD *)(v114 + 8) = v113;
              }
              while ( v110 < a2->NumAllocations );
            }
            *(_DWORD *)(v14[7].Count + 132) = v104;
          }
          DXGAUTOMUTEX::Initialize(a10, (struct DXGFASTMUTEX *const)&v14[10], 0);
          DXGAUTOMUTEX::Acquire(a10);
LABEL_9:
          v26 = (__int64)a7;
          if ( *(_QWORD *)a7 )
            ExReleaseRundownProtection((PEX_RUNDOWN_REF)(*(_QWORD *)a7 + 72LL));
          *(_QWORD *)v26 = v14;
          LODWORD(v26) = 0;
          goto LABEL_12;
        }
        WdLogSingleEntry1(2LL, 267LL);
        DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
      }
    }
    v93 = 0LL;
    goto LABEL_138;
  }
  v25 = a2->Flags;
  if ( (*(_BYTE *)&v25 & 1) == 0 )
    goto LABEL_9;
  LODWORD(a8) = 0;
  if ( (*(_WORD *)&v25 & 0x1000) != 0 )
  {
    v116 = (DXGRESOURCE *)DXGQUOTAALLOCATOR<256,1265072196>::operator new(136LL, v17, v18, v19);
    Pool2 = (__int64)v116;
    if ( v116 )
    {
      DXGRESOURCE::DXGRESOURCE(v116, this);
      *(_DWORD *)(Pool2 + 4) |= 4u;
      *(_QWORD *)(Pool2 + 128) = 0LL;
    }
    else
    {
      Pool2 = 0LL;
    }
    if ( Pool2 )
      goto LABEL_24;
LABEL_262:
    WdLogSingleEntry2(3LL, this, -1073741801LL);
    v65 = -1073741801;
    goto LABEL_82;
  }
  Pool2 = ExAllocatePool2(257LL, 128LL, 1265072196LL, v19);
  if ( !Pool2 )
    goto LABEL_262;
  *(_QWORD *)(Pool2 + 8) = this;
  *(_DWORD *)(Pool2 + 4) = 0;
  *(_QWORD *)(Pool2 + 16) = 0LL;
  *(_QWORD *)(Pool2 + 24) = 0LL;
  *(_QWORD *)(Pool2 + 32) = 0LL;
  *(_QWORD *)(Pool2 + 40) = 0LL;
  *(_QWORD *)(Pool2 + 48) = 0LL;
  *(_QWORD *)(Pool2 + 56) = 0LL;
  *(_QWORD *)(Pool2 + 64) = 0LL;
  *(_QWORD *)(Pool2 + 88) = 0LL;
  *(_QWORD *)(Pool2 + 96) = 0LL;
  *(_QWORD *)(Pool2 + 104) = 0LL;
  *(_DWORD *)(Pool2 + 112) = 0;
  *(_DWORD *)(Pool2 + 116) = -1;
  *(_DWORD *)(Pool2 + 120) = 64;
  ExInitializeRundownProtection((PEX_RUNDOWN_REF)(Pool2 + 72));
LABEL_24:
  v134 = *((_QWORD *)this + 5);
  v30 = v134 + 248;
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v134 + 248, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v117 = *(_DWORD *)(v134 + 272);
      if ( v117 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0q_EtwWriteTransfer(v31, (const EVENT_DESCRIPTOR *)"g", v32, v117);
    }
    ExAcquirePushLockExclusiveEx(v30, 0LL);
  }
  *(_QWORD *)(v134 + 256) = KeGetCurrentThread();
  *(_DWORD *)(Pool2 + 16) = HMGRTABLE::AllocHandle(v134 + 280, Pool2, 4LL, 0LL, 1);
  DxgkReferenceDxgResource((struct DXGRESOURCE *)Pool2);
  *(_QWORD *)(v134 + 256) = 0LL;
  ExReleasePushLockExclusiveEx(v30, 0LL);
  KeLeaveCriticalRegion();
  if ( !*(_DWORD *)(Pool2 + 16) )
    goto LABEL_189;
  *(_QWORD *)(Pool2 + 48) = a2->hPrivateRuntimeResourceHandle;
  if ( (*(_DWORD *)&a2->Flags & 2) == 0 )
  {
    if ( !v139 )
      goto LABEL_73;
    *(_DWORD *)(Pool2 + 4) |= 1u;
LABEL_29:
    Global = DXGGLOBAL_GetGlobal();
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)&v132, (struct DXGGLOBAL *)((char *)Global + 288), 0);
    if ( v133 )
      WdLogSingleEntry5(0LL, 275LL, 4LL, &v132, 0LL, 0LL);
    DXGFASTMUTEX::Acquire(v132);
    v35 = a2->Flags;
    v36 = -1073741811;
    v133 = 1;
    if ( (*(_BYTE *)&v35 & 0x40) != 0 )
    {
      v77 = a6;
      if ( a6 )
      {
        v78 = *((_QWORD *)a6 + 2);
        *(_QWORD *)(Pool2 + 56) = v78;
        if ( !v78 )
        {
          WdLogSingleEntry3(3LL, this, v77, -1073741811LL);
          LODWORD(a8) = -1073741811;
        }
      }
      else
      {
        WdLogSingleEntry2(3LL, this, -1073741811LL);
        LODWORD(a8) = -1073741811;
      }
    }
    else
    {
      if ( v23 )
      {
        v118 = *(_DWORD *)(v21 + 424);
        if ( (v118 & 0x100) != 0 )
        {
          v119 = *(_QWORD *)(v21 + 608);
        }
        else
        {
          v119 = 0LL;
          if ( (v118 & 0x80u) != 0 )
            v119 = v21;
        }
        hGlobalShare = a2->hGlobalShare;
        v136 = v119 + 248;
        DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v119 + 248));
        v121 = (hGlobalShare >> 6) & 0xFFFFFF;
        if ( (unsigned int)v121 < *(_DWORD *)(v119 + 296)
          && (v122 = *(_QWORD *)(v119 + 280),
              v123 = *(_DWORD *)(v122 + 16 * v121 + 8),
              ((hGlobalShare >> 25) & 0x60) == (*(_BYTE *)(v122 + 16 * v121 + 8) & 0x60))
          && (v123 & 0x2000) == 0
          && (v123 & 0x1F) != 0 )
        {
          if ( (v123 & 0x1F) == 2 )
          {
            v42 = *(_QWORD *)(v122 + 16LL * (unsigned int)v121);
          }
          else
          {
            WdLogSingleEntry1(2LL, 267LL);
            v42 = 0LL;
            DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
          }
        }
        else
        {
          v42 = 0LL;
        }
        ExReleasePushLockSharedEx(v136, 0LL);
        KeLeaveCriticalRegion();
      }
      else
      {
        v37 = DXGGLOBAL_GetGlobal();
        CurrentThread = (__int64)KeGetCurrentThread();
        v38 = v37;
        v39 = a2->hGlobalShare;
        if ( *((_QWORD *)v37 + 39) != CurrentThread )
        {
          WdLogSingleEntry1(1LL, 1447LL);
          DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_ShareMutex.IsOwner()", 1447LL, 0LL, 0LL, 0LL, 0LL);
        }
        v40 = (v39 >> 6) & 0xFFFFFF;
        if ( (unsigned int)v40 < *((_DWORD *)v38 + 88)
          && (v41 = *((_QWORD *)v38 + 42),
              CurrentThread = *(unsigned int *)(v41 + 16 * v40 + 8),
              ((v39 >> 25) & 0x60) == (*(_BYTE *)(v41 + 16 * v40 + 8) & 0x60))
          && (CurrentThread & 0x2000) == 0
          && (CurrentThread & 0x1F) != 0 )
        {
          CurrentThread &= 0x1Fu;
          if ( (_BYTE)CurrentThread == 2 )
          {
            v42 = *(_QWORD *)(v41 + 16LL * (unsigned int)v40);
          }
          else
          {
            WdLogSingleEntry1(2LL, 267LL);
            DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
            v42 = 0LL;
          }
        }
        else
        {
          v42 = 0LL;
        }
      }
      *(_QWORD *)(Pool2 + 56) = v42;
      if ( v42 )
      {
        v36 = -1073741811;
      }
      else
      {
        v36 = -1073741811;
        WdLogSingleEntry3(3LL, this, a2->hGlobalShare, -1073741811LL);
        LODWORD(a8) = -1073741811;
      }
    }
    v43 = *(_QWORD *)(Pool2 + 56);
    if ( !v43 )
    {
LABEL_69:
      v36 = (int)a8;
      goto LABEL_70;
    }
    *(_DWORD *)(v43 + 12) |= 0x100u;
    v44 = *(_QWORD *)(Pool2 + 56);
    v45 = a2->NumAllocations;
    if ( *(_DWORD *)(v44 + 132) != (_DWORD)v45
      || (v45 = a2->PrivateDriverDataSize, *(_DWORD *)(v44 + 128) != (_DWORD)v45) && !v23 )
    {
      WdLogSingleEntry4(3LL, this, v44, v45, -1073741811LL);
LABEL_210:
      LODWORD(a8) = -1073741811;
LABEL_70:
      if ( v133 )
      {
        v133 = 0;
        DXGFASTMUTEX::Release((struct _KTHREAD **)v132);
      }
      goto LABEL_72;
    }
    v46 = *(_QWORD *)(Pool2 + 56);
    if ( *(_DWORD *)(v46 + 72) != (unsigned int)PsGetCurrentProcessSessionId() && (*(_DWORD *)(v46 + 12) & 8) == 0 )
    {
      LODWORD(v53) = PsGetCurrentProcessSessionId();
      v49 = *(_QWORD *)(Pool2 + 56);
      v53 = (unsigned int)v53;
      v50 = *(unsigned int *)(v49 + 72);
LABEL_215:
      WdLogSingleEntry5(3LL, this, v49, v50, v53, -1073741811LL);
      v36 = -1073741811;
      goto LABEL_210;
    }
    v47 = *(_QWORD *)(v46 + 80);
    if ( v47 == *((_QWORD *)this + 2) )
    {
      v48 = *((_QWORD *)this + 231);
      if ( !v48
        || *(_QWORD *)(v48 + 2800)
        || (v124 = *(_QWORD *)(v46 + 96)) == 0
        || v124 == v48
        || (*((_BYTE *)this + 1869) & 1) != 0 && (*(_DWORD *)(v46 + 12) & 0x20) != 0 )
      {
        if ( (*(_DWORD *)(v46 + 12) & 1) != 0
          && (!(unsigned int)PsIsProtectedProcess(*(_QWORD *)(*((_QWORD *)this + 5) + 56LL))
           || (unsigned int)PsIsProtectedProcessLight(*(_QWORD *)(*((_QWORD *)this + 5) + 56LL)))
          || (*(_DWORD *)(*(_QWORD *)(Pool2 + 56) + 12LL) & 0x4000) != 0
          && !DXGDEVICE::HasContextWithHintType(this, D3DKMT_CLIENTHINT_DX10|D3DKMT_CLIENTHINT_OPENGL) )
        {
          v125 = *(_QWORD *)(Pool2 + 56);
        }
        else
        {
          v49 = *(_QWORD *)(Pool2 + 56);
          v50 = 0LL;
          v51 = a2->NumAllocations;
          v52 = *(_QWORD **)(v49 + 136);
          if ( v51 )
          {
            do
            {
              CurrentThread = 96 * v50;
              v53 = v138[v50].PrivateDriverDataSize;
              if ( *((_DWORD *)v52 - 2) != (_DWORD)v53 )
                goto LABEL_215;
              v52 = (_QWORD *)*v52;
              v50 = (unsigned int)(v50 + 1);
            }
            while ( (unsigned int)v50 < v51 );
          }
          v36 = (int)a8;
          if ( (int)a8 < 0 )
            goto LABEL_70;
          _m_prefetchw((const void *)(v49 + 68));
          v54 = *(_DWORD *)(v49 + 68);
          if ( v54 )
          {
            while ( 1 )
            {
              v55 = v54;
              v54 = _InterlockedCompareExchange((volatile signed __int32 *)(v49 + 68), v54 + 1, v54);
              if ( v55 == v54 )
                break;
              if ( !v54 )
                goto LABEL_224;
            }
            CurrentThread = *(_QWORD *)(*(_QWORD *)(Pool2 + 56) + 152LL);
            if ( CurrentThread )
            {
              if ( *(DXGDEVICE **)(CurrentThread + 80) == this )
                ++*(_DWORD *)(CurrentThread + 72);
              DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)&v132);
              v56 = (*(_DWORD *)(*((_QWORD *)this + 5) + 424LL) & 4) != 0;
              DXGAUTOMUTEX::DXGAUTOMUTEX(
                (DXGAUTOMUTEX *)&v129,
                (struct DXGFASTMUTEX *const)(*(_QWORD *)(*(_QWORD *)(Pool2 + 56) + 152LL) + 8LL),
                0);
              DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v129);
              CurrentThread = (__int64)a5;
              if ( !a5 )
                CurrentThread = *(_QWORD *)(*((_QWORD *)this + 5) + 56LL);
              v57 = *(_QWORD *)(Pool2 + 56);
              v58 = (_QWORD *)(*(_QWORD *)(v57 + 152) + 56LL);
              v59 = (_QWORD *)*v58;
              if ( (_QWORD *)*v58 == v58 )
              {
LABEL_233:
                WdLogSingleEntry3(3LL, this, v57, -1073741811LL);
                v36 = -1073741811;
                LODWORD(a8) = -1073741811;
              }
              else
              {
                while ( !v56 && (*((_BYTE *)v59 + 16) || CurrentThread != v59[3]) )
                {
                  v59 = (_QWORD *)*v59;
                  if ( v59 == v58 )
                    goto LABEL_233;
                }
              }
              if ( v130 )
                DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)&v129);
              if ( v36 < 0 )
                goto LABEL_70;
            }
            v60 = *(_QWORD *)(Pool2 + 56);
            v61 = *(_QWORD *)(v60 + 136);
            v62 = *(_DWORD *)(v61 - 44);
            if ( (v62 & 2) != 0 )
            {
              if ( *(_DWORD *)(v60 + 132) != 1 )
              {
                v126 = *(DXGADAPTER **)(*((_QWORD *)this + 2) + 16LL);
                if ( *((_DWORD *)v126 + 72) <= 1u || !DXGADAPTER::IsDxgmms2(v126) )
                {
                  WdLogSingleEntry1(1LL, 2654LL);
                  DxgkLogInternalTriageEvent(
                    0LL,
                    262146,
                    -1,
                    (__int64)L"1 == pResource->m_pSharedResource->m_AllocationCount || GetRenderAdapter()->GetPhysicalAdap"
                              "terCount() > 1 && GetRenderAdapter()->IsDxgmms2()",
                    2654LL,
                    0LL,
                    0LL,
                    0LL,
                    0LL);
                  v62 = *(_DWORD *)(v61 - 44);
                }
              }
              *((_QWORD *)this + ((v62 >> 6) & 0xF) + 79) = Pool2;
            }
            goto LABEL_69;
          }
LABEL_224:
          *(_QWORD *)(Pool2 + 56) = 0LL;
          v125 = 0LL;
        }
        WdLogSingleEntry3(3LL, this, v125, -1073741811LL);
        goto LABEL_209;
      }
    }
    else
    {
      v124 = *(_QWORD *)(v47 + 16);
    }
    WdLogSingleEntry4(3LL, this, v46, v124, -1073741811LL);
LABEL_209:
    v36 = -1073741811;
    goto LABEL_210;
  }
  *(_DWORD *)(Pool2 + 4) |= 1u;
  if ( v139 )
    goto LABEL_29;
  SharedResource = DXGSHAREDRESOURCE::CreateSharedResource(
                     *((struct ADAPTER_RENDER **)this + 2),
                     *((struct DXGADAPTER **)this + 231),
                     (*(_DWORD *)&a2->Flags & 0x800) != 0);
  *(_QWORD *)(Pool2 + 56) = SharedResource;
  v69 = Pool2 + 56;
  if ( !SharedResource )
  {
LABEL_189:
    WdLogSingleEntry2(3LL, this, -1073741801LL);
    v65 = -1073741801;
LABEL_261:
    ADAPTER_RENDER::FreeResourceHandleAndWaitForZeroReferences(
      (ADAPTER_RENDER *)CurrentThread,
      (struct DXGRESOURCE *)Pool2,
      0LL);
    DXGRESOURCE::`scalar deleting destructor'((DXGRESOURCE *)Pool2);
    v14 = (struct _EX_RUNDOWN_REF *)v137;
    goto LABEL_82;
  }
  v70 = a2->NumAllocations;
  v135 = 0;
  if ( !(_DWORD)v70 )
  {
LABEL_96:
    v75 = (int)a8;
    *(_DWORD *)(*(_QWORD *)v69 + 132LL) = v70;
    *(_DWORD *)(Pool2 + 4) |= 2u;
    goto LABEL_97;
  }
  while ( 1 )
  {
    if ( !*(_BYTE *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 209LL) )
    {
      v71 = (DXGADAPTERALLOCATION_VGPU *)operator new[](0x40uLL, 0x4B677844u, 256LL, v68);
      if ( !v71 )
        break;
      *((_DWORD *)v71 + 1) = 0;
      *((_QWORD *)v71 + 1) = 0LL;
      *((_QWORD *)v71 + 2) = 0LL;
      *((_QWORD *)v71 + 4) = 0LL;
      *((_DWORD *)v71 + 10) = 0;
      *((_QWORD *)v71 + 7) = 0LL;
      *((_QWORD *)v71 + 6) = 0LL;
      goto LABEL_94;
    }
    v127 = (DXGADAPTERALLOCATION_VGPU *)operator new[](0x78uLL, 0x4B677844u, 256LL, v68);
    if ( !v127 )
      break;
    v71 = DXGADAPTERALLOCATION_VGPU::DXGADAPTERALLOCATION_VGPU(v127);
    if ( !v71 )
      break;
LABEL_94:
    v72 = (__int64 *)((char *)v71 + 48);
    v73 = *(_QWORD *)v69 + 136LL;
    v74 = *(__int64 ***)(*(_QWORD *)v69 + 144LL);
    if ( *v74 != (__int64 *)v73 )
      goto LABEL_251;
    v72[1] = (__int64)v74;
    *v72 = v73;
    *v74 = v72;
    *(_QWORD *)(v73 + 8) = v72;
    if ( ++v135 >= (unsigned int)v70 )
      goto LABEL_96;
  }
  WdLogSingleEntry3(3LL, this, a2->NumAllocations, -1073741801LL);
  v75 = -1073741801;
  LODWORD(a8) = -1073741801;
LABEL_97:
  if ( a9 )
    *(_QWORD *)(*(_QWORD *)v69 + 184LL) = *((_QWORD *)a9 + 52);
  *(_DWORD *)(*(_QWORD *)v69 + 12LL) ^= (*(_DWORD *)(*(_QWORD *)v69 + 12LL) ^ (*(_DWORD *)&a2->Flags >> 3)) & 8;
  if ( v75 < 0 || (unsigned int)v70 <= 1 )
    goto LABEL_101;
  v128 = 8 * v70;
  if ( !is_mul_ok(v70, 8uLL) )
    v128 = -1LL;
  *(_QWORD *)(*(_QWORD *)v69 + 168LL) = operator new[](v128, 0x4B677844u, 256LL, v68);
  if ( *(_QWORD *)(*(_QWORD *)v69 + 168LL) )
  {
LABEL_101:
    v36 = (int)a8;
  }
  else
  {
    WdLogSingleEntry3(3LL, this, v70, -1073741801LL);
    v36 = -1073741801;
    LODWORD(a8) = -1073741801;
  }
  if ( (*(_DWORD *)&a2->Flags & 4) == 0
    && (unsigned int)PsIsProtectedProcess(*(_QWORD *)(*((_QWORD *)this + 5) + 56LL))
    && !(unsigned int)PsIsProtectedProcessLight(*(_QWORD *)(*((_QWORD *)this + 5) + 56LL)) )
  {
    *(_DWORD *)(*(_QWORD *)v69 + 12LL) |= 1u;
  }
  v76 = a2->Flags;
  if ( (*(_DWORD *)&v76 & 0x200000) != 0 )
  {
    if ( (*(_WORD *)&v76 & 0x400) != 0 && a2->NumAllocations && (v138->Flags.Value & 1) != 0 )
    {
      *(_DWORD *)(*(_QWORD *)v69 + 12LL) |= 0x4000u;
    }
    else
    {
      v36 = -1073741811;
      WdLogSingleEntry2(2LL, this, -1073741811LL);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Device 0x%I64x: Attempting to create shared displayable resource without expected flags, returning 0x%I64x",
        (__int64)this,
        -1073741811LL,
        0LL,
        0LL,
        0LL);
      LODWORD(a8) = -1073741811;
    }
  }
  if ( (*(_DWORD *)&a2->Flags & 0x10) != 0 )
  {
    if ( v36 < 0 )
      goto LABEL_257;
    v79 = operator new[](0x58uLL, 0x4B677844u, 64LL, v68);
    if ( v79 )
    {
      v81 = v79 + 56;
      *(_QWORD *)(v79 + 16) = 0LL;
      *(_QWORD *)(v79 + 24) = 0LL;
      *(_QWORD *)(v79 + 32) = 0LL;
      *(_DWORD *)(v79 + 40) = 0;
      *(_DWORD *)(v79 + 44) = 36;
      *(_DWORD *)(v79 + 48) = 64;
      *(_DWORD *)(v79 + 72) = 1;
      *(_QWORD *)(v79 + 80) = this;
      *(_QWORD *)(v79 + 64) = v79 + 56;
      *(_QWORD *)(v79 + 56) = v79 + 56;
      *(_QWORD *)(*(_QWORD *)v69 + 152LL) = v79;
      v82 = *((_QWORD *)this + 5);
      if ( (*(_DWORD *)(v82 + 424) & 4) != 0 )
      {
        v85 = operator new[](0x28uLL, 0x4B677844u, 256LL, v80);
        if ( v85 )
        {
          *(_BYTE *)(v85 + 24) = 1;
          *(_QWORD *)(v85 + 32) = 0LL;
LABEL_118:
          v86 = *(_QWORD *)v81;
          v87 = (_QWORD *)(v85 + 8);
          if ( *(_QWORD *)(*(_QWORD *)v81 + 8LL) == v81 )
          {
            *v87 = v86;
            v87[1] = v81;
            *(_QWORD *)(v86 + 8) = v87;
            *(_QWORD *)v81 = v87;
            goto LABEL_73;
          }
LABEL_251:
          __fastfail(3u);
        }
      }
      else
      {
        v83 = *(void **)(v82 + 56);
        ObfReferenceObject(v83);
        v85 = operator new[](0x28uLL, 0x4B677844u, 256LL, v84);
        if ( v85 )
        {
          *(_BYTE *)(v85 + 24) = 0;
          *(_QWORD *)(v85 + 32) = v83;
          goto LABEL_118;
        }
        if ( v83 )
          ObfDereferenceObject(v83);
      }
      WdLogSingleEntry1(6LL, -1073741801LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262145,
        -1,
        (__int64)L"Out of memory allocating DXGPROCESSSHAREDACCESS class, returning 0x%I64x",
        -1073741801LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    else
    {
      WdLogSingleEntry2(6LL, this, -1073741801LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262145,
        -1,
        (__int64)L"Device 0x%I64x: Out of memory allocating DXGSHAREDRESOURCEACCESS class, returning 0x%I64x",
        (__int64)this,
        -1073741801LL,
        0LL,
        0LL,
        0LL);
    }
    v36 = -1073741801;
    LODWORD(a8) = -1073741801;
    goto LABEL_257;
  }
  if ( v36 >= 0 )
    goto LABEL_73;
LABEL_257:
  CurrentThread = *(_QWORD *)v69;
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*(_QWORD *)v69 + 68LL), 0xFFFFFFFF) == 1 )
    DXGSHAREDRESOURCE::Destroy((DXGSHAREDRESOURCE *)CurrentThread, 0LL, 0);
  *(_QWORD *)v69 = 0LL;
LABEL_72:
  if ( v36 < 0 )
  {
    v65 = (int)a8;
    goto LABEL_261;
  }
LABEL_73:
  *v22 = 1;
  if ( !ExAcquireRundownProtection((PEX_RUNDOWN_REF)(Pool2 + 72)) )
    WdLogSingleEntry5(0LL, 275LL, 38LL, Pool2, 0LL, 0LL);
  v63 = a7;
  if ( *(_QWORD *)a7 )
    ExReleaseRundownProtection((PEX_RUNDOWN_REF)(*(_QWORD *)a7 + 72LL));
  *(_QWORD *)v63 = Pool2;
  if ( *((_DWORD *)DXGGLOBAL_GetGlobal() + 347) )
  {
    if ( DXGTHREAD::GetCurrent() )
    {
      v64 = DXGTHREAD::GetCurrent();
      if ( *((_DWORD *)v64 + 12) )
        WdLogSingleEntry5(0LL, 275LL, 38LL, *((int *)v64 + 12), 0LL, 0LL);
    }
  }
  v14 = (struct _EX_RUNDOWN_REF *)v137;
  v65 = (int)a8;
LABEL_82:
  LODWORD(v26) = v65;
LABEL_83:
  v66 = v131;
LABEL_84:
  if ( v66 )
    DXGAUTOPUSHLOCK::Release(v66);
  if ( v14 )
    ExReleaseRundownProtection(v14 + 9);
LABEL_12:
  if ( *((_DWORD *)DXGGLOBAL_GetGlobal() + 347) )
  {
    v129 = 0LL;
    if ( (int)PsTlsGetValue(g_DxgkThreadTlsId, &v129) >= 0 && (v129 || DxgkThreadObjectCreateDxgThread()) )
    {
      v129 = 0LL;
      if ( (int)PsTlsGetValue(g_DxgkThreadTlsId, &v129) < 0 )
      {
        DxgThread = 0LL;
      }
      else
      {
        DxgThread = v129;
        if ( !v129 )
        {
          DxgThread = DxgkThreadObjectCreateDxgThread();
          v129 = DxgThread;
        }
      }
      if ( *((_DWORD *)DxgThread + 12) )
        WdLogSingleEntry5(0LL, 275LL, 38LL, *((int *)DxgThread + 12), 0LL, 0LL);
    }
  }
  return (unsigned int)v26;
}
