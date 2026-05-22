/*
 * XREFs of ?SuspendDraw@CTileClump@DirectComposition@@QEAAXXZ @ 0x18008B4C4
 * Callers:
 *     ?BeginDrawInternal@CVirtualSurface@DirectComposition@@AEAAJAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@AEBU_GUID@@PEAPEAXPEAI3PEAUDCOMPOSITION_GUTTERS@@@Z @ 0x1800371B0 (-BeginDrawInternal@CVirtualSurface@DirectComposition@@AEAAJAEBV-$TMilRect@IUMilRectU@@UMil3DRect.c)
 *     ?SuspendDraw@CVirtualSurface@DirectComposition@@UEAAJXZ @ 0x18008B3F0 (-SuspendDraw@CVirtualSurface@DirectComposition@@UEAAJXZ.c)
 * Callees:
 *     ?SetEmptyGuardRect@CAtlasSurfacePool@DirectComposition@@AEAAXXZ @ 0x180038D50 (-SetEmptyGuardRect@CAtlasSurfacePool@DirectComposition@@AEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall DirectComposition::CTileClump::SuspendDraw(DirectComposition::CTileClump *this)
{
  __int64 v1; // rbx
  __int64 v2; // rdx
  __int64 v3; // rbp
  __int64 v4; // rdi
  int v5; // eax

  v1 = *((_QWORD *)this + 10);
  v2 = *(_QWORD *)(v1 + 136);
  v3 = *(_QWORD *)(v1 + 152);
  v4 = *(_QWORD *)(*(_QWORD *)(v1 + 16) + 64LL);
  if ( v2 )
  {
    (*(void (__fastcall **)(_QWORD, __int64, _QWORD))(**(_QWORD **)(v4 + 88) + 72LL))(*(_QWORD *)(v4 + 88), v2, 0LL);
    if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v4 + 144) + 128LL) + 354LL) )
    {
      *(_QWORD *)(v1 + 144) = 0LL;
    }
    else
    {
      (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(v4 + 56) + 344LL))(*(_QWORD *)(v4 + 56), v3);
      (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(v4 + 56) + 600LL))(*(_QWORD *)(v4 + 56), v1 + 144);
    }
    v5 = *(_DWORD *)(v4 + 180);
  }
  else
  {
    v5 = 0;
  }
  *(_DWORD *)(v1 + 164) = v5;
  DirectComposition::CAtlasSurfacePool::SetEmptyGuardRect((DirectComposition::CAtlasSurfacePool *)v4);
  *(_BYTE *)(v1 + 160) = 0;
}
