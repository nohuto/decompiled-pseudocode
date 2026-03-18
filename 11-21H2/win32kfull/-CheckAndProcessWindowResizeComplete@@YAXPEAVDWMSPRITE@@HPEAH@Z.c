/*
 * XREFs of ?CheckAndProcessWindowResizeComplete@@YAXPEAVDWMSPRITE@@HPEAH@Z @ 0x1C026B550
 * Callers:
 *     GreHintSpriteShape @ 0x1C002198C (GreHintSpriteShape.c)
 *     ?vspDestroyDwmSpriteObjInternal@@YAXPEAUHDEV__@@_NPEAVDWMSPRITE@@@Z @ 0x1C00826BC (-vspDestroyDwmSpriteObjInternal@@YAXPEAUHDEV__@@_NPEAVDWMSPRITE@@@Z.c)
 *     GreWindowLayoutComplete @ 0x1C00A277C (GreWindowLayoutComplete.c)
 *     CheckAndProcessSurfaceComplete @ 0x1C026CC10 (CheckAndProcessSurfaceComplete.c)
 *     GreCancelSynchronizedWindowResize @ 0x1C026CE90 (GreCancelSynchronizedWindowResize.c)
 *     GreWindowResizeComplete @ 0x1C026E008 (GreWindowResizeComplete.c)
 *     GreWindowResizeStarted @ 0x1C026E268 (GreWindowResizeStarted.c)
 * Callees:
 *     DwmAsyncUpdateSprite @ 0x1C00ED5E8 (DwmAsyncUpdateSprite.c)
 *     ?GetRedirectionInfo@SFMLOGICALSURFACE@@QEAAXPEAW4_HLSURF_REDIRECTIONSTYLE@@PEAK1PEAPEAXPEAU_LUID@@@Z @ 0x1C00ED78C (-GetRedirectionInfo@SFMLOGICALSURFACE@@QEAAXPEAW4_HLSURF_REDIRECTIONSTYLE@@PEAK1PEAPEAXPEAU_LUID.c)
 *     DwmAsyncProcessSurfaceComplete @ 0x1C02729BC (DwmAsyncProcessSurfaceComplete.c)
 */

void __fastcall CheckAndProcessWindowResizeComplete(struct DWMSPRITE *a1, int a2, int *a3)
{
  int v5; // eax
  SFMLOGICALSURFACE *v6; // r12
  __int64 v7; // rcx
  _QWORD *v8; // rax
  int v9; // edx
  __int64 v10; // r14
  int v11; // ebp
  __int64 v12; // rsi
  int v13; // eax
  int v14; // ebx
  __int64 v15; // rdi
  __int64 v16; // rcx
  int v17; // ebx
  void *v18; // rax
  void *v19; // rax
  void *v20; // rcx
  unsigned int v21; // [rsp+A8h] [rbp+10h] BYREF
  unsigned int v22; // [rsp+B0h] [rbp+18h] BYREF
  int v23; // [rsp+B8h] [rbp+20h] BYREF

  v5 = 0;
  if ( a2 || !*((_DWORD *)a1 + 30) && *((_DWORD *)a1 + 29) == 1 )
  {
    v6 = (SFMLOGICALSURFACE *)*((_QWORD *)a1 + 18);
    if ( v6 )
    {
      if ( a2 || (v7 = 0LL, !g_cDelayedUpdateSpriteNotifications) )
      {
LABEL_10:
        v23 = 0;
        v22 = 0;
        v21 = 0;
        SFMLOGICALSURFACE::GetRedirectionInfo(v6, (enum _HLSURF_REDIRECTIONSTYLE *)&v23, &v22, &v21, 0LL, 0LL);
        v9 = *((_DWORD *)v6 + 63);
        v10 = *((_QWORD *)a1 + 13);
        v11 = *((_DWORD *)a1 + 29);
        v12 = *(_QWORD *)a1;
        v13 = *((_DWORD *)a1 + 35) & 1;
        v14 = *((_DWORD *)a1 + 35) & 0x40 | (4 * (*((_DWORD *)a1 + 35) & 0xE | 0x20));
        *((_QWORD *)a1 + 13) = 0LL;
        v15 = *(_QWORD *)v6;
        v16 = v9 & 1;
        v17 = v13 | v9 & 0xC | (2 * (v16 | v14));
        v18 = (void *)UserReferenceDwmApiPort(v16);
        DwmAsyncUpdateSprite(v18, v12, v15, v17, (__int64)a1 + 72, 0LL, v23, v22, v21, v11 >= 1, v10);
      }
      else
      {
        v8 = &unk_1C0338E38;
        while ( *v8 != *(_QWORD *)v6 )
        {
          v7 = (unsigned int)(v7 + 1);
          v8 = (_QWORD *)((char *)v8 + 196);
          if ( (unsigned int)v7 >= g_cDelayedUpdateSpriteNotifications )
            goto LABEL_10;
        }
      }
      v19 = (void *)UserReferenceDwmApiPort(v7);
      DwmAsyncProcessSurfaceComplete(v19);
    }
    v20 = (void *)*((_QWORD *)a1 + 12);
    *((_DWORD *)a1 + 29) = 0;
    if ( v20 )
    {
      ObfDereferenceObject(v20);
      *((_QWORD *)a1 + 12) = 0LL;
    }
    v5 = 1;
  }
  if ( a3 )
    *a3 = v5;
}
