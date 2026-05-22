/*
 * XREFs of ?CreateSurface@CSurfaceFactory@DirectComposition@@UEAAJIIW4DXGI_FORMAT@@W4DXGI_ALPHA_MODE@@_NPEAPEAUIDCompositionSurface@@@Z @ 0x18002A850
 * Callers:
 *     ?CreateSurface@CDevice@DirectComposition@@UEAAJIIW4DXGI_FORMAT@@W4DXGI_ALPHA_MODE@@PEAPEAUIDCompositionSurface@@@Z @ 0x180008200 (-CreateSurface@CDevice@DirectComposition@@UEAAJIIW4DXGI_FORMAT@@W4DXGI_ALPHA_MODE@@PEAPEAUIDComp.c)
 *     ?RecreateUnderlying@CompositionDrawingSurface@Composition@UI@Windows@@EEAAJUSizeInt32@Graphics@4@@Z @ 0x180061850 (-RecreateUnderlying@CompositionDrawingSurface@Composition@UI@Windows@@EEAAJUSizeInt32@Graphics@4.c)
 *     ?CreateSurface@CSurfaceFactory@DirectComposition@@UEAAJIIW4DXGI_FORMAT@@W4DXGI_ALPHA_MODE@@PEAPEAUIDCompositionSurface@@@Z @ 0x18008DEC0 (-CreateSurface@CSurfaceFactory@DirectComposition@@UEAAJIIW4DXGI_FORMAT@@W4DXGI_ALPHA_MODE@@PEAPE.c)
 * Callees:
 *     ?RequestSurface@CBitmapInfoFront@DirectComposition@@AEAAJIIPEAPEAVCAtlasSurface@2@@Z @ 0x180020070 (-RequestSurface@CBitmapInfoFront@DirectComposition@@AEAAJIIPEAPEAVCAtlasSurface@2@@Z.c)
 *     ?Release@CCompositionSurface@DirectComposition@@UEAAKXZ @ 0x180078030 (-Release@CCompositionSurface@DirectComposition@@UEAAKXZ.c)
 *     ?InternalRelease@?$CMILRefCountBaseT@UIMILRefCount@@@@IEAAKXZ @ 0x18007E3EC (-InternalRelease@-$CMILRefCountBaseT@UIMILRefCount@@@@IEAAKXZ.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18007E478 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     McTemplateU0xxqdd_EventWriteTransfer @ 0x1800EA928 (McTemplateU0xxqdd_EventWriteTransfer.c)
 *     ?IsKernelDebuggerPresent@@YAHXZ @ 0x18010084C (-IsKernelDebuggerPresent@@YAHXZ.c)
 */

__int64 __fastcall DirectComposition::CSurfaceFactory::CreateSurface(
        DirectComposition::CSurfaceFactory *this,
        int a2,
        int a3,
        enum DXGI_FORMAT a4,
        enum DXGI_ALPHA_MODE a5,
        bool a6,
        struct IDCompositionSurface **a7)
{
  __int64 v7; // rbx
  __int64 v11; // rcx
  struct IDCompositionSurface **v13; // r13
  enum DXGI_ALPHA_MODE v14; // r12d
  HANDLE ProcessHeap; // rax
  struct IDCompositionSurface *v16; // rax
  struct IDCompositionSurface *v17; // rsi
  __int64 v18; // r15
  HANDLE v19; // rax
  char *v20; // rax
  char *v21; // rdi
  __int64 v22; // rcx
  char v23; // cl
  char v24; // cl
  __int64 v25; // rcx
  int v26; // edx
  int v27; // eax
  int v28; // edx
  unsigned int v29; // r15d
  __int64 v30; // rcx
  __int64 v31; // rcx
  __int64 v32; // rcx
  bool v33; // zf
  int v35; // eax
  int v36; // r15d
  BOOL v37; // eax
  char v38; // cl
  HANDLE CurrentProcess; // rax
  HANDLE CurrentThread; // rax
  int v41; // eax
  int v42; // r12d
  BOOL v43; // eax
  char v44; // cl
  HANDLE v45; // rax
  HANDLE v46; // rax
  int v47; // eax
  int v48; // r15d
  BOOL v49; // eax
  char v50; // cl
  HANDLE v51; // rax
  HANDLE v52; // rax
  char v53[8]; // [rsp+68h] [rbp-11h] BYREF
  __int64 v54; // [rsp+70h] [rbp-9h] BYREF
  __int16 Response; // [rsp+C8h] [rbp+4Fh] BYREF
  int v56; // [rsp+D0h] [rbp+57h]
  int v57; // [rsp+D8h] [rbp+5Fh]
  enum DXGI_FORMAT v58; // [rsp+E0h] [rbp+67h]

