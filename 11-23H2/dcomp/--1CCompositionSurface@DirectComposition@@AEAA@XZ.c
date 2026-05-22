/*
 * XREFs of ??1CCompositionSurface@DirectComposition@@AEAA@XZ @ 0x18007808C
 * Callers:
 *     ?Release@CCompositionSurface@DirectComposition@@UEAAKXZ @ 0x180078030 (-Release@CCompositionSurface@DirectComposition@@UEAAKXZ.c)
 * Callees:
 *     ?Release@CDelayedDestructionObject@DirectComposition@@UEAAKXZ @ 0x180028CC0 (-Release@CDelayedDestructionObject@DirectComposition@@UEAAKXZ.c)
 *     ?EndDraw@CBitmapInfoBack@DirectComposition@@QEAAXXZ @ 0x180038924 (-EndDraw@CBitmapInfoBack@DirectComposition@@QEAAXXZ.c)
 *     ?InternalRelease@?$CMILRefCountBaseT@UIMILRefCount@@@@IEAAKXZ @ 0x18007E3EC (-InternalRelease@-$CMILRefCountBaseT@UIMILRefCount@@@@IEAAKXZ.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18007E478 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_HDRWallpaper@@@details@wil@@QEAA_NXZ @ 0x18009A0D0 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_HDRWallpaper@@@details@wil@@QEAA_.c)
 *     ?CheckClientDrawNotInProgress@CDevice@DirectComposition@@QEBAJXZ @ 0x18009ACB8 (-CheckClientDrawNotInProgress@CDevice@DirectComposition@@QEBAJXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ModuleFailFastForHRESULT @ 0x1800F9140 (ModuleFailFastForHRESULT.c)
 *     ?IsKernelDebuggerPresent@@YAHXZ @ 0x18010084C (-IsKernelDebuggerPresent@@YAHXZ.c)
 */

void __fastcall DirectComposition::CCompositionSurface::~CCompositionSurface(
        DirectComposition::CCompositionSurface *this)
{
  __int64 v2; // rdi
  __int64 v3; // rcx
  int v4; // eax
  __int64 v5; // r8
  __int64 v6; // rdx
  __int64 v7; // r10
  __int64 v8; // r9
  __int64 i; // rcx
  volatile signed __int32 *v10; // rdi
  int v11; // eax
  int v12; // esi
  BOOL v13; // eax
  char v14; // cl
  HANDLE CurrentThread; // rax
  HANDLE CurrentProcess; // rax
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // rdi
  __int64 v20; // rcx
  __int64 v21; // rcx
  bool v22; // zf
  __int64 v23; // rcx
  __int64 v24; // rsi
  volatile signed __int32 *v25; // rdi
  void *retaddr; // [rsp+78h] [rbp+0h]
  __int16 Response; // [rsp+80h] [rbp+8h] BYREF

  *(_QWORD *)this = &DirectComposition::CCompositionSurface::`vftable'{for `DirectComposition::IDCompositionSurfaceInternal'};
  *((_QWORD *)this + 1) = &DirectComposition::CCompositionSurface::`vftable'{for `IDCompositionSurfaceDebug'};
  *((_QWORD *)this + 2) = &DirectComposition::CCompositionSurface::`vftable'{for `DirectComposition::IDCompositionSurfaceListenerInternal'};
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
  if ( *((_QWORD *)this + 6) )
  {
    if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_HDRWallpaper>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_HDRWallpaper>::GetImpl'::`2'::impl) )
    {
      v4 = DirectComposition::CDevice::CheckClientDrawNotInProgress(*(DirectComposition::CDevice **)(*((_QWORD *)this + 4) + 24LL));
      if ( v4 < 0 )
        ModuleFailFastForHRESULT((unsigned int)v4, retaddr);
    }
    DirectComposition::CBitmapInfoBack::EndDraw(*((DirectComposition::CBitmapInfoBack **)this + 6));
    CMILRefCountBaseT<IMILRefCount>::InternalRelease(*((_QWORD *)this + 6));
  }
  v5 = *((_QWORD *)this + 5);
  if ( !v5 )
    goto LABEL_51;
  v6 = *(unsigned int *)(v5 + 88);
  v7 = *(_QWORD *)(v5 + 64);
  v8 = (*((_QWORD *)this + 9) + 16LL) & -(__int64)(*((_QWORD *)this + 9) != 0LL);
  for ( i = 0LL; (unsigned int)i < (unsigned int)v6; i = (unsigned int)(i + 1) )
  {
    if ( v8 == *(_QWORD *)(v7 + 8 * i) )
      break;
  }
  if ( (unsigned int)i < (unsigned int)v6 )
  {
    while ( (unsigned int)i < (int)v6 - 1 )
    {
      *(_QWORD *)(v7 + 8 * i) = *(_QWORD *)(v7 + 8LL * (unsigned int)(i + 1));
      i = (unsigned int)(i + 1);
      v6 = *(unsigned int *)(v5 + 88);
    }
    *(_DWORD *)(v5 + 88) = v6 - 1;
  }
  *(_QWORD *)(*((_QWORD *)this + 5) + 32LL) = 0LL;
  v10 = (volatile signed __int32 *)*((_QWORD *)this + 5);
  if ( !v10 )
    goto LABEL_51;
  if ( _InterlockedExchangeAdd(v10 + 2, 0xFFFFFFFF) != 1 )
    goto LABEL_50;
  if ( *((int *)v10 + 2) >= 0 || !IsDebuggerPresent() && !(unsigned int)IsKernelDebuggerPresent() )
    goto LABEL_48;
  while ( 1 )
  {
    while ( 1 )
    {
      v11 = IsKernelDebuggerPresent();
      Response = 63;
      v12 = v11;
      if ( !v11 )
      {
        v13 = IsDebuggerPresent();
        v14 = Response;
        if ( v13 )
          v14 = 103;
        LOBYTE(Response) = v14;
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
      if ( v12 )
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
      if ( (char)Response <= 98 )
        break;
      if ( (char)Response == 103 )
        goto LABEL_48;
      if ( (char)Response != 105 )
      {
        if ( (char)Response != 112 )
        {
          if ( (char)Response != 116 )
            goto LABEL_44;
LABEL_42:
          CurrentThread = GetCurrentThread();
          TerminateThread(CurrentThread, 0xC0000001);
          goto LABEL_44;
        }
LABEL_43:
        CurrentProcess = GetCurrentProcess();
        TerminateProcess(CurrentProcess, 0xC0000001);
        goto LABEL_44;
      }
LABEL_45:
      DbgPrintEx(0x65u, 0, "'i' is only supported with debug builds.\n");
    }
    if ( (((char)Response - 66) & 0xFFFFFFDF) == 0 )
      break;
    switch ( (char)Response )
    {
      case 'G':
        goto LABEL_48;
      case 'I':
        goto LABEL_45;
      case 'P':
        goto LABEL_43;
      case 'T':
        goto LABEL_42;
    }
LABEL_44:
    DbgPrintEx(0x65u, 0, "Unrecognized response.\n");
  }
  __debugbreak();
LABEL_48:
  _InterlockedIncrement(v10 + 2);
  (*(void (__fastcall **)(volatile signed __int32 *, __int64, __int64, __int64))(*(_QWORD *)v10 + 24LL))(
    v10,
    v6,
    v5,
    v8);
  if ( _InterlockedExchangeAdd(v10 + 2, 0xFFFFFFFF) == 1 )
  {
    --*((_DWORD *)v10 + 2);
    (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v10 + 16LL))(v10, 1LL);
  }
