/*
 * XREFs of ?Initialize@CAtlasSurface@DirectComposition@@AEAAJXZ @ 0x180021834
 * Callers:
 *     ?CreateWhitePixel@CAtlasSurface@DirectComposition@@SAJPEAVCAtlasSurfacePool@2@PEAPEAV12@@Z @ 0x18001F4BC (-CreateWhitePixel@CAtlasSurface@DirectComposition@@SAJPEAVCAtlasSurfacePool@2@PEAPEAV12@@Z.c)
 *     ?Create@CAtlasSurface@DirectComposition@@SAJPEAVCAtlasSurfacePool@2@IIAEBVSizeU@2@UDCOMPOSITION_GUTTERS@@PEAPEAV12@@Z @ 0x1800216A8 (-Create@CAtlasSurface@DirectComposition@@SAJPEAVCAtlasSurfacePool@2@IIAEBVSizeU@2@UDCOMPOSITION_.c)
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?RecordUtilizationInfo@CAtlasSurfacePool@DirectComposition@@QEAAXXZ @ 0x180021900 (-RecordUtilizationInfo@CAtlasSurfacePool@DirectComposition@@QEAAXXZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180073310 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     McTemplateU0xqqqqx_EventWriteTransfer @ 0x1800E93DC (McTemplateU0xqqqqx_EventWriteTransfer.c)
 */

__int64 __fastcall DirectComposition::CAtlasSurface::Initialize(DirectComposition::CAtlasSurface *this)
{
  __int64 v1; // r8
  int v2; // edi
  unsigned int v4; // eax
  unsigned int v5; // edx
  int v7; // eax
  unsigned int v8; // edx
  int v9; // ecx
  DirectComposition::CAtlasSurface *v10; // [rsp+50h] [rbp+8h] BYREF

  v1 = *((_QWORD *)this + 8);
  v2 = 0;
  v10 = this;
  if ( this != *(DirectComposition::CAtlasSurface **)(v1 + 200) )
  {
    v4 = *(_DWORD *)(v1 + 136);
    v5 = v4 + 1;
    if ( v4 + 1 < v4 )
    {
      v2 = -2147024362;
      v8 = 181;
      v9 = -2147024362;
    }
    else
    {
      if ( v5 <= *(_DWORD *)(v1 + 132) )
      {
        *(_QWORD *)(*(_QWORD *)(v1 + 112) + 8LL * v4) = this;
        *(_DWORD *)(v1 + 136) = v5;
        goto LABEL_5;
      }
      v7 = DynArrayImpl<0>::AddMultipleAndSet(v1 + 112, 8LL, v1, &v10);
      v2 = v7;
      if ( v7 >= 0 )
      {
LABEL_5:
        if ( v2 < 0 )
          return (unsigned int)v2;
        goto LABEL_6;
      }
      v8 = 192;
      v9 = v7;
    }
    DoStackCaptureDirect(v9, v8);
    goto LABEL_5;
  }
LABEL_6:
  (*(void (__fastcall **)(char *, __int64))(*((_QWORD *)this + 2) + 40LL))((char *)this + 16, 2LL);
  *((_DWORD *)this + 6) = 2;
  DirectComposition::CAtlasSurfacePool::RecordUtilizationInfo(*((DirectComposition::CAtlasSurfacePool **)this + 8));
  if ( (Microsoft_Windows_DirectCompositionEnableBits & 8) != 0 )
    McTemplateU0xqqqqx_EventWriteTransfer(
      *((_DWORD *)this + 19),
      (unsigned int)&DCOMPEVENT_ATLAS_ENTRY_ALLOCATE,
      *((_QWORD *)this + 8),
      *((_DWORD *)this + 18),
      *((_DWORD *)this + 19),
      *((_BYTE *)this + 80) + (*((_DWORD *)this + 22) & 1) + ((*((_DWORD *)this + 22) & 2) != 0),
      *((_BYTE *)this + 84) + ((*((_DWORD *)this + 22) & 4) != 0) + ((*((_DWORD *)this + 22) & 8) != 0),
      (char)this);
  return (unsigned int)v2;
}
