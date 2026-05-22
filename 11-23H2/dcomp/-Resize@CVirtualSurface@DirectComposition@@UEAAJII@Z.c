/*
 * XREFs of ?Resize@CVirtualSurface@DirectComposition@@UEAAJII@Z @ 0x18003A220
 * Callers:
 *     ?Resize@CVirtualSurface@DirectComposition@@WEI@EAAJII@Z @ 0x1800A9370 (-Resize@CVirtualSurface@DirectComposition@@WEI@EAAJII@Z.c)
 * Callees:
 *     ?Enter@CDeviceLock@DirectComposition@@QEAAXXZ @ 0x18001B074 (-Enter@CDeviceLock@DirectComposition@@QEAAXXZ.c)
 *     ??1?$CGuard@VCDeviceLock@DirectComposition@@@@QEAA@XZ @ 0x1800273D0 (--1-$CGuard@VCDeviceLock@DirectComposition@@@@QEAA@XZ.c)
 *     ?AddVirtualSurface@CVirtualSurfaceOptimizer@DirectComposition@@QEAAXPEAVCVirtualSurface@2@@Z @ 0x180037BB4 (-AddVirtualSurface@CVirtualSurfaceOptimizer@DirectComposition@@QEAAXPEAVCVirtualSurface@2@@Z.c)
 *     ?SynchronizeMarshalerState@CVirtualSurface@DirectComposition@@QEAAJXZ @ 0x180038200 (-SynchronizeMarshalerState@CVirtualSurface@DirectComposition@@QEAAJXZ.c)
 *     ?InvalidateListeners@CDirtyNotifier@DirectComposition@@IEAAXPEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180038F28 (-InvalidateListeners@CDirtyNotifier@DirectComposition@@IEAAXPEAV-$TMilRect_@MUMilRectF@@UMil3DRe.c)
 *     ?EnsurePrimitive@CVirtualSurface@DirectComposition@@AEAAJ_N@Z @ 0x18003B1D4 (-EnsurePrimitive@CVirtualSurface@DirectComposition@@AEAAJ_N@Z.c)
 *     ?TrimTileClumps@CVirtualSurface@DirectComposition@@AEAAJPEBUtagRECT@@I@Z @ 0x180093600 (-TrimTileClumps@CVirtualSurface@DirectComposition@@AEAAJPEBUtagRECT@@I@Z.c)
 *     __security_check_cookie @ 0x180095B40 (__security_check_cookie.c)
 *     McGenEventWrite_EventWriteTransfer @ 0x1800E5E3C (McGenEventWrite_EventWriteTransfer.c)
 *     McTemplateU0qqx_EventWriteTransfer @ 0x1800EA8AC (McTemplateU0qqx_EventWriteTransfer.c)
 */

__int64 __fastcall DirectComposition::CVirtualSurface::Resize(
        DirectComposition::CVirtualSurface *this,
        unsigned int a2,
        unsigned int a3)
{
  unsigned int v6; // edi
  __int64 v7; // rcx
  int v8; // r14d
  __int64 v9; // rcx
  __int64 v10; // r8
  bool v11; // cc
  unsigned int *v12; // rax
  char v13; // r14
  int v14; // eax
  DirectComposition::CDeviceLock *v16; // [rsp+30h] [rbp-48h] BYREF
  struct tagRECT v17; // [rsp+38h] [rbp-40h] BYREF

  v6 = 0;
  v16 = (DirectComposition::CDeviceLock *)(*(_QWORD *)(*((_QWORD *)this + 13) + 24LL) + 96LL);
  DirectComposition::CDeviceLock::Enter(v16);
  v7 = *(_QWORD *)(*((_QWORD *)this + 13) + 24LL);
  v8 = *(_DWORD *)(v7 + 368);
  if ( (Microsoft_Windows_DirectCompositionEnableBits & 2) != 0 )
    McTemplateU0qqx_EventWriteTransfer(
      v7,
      (unsigned int)&DCOMPEVENT_RESIZE_Start,
      *(_DWORD *)(v7 + 160),
      84,
      (char)this);
  DirectComposition::CVirtualSurfaceOptimizer::AddVirtualSurface(
    *(DirectComposition::CVirtualSurfaceOptimizer **)(*(_QWORD *)(*((_QWORD *)this + 13) + 24LL) + 464LL),
    this);
  if ( *(_DWORD *)(*((_QWORD *)this + 13) + 344LL) )
  {
    v6 = -2147467259;
    goto LABEL_17;
  }
  if ( *((_DWORD *)this + 32) )
  {
    v6 = -2003302399;
    goto LABEL_17;
  }
  if ( v8 < 1 )
  {
    v9 = 0xFFFFFFLL;
    if ( a2 - 1 > 0xFFFFFF )
      goto LABEL_27;
    v11 = a3 - 1 <= 0xFFFFFF;
  }
  else
  {
    if ( a2 > 0x1000000 )
    {
LABEL_27:
      v6 = -2147024809;
      goto LABEL_17;
    }
    v11 = a3 <= 0x1000000;
  }
  if ( !v11 )
    goto LABEL_27;
  v12 = (unsigned int *)((char *)this + 116);
  if ( a2 == *((_DWORD *)this + 28) )
  {
    if ( a3 == *v12 )
      goto LABEL_17;
  }
  else if ( a2 < *((_DWORD *)this + 28) )
  {
LABEL_20:
    v13 = 1;
    goto LABEL_13;
  }
  if ( a3 < *v12 )
    goto LABEL_20;
  v13 = 0;
LABEL_13:
  *((_DWORD *)this + 28) = a2;
  *v12 = a3;
  DirectComposition::CVirtualSurface::EnsurePrimitive(this, 1);
  if ( v13 )
  {
    v17.left = 0;
    v17.top = 0;
    v17.right = a2;
    v17.bottom = a3;
    v6 = DirectComposition::CVirtualSurface::TrimTileClumps(this, &v17, 1u);
  }
  DirectComposition::CDirtyNotifier::InvalidateListeners((__int64)this + 16, 0LL);
  v14 = DirectComposition::CVirtualSurface::SynchronizeMarshalerState(this);
  if ( v14 < 0 )
    v6 = v14;
LABEL_17:
  if ( (Microsoft_Windows_DirectCompositionEnableBits & 4) != 0 )
    McGenEventWrite_EventWriteTransfer(v9, &DCOMPEVENT_RESIZE_Stop, v10, 1LL, &v17);
  CGuard<DirectComposition::CDeviceLock>::~CGuard<DirectComposition::CDeviceLock>((_QWORD **)&v16);
  return v6;
}
