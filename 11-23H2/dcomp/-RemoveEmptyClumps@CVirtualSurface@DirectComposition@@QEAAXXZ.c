/*
 * XREFs of ?RemoveEmptyClumps@CVirtualSurface@DirectComposition@@QEAAXXZ @ 0x1800382BC
 * Callers:
 *     ?PushDownClumps@CVirtualSurfaceOptimizer@DirectComposition@@AEAAJPEAVCVirtualSurface@2@@Z @ 0x180037F58 (-PushDownClumps@CVirtualSurfaceOptimizer@DirectComposition@@AEAAJPEAVCVirtualSurface@2@@Z.c)
 *     ?SynchronizeMarshalerState@CVirtualSurface@DirectComposition@@QEAAJXZ @ 0x180038200 (-SynchronizeMarshalerState@CVirtualSurface@DirectComposition@@QEAAJXZ.c)
 *     ?ReclumpRegion@CVirtualSurface@DirectComposition@@QEAAJAEBVCRegion@@@Z @ 0x1800FE198 (-ReclumpRegion@CVirtualSurface@DirectComposition@@QEAAJAEBVCRegion@@@Z.c)
 * Callees:
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18007E478 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall DirectComposition::CVirtualSurface::RemoveEmptyClumps(DirectComposition::CVirtualSurface *this)
{
  char *v1; // r14
  DirectComposition::CVirtualSurface *v2; // rax
  volatile signed __int32 *v4; // rbx
  _OWORD *v5; // rcx
  __int64 v6; // rdx
  volatile signed __int32 *v7; // rdi
  _QWORD *v8; // rax
  volatile signed __int32 *v9; // rsi

  v1 = (char *)this + 256;
  v2 = (DirectComposition::CVirtualSurface *)*((_QWORD *)this + 32);
  v4 = (volatile signed __int32 *)((char *)v2 - 16);
  if ( v2 == (DirectComposition::CVirtualSurface *)((char *)this + 256) )
    v4 = 0LL;
  if ( v4 )
  {
    do
    {
      v5 = v4 + 4;
      v6 = *((_QWORD *)v4 + 2);
      v7 = (volatile signed __int32 *)(v6 - 16);
      if ( (char *)v6 == v1 )
        v7 = 0LL;
      if ( !**((_DWORD **)v4 + 12) )
      {
        if ( *(_OWORD **)(v6 + 8) != v5 || (v8 = (_QWORD *)*((_QWORD *)v4 + 3), (_OWORD *)*v8 != v5) )
          __fastfail(3u);
        *v8 = v6;
        v9 = v4 + 2;
        *(_QWORD *)(v6 + 8) = v8;
        *v5 = 0LL;
        --*((_DWORD *)this + 62);
        if ( _InterlockedExchangeAdd(v4 + 2, 0xFFFFFFFF) == 1 )
        {
          CMILRefCountImpl::AddReference((CMILRefCountImpl *)(v4 + 2));
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v4 + 40LL))(v4);
          if ( _InterlockedExchangeAdd(v9, 0xFFFFFFFF) == 1 )
          {
            --*v9;
            (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v4 + 32LL))(v4, 1LL);
          }
        }
      }
      v4 = v7;
    }
    while ( v7 );
  }
}
