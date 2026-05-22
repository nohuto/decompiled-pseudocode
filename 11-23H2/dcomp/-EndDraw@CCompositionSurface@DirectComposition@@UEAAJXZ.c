/*
 * XREFs of ?EndDraw@CCompositionSurface@DirectComposition@@UEAAJXZ @ 0x1800397A0
 * Callers:
 *     <none>
 * Callees:
 *     ??$ReleaseInterface@VCAtlasSurface@DirectComposition@@@@YAXAEAPEAVCAtlasSurface@DirectComposition@@@Z @ 0x18001E928 (--$ReleaseInterface@VCAtlasSurface@DirectComposition@@@@YAXAEAPEAVCAtlasSurface@DirectCompositio.c)
 *     ?D2DEndDraw@CAtlasSurfacePool@DirectComposition@@AEAAXXZ @ 0x180021E78 (-D2DEndDraw@CAtlasSurfacePool@DirectComposition@@AEAAXXZ.c)
 *     ?UnuseSurface@CBitmapInfoFront@DirectComposition@@AEAAXPEAVCAtlasSurface@2@AEBUtagRECT@@@Z @ 0x18002E744 (-UnuseSurface@CBitmapInfoFront@DirectComposition@@AEAAXPEAVCAtlasSurface@2@AEBUtagRECT@@@Z.c)
 *     ?RemoveGuardRect@CAtlasSurfacePool@DirectComposition@@QEAAXXZ @ 0x180034F84 (-RemoveGuardRect@CAtlasSurfacePool@DirectComposition@@QEAAXXZ.c)
 *     ?UnionRectInternal@DirectComposition@@YA_NPEAUtagRECT@@PEBU2@1@Z @ 0x180037924 (-UnionRectInternal@DirectComposition@@YA_NPEAUtagRECT@@PEBU2@1@Z.c)
 *     ??$ReleaseInterface@VCBitmapInfoBack@DirectComposition@@@@YAXAEAPEAVCBitmapInfoBack@DirectComposition@@@Z @ 0x1800388FC (--$ReleaseInterface@VCBitmapInfoBack@DirectComposition@@@@YAXAEAPEAVCBitmapInfoBack@DirectCompos.c)
 *     ?InvalidateListeners@CDirtyNotifier@DirectComposition@@IEAAXPEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180038F28 (-InvalidateListeners@CDirtyNotifier@DirectComposition@@IEAAXPEAV-$TMilRect_@MUMilRectF@@UMil3DRe.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18007E478 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x180095B40 (__security_check_cookie.c)
 *     ??0ClientUpdateLockRelease@DirectComposition@@QEAA@PEBVCDxDevice@1@PEAJ_N@Z @ 0x18009948C (--0ClientUpdateLockRelease@DirectComposition@@QEAA@PEBVCDxDevice@1@PEAJ_N@Z.c)
 *     ??1ClientUpdateLockRelease@DirectComposition@@QEAA@XZ @ 0x18009952C (--1ClientUpdateLockRelease@DirectComposition@@QEAA@XZ.c)
 *     ??0MultithreadDeviceLock@DirectComposition@@QEAA@PEBVCDxDevice@1@@Z @ 0x18009B9B4 (--0MultithreadDeviceLock@DirectComposition@@QEAA@PEBVCDxDevice@1@@Z.c)
 *     ?Leave@MultithreadDeviceLock@DirectComposition@@SAXPEBVCDxDevice@2@@Z @ 0x18009BE08 (-Leave@MultithreadDeviceLock@DirectComposition@@SAXPEBVCDxDevice@2@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     McGenEventWrite_EventWriteTransfer @ 0x1800E5E3C (McGenEventWrite_EventWriteTransfer.c)
 *     McTemplateU0qqx_EventWriteTransfer @ 0x1800EA8AC (McTemplateU0qqx_EventWriteTransfer.c)
 *     ?ReadTexture@CSurfaceFactory@DirectComposition@@QEAAXPEAUIUnknown@@@Z @ 0x1800FBA6C (-ReadTexture@CSurfaceFactory@DirectComposition@@QEAAXPEAUIUnknown@@@Z.c)
 *     ?IsKernelDebuggerPresent@@YAHXZ @ 0x18010084C (-IsKernelDebuggerPresent@@YAHXZ.c)
 */

