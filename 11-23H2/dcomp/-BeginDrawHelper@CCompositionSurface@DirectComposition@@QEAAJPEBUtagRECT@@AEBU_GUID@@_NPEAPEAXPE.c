/*
 * XREFs of ?BeginDrawHelper@CCompositionSurface@DirectComposition@@QEAAJPEBUtagRECT@@AEBU_GUID@@_NPEAPEAXPEAUtagPOINT@@PEAUDCOMPOSITION_GUTTERS@@@Z @ 0x18002E990
 * Callers:
 *     ?BeginDraw@CCompositionSurface@DirectComposition@@UEAAJPEBUtagRECT@@AEBU_GUID@@PEAPEAXPEAUtagPOINT@@@Z @ 0x18002E920 (-BeginDraw@CCompositionSurface@DirectComposition@@UEAAJPEBUtagRECT@@AEBU_GUID@@PEAPEAXPEAUtagPOI.c)
 *     ?BeginDrawWithGutters@CCompositionSurface@DirectComposition@@UEAAJPEBUtagRECT@@AEBU_GUID@@PEAPEAXPEAUtagPOINT@@PEAUDCOMPOSITION_GUTTERS@@@Z @ 0x18002E950 (-BeginDrawWithGutters@CCompositionSurface@DirectComposition@@UEAAJPEBUtagRECT@@AEBU_GUID@@PEAPEA.c)
 *     ?BeginDrawWithClear@CCompositionSurface@DirectComposition@@UEAAJPEBUtagRECT@@AEBU_GUID@@PEAPEAXPEAUtagPOINT@@@Z @ 0x1800EB2C0 (-BeginDrawWithClear@CCompositionSurface@DirectComposition@@UEAAJPEBUtagRECT@@AEBU_GUID@@PEAPEAXP.c)
 * Callees:
 *     ?RequestSurface@CBitmapInfoFront@DirectComposition@@AEAAJIIPEAPEAVCAtlasSurface@2@@Z @ 0x180020070 (-RequestSurface@CBitmapInfoFront@DirectComposition@@AEAAJIIPEAPEAVCAtlasSurface@2@@Z.c)
 *     ?BeginDraw@CAtlasSurfacePool@DirectComposition@@QEAAJAEBUtagRECT@@PEBU3@AEBU_GUID@@_NW4DXGI_ALPHA_MODE@@PEAPEAXPEAPEAUID2D1Bitmap@@PEAPEAUID2D1DrawingStateBlock@@@Z @ 0x18002F7C0 (-BeginDraw@CAtlasSurfacePool@DirectComposition@@QEAAJAEBUtagRECT@@PEBU3@AEBU_GUID@@_NW4DXGI_ALPH.c)
 *     ?DirtyGuttersForUpdate@CBitmapInfoBack@DirectComposition@@QEAAXAEBUtagRECT@@PEAUDCOMPOSITION_GUTTERS@@@Z @ 0x18002FDC0 (-DirtyGuttersForUpdate@CBitmapInfoBack@DirectComposition@@QEAAXAEBUtagRECT@@PEAUDCOMPOSITION_GUT.c)
 *     ?CreateFlipUpdate@CBitmapInfoFront@DirectComposition@@QEAAJPEAUIDCompositionSurface@@AEBUtagRECT@@PEAPEAVCBitmapInfoBack@2@PEAUDCOMPOSITION_GUTTERS@@@Z @ 0x18002FFB8 (-CreateFlipUpdate@CBitmapInfoFront@DirectComposition@@QEAAJPEAUIDCompositionSurface@@AEBUtagRECT.c)
 *     ?IsRectangleInSurface@DirectComposition@@YA_NAEBUtagRECT@@II@Z @ 0x180030204 (-IsRectangleInSurface@DirectComposition@@YA_NAEBUtagRECT@@II@Z.c)
 *     ??$ReleaseInterface@VCBitmapInfoBack@DirectComposition@@@@YAXAEAPEAVCBitmapInfoBack@DirectComposition@@@Z @ 0x1800388FC (--$ReleaseInterface@VCBitmapInfoBack@DirectComposition@@@@YAXAEAPEAVCBitmapInfoBack@DirectCompos.c)
 *     ?EndDraw@CBitmapInfoBack@DirectComposition@@QEAAXXZ @ 0x180038924 (-EndDraw@CBitmapInfoBack@DirectComposition@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x180095B40 (__security_check_cookie.c)
 *     ??0ClientUpdateLockAcquire@DirectComposition@@QEAA@PEBVCDxDevice@1@PEAJ@Z @ 0x18009942C (--0ClientUpdateLockAcquire@DirectComposition@@QEAA@PEBVCDxDevice@1@PEAJ@Z.c)
 *     ??1ClientUpdateLockAcquire@DirectComposition@@QEAA@XZ @ 0x1800994F4 (--1ClientUpdateLockAcquire@DirectComposition@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     McGenEventWrite_EventWriteTransfer @ 0x1800E5E3C (McGenEventWrite_EventWriteTransfer.c)
 *     McTemplateU0xxqdd_EventWriteTransfer @ 0x1800EA928 (McTemplateU0xxqdd_EventWriteTransfer.c)
 *     McTemplateU0qqxdddd_EventWriteTransfer @ 0x1800EC24C (McTemplateU0qqxdddd_EventWriteTransfer.c)
 *     ?IsKernelDebuggerPresent@@YAHXZ @ 0x18010084C (-IsKernelDebuggerPresent@@YAHXZ.c)
 */

