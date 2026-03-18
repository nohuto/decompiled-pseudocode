/*
 * XREFs of ?bDisposeSrcDco@DEVLOCKBLTOBJ@@QEAAHXZ @ 0x1C002CE74
 * Callers:
 *     ??1DEVLOCKBLTOBJ@@QEAA@XZ @ 0x1C003F250 (--1DEVLOCKBLTOBJ@@QEAA@XZ.c)
 *     ?vUnLock@DEVLOCKBLTOBJ@@QEAAXH@Z @ 0x1C0275B60 (-vUnLock@DEVLOCKBLTOBJ@@QEAAXH@Z.c)
 * Callees:
 *     ?vUnlock@DLODCOBJ@@QEAAXXZ @ 0x1C002CEF0 (-vUnlock@DLODCOBJ@@QEAAXXZ.c)
 *     ?vClearRenderState@DEVLOCKBLTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C0040380 (-vClearRenderState@DEVLOCKBLTOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     ?pSurface@DC@@QEAAXPEAVSURFACE@@@Z @ 0x1C0113C20 (-pSurface@DC@@QEAAXPEAVSURFACE@@@Z.c)
 */

__int64 __fastcall DEVLOCKBLTOBJ::bDisposeSrcDco(DEVLOCKBLTOBJ *this)
{
  struct XDCOBJ *v1; // rdi
  __int64 v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // rbx
  __int64 v7; // rbx
  __int64 CurrentProcess; // rax

  v1 = (DEVLOCKBLTOBJ *)((char *)this + 176);
  v3 = *((_QWORD *)this + 22);
  if ( v3 && *((_BYTE *)v1 + 49) )
  {
    v4 = *(_QWORD *)(v3 + 48);
    if ( (*((_DWORD *)this + 28) & 0x20) != 0 )
    {
      *(_DWORD *)(v3 + 36) &= ~0x4000u;
      DC::pSurface(*(DC **)v1, *(struct SURFACE **)(v4 + 2528));
    }
    v5 = *((_QWORD *)this + 29);
    if ( v5 )
    {
      v7 = *(_QWORD *)(v5 + 72);
      CurrentProcess = PsGetCurrentProcess(v3, v4);
      MmUnmapViewOfSection(CurrentProcess, v7);
    }
    DEVLOCKBLTOBJ::vClearRenderState(this, v1);
    DLODCOBJ::vUnlock(v1);
    *(_QWORD *)v1 = 0LL;
  }
  return 1LL;
}