  v58 = a4;
  v57 = a3;
  v56 = a2;
  v7 = *((_QWORD *)this + 3);
  v11 = *(_QWORD *)(v7 + 96);
  if ( v11 )
  {
    if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v11 + 8LL))(v11) )
      *(_BYTE *)(v7 + 148) = 1;
    ++*(_DWORD *)(v7 + 144);
  }
  else
  {
    EnterCriticalSection((LPCRITICAL_SECTION)(v7 + 104));
  }
  v13 = a7;
  if ( !a7 )
  {
    v29 = -2147024809;
    goto LABEL_30;
  }
  if ( *((_DWORD *)this + 86) )
  {
    v29 = -2147467259;
    goto LABEL_105;
  }
  v14 = a5;
  if ( a4 != DXGI_FORMAT_A8_UNORM
    && a4 != DXGI_FORMAT_B8G8R8A8_UNORM
    && a4 != DXGI_FORMAT_R16G16B16A16_FLOAT
    && a4 != DXGI_FORMAT_R8G8B8A8_UNORM )
  {
    goto LABEL_103;
  }
  if ( a5 != DXGI_ALPHA_MODE_PREMULTIPLIED )
  {
    if ( a5 )
    {
      if ( a5 != DXGI_ALPHA_MODE_IGNORE )
        goto LABEL_103;
    }
    else
    {
      v14 = DXGI_ALPHA_MODE_IGNORE;
    }
    if ( a4 != DXGI_FORMAT_A8_UNORM )
      goto LABEL_9;
LABEL_103:
    v29 = -2147024809;
    goto LABEL_105;
  }