__int64 __fastcall DirectComposition::CCompositionSurface::EndDraw(DirectComposition::CCompositionSurface *this)
{
  __int64 v2; // r15
  __int64 v3; // rcx
  int v4; // edx
  int v5; // ecx
  __int64 v6; // rax
  bool v7; // r9
  const struct DirectComposition::CDxDevice *v8; // rdx
  _QWORD *v9; // rcx
  __int64 v10; // r8
  unsigned int v11; // ebx
  __int64 v12; // r14
  CHAR v13; // bl
  __int64 v14; // rsi
  __int64 v15; // rdi
  DWORD TickCount; // eax
  const struct tagRECT *v17; // r9
  __int64 v18; // rcx
  __int64 v19; // rbx
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rax
  const struct tagRECT *v23; // rcx
  const struct tagRECT **v24; // rax
  const struct tagRECT *v25; // rax
  const struct tagRECT *v26; // rcx
  const struct tagRECT **v27; // r8
  __int64 v28; // rsi
  __int64 v29; // rcx
  __int64 v30; // rdi
  __int64 v31; // rbx
  __int64 v32; // rcx
  __int64 v33; // rcx
  __int64 v34; // r12
  unsigned int v35; // ebx
  __int64 v36; // rsi
  _QWORD *v37; // rdi
  DirectComposition *v38; // rcx
  struct DirectComposition::CAtlasSurface *v39; // rdi
  struct DirectComposition::CAtlasSurface *v40; // rbx
  int v41; // eax
  int v42; // ebx
  BOOL v43; // eax
  CHAR v44; // cl
  HANDLE CurrentProcess; // rax
  HANDLE CurrentThread; // rax
  char v47; // al
  int v48; // eax
  __int64 v49; // rbx
  void (__fastcall ***v50)(_QWORD, __int64, float *); // rcx
  volatile signed __int32 *v51; // rdi
  __int64 v52; // rax
  __int64 v53; // rcx
  __int64 v54; // rcx
  bool v55; // zf
  CHAR Response[4]; // [rsp+60h] [rbp-29h] BYREF
  int v58[3]; // [rsp+64h] [rbp-25h] BYREF
  struct tagRECT v59; // [rsp+70h] [rbp-19h] BYREF
  struct DirectComposition::CDxDevice *v60; // [rsp+80h] [rbp-9h] BYREF
  char v61[8]; // [rsp+88h] [rbp-1h] BYREF
  float v62[4]; // [rsp+90h] [rbp+7h] BYREF
  char v63[16]; // [rsp+A0h] [rbp+17h] BYREF

  v2 = *(_QWORD *)(*((_QWORD *)this + 4) + 24LL);
  v3 = *(_QWORD *)(v2 + 96);
  if ( v3 )
  {
    if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3) )
      *(_BYTE *)(v2 + 148) = 1;
    ++*(_DWORD *)(v2 + 144);
  }
  else
  {
    EnterCriticalSection((LPCRITICAL_SECTION)(v2 + 104));
  }
  if ( (Microsoft_Windows_DirectCompositionEnableBits & 4) != 0 )
    McTemplateU0qqx_EventWriteTransfer(
      *(_QWORD *)(*((_QWORD *)this + 4) + 24LL),
      (unsigned int)&DCOMPEVENT_END_DRAW_Start,
      *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 4) + 24LL) + 160LL),
      42,
      (char)this);
  v4 = *((_DWORD *)this + 14);
  v5 = 0;
  v6 = *((_QWORD *)this + 4);
  if ( (unsigned int)(v4 - 1) > 1 )
    v5 = -2003302398;
  v58[0] = v5;
  v7 = v4 == 2;
  v8 = (const struct DirectComposition::CDxDevice *)(v6 + 8);
  if ( !v6 )
    v8 = 0LL;
  DirectComposition::ClientUpdateLockRelease::ClientUpdateLockRelease(
    (DirectComposition::ClientUpdateLockRelease *)v61,
    v8,
    v58,
    v7);
  v11 = v58[0];
  if ( v58[0] >= 0 )
  {
    v12 = *((_QWORD *)this + 6);
    v13 = *(_BYTE *)(v12 + 160);
    v14 = *(_QWORD *)(v12 + 16);
    v15 = *(_QWORD *)(v12 + 136);
    Response[0] = v13;
    TickCount = GetTickCount();
    v18 = *(_QWORD *)(v14 + 64);
    if ( *(_QWORD *)(v18 + 200) != v14 )
    {
      *(_DWORD *)(v18 + 164) = TickCount;
      v19 = *(_QWORD *)(*(_QWORD *)(v14 + 64) + 144LL);
      v20 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v19 + 128) + 24LL) + 96LL);
      if ( v20 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 24LL))(v20);
      v10 = *(_QWORD *)(v14 + 64);
      if ( (*(_BYTE *)(v10 + 172) & 1) != 0 || (v21 = *(_QWORD *)(v19 + 16), !*(_DWORD *)(v21 + 24)) )
      {
        v13 = Response[0];
      }
      else
      {
        v22 = *(_QWORD *)(v21 + 32);
        v17 = (const struct tagRECT *)(v21 + 32);
        v23 = (const struct tagRECT *)(v22 - 16);
        if ( v22 == v21 + 32 )
          v23 = 0LL;
        if ( v23 )
        {
          while ( 1 )
          {
            v24 = (const struct tagRECT **)&v23[1];
            if ( *(_QWORD *)&v23[2].left == v10 )
              break;
            v25 = *v24;
            v23 = v25 - 1;
            if ( v25 == v17 )
              v23 = 0LL;
            if ( !v23 )
            {
              v13 = Response[0];
              goto LABEL_33;
            }
          }
          v26 = *v24;
          if ( *(const struct tagRECT ***)&(*v24)->right != v24
            || (v27 = (const struct tagRECT **)v24[1], *v27 != (const struct tagRECT *)v24)
            || (*v27 = v26,
                *(_QWORD *)&v26->right = v27,
                *(_OWORD *)v24 = 0LL,
                --*(_DWORD *)(v21 + 24),
                v10 = *(_QWORD *)(v21 + 40),
                *(_QWORD *)v10 != v21 + 32) )
          {
            __fastfail(3u);
          }
          *v24 = (const struct tagRECT *)(v21 + 32);
          v24[1] = (const struct tagRECT *)v10;
          *(_QWORD *)v10 = v24;
          *(_QWORD *)(v21 + 40) = v24;
          ++*(_DWORD *)(v21 + 24);
        }
        v13 = Response[0];
      }
    }