__int64 __fastcall DirectComposition::CCompositionSurface::BeginDrawHelper(
        DirectComposition::CCompositionSurface *this,
        struct tagRECT *a2,
        struct _GUID *a3,
        char a4,
        void **a5,
        struct tagPOINT *a6,
        struct DCOMPOSITION_GUTTERS *a7)
{
  struct DCOMPOSITION_GUTTERS *v8; // rdi
  struct tagPOINT *v10; // r14
  __int64 v12; // rax
  __int64 v13; // r12
  __int64 v14; // rcx
  unsigned int v15; // r9d
  __int64 v16; // rbx
  const struct DirectComposition::CDxDevice *v17; // r11
  unsigned __int64 v18; // rbx
  unsigned __int64 v19; // rdx
  LONG right; // r8d
  LONG top; // r9d
  LONG left; // r10d
  __int64 v23; // rdx
  int v24; // r10d
  __int64 v25; // rcx
  __int64 v26; // rax
  __int64 v27; // rax
  const struct DirectComposition::CDxDevice *v28; // rdx
  void **v29; // rcx
  __int64 v30; // r8
  char *v31; // r14
  DirectComposition::CBitmapInfoBack *v32; // rcx
  struct DCOMPOSITION_GUTTERS *v33; // r15
  bool IsRectangleInSurface; // al
  int v35; // r10d
  int v36; // ecx
  __int64 v37; // rbx
  bool v38; // zf
  int FlipUpdate; // eax
  int v40; // edx
  int v41; // ecx
  HANDLE ProcessHeap; // rax
  char *v43; // rax
  char *v44; // r14
  __int64 v45; // rdi
  __int64 v46; // rcx
  int v47; // edx
  int v48; // eax
  int v49; // ebx
  BOOL v50; // eax
  CHAR v51; // cl
  HANDLE CurrentProcess; // rax
  HANDLE CurrentThread; // rax
  __int64 v54; // rdi
  int v55; // eax
  int v56; // ebx
  BOOL v57; // eax
  char v58; // cl
  HANDLE v59; // rax
  HANDLE v60; // rax
  int v61; // eax
  int v62; // ebx
  BOOL v63; // eax
  char v64; // cl
  HANDLE v65; // rax
  HANDLE v66; // rax
  int v67; // edi
  __int64 v68; // rbx
  struct tagRECT *v69; // r11
  LONG v70; // r8d
  __int64 v71; // r10
  LONG bottom; // r9d
  enum DXGI_ALPHA_MODE v73; // edi
  int v74; // ecx
  int v75; // edx
  LONG v76; // r14d
  LONG v77; // r15d
  LONG v78; // r9d
  LONG v79; // r8d
  unsigned int v80; // edx
  unsigned int v81; // edx
  LONG *v82; // rdx
  LONG v83; // ecx
  bool v84; // al
  LONG v85; // eax
  LONG v86; // eax
  LONG v87; // eax
  LONG *v88; // rdx
  LONG v89; // ecx
  bool v90; // al
  LONG v91; // eax
  LONG v92; // eax
  LONG v93; // eax
  __int64 v94; // rax
  __int64 v95; // rax
  struct tagPOINT *v96; // rax
  unsigned int v97; // ebx
  __int64 v98; // rcx
  __int64 v99; // rcx
  CHAR Response[4]; // [rsp+60h] [rbp-91h] BYREF
  char v102[8]; // [rsp+64h] [rbp-8Dh] BYREF
  char v103; // [rsp+6Ch] [rbp-85h]
  char v104; // [rsp+6Dh] [rbp-84h]
  int v105; // [rsp+70h] [rbp-81h] BYREF
  int v106; // [rsp+74h] [rbp-7Dh]
  int v107; // [rsp+78h] [rbp-79h] BYREF
  struct tagPOINT *v108; // [rsp+80h] [rbp-71h]
  void **v109; // [rsp+88h] [rbp-69h]
  void *v110; // [rsp+90h] [rbp-61h] BYREF
  struct DCOMPOSITION_GUTTERS *v111; // [rsp+98h] [rbp-59h]
  _BYTE v112[16]; // [rsp+A0h] [rbp-51h] BYREF
  struct tagRECT v113; // [rsp+B0h] [rbp-41h] BYREF
  struct tagRECT v114; // [rsp+C0h] [rbp-31h] BYREF
  __int64 v115; // [rsp+D0h] [rbp-21h] BYREF
  int v116; // [rsp+D8h] [rbp-19h]
  LONG v117; // [rsp+DCh] [rbp-15h]
  struct _GUID *v118; // [rsp+E0h] [rbp-11h] BYREF