LABEL_9:
  if ( (a2 == 0) != (a3 == 0) || !a2 && *(int *)(*((_QWORD *)this + 3) + 368LL) < 2 )
    goto LABEL_103;
  ProcessHeap = GetProcessHeap();
  v16 = (struct IDCompositionSurface *)HeapAlloc(ProcessHeap, 8u, 0x50uLL);
  v17 = v16;
  if ( v16 )
  {
    *((_DWORD *)v16 + 6) = 1;
    *(_QWORD *)v16 = &DirectComposition::CCompositionSurface::`vftable'{for `DirectComposition::IDCompositionSurfaceInternal'};
    *((_QWORD *)v16 + 1) = &DirectComposition::CCompositionSurface::`vftable'{for `IDCompositionSurfaceDebug'};
    *((_QWORD *)v16 + 2) = &DirectComposition::CCompositionSurface::`vftable'{for `DirectComposition::IDCompositionSurfaceListenerInternal'};
    *((_QWORD *)v16 + 4) = this;
    if ( *((_BYTE *)this + 352) )
    {
      if ( *((int *)this + 4) < 0 && (IsDebuggerPresent() || (unsigned int)IsKernelDebuggerPresent()) )
      {
        while ( 1 )
        {
          v35 = IsKernelDebuggerPresent();
          Response = 63;
          v36 = v35;
          if ( !v35 )
          {
            v37 = IsDebuggerPresent();
            v38 = Response;
            if ( v37 )
              v38 = 103;
            LOBYTE(Response) = v38;
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
          if ( v36 )
          {
            DbgPrompt("Break, Go (continue), terminate Process, or terminate Thread (bgpt)? ", (PCH)&Response, 2u);
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
              &Response,
              &Response);
            __debugbreak();
          }
          switch ( (char)Response )
          {
            case 'B':
            case 'b':
              __debugbreak();
              goto LABEL_14;
            case 'G':
            case 'g':
              goto LABEL_14;
            case 'I':
            case 'i':
              DbgPrintEx(0x65u, 0, "'i' is only supported with debug builds.\n");
              continue;
            case 'P':
            case 'p':
              CurrentProcess = GetCurrentProcess();
              TerminateProcess(CurrentProcess, 0xC0000001);
              goto LABEL_66;
            case 'T':
            case 't':
              CurrentThread = GetCurrentThread();
              TerminateThread(CurrentThread, 0xC0000001);
              goto LABEL_66;
            default:
LABEL_66:
              DbgPrintEx(0x65u, 0, "Unrecognized response.\n");
              break;
          }
        }
      }
LABEL_14:
      _InterlockedIncrement((volatile signed __int32 *)this + 4);
    }
    else
    {
      (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 3) + 8LL))(*((_QWORD *)this + 3));
    }
    v18 = *((_QWORD *)v17 + 4);
    v19 = GetProcessHeap();
    v20 = (char *)HeapAlloc(v19, 8u, 0xC8uLL);
    v21 = v20;
    if ( v20 )
    {
      *((_DWORD *)v20 + 2) = 0;
      *(_QWORD *)v20 = &DirectComposition::CBitmapInfo::`vftable';
      *((_QWORD *)v20 + 2) = 0LL;
      *(_QWORD *)(v20 + 44) = 0LL;
      *((_QWORD *)v20 + 3) = v18;
      *((_DWORD *)v20 + 10) = v14;
      if ( v18 )
      {
        if ( *(_BYTE *)(v18 + 352) )
        {
          if ( *(int *)(v18 + 16) < 0 && (IsDebuggerPresent() || (unsigned int)IsKernelDebuggerPresent()) )
          {
            while ( 1 )
            {
              v41 = IsKernelDebuggerPresent();
              strcpy(v53, "?");
              v42 = v41;
              if ( !v41 )
              {
                v43 = IsDebuggerPresent();
                v44 = v53[0];
                if ( v43 )
                  v44 = 103;
                v53[0] = v44;
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
              if ( v42 )
              {
                DbgPrompt("Break, Go (continue), terminate Process, or terminate Thread (bgpt)? ", v53, 2u);
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
                  v53,
                  v53);
                __debugbreak();
              }
              switch ( v53[0] )
              {
                case 'B':
                case 'b':
                  __debugbreak();
                  goto LABEL_19;
                case 'G':
                case 'g':
                  goto LABEL_19;
                case 'I':
                case 'i':
                  DbgPrintEx(0x65u, 0, "'i' is only supported with debug builds.\n");
                  continue;
                case 'P':
                case 'p':
                  v45 = GetCurrentProcess();
                  TerminateProcess(v45, 0xC0000001);
                  goto LABEL_81;
                case 'T':
                case 't':
                  v46 = GetCurrentThread();
                  TerminateThread(v46, 0xC0000001);
                  goto LABEL_81;
                default:
LABEL_81:
                  DbgPrintEx(0x65u, 0, "Unrecognized response.\n");
                  break;
              }
            }
          }
LABEL_19:
          _InterlockedIncrement((volatile signed __int32 *)(v18 + 16));
        }
        else
        {
          (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v18 + 24) + 8LL))(*(_QWORD *)(v18 + 24));
        }
      }
      v22 = *((_QWORD *)v21 + 2);
      if ( v22 )
        CMILRefCountImpl::AddReference((CMILRefCountImpl *)(v22 + 8));
      *((_DWORD *)v21 + 20) = 1;
      *((_QWORD *)v21 + 8) = v21 + 96;
      *((_QWORD *)v21 + 9) = v21 + 96;
      *(_QWORD *)(v21 + 84) = 1LL;
      v23 = v21[112];
      *(_QWORD *)v21 = &DirectComposition::CBitmapInfoFront::`vftable'{for `DirectComposition::CBitmapInfo'};
      *((_DWORD *)v21 + 29) = 0;
      *((_QWORD *)v21 + 7) = &DirectComposition::CBitmapInfoFront::`vftable'{for `DirectComposition::CDirtyNotifier'};
      v24 = (16 * a6) | v23 & 0xEF;
      v54 = 0LL;
      *((_DWORD *)v21 + 13) = v58;
      *((_DWORD *)v21 + 11) = v56;
      *((_DWORD *)v21 + 12) = v57;
      v21[112] = v24;
      (**(void (__fastcall ***)(struct IDCompositionSurface *, GUID *, __int64 *))v17)(
        v17,
        &GUID_94ef25d8_74a2_4cfe_989f_6b0218e7e9f4,
        &v54);
      v25 = v54;
      *((_QWORD *)v21 + 4) = v54;
      if ( v25 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
        v54 = 0LL;
      }
      if ( *((int *)v21 + 2) < 0 && (IsDebuggerPresent() || (unsigned int)IsKernelDebuggerPresent()) )
      {
        while ( 1 )
        {
          v47 = IsKernelDebuggerPresent();
          strcpy(&v53[4], "?");
          v48 = v47;
          if ( !v47 )
          {
            v49 = IsDebuggerPresent();
            v50 = v53[4];
            if ( v49 )
              v50 = 103;
            v53[4] = v50;
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
          if ( v48 )
          {
            DbgPrompt("Break, Go (continue), terminate Process, or terminate Thread (bgpt)? ", &v53[4], 2u);
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
              &v53[4],
              &v53[4]);
            __debugbreak();
          }
          switch ( v53[4] )
          {
            case 'B':
            case 'b':
              __debugbreak();
              goto LABEL_25;
            case 'G':
            case 'g':
              goto LABEL_25;
            case 'I':
            case 'i':
              DbgPrintEx(0x65u, 0, "'i' is only supported with debug builds.\n");
              continue;
            case 'P':
            case 'p':
              v51 = GetCurrentProcess();
              TerminateProcess(v51, 0xC0000001);
              goto LABEL_96;
            case 'T':
            case 't':
              v52 = GetCurrentThread();
              TerminateThread(v52, 0xC0000001);
              goto LABEL_96;
            default:
LABEL_96:
              DbgPrintEx(0x65u, 0, "Unrecognized response.\n");
              break;
          }
        }
      }