LABEL_33:
    v28 = *(_QWORD *)(v14 + 64);
    if ( v15 )
      --*(_DWORD *)(v28 + 176);
    if ( v13 )
    {
      if ( v15 )
      {
        (*(void (__fastcall **)(_QWORD, __int64, _QWORD))(**(_QWORD **)(v28 + 88) + 72LL))(
          *(_QWORD *)(v28 + 88),
          v15,
          0LL);
        if ( !*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v28 + 144) + 128LL) + 354LL) )
          (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v28 + 56) + 592LL))(*(_QWORD *)(v28 + 56), 0LL);
        *(_DWORD *)(v12 + 164) = *(_DWORD *)(v28 + 180);
      }
      if ( g_fLockAndReadEndDraw )
      {
        v29 = *(_QWORD *)(v28 + 56);
        if ( v29 )
          (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v29 + 336LL))(v29, 0LL, 0LL);
        DirectComposition::CAtlasSurfacePool::RemoveGuardRect((DirectComposition::CAtlasSurfacePool *)v28);
        DirectComposition::CSurfaceFactory::ReadTexture(
          *(DirectComposition::CSurfaceFactory **)(*(_QWORD *)(v28 + 144) + 128LL),
          *(struct IUnknown **)(v28 + 32));
      }
      v30 = *(_QWORD *)(v28 + 32);
      v31 = *(_QWORD *)(*(_QWORD *)(v28 + 144) + 128LL);
      DirectComposition::MultithreadDeviceLock::MultithreadDeviceLock(
        (DirectComposition::MultithreadDeviceLock *)&v60,
        (const struct DirectComposition::CDxDevice *)(v31 + 8));
      (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(v31 + 56) + 56LL))(*(_QWORD *)(v31 + 56), v30);
      DirectComposition::MultithreadDeviceLock::Leave(v60);
      *(_QWORD *)(v28 + 248) = 0LL;
      *(_QWORD *)(v28 + 256) = 0LL;
    }
    if ( (*(_BYTE *)(v28 + 172) & 0x20) != 0 && !*(_DWORD *)(v28 + 176) )
      DirectComposition::CAtlasSurfacePool::D2DEndDraw((DirectComposition::CAtlasSurfacePool *)v28);
    *(_BYTE *)(v12 + 160) = 0;
    v32 = *(_QWORD *)(v12 + 136);
    if ( v32 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v32 + 16LL))(v32);
      *(_QWORD *)(v12 + 136) = 0LL;
    }
    v33 = *(_QWORD *)(v12 + 144);
    if ( v33 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v33 + 16LL))(v33);
      *(_QWORD *)(v12 + 144) = 0LL;
    }
    v9 = *(_QWORD **)(v12 + 152);
    if ( v9 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v9 + 16LL))(v9);
      *(_QWORD *)(v12 + 152) = 0LL;
    }
    v34 = *((_QWORD *)this + 6);
    v35 = 0;
    v36 = *((_QWORD *)this + 5);
    v37 = (_QWORD *)(v36 + 128);
    v59 = *(struct tagRECT *)(v34 + 72);
    do
    {
      if ( !*v37 )
        break;
      v38 = (DirectComposition *)(v36 + 8 * (v35 + 2LL * v35 + 17));
      DirectComposition::UnionRectInternal(v38, (struct tagRECT *)v38, &v59, v17);
      ++v35;
      v37 += 3;
    }
    while ( v35 < 3 );
    v39 = *(struct DirectComposition::CAtlasSurface **)(v36 + 120);
    if ( v39 )
    {
      v39 = (struct DirectComposition::CAtlasSurface *)*((_QWORD *)v39 + 2);
      v40 = *(struct DirectComposition::CAtlasSurface **)(v36 + 16);
      DirectComposition::CBitmapInfoFront::UnuseSurface((DirectComposition::CBitmapInfoFront *)v36, v39, &v59);
      ReleaseInterface<DirectComposition::CBitmapInfoBack>((__int64 *)(v36 + 120));
      LOBYTE(v39) = v39 == v40;
    }
    *(_QWORD *)(v36 + 120) = v34;
    if ( *(int *)(v34 + 8) < 0 && (IsDebuggerPresent() || (unsigned int)IsKernelDebuggerPresent()) )
    {
      while ( 1 )
      {
        v41 = IsKernelDebuggerPresent();
        strcpy(Response, "?");
        v42 = v41;
        if ( !v41 )
        {
          v43 = IsDebuggerPresent();
          v44 = Response[0];
          if ( v43 )
            v44 = 103;
          Response[0] = v44;
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
            goto LABEL_75;
          case 'G':
          case 'g':
            goto LABEL_75;
          case 'I':
          case 'i':
            DbgPrintEx(0x65u, 0, "'i' is only supported with debug builds.\n");
            continue;
          case 'P':
          case 'p':
            CurrentProcess = GetCurrentProcess();
            TerminateProcess(CurrentProcess, 0xC0000001);
            goto LABEL_73;
          case 'T':
          case 't':
            CurrentThread = GetCurrentThread();
            TerminateThread(CurrentThread, 0xC0000001);
            goto LABEL_73;
          default:
LABEL_73:
            DbgPrintEx(0x65u, 0, "Unrecognized response.\n");
            break;
        }
      }
    }
