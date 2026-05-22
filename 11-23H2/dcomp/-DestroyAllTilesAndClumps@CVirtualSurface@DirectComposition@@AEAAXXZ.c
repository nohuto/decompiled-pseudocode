/*
 * XREFs of ?DestroyAllTilesAndClumps@CVirtualSurface@DirectComposition@@AEAAXXZ @ 0x18003C390
 * Callers:
 *     ??1CVirtualSurface@DirectComposition@@MEAA@XZ @ 0x18003A9DC (--1CVirtualSurface@DirectComposition@@MEAA@XZ.c)
 *     ?PixelsDiscarded@CVirtualSurface@DirectComposition@@UEAAXXZ @ 0x1800FDFC0 (-PixelsDiscarded@CVirtualSurface@DirectComposition@@UEAAXXZ.c)
 * Callees:
 *     ?AssertIsOwned@CDeviceLock@DirectComposition@@QEBAXXZ @ 0x180032860 (-AssertIsOwned@CDeviceLock@DirectComposition@@QEBAXXZ.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18007E478 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall DirectComposition::CVirtualSurface::DestroyAllTilesAndClumps(DirectComposition::CVirtualSurface *this)
{
  volatile signed __int32 *v2; // rdi
  _QWORD *v3; // rcx
  volatile signed __int32 *v4; // rsi
  DirectComposition::CVirtualSurface *v5; // rax
  __int64 v6; // rdx
  volatile signed __int32 *v7; // rdi
  volatile signed __int32 *v8; // rsi

  DirectComposition::CDeviceLock::AssertIsOwned((DirectComposition::CDeviceLock *)(*(_QWORD *)(*((_QWORD *)this + 13)
                                                                                             + 24LL)
                                                                                 + 96LL));
  while ( 1 )
  {
    v2 = (volatile signed __int32 *)*((_QWORD *)this + 30);
    if ( !v2 )
      break;
    v8 = v2 + 2;
    *((_QWORD *)this + 30) = *((_QWORD *)v2 + 4);
    if ( _InterlockedExchangeAdd(v2 + 2, 0xFFFFFFFF) == 1 )
    {
      CMILRefCountImpl::AddReference((CMILRefCountImpl *)(v2 + 2));
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v2 + 40LL))(v2);
      if ( _InterlockedExchangeAdd(v8, 0xFFFFFFFF) == 1 )
      {
        --*v8;
        (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v2 + 32LL))(v2, 1LL);
      }
    }
  }
  *((_QWORD *)this + 29) = 0LL;
  while ( *((_DWORD *)this + 62) )
  {
    v3 = (_QWORD *)((char *)this + 256);
    v4 = 0LL;
    v5 = (DirectComposition::CVirtualSurface *)*((_QWORD *)this + 32);
    if ( v5 != (DirectComposition::CVirtualSurface *)((char *)this + 256) )
    {
      if ( *((_QWORD **)v5 + 1) != v3
        || (v6 = *(_QWORD *)v5, *(DirectComposition::CVirtualSurface **)(*(_QWORD *)v5 + 8LL) != v5) )
      {
        __fastfail(3u);
      }
      *v3 = v6;
      v4 = (volatile signed __int32 *)((char *)v5 - 16);
      *(_QWORD *)(v6 + 8) = v3;
      --*((_DWORD *)this + 62);
      *(_OWORD *)v5 = 0LL;
    }
    v7 = v4 + 2;
    if ( _InterlockedExchangeAdd(v4 + 2, 0xFFFFFFFF) == 1 )
    {
      CMILRefCountImpl::AddReference((CMILRefCountImpl *)(v4 + 2));
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v4 + 40LL))(v4);
      if ( _InterlockedExchangeAdd(v7, 0xFFFFFFFF) == 1 )
      {
        --*v7;
        (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v4 + 32LL))(v4, 1LL);
      }
    }
  }
  **((_DWORD **)this + 17) = 0;
  *((_BYTE *)this + 132) &= ~2u;
}