LABEL_25:
      _InterlockedIncrement((volatile signed __int32 *)v21 + 2);
      v26 = *((_DWORD *)v21 + 11);
      v27 = 0;
      if ( v26 )
      {
        v27 = DirectComposition::CBitmapInfoFront::RequestSurface(
                (DirectComposition::CBitmapInfoFront *)v21,
                v26,
                *((_DWORD *)v21 + 12),
                (DirectComposition::CAtlasSurfacePool ***)v21 + 2);
        v29 = v27;
        if ( v27 >= 0 )
        {
          v30 = *((_QWORD *)v21 + 2);
          *(_QWORD *)(v30 + 96) = v21;
          if ( (Microsoft_Windows_DirectCompositionEnableBits & 8) != 0 )
          {
            McTemplateU0xxqdd_EventWriteTransfer(v30, v28, *((_QWORD *)v21 + 2), (_DWORD)v17, 3);
            goto LABEL_29;
          }
        }
      }
      v29 = v27;
      if ( v27 >= 0 )
      {
LABEL_29:
        *((_QWORD *)v17 + 5) = v21;
        *v13 = v17;
        goto LABEL_30;
      }
      CMILRefCountBaseT<IMILRefCount>::InternalRelease(v21);
    }
    else
    {
      v29 = -2147024882;
    }
    DirectComposition::CCompositionSurface::Release(v17);
  }
  else
  {
    v29 = -2147024882;
  }
LABEL_105:
  *v13 = 0LL;
LABEL_30:
  v31 = *(_QWORD *)(v7 + 96);
  if ( v31 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 24LL))(v31);
  v32 = *(_QWORD *)(v7 + 96);
  if ( v32 )
  {
    v33 = (*(_DWORD *)(v7 + 144))-- == 1;
    if ( v33 && *(_BYTE *)(v7 + 148) )
    {
      *(_BYTE *)(v7 + 148) = 0;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v32 + 16LL))(v32);
    }
  }
  else
  {
    LeaveCriticalSection((LPCRITICAL_SECTION)(v7 + 104));
  }
  return v29;
}
