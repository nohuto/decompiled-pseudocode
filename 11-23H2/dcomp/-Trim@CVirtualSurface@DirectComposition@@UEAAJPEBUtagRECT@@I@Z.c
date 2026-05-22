/*
 * XREFs of ?Trim@CVirtualSurface@DirectComposition@@UEAAJPEBUtagRECT@@I@Z @ 0x1800FE680
 * Callers:
 *     <none>
 * Callees:
 *     ?Enter@CDeviceLock@DirectComposition@@QEAAXXZ @ 0x18001B074 (-Enter@CDeviceLock@DirectComposition@@QEAAXXZ.c)
 *     ??1?$CGuard@VCDeviceLock@DirectComposition@@@@QEAA@XZ @ 0x1800273D0 (--1-$CGuard@VCDeviceLock@DirectComposition@@@@QEAA@XZ.c)
 *     ?AssertIsOwned@CDeviceLock@DirectComposition@@QEBAXXZ @ 0x180032860 (-AssertIsOwned@CDeviceLock@DirectComposition@@QEBAXXZ.c)
 *     ?AddVirtualSurface@CVirtualSurfaceOptimizer@DirectComposition@@QEAAXPEAVCVirtualSurface@2@@Z @ 0x180037BB4 (-AddVirtualSurface@CVirtualSurfaceOptimizer@DirectComposition@@QEAAXPEAVCVirtualSurface@2@@Z.c)
 *     ?SynchronizeMarshalerState@CVirtualSurface@DirectComposition@@QEAAJXZ @ 0x180038200 (-SynchronizeMarshalerState@CVirtualSurface@DirectComposition@@QEAAJXZ.c)
 *     ?TrimTileClumps@CVirtualSurface@DirectComposition@@AEAAJPEBUtagRECT@@I@Z @ 0x180093600 (-TrimTileClumps@CVirtualSurface@DirectComposition@@AEAAJPEBUtagRECT@@I@Z.c)
 *     __security_check_cookie @ 0x180095B40 (__security_check_cookie.c)
 *     McGenEventWrite_EventWriteTransfer @ 0x1800E5E3C (McGenEventWrite_EventWriteTransfer.c)
 *     McTemplateU0qqx_EventWriteTransfer @ 0x1800EA8AC (McTemplateU0qqx_EventWriteTransfer.c)
 *     ?IsValidRect@DirectComposition@@YA_NAEBUtagRECT@@@Z @ 0x1800EB9A0 (-IsValidRect@DirectComposition@@YA_NAEBUtagRECT@@@Z.c)
 */

__int64 __fastcall DirectComposition::CVirtualSurface::Trim(
        DirectComposition::CVirtualSurface *this,
        const struct tagRECT *a2,
        unsigned int a3)
{
  _DWORD *v6; // rcx
  __int64 v7; // r8
  unsigned int v8; // ebx
  const struct tagRECT *i; // rdx
  int v10; // edx
  int v11; // eax
  DirectComposition::CDeviceLock *v13; // [rsp+30h] [rbp-28h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v14; // [rsp+38h] [rbp-20h] BYREF

  v13 = (DirectComposition::CDeviceLock *)(*(_QWORD *)(*((_QWORD *)this + 13) + 24LL) + 96LL);
  DirectComposition::CDeviceLock::Enter(v13);
  if ( (Microsoft_Windows_DirectCompositionEnableBits & 2) != 0 )
    McTemplateU0qqx_EventWriteTransfer(
      *(_QWORD *)(*((_QWORD *)this + 13) + 24LL),
      &DCOMPEVENT_TRIM_Start,
      *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 13) + 24LL) + 160LL),
      84,
      (char)this);
  DirectComposition::CVirtualSurfaceOptimizer::AddVirtualSurface(
    *(DirectComposition::CVirtualSurfaceOptimizer **)(*(_QWORD *)(*((_QWORD *)this + 13) + 24LL) + 464LL),
    this);
  DirectComposition::CDeviceLock::AssertIsOwned((DirectComposition::CDeviceLock *)(*(_QWORD *)(*((_QWORD *)this + 13)
                                                                                             + 24LL)
                                                                                 + 96LL));
  if ( *(_DWORD *)(*((_QWORD *)this + 13) + 344LL) )
  {
    v8 = -2147467259;
  }
  else if ( *((_DWORD *)this + 32) )
  {
    v8 = -2003302399;
  }
  else
  {
    v7 = 0LL;
    if ( a2 || !a3 )
    {
      for ( i = 0LL; (unsigned int)i < a3; i = (const struct tagRECT *)(unsigned int)(v10 + 1) )
      {
        if ( !DirectComposition::IsValidRect((DirectComposition *)&a2[(unsigned int)i], i)
          || *v6 < (int)v7
          || v6[1] < (int)v7 )
        {
          goto LABEL_9;
        }
      }
      v8 = DirectComposition::CVirtualSurface::TrimTileClumps(this, a2, a3);
      v11 = DirectComposition::CVirtualSurface::SynchronizeMarshalerState(this);
      if ( v11 < 0 )
        v8 = v11;
    }
    else
    {
LABEL_9:
      v8 = -2147024809;
    }
  }
  if ( (Microsoft_Windows_DirectCompositionEnableBits & 4) != 0 )
    McGenEventWrite_EventWriteTransfer((__int64)v6, (const EVENT_DESCRIPTOR *)"\a", v7, 1u, &v14);
  CGuard<DirectComposition::CDeviceLock>::~CGuard<DirectComposition::CDeviceLock>((_QWORD **)&v13);
  return v8;
}