  v8 = a7;
  v10 = a6;
  v109 = a5;
  v12 = *((_QWORD *)this + 4);
  v103 = a4;
  v118 = a3;
  v111 = a7;
  v13 = *(_QWORD *)(v12 + 24);
  v108 = a6;
  v14 = *(_QWORD *)(v13 + 96);
  if ( v14 )
  {
    if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v14 + 8LL))(v14) )
      *(_BYTE *)(v13 + 148) = 1;
    ++*(_DWORD *)(v13 + 144);
  }
  else
  {
    EnterCriticalSection((LPCRITICAL_SECTION)(v13 + 104));
  }
  v16 = *((_QWORD *)this + 5);
  v17 = 0LL;
  v105 = 0;
  v110 = 0LL;
  v18 = *(_QWORD *)(v16 + 44);
  *(_QWORD *)&v113.left = v18;
  if ( (Microsoft_Windows_DirectCompositionEnableBits & 2) != 0 )
  {
    if ( a2 )
    {
      LODWORD(v19) = a2->bottom;
      right = a2->right;
      top = a2->top;
      left = a2->left;
    }
    else
    {
      LOBYTE(right) = v18;
      v19 = HIDWORD(v18);
      LOBYTE(top) = 0;
      LOBYTE(left) = 0;
    }
    McTemplateU0qqxdddd_EventWriteTransfer(
      *(_QWORD *)(*((_QWORD *)this + 4) + 24LL),
      v19,
      *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 4) + 24LL) + 160LL),
      42,
      (char)this,
      left,
      top,
      right,
      v19);
    v17 = 0LL;
  }
  if ( !v109
    || !a6
    || *(_QWORD *)&a3->Data1 == *(_QWORD *)&GUID_e8f7fe7a_191c_466d_ad95_975678bda998.Data1
    && *(_QWORD *)a3->Data4 == *(_QWORD *)GUID_e8f7fe7a_191c_466d_ad95_975678bda998.Data4
    && *(int *)(*(_QWORD *)(*((_QWORD *)this + 4) + 24LL) + 368LL) < 1 )
  {
    goto LABEL_34;
  }
  v23 = *((_QWORD *)this + 4);
  v24 = 0;
  if ( *(_DWORD *)(v23 + 344) )
  {
    v24 = -2147467259;
    goto LABEL_21;
  }
  if ( *(_BYTE *)(v23 + 353) )
  {
    if ( *((_DWORD *)this + 14) != 1 || *(int *)(*(_QWORD *)(v23 + 24) + 368LL) < 1 )
      goto LABEL_24;
LABEL_21:
    if ( *(_BYTE *)(v23 + 353) )
      goto LABEL_25;
  }
  if ( *((_DWORD *)this + 14) == 2 && *(int *)(*(_QWORD *)(v23 + 24) + 368LL) < 1 )
  {
LABEL_24:
    v24 = -2003302399;
    goto LABEL_35;
  }
