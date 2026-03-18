/*
 * XREFs of ?vClearRendering@DC@@QEAAXXZ @ 0x1C00357C0
 * Callers:
 *     ??1DEVLOCKBLTOBJ@@QEAA@XZ @ 0x1C003F250 (--1DEVLOCKBLTOBJ@@QEAA@XZ.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C003FD70 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?vClearRenderState@DEVLOCKBLTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C0040380 (-vClearRenderState@DEVLOCKBLTOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     ?UntrapAppContainerRenderingWorker@@YAXAEAPEAUHDC__@@AEAPEAUHSURF__@@1PEBK@Z @ 0x1C0040528 (-UntrapAppContainerRenderingWorker@@YAXAEAPEAUHDC__@@AEAPEAUHSURF__@@1PEBK@Z.c)
 *     ?TrapAppContainerRenderingWorker@@YA_NAEAVXDCOBJ@@AEAPEAUHSURF__@@1PEAK@Z @ 0x1C00414F0 (-TrapAppContainerRenderingWorker@@YA_NAEAVXDCOBJ@@AEAPEAUHSURF__@@1PEAK@Z.c)
 *     ?vClearRenderState@DEVLOCKOBJ@@QEAAXXZ @ 0x1C00F4784 (-vClearRenderState@DEVLOCKOBJ@@QEAAXXZ.c)
 * Callees:
 *     GreHintSpriteShape @ 0x1C002198C (GreHintSpriteShape.c)
 *     GreSelectRedirectionBitmap @ 0x1C0027F30 (GreSelectRedirectionBitmap.c)
 *     GreDeleteSpriteDelayDelete @ 0x1C026D0B8 (GreDeleteSpriteDelayDelete.c)
 *     ?GdiHintSpriteShapeDelayDelete@@YAHPEAUHDEV__@@PEAUHWND__@@PEAUHBITMAP__@@H@Z @ 0x1C027C114 (-GdiHintSpriteShapeDelayDelete@@YAHPEAUHDEV__@@PEAUHWND__@@PEAUHBITMAP__@@H@Z.c)
 */

void __fastcall DC::vClearRendering(DC *this)
{
  int v2; // ecx
  int v3; // ebp
  __int64 v4; // rsi
  __int64 v6; // rdi
  __int64 *ThreadWin32Thread; // rax
  int v8; // r15d
  int v9; // r12d
  int v10; // eax
  int v11; // edi
  SURFOBJ *v12; // rcx
  __int64 v13; // r9
  HBITMAP v14; // r8
  HWND v15; // rdx
  HDEV v16; // rcx
  int v17; // [rsp+70h] [rbp+8h]

  *((_DWORD *)this + 10) &= ~1u;
  v2 = *((_DWORD *)this + 9);
  v3 = 0;
  if ( (v2 & 0x4000) != 0 )
  {
    v4 = *((_QWORD *)this + 62);
    if ( *(_QWORD *)(v4 + 248) || (*(_DWORD *)(v4 + 116) & 1) != 0 )
    {
      EngLockSurface(*(HSURF *)(v4 + 32));
      v2 = *((_DWORD *)this + 9);
      v4 = *((_QWORD *)this + 62);
    }
    if ( (v2 & 0x40000) != 0 )
    {
      v12 = (SURFOBJ *)(v4 + 24);
      if ( !v4 )
        v12 = 0LL;
      EngUnlockSurface(v12);
      GreSelectRedirectionBitmap(*(_QWORD *)this, *((HBITMAP *)this + 265));
      *((_DWORD *)this + 9) &= ~0x40000u;
      *((_QWORD *)this + 265) = 0LL;
    }
    if ( *(_QWORD *)(v4 + 248) || (*(_DWORD *)(v4 + 116) & 1) != 0 )
    {
      GreAcquireSemaphore(ghsemSprite);
      EngUnlockSurface((SURFOBJ *)(v4 + 24));
      W32PIDLOCK::vLockSingleThread((W32PIDLOCK *)(v4 + 272));
      if ( (*(_DWORD *)(v4 + 324))-- != 1 )
        goto LABEL_19;
      PsGetThreadWin32Thread(KeGetCurrentThread());
      v6 = 0LL;
      ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
      if ( ThreadWin32Thread && (v6 = *ThreadWin32Thread) != 0 )
      {
        v8 = *(_DWORD *)(v6 + 104);
        v9 = *(_DWORD *)(v6 + 108);
        *(_QWORD *)(v6 + 104) = 0LL;
      }
      else
      {
        v8 = v17;
        v9 = v17;
      }
      if ( (*(_DWORD *)(v4 + 112) & 0x2000000) != 0 )
      {
        v13 = v4 + 352;
        v14 = *(HBITMAP *)(v4 + 344);
        v15 = *(HWND *)(v4 + 336);
        v16 = *(HDEV *)(v4 + 328);
        if ( (*(_DWORD *)(v4 + 116) & 2) == 0 || *(_DWORD *)(v4 + 492) && g_pDwmState )
          GreHintSpriteShape(v16, v15, v14, v13, *(_DWORD *)(v4 + 488), *(_DWORD *)(v4 + 492), 0);
        else
          GdiHintSpriteShapeDelayDelete(v16, v15, v14, v13);
        *(_DWORD *)(v4 + 112) &= ~0x2000000u;
        _InterlockedDecrement(&glDelayedHintShape);
      }
      v10 = *(_DWORD *)(v4 + 116);
      if ( (v10 & 2) != 0 )
      {
        *(_DWORD *)(v4 + 116) = v10 & 0xFFFFFFFD;
        W32PIDLOCK::vUnlockSingleThread((W32PIDLOCK *)(v4 + 272));
        GreDeleteSpriteDelayDelete(*(HDEV *)(v4 + 496), *(HWND *)(v4 + 504), *(HSPRITE *)(v4 + 512));
        v3 = 1;
      }
      if ( v6 )
      {
        *(_DWORD *)(v6 + 104) = v8;
        *(_DWORD *)(v6 + 108) = v9;
      }
      if ( !v3 )
      {
LABEL_19:
        if ( *(_QWORD *)(v4 + 248) || (*(_DWORD *)(v4 + 116) & 1) != 0 )
        {
          v11 = *(_DWORD *)(v4 + 320);
          W32PIDLOCK::vUnlockSingleThread((W32PIDLOCK *)(v4 + 272));
          if ( v11 == 1 )
            bDeleteSurface(*(_QWORD *)v4);
        }
      }
      if ( ghsemSprite )
      {
        EtwTraceGreLockReleaseSemaphore(L"hsem", ghsemSprite);
        GreReleaseSemaphoreInternal(ghsemSprite);
      }
    }
  }
  else if ( (v2 & 0x40000) != 0 )
  {
    GreSelectRedirectionBitmap(*(_QWORD *)this, *((HBITMAP *)this + 265));
    *((_DWORD *)this + 9) &= ~0x40000u;
    *((_QWORD *)this + 265) = 0LL;
  }
}