LABEL_50:
  *((_QWORD *)this + 5) = 0LL;
LABEL_51:
  v17 = *((_QWORD *)this + 9);
  if ( v17 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
    *((_QWORD *)this + 9) = 0LL;
  }
  v18 = *((_QWORD *)this + 8);
  if ( v18 )
  {
    DirectComposition::CDelayedDestructionObject::Release((DirectComposition::CDelayedDestructionObject *)(v18 + 8));
    *((_QWORD *)this + 8) = 0LL;
  }
  v19 = *(_QWORD *)(*((_QWORD *)this + 4) + 24LL);
  v20 = *(_QWORD *)(v19 + 96);
  if ( v20 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 24LL))(v20);
  v21 = *(_QWORD *)(v19 + 96);
  if ( v21 )
  {
    v22 = (*(_DWORD *)(v19 + 144))-- == 1;
    if ( v22 && *(_BYTE *)(v19 + 148) )
    {
      *(_BYTE *)(v19 + 148) = 0;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
    }
  }
  else
  {
    LeaveCriticalSection((LPCRITICAL_SECTION)(v19 + 104));
  }
  v23 = *((_QWORD *)this + 4);
  if ( v23 )
  {
    if ( *(_BYTE *)(v23 + 352) )
    {
      v24 = v23 + 8;
      v25 = (volatile signed __int32 *)(v23 + 16);
      if ( !_InterlockedDecrement((volatile signed __int32 *)(v23 + 16)) )
      {
        CMILRefCountImpl::AddReference((CMILRefCountImpl *)(v23 + 16));
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 32LL))(v24);
        if ( !_InterlockedDecrement(v25) )
        {
          --*v25;
          (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v24 + 24LL))(v24, 1LL);
        }
      }
    }
    else
    {
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v23 + 24) + 16LL))(*(_QWORD *)(v23 + 24));
    }
    *((_QWORD *)this + 4) = 0LL;
  }
}