LABEL_25:
  v25 = *((_QWORD *)this + 5);
  v26 = *(_QWORD *)(v25 + 44);
  if ( v24 < 0 )
    goto LABEL_35;
  if ( !(_DWORD)v26 )
  {
    v24 = -2147483634;
    goto LABEL_35;
  }
  if ( a2 )
  {
    if ( (*(_BYTE *)(v25 + 112) & 1) != 0 || *((_QWORD *)this + 6) )
    {
      IsRectangleInSurface = DirectComposition::IsRectangleInSurface(
                               (DirectComposition *)a2,
                               (const struct tagRECT *)(unsigned int)v26,
                               HIDWORD(v26),
                               v15);
      v36 = v35;
      if ( !IsRectangleInSurface )
        v36 = -2147024809;
      v24 = v36;
    }
    else if ( a2->left || *(_QWORD *)&a2->top != __PAIR64__(v26, 0) || a2->bottom != HIDWORD(v26) )
    {
LABEL_34:
      v24 = -2147024809;
    }
  }
LABEL_35:
  v105 = v24;
  v27 = *((_QWORD *)this + 4);
  v28 = (const struct DirectComposition::CDxDevice *)(v27 + 8);
  if ( !v27 )
    v28 = v17;
  DirectComposition::ClientUpdateLockAcquire::ClientUpdateLockAcquire(
    (DirectComposition::ClientUpdateLockAcquire *)v112,
    v28,
    &v105);
  if ( v105 < 0 )
    goto LABEL_171;
  if ( !a2 )
  {
    a2 = (struct tagRECT *)&v115;
    v117 = v113.top;
    v115 = 0LL;
    v116 = v18;
  }
  v31 = (char *)this + 48;
  v32 = (DirectComposition::CBitmapInfoBack *)*((_QWORD *)this + 6);
  v33 = (struct DCOMPOSITION_GUTTERS *)&v107;
  if ( !v103 )
    v33 = a7;
  v107 = 0;
  *(_QWORD *)&v113.left = v33;
  if ( v32 )
  {
    v104 = 0;
    DirectComposition::CBitmapInfoBack::EndDraw(v32);
    goto LABEL_112;
  }
  v37 = *((_QWORD *)this + 5);
  v104 = 1;
  if ( (*(_BYTE *)(v37 + 112) & 1) != 0 )
  {
    FlipUpdate = DirectComposition::CBitmapInfoFront::CreateFlipUpdate(
                   (DirectComposition::CBitmapInfoFront *)v37,
                   this,
                   a2,
                   (struct DirectComposition::CBitmapInfoBack **)this + 6,
                   v33);
    goto LABEL_110;
  }
  v38 = *(_QWORD *)(v37 + 16) == 0LL;
  v106 = 0;
  if ( v38 )
  {
    FlipUpdate = DirectComposition::CBitmapInfoFront::RequestSurface(
                   (DirectComposition::CBitmapInfoFront *)v37,
                   *(_DWORD *)(v37 + 44),
                   *(_DWORD *)(v37 + 48),
                   (DirectComposition::CAtlasSurfacePool ***)(v37 + 16));
    v106 = FlipUpdate;
    if ( FlipUpdate >= 0 )
    {
      *(_QWORD *)(*(_QWORD *)(v37 + 16) + 96LL) = v37;
      if ( (Microsoft_Windows_DirectCompositionEnableBits & 8) != 0 )
        McTemplateU0xxqdd_EventWriteTransfer(v41, v40, *(_QWORD *)(v37 + 16), (_DWORD)this, 3);
      goto LABEL_52;
    }
LABEL_110:
    v67 = FlipUpdate;
    goto LABEL_111;
  }
