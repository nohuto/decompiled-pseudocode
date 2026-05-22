/*
 * XREFs of ?InternalRelease@?$CMILRefCountBaseT@UIUnknown@@@@IEAAKXZ @ 0x18002AEB8
 * Callers:
 *     ?CopySurface@CDxDevice@DirectComposition@@QEAAXPEAUID3D11Resource@@II0AEBUtagRECT@@PEAVCScratchSurfaceManager@2@@Z @ 0x18000BE74 (-CopySurface@CDxDevice@DirectComposition@@QEAAXPEAUID3D11Resource@@II0AEBUtagRECT@@PEAVCScratchS.c)
 *     ?ClearPreviousSurfaceList@CBitmapInfoFront@DirectComposition@@AEAAXXZ @ 0x18000CBF0 (-ClearPreviousSurfaceList@CBitmapInfoFront@DirectComposition@@AEAAXXZ.c)
 *     ?ReleaseCurrentSurface@CBitmapInfoFront@DirectComposition@@AEAAXXZ @ 0x18000CC30 (-ReleaseCurrentSurface@CBitmapInfoFront@DirectComposition@@AEAAXXZ.c)
 *     ?Clear@CDynamicPoolSet@DirectComposition@@QEAAXXZ @ 0x18001923C (-Clear@CDynamicPoolSet@DirectComposition@@QEAAXXZ.c)
 *     ?Create@CSurfaceFactory@DirectComposition@@SAJPEAVCDevice@2@PEAUIUnknown@@PEAV12@_NPEAPEAV12@@Z @ 0x18001B554 (-Create@CSurfaceFactory@DirectComposition@@SAJPEAVCDevice@2@PEAUIUnknown@@PEAV12@_NPEAPEAV12@@Z.c)
 *     ??$ReleaseInterface@VCSurfaceManager@DirectComposition@@@@YAXAEAPEAVCSurfaceManager@DirectComposition@@@Z @ 0x18001B998 (--$ReleaseInterface@VCSurfaceManager@DirectComposition@@@@YAXAEAPEAVCSurfaceManager@DirectCompos.c)
 *     ??$ReleaseInterface@VCScratchSurfaceManager@DirectComposition@@@@YAXAEAPEAVCScratchSurfaceManager@DirectComposition@@@Z @ 0x18001B9C4 (--$ReleaseInterface@VCScratchSurfaceManager@DirectComposition@@@@YAXAEAPEAVCScratchSurfaceManage.c)
 *     ??$ReleaseInterface@VCDynamicPoolSet@DirectComposition@@@@YAXAEAPEAVCDynamicPoolSet@DirectComposition@@@Z @ 0x18001BC1C (--$ReleaseInterface@VCDynamicPoolSet@DirectComposition@@@@YAXAEAPEAVCDynamicPoolSet@DirectCompos.c)
 *     ?Initialize@CDevice@DirectComposition@@AEAAJPEAUIUnknown@@@Z @ 0x18001DCDC (-Initialize@CDevice@DirectComposition@@AEAAJPEAUIUnknown@@@Z.c)
 *     ?DiscardLargeSurface@CSurfaceManager@DirectComposition@@AEAAXPEAVCAtlasSurface@2@@Z @ 0x18001E48C (-DiscardLargeSurface@CSurfaceManager@DirectComposition@@AEAAXPEAVCAtlasSurface@2@@Z.c)
 *     ??$ReleaseInterface@VCAtlasSurface@DirectComposition@@@@YAXAEAPEAVCAtlasSurface@DirectComposition@@@Z @ 0x18001E928 (--$ReleaseInterface@VCAtlasSurface@DirectComposition@@@@YAXAEAPEAVCAtlasSurface@DirectCompositio.c)
 *     ?RequestLargeSurface@CSurfaceManager@DirectComposition@@QEAAJPEAPEAVCAtlasSurface@2@AEBUSurfaceRequestStruct@2@_N@Z @ 0x18001E950 (-RequestLargeSurface@CSurfaceManager@DirectComposition@@QEAAJPEAPEAVCAtlasSurface@2@AEBUSurfaceR.c)
 *     ?NotifyDisposeSurface@CAtlasSurfacePool@DirectComposition@@QEAAXPEAVCAtlasSurface@2@@Z @ 0x18001F284 (-NotifyDisposeSurface@CAtlasSurfacePool@DirectComposition@@QEAAXPEAVCAtlasSurface@2@@Z.c)
 *     ?CreateWhitePixel@CAtlasSurface@DirectComposition@@SAJPEAVCAtlasSurfacePool@2@PEAPEAV12@@Z @ 0x18001F4BC (-CreateWhitePixel@CAtlasSurface@DirectComposition@@SAJPEAVCAtlasSurfacePool@2@PEAPEAV12@@Z.c)
 *     ?RequestSurface@CSurfaceManager@DirectComposition@@QEAAJW4DXGI_FORMAT@@_NAEBVSizeU@2@PEAPEAVCAtlasSurface@2@@Z @ 0x1800200E0 (-RequestSurface@CSurfaceManager@DirectComposition@@QEAAJW4DXGI_FORMAT@@_NAEBVSizeU@2@PEAPEAVCAtl.c)
 *     ?Create@CAtlasSurface@DirectComposition@@SAJPEAVCAtlasSurfacePool@2@IIAEBVSizeU@2@UDCOMPOSITION_GUTTERS@@PEAPEAV12@@Z @ 0x1800216A8 (-Create@CAtlasSurface@DirectComposition@@SAJPEAVCAtlasSurfacePool@2@IIAEBVSizeU@2@UDCOMPOSITION_.c)
 *     ?Commit@CDevice@DirectComposition@@QEAAJ_NPEAX@Z @ 0x180025130 (-Commit@CDevice@DirectComposition@@QEAAJ_NPEAX@Z.c)
 *     ?CollectDead@CAtlasNode@DirectComposition@@QEAAXXZ @ 0x180027480 (-CollectDead@CAtlasNode@DirectComposition@@QEAAXXZ.c)
 *     ??1CAtlasNode@DirectComposition@@QEAA@XZ @ 0x180027EE8 (--1CAtlasNode@DirectComposition@@QEAA@XZ.c)
 *     ??_ECBitmapInfoFront@DirectComposition@@UEAAPEAXI@Z @ 0x18002A2D0 (--_ECBitmapInfoFront@DirectComposition@@UEAAPEAXI@Z.c)
 *     ?ProcessPreviousSurfaceList@CBitmapInfoFront@DirectComposition@@AEAA_NPEAUSurfaceAndDirty@12@@Z @ 0x18002E7D8 (-ProcessPreviousSurfaceList@CBitmapInfoFront@DirectComposition@@AEAA_NPEAUSurfaceAndDirty@12@@Z.c)
 *     ?CreateFlipUpdate@CBitmapInfoFront@DirectComposition@@QEAAJPEAUIDCompositionSurface@@AEBUtagRECT@@PEAPEAVCBitmapInfoBack@2@PEAUDCOMPOSITION_GUTTERS@@@Z @ 0x18002FFB8 (-CreateFlipUpdate@CBitmapInfoFront@DirectComposition@@QEAAJPEAUIDCompositionSurface@@AEBUtagRECT.c)
 *     ?Create@CAtlasSurfacePool@DirectComposition@@SAJPEAVCSurfaceManager@2@AEBVSizeU@2@W4DXGI_FORMAT@@_N3PEAPEAV12@@Z @ 0x180034780 (-Create@CAtlasSurfacePool@DirectComposition@@SAJPEAVCSurfaceManager@2@AEBVSizeU@2@W4DXGI_FORMAT@.c)
 *     ?RemoveDynamicPool@CDynamicPoolSet@DirectComposition@@AEAAXPEAVCDynamicPool@2@@Z @ 0x1800396D8 (-RemoveDynamicPool@CDynamicPoolSet@DirectComposition@@AEAAXPEAVCDynamicPool@2@@Z.c)
 *     ?Release@CSurfaceFactory@DirectComposition@@UEAAKXZ @ 0x18003AB80 (-Release@CSurfaceFactory@DirectComposition@@UEAAKXZ.c)
 *     ??1CDevice@DirectComposition@@QEAA@XZ @ 0x18005E2D8 (--1CDevice@DirectComposition@@QEAA@XZ.c)
 *     ?HandleSurfaceHidden@CBitmapInfoFront@DirectComposition@@UEAAJXZ @ 0x18007EE80 (-HandleSurfaceHidden@CBitmapInfoFront@DirectComposition@@UEAAJXZ.c)
 *     ?InternalRelease@?$ComPtr@VCAtlasSurfacePool@DirectComposition@@@WRL@Microsoft@@IEAAKXZ @ 0x180089D84 (-InternalRelease@-$ComPtr@VCAtlasSurfacePool@DirectComposition@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Release@?$CMILCOMBaseT@UIUnknown@@@@UEAAKXZ @ 0x1800A0270 (-Release@-$CMILCOMBaseT@UIUnknown@@@@UEAAKXZ.c)
 *     ??1CBitmapInfo@DirectComposition@@MEAA@XZ @ 0x1800EA658 (--1CBitmapInfo@DirectComposition@@MEAA@XZ.c)
 *     ?CommitUpdate@CBitmapInfoFront@DirectComposition@@QEAAJXZ @ 0x1800EA72C (-CommitUpdate@CBitmapInfoFront@DirectComposition@@QEAAJXZ.c)
 *     ?Scroll@CCompositionSurface@DirectComposition@@UEAAJPEBUtagRECT@@0HH@Z @ 0x1800EBD80 (-Scroll@CCompositionSurface@DirectComposition@@UEAAJPEBUtagRECT@@0HH@Z.c)
 *     ??1?$ComPtr@VCDynamicPool@DirectComposition@@@WRL@Microsoft@@QEAA@XZ @ 0x1800F7D3C (--1-$ComPtr@VCDynamicPool@DirectComposition@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ??$ReleaseInterface@VCAtlasSurfacePool@DirectComposition@@@@YAXAEAPEAVCAtlasSurfacePool@DirectComposition@@@Z @ 0x1800F91D8 (--$ReleaseInterface@VCAtlasSurfacePool@DirectComposition@@@@YAXAEAPEAVCAtlasSurfacePool@DirectCo.c)
 *     ??$ReleaseInterface@VCScratchSurface@DirectComposition@@@@YAXAEAPEAVCScratchSurface@DirectComposition@@@Z @ 0x1800FAD0C (--$ReleaseInterface@VCScratchSurface@DirectComposition@@@@YAXAEAPEAVCScratchSurface@DirectCompos.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ?IsKernelDebuggerPresent@@YAHXZ @ 0x18010084C (-IsKernelDebuggerPresent@@YAHXZ.c)
 */

