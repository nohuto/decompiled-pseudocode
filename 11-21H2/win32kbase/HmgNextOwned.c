/*
 * XREFs of HmgNextOwned @ 0x1C001B0D0
 * Callers:
 *     ?NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z @ 0x1C0017B90 (-NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z.c)
 *     ?vRemoveRefPalettes@@YAXK@Z @ 0x1C00181D4 (-vRemoveRefPalettes@@YAXK@Z.c)
 *     ?vCleanupRegions@@YAXK@Z @ 0x1C0018268 (-vCleanupRegions@@YAXK@Z.c)
 *     ?vCleanupSurfaces@@YAXKW4_CLEANUPTYPE@@@Z @ 0x1C0018308 (-vCleanupSurfaces@@YAXKW4_CLEANUPTYPE@@@Z.c)
 * Callees:
 *     HmgIsProcessCleanupRequiredByW32Pid @ 0x1C001B494 (HmgIsProcessCleanupRequiredByW32Pid.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C0022C40 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 *     GreAcquireHmgrSemaphore @ 0x1C002DF20 (GreAcquireHmgrSemaphore.c)
 *     GreReleaseHmgrSemaphore @ 0x1C002E900 (GreReleaseHmgrSemaphore.c)
 */

__int64 __fastcall HmgNextOwned(unsigned int a1, unsigned int a2, unsigned __int64 *a3)
{
  __int64 result; // rax
  __int64 v7; // rcx
  __int64 v8; // rcx
  GdiHandleManager *v9; // r14
  unsigned int v10; // esi
  __int64 v11; // r8
  unsigned int v12; // edx
  __int64 v13; // r8
  unsigned int v14; // eax
  __int64 v15; // rdi
  unsigned int v16; // eax
  __int64 v17; // r8
  unsigned __int64 v18; // rdx
  unsigned int v19; // r9d
  __int64 v20; // r8
  __int64 v21; // rdx

  result = HmgIsProcessCleanupRequiredByW32Pid(a2);
  if ( (_DWORD)result )
  {
    GreAcquireHmgrSemaphore(v7);
    v9 = gpHandleManager;
    v10 = *(_DWORD *)gpHandleManager;
    while ( ++a1 < v10 )
    {
      v11 = *((_QWORD *)v9 + 2);
      v12 = *(_DWORD *)(v11 + 2056);
      if ( a1 < v12 + ((*(unsigned __int16 *)(v11 + 2) + 0xFFFF) << 16) )
      {
        if ( a1 >= v12 )
        {
          v8 = ((a1 - v12) >> 16) + 1;
          v13 = *(_QWORD *)(v11 + 8 * v8 + 8);
          v14 = a1 + -65536 * ((a1 - v12) >> 16) - v12;
        }
        else
        {
          v13 = *(_QWORD *)(v11 + 8);
          v14 = a1;
        }
        v15 = 0LL;
        if ( v14 < *(_DWORD *)(v13 + 20) )
        {
          v8 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v13 + 24) + 8 * ((unsigned __int64)v14 >> 8))
                         + 16LL * (unsigned __int8)v14
                         + 8);
          if ( v8 )
          {
            v8 = 3LL * v14;
            v15 = *(_QWORD *)v13 + 24LL * v14;
          }
        }
        if ( v15 )
        {
          if ( !a1 )
            break;
          if ( *(_BYTE *)(v15 + 14) )
          {
            v8 = a2 & 0xFFFFFFFD ^ *(_DWORD *)(v15 + 8);
            if ( (v8 & 0xFFFFFFFE) == 0 )
            {
              if ( (*(_BYTE *)(v15 + 15) & 0x40) == 0 )
                goto LABEL_15;
              v16 = GdiHandleManager::DecodeIndex(gpHandleManager, a1);
              v17 = *((_QWORD *)v9 + 2);
              v18 = v16;
              v19 = *(_DWORD *)(v17 + 2056);
              if ( v16 >= v19 + ((*(unsigned __int16 *)(v17 + 2) + 0xFFFF) << 16) )
                goto LABEL_15;
              if ( v16 >= v19 )
              {
                v20 = *(_QWORD *)(v17 + 8LL * (((v16 - v19) >> 16) + 1) + 8);
                v18 = -65536 * ((v16 - v19) >> 16) - v19 + v16;
              }
              else
              {
                v20 = *(_QWORD *)(v17 + 8);
              }
              if ( (unsigned int)v18 >= *(_DWORD *)(v20 + 20)
                || (v8 = 2LL * (unsigned __int8)v18,
                    (v21 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v20 + 24) + 8 * (v18 >> 8))
                                     + 16LL * (unsigned __int8)v18
                                     + 8)) == 0)
                || *(_WORD *)(v21 + 12) && *(struct _KTHREAD **)(v21 + 16) == KeGetCurrentThread() )
              {
LABEL_15:
                v8 = (unsigned __int16)a1;
                *a3 = (unsigned __int16)a1 | (unsigned __int64)(*(unsigned __int16 *)(v15 + 12) << 16);
                goto LABEL_16;
              }
            }
          }
        }
      }
    }
    a1 = 0;
LABEL_16:
    GreReleaseHmgrSemaphore(v8);
    return a1;
  }
  return result;
}