LABEL_52:
  ProcessHeap = GetProcessHeap();
  v43 = (char *)HeapAlloc(ProcessHeap, 8u, 0xA8uLL);
  v44 = v43;
  if ( v43 )
  {
    v45 = *(_QWORD *)(v37 + 24);
    v46 = *(_QWORD *)(v37 + 16);
    v47 = *(_DWORD *)(v37 + 40);
    *((_DWORD *)v43 + 2) = 0;
    *(_QWORD *)v43 = &DirectComposition::CBitmapInfo::`vftable';
    *((_QWORD *)v43 + 2) = v46;
    *(_QWORD *)(v43 + 44) = 0LL;
    *((_DWORD *)v43 + 10) = v47;
    *((_QWORD *)v43 + 3) = v45;
    if ( v45 )
    {
      if ( *(_BYTE *)(v45 + 352) )
      {
        if ( *(int *)(v45 + 16) < 0 && (IsDebuggerPresent() || (unsigned int)IsKernelDebuggerPresent()) )
        {
          while ( 1 )
          {
            v48 = IsKernelDebuggerPresent();
            strcpy(Response, "?");
            v49 = v48;
            if ( !v48 )
            {
              v50 = IsDebuggerPresent();
              v51 = Response[0];
              if ( v50 )
                v51 = 103;
              Response[0] = v51;
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
            if ( v49 )
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
                goto LABEL_71;
              case 'G':
              case 'g':
                goto LABEL_71;
              case 'I':
              case 'i':
                DbgPrintEx(0x65u, 0, "'i' is only supported with debug builds.\n");
                continue;
              case 'P':
              case 'p':
                CurrentProcess = GetCurrentProcess();
                TerminateProcess(CurrentProcess, 0xC0000001);
                goto LABEL_69;
              case 'T':
              case 't':
                CurrentThread = GetCurrentThread();
                TerminateThread(CurrentThread, 0xC0000001);
                goto LABEL_69;
              default:
LABEL_69:
                DbgPrintEx(0x65u, 0, "Unrecognized response.\n");
                break;
            }
          }
        }
LABEL_71:
        _InterlockedIncrement((volatile signed __int32 *)(v45 + 16));
      }
      else
      {
        (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v45 + 24) + 8LL))(*(_QWORD *)(v45 + 24));
      }
    }
    v54 = *((_QWORD *)v44 + 2);
    if ( v54 )
    {
      if ( *(int *)(v54 + 8) < 0 && (IsDebuggerPresent() || (unsigned int)IsKernelDebuggerPresent()) )
      {
        while ( 1 )
        {
          v55 = IsKernelDebuggerPresent();
          strcpy(v102, "?");
          v56 = v55;
          if ( !v55 )
          {
            v57 = IsDebuggerPresent();
            v58 = v102[0];
            if ( v57 )
              v58 = 103;
            v102[0] = v58;
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
          if ( v56 )
          {
            DbgPrompt("Break, Go (continue), terminate Process, or terminate Thread (bgpt)? ", v102, 2u);
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
              v102,
              v102);
            __debugbreak();
          }
          switch ( v102[0] )
          {
            case 'B':
            case 'b':
              __debugbreak();
              goto LABEL_90;
            case 'G':
            case 'g':
              goto LABEL_90;
            case 'I':
            case 'i':
              DbgPrintEx(0x65u, 0, "'i' is only supported with debug builds.\n");
              continue;
            case 'P':
            case 'p':
              v59 = GetCurrentProcess();
              TerminateProcess(v59, 0xC0000001);
              goto LABEL_88;
            case 'T':
            case 't':
              v60 = GetCurrentThread();
              TerminateThread(v60, 0xC0000001);
              goto LABEL_88;
            default:
LABEL_88:
              DbgPrintEx(0x65u, 0, "Unrecognized response.\n");
              break;
          }
        }
      }
LABEL_90:
      _InterlockedIncrement((volatile signed __int32 *)(v54 + 8));
    }
    *(_QWORD *)v44 = &DirectComposition::CBitmapInfoBack::`vftable';
    *((_DWORD *)v44 + 32) = 0x7FFFFFFF;
    *((_DWORD *)v44 + 30) = 0x7FFFFFFF;
    *((_DWORD *)v44 + 28) = 0x7FFFFFFF;
    *((_DWORD *)v44 + 26) = 0x7FFFFFFF;
    *((_DWORD *)v44 + 33) = 0x80000000;
    *((_DWORD *)v44 + 31) = 0x80000000;
    *((_DWORD *)v44 + 29) = 0x80000000;
    *((_DWORD *)v44 + 27) = 0x80000000;
    DirectComposition::CBitmapInfoBack::DirtyGuttersForUpdate((DirectComposition::CBitmapInfoBack *)v44, a2, v33);
    if ( *((int *)v44 + 2) < 0 && (IsDebuggerPresent() || (unsigned int)IsKernelDebuggerPresent()) )
    {
      while ( 1 )
      {
        v61 = IsKernelDebuggerPresent();
        strcpy(&v102[4], "?");
        v62 = v61;
        if ( !v61 )
        {
          v63 = IsDebuggerPresent();
          v64 = v102[4];
          if ( v63 )
            v64 = 103;
          v102[4] = v64;
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
        if ( v62 )
        {
          DbgPrompt("Break, Go (continue), terminate Process, or terminate Thread (bgpt)? ", &v102[4], 2u);
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
            &v102[4],
            &v102[4]);
          __debugbreak();
        }
        switch ( v102[4] )
        {
          case 'B':
          case 'b':
            __debugbreak();
            goto LABEL_107;
          case 'G':
          case 'g':
            goto LABEL_107;
          case 'I':
          case 'i':
            DbgPrintEx(0x65u, 0, "'i' is only supported with debug builds.\n");
            continue;
          case 'P':
          case 'p':
            v65 = GetCurrentProcess();
            TerminateProcess(v65, 0xC0000001);
            goto LABEL_105;
          case 'T':
          case 't':
            v66 = GetCurrentThread();
            TerminateThread(v66, 0xC0000001);
            goto LABEL_105;
          default:
LABEL_105:
            DbgPrintEx(0x65u, 0, "Unrecognized response.\n");
            break;
        }
      }
    }
LABEL_107:
    _InterlockedIncrement((volatile signed __int32 *)v44 + 2);
    v67 = v106;
    *((_QWORD *)this + 6) = v44;
    v31 = (char *)this + 48;
  }
  else
  {
    v67 = -2147024882;
    v31 = (char *)this + 48;
  }