__int64 __fastcall CMILRefCountBaseT<IUnknown>::InternalRelease(volatile signed __int32 *a1)
{
  unsigned __int32 v2; // ebx
  __int64 v4; // rcx
  int v5; // eax
  int v6; // ebx
  BOOL v7; // eax
  char v8; // cl
  HANDLE CurrentThread; // rax
  HANDLE CurrentProcess; // rax
  __int16 Response; // [rsp+70h] [rbp+8h] BYREF

  v2 = _InterlockedDecrement(a1 + 2);
  if ( v2 )
    return v2;
  if ( *((int *)a1 + 2) >= 0 || !IsDebuggerPresent() && !(unsigned int)IsKernelDebuggerPresent() )
    goto LABEL_4;
  while ( 1 )
  {
    while ( 1 )
    {
      v5 = IsKernelDebuggerPresent();
      Response = 63;
      v6 = v5;
      if ( !v5 )
      {
        v7 = IsDebuggerPresent();
        v8 = Response;
        if ( v7 )
          v8 = 103;
        LOBYTE(Response) = v8;
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
      if ( v6 )
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
        goto LABEL_4;
      if ( (char)Response == 105 )
        goto LABEL_30;
      if ( (char)Response != 112 )
      {
        if ( (char)Response != 116 )
          goto LABEL_29;
        goto LABEL_27;
      }
LABEL_28:
      CurrentProcess = GetCurrentProcess();
      TerminateProcess(CurrentProcess, 0xC0000001);
LABEL_29:
      DbgPrintEx(0x65u, 0, "Unrecognized response.\n");
    }
    if ( (char)Response == 98 || (char)Response == 66 )
      break;
    if ( (char)Response == 71 )
      goto LABEL_4;
    if ( (char)Response != 73 )
    {
      if ( (char)Response != 80 )
      {
        if ( (char)Response != 84 )
          goto LABEL_29;
LABEL_27:
        CurrentThread = GetCurrentThread();
        TerminateThread(CurrentThread, 0xC0000001);
        goto LABEL_29;
      }
      goto LABEL_28;
    }
LABEL_30:
    DbgPrintEx(0x65u, 0, "'i' is only supported with debug builds.\n");
  }
  __debugbreak();
LABEL_4:
  _InterlockedIncrement(a1 + 2);
  (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)a1 + 32LL))(a1);
  v2 = _InterlockedDecrement(a1 + 2);
  if ( !v2 )
  {
    v4 = *(_QWORD *)a1;
    --*((_DWORD *)a1 + 2);
    (*(void (__fastcall **)(volatile signed __int32 *, __int64))(v4 + 24))(a1, 1LL);
  }
  return v2;
}