LABEL_75:
    _InterlockedIncrement((volatile signed __int32 *)(v34 + 8));
    if ( (_BYTE)v39 )
    {
      ReleaseInterface<DirectComposition::CAtlasSurface>((__int64 *)(v36 + 16));
      v9 = *(_QWORD **)(v34 + 16);
      *(_QWORD *)(v36 + 16) = v9;
      if ( v9 )
        CMILRefCountImpl::AddReference((CMILRefCountImpl *)(v9 + 1));
      *(_BYTE *)(v36 + 112) |= 9u;
    }
    v47 = *(_BYTE *)(v36 + 112);
    if ( (v47 & 2) == 0 )
    {
      v9 = *(_QWORD **)(v36 + 24);
      *(_QWORD *)(v36 + 104) = v9[40];
      v9[40] = v36;
      *(_BYTE *)(v36 + 112) |= 2u;
      v47 = *(_BYTE *)(v36 + 112);
    }
    if ( (v47 & 4) != 0 )
    {
      DirectComposition::CDirtyNotifier::InvalidateListeners(v36 + 56, 0LL);
    }
    else
    {
      v48 = *(_DWORD *)(v36 + 88) - 1;
      v49 = v48;
      v62[0] = (float)v59.left;
      v62[1] = (float)v59.top;
      v62[2] = (float)v59.right;
      for ( v62[3] = (float)v59.bottom; v49 >= 0; --v49 )
      {
        v50 = *(void (__fastcall ****)(_QWORD, __int64, float *))(*(_QWORD *)(v36 + 64) + 8 * v49);
        (**v50)(v50, v36 + 56, v62);
      }
    }
    v51 = (volatile signed __int32 *)*((_QWORD *)this + 6);
    if ( v51 )
    {
      if ( _InterlockedExchangeAdd(v51 + 2, 0xFFFFFFFF) == 1 )
      {
        CMILRefCountImpl::AddReference((CMILRefCountImpl *)(v51 + 2));
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v51 + 24LL))(v51);
        if ( _InterlockedExchangeAdd(v51 + 2, 0xFFFFFFFF) == 1 )
        {
          --*((_DWORD *)v51 + 2);
          (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v51 + 16LL))(v51, 1LL);
        }
      }
      *((_QWORD *)this + 6) = 0LL;
    }
    *(_BYTE *)(*((_QWORD *)this + 5) + 112LL) |= 9u;
    if ( *((_DWORD *)this + 14) == 1 )
      *(_BYTE *)(*((_QWORD *)this + 4) + 353LL) = 0;
    v52 = *((_QWORD *)this + 4);
    *((_DWORD *)this + 14) = 0;
    v11 = v58[0];
    --*(_DWORD *)(v52 + 348);
    --*(_DWORD *)(*(_QWORD *)(v52 + 24) + 428LL);
  }
  if ( (Microsoft_Windows_DirectCompositionEnableBits & 4) != 0 )
    McGenEventWrite_EventWriteTransfer(v9, &DCOMPEVENT_END_DRAW_Stop, v10, 1LL, v63);
  DirectComposition::ClientUpdateLockRelease::~ClientUpdateLockRelease((DirectComposition::ClientUpdateLockRelease *)v61);
  v53 = *(_QWORD *)(v2 + 96);
  if ( v53 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v53 + 24LL))(v53);
  v54 = *(_QWORD *)(v2 + 96);
  if ( v54 )
  {
    v55 = (*(_DWORD *)(v2 + 144))-- == 1;
    if ( v55 && *(_BYTE *)(v2 + 148) )
    {
      *(_BYTE *)(v2 + 148) = 0;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v54 + 16LL))(v54);
    }
  }
  else
  {
    LeaveCriticalSection((LPCRITICAL_SECTION)(v2 + 104));
  }
  return v11;
}