LABEL_111:
  if ( v67 >= 0 )
  {
LABEL_112:
    v68 = *(_QWORD *)v31;
    v69 = 0LL;
    v70 = a2->right;
    v71 = *(_QWORD *)(*(_QWORD *)v31 + 16LL);
    bottom = a2->bottom;
    v73 = *(_DWORD *)(*(_QWORD *)v31 + 40LL);
    v74 = *(_DWORD *)(v71 + 72) + (*(_DWORD *)(v71 + 88) & 1);
    v75 = *(_DWORD *)(v71 + 76) + ((*(_DWORD *)(v71 + 88) >> 2) & 1);
    v76 = v74 + a2->left;
    v77 = v75 + a2->top;
    v114.left = v76;
    v78 = v75 + bottom;
    v114.top = v77;
    v79 = v74 + v70;
    v114.bottom = v78;
    v114.right = v79;
    if ( v103 )
    {
      v80 = **(_DWORD **)&v113.left;
      v69 = &v113;
      v113.left = v76 - (**(_DWORD **)&v113.left & 1);
      v113.top = v77 - ((v80 >> 2) & 1);
      v113.right = v79 + ((v80 >> 1) & 1);
      v113.bottom = v78 + ((v80 >> 3) & 1);
    }
    else if ( *(_QWORD *)&v113.left )
    {
      v81 = **(_DWORD **)&v113.left;
      v114.left = v76 - (**(_DWORD **)&v113.left & 1);
      v114.top = v77 - ((v81 >> 2) & 1);
      v114.right = v79 + ((v81 >> 1) & 1);
      v114.bottom = v78 + ((v81 >> 3) & 1);
    }
    v67 = DirectComposition::CAtlasSurfacePool::BeginDraw(
            *(DirectComposition::CAtlasSurfacePool **)(v71 + 64),
            &v114,
            v69,
            v118,
            1,
            v73,
            &v110,
            (struct ID2D1Bitmap **)(v68 + 136),
            (struct ID2D1DrawingStateBlock **)(v68 + 152));
    if ( v67 >= 0 )
    {
      v82 = (LONG *)(v68 + 72);
      *(struct tagRECT *)(v68 + 56) = *a2;
      if ( v68 != -72 )
      {
        LOBYTE(v30) = *v82 >= *(_DWORD *)(v68 + 80) || *(_DWORD *)(v68 + 76) >= *(_DWORD *)(v68 + 84);
        v83 = a2->left;
        v84 = a2->left >= a2->right || a2->top >= a2->bottom;
        if ( (_BYTE)v30 )
        {
          if ( v84 )
          {
            *(_QWORD *)v82 = 0LL;
            *(_QWORD *)(v68 + 80) = 0LL;
          }
          else
          {
            *(struct tagRECT *)v82 = *a2;
          }
        }
        else if ( v84 )
        {
          *(_OWORD *)v82 = *(_OWORD *)v82;
        }
        else
        {
          if ( *v82 < v83 )
            v83 = *v82;
          *v82 = v83;
          v85 = *(_DWORD *)(v68 + 76);
          if ( v85 >= a2->top )
            v85 = a2->top;
          *(_DWORD *)(v68 + 76) = v85;
          v86 = *(_DWORD *)(v68 + 80);
          if ( v86 <= a2->right )
            v86 = a2->right;
          *(_DWORD *)(v68 + 80) = v86;
          v87 = *(_DWORD *)(v68 + 84);
          if ( v87 <= a2->bottom )
            v87 = a2->bottom;
          *(_DWORD *)(v68 + 84) = v87;
        }
      }
      v88 = (LONG *)(v68 + 88);
      if ( v68 != -88 )
      {
        LOBYTE(v30) = *v88 >= *(_DWORD *)(v68 + 96) || *(_DWORD *)(v68 + 92) >= *(_DWORD *)(v68 + 100);
        v89 = a2->left;
        v90 = a2->left >= a2->right || a2->top >= a2->bottom;
        if ( (_BYTE)v30 )
        {
          if ( v90 )
          {
            *(_QWORD *)v88 = 0LL;
            *(_QWORD *)(v68 + 96) = 0LL;
          }
          else
          {
            *(struct tagRECT *)v88 = *a2;
          }
        }
        else if ( v90 )
        {
          *(_OWORD *)v88 = *(_OWORD *)v88;
        }
        else
        {
          if ( *v88 < v89 )
            v89 = *v88;
          *v88 = v89;
          v91 = *(_DWORD *)(v68 + 92);
          if ( v91 >= a2->top )
            v91 = a2->top;
          *(_DWORD *)(v68 + 92) = v91;
          v92 = *(_DWORD *)(v68 + 96);
          if ( v92 <= a2->right )
            v92 = a2->right;
          *(_DWORD *)(v68 + 96) = v92;
          v93 = *(_DWORD *)(v68 + 100);
          if ( v93 <= a2->bottom )
            v93 = a2->bottom;
          *(_DWORD *)(v68 + 100) = v93;
        }
      }
      *(_BYTE *)(v68 + 160) = 1;
      v38 = *((_DWORD *)this + 14) == 0;
      v105 = v67;
      if ( v38 )
      {
        v94 = *((_QWORD *)this + 4);
        ++*(_DWORD *)(v94 + 348);
        ++*(_DWORD *)(*(_QWORD *)(v94 + 24) + 428LL);
      }
      v95 = *((_QWORD *)this + 4);
      v29 = v109;
      *((_DWORD *)this + 14) = 1;
      *(_BYTE *)(v95 + 353) = 1;
      *v29 = v110;
      v96 = v108;
      v108->x = v76;
      v96->y = v77;
      goto LABEL_177;
    }
    if ( !v104 )
      goto LABEL_170;
  }
  ReleaseInterface<DirectComposition::CBitmapInfoBack>((char *)this + 48);
LABEL_170:
  v10 = v108;
  v105 = v67;
  v8 = v111;
LABEL_171:
  if ( v109 )
    *v109 = 0LL;
  if ( v10 )
    *v10 = 0LL;
  if ( v8 )
    *(_DWORD *)v8 = 0;
LABEL_177:
  if ( (Microsoft_Windows_DirectCompositionEnableBits & 4) != 0 )
    McGenEventWrite_EventWriteTransfer(v29, &DCOMPEVENT_BEGIN_DRAW_Stop, v30, 1LL, &v118);
  v97 = v105;
  DirectComposition::ClientUpdateLockAcquire::~ClientUpdateLockAcquire((DirectComposition::ClientUpdateLockAcquire *)v112);
  v98 = *(_QWORD *)(v13 + 96);
  if ( v98 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v98 + 24LL))(v98);
  v99 = *(_QWORD *)(v13 + 96);
  if ( v99 )
  {
    v38 = (*(_DWORD *)(v13 + 144))-- == 1;
    if ( v38 && *(_BYTE *)(v13 + 148) )
    {
      *(_BYTE *)(v13 + 148) = 0;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v99 + 16LL))(v99);
    }
  }
  else
  {
    LeaveCriticalSection((LPCRITICAL_SECTION)(v13 + 104));
  }
  return v97;
}
