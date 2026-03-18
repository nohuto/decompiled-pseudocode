/*
 * XREFs of ?vCleanupSurfaces@@YAXKW4_CLEANUPTYPE@@@Z @ 0x1C0018308
 * Callers:
 *     ?NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z @ 0x1C0017B90 (-NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z.c)
 * Callees:
 *     HmgNextOwned @ 0x1C001B0D0 (HmgNextOwned.c)
 *     ?bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x1C001CA20 (-bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 *     ??1SURFREF@@QEAA@XZ @ 0x1C001F08C (--1SURFREF@@QEAA@XZ.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C002E8B8 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??0SURFREF@@QEAA@PEAUHSURF__@@@Z @ 0x1C0063C24 (--0SURFREF@@QEAA@PEAUHSURF__@@@Z.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C00826F0 (EtwTraceGreLockReleaseSemaphore.c)
 */

__int64 __fastcall vCleanupSurfaces(unsigned int a1, unsigned int a2)
{
  unsigned int v3; // ebx
  __int64 result; // rax
  int v6; // eax
  int v7; // eax
  __int64 v8; // rcx
  _BYTE v9[32]; // [rsp+20h] [rbp-48h] BYREF
  __int64 v10; // [rsp+40h] [rbp-28h]
  char v11; // [rsp+80h] [rbp+18h] BYREF
  HSURF v12; // [rsp+88h] [rbp+20h] BYREF

  v12 = 0LL;
  v3 = 0;
  while ( 1 )
  {
    result = HmgNextOwned(v3, a1, &v12);
    v3 = result;
    if ( !(_DWORD)result )
      break;
    if ( (BYTE2(v12) & 0x1F) == 5 )
    {
      DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v11);
      SURFREF::SURFREF((SURFREF *)v9, v12);
      if ( v10 )
      {
        v6 = *(_DWORD *)(v10 + 112);
        if ( v6 >= 0 || (v6 & 0x40000) != 0 )
        {
          v7 = SURFACE::bDeleteSurface(v10, a2, 0LL);
          v8 = v10;
          if ( v7 )
            v8 = 0LL;
          v10 = v8;
        }
      }
      SURFREF::~SURFREF((SURFREF *)v9);
      EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
      if ( ghsemDynamicModeChange )
      {
        ExReleaseResourceAndLeaveCriticalRegion(ghsemDynamicModeChange);
        PsLeavePriorityRegion();
      }
    }
  }
  return result;
}
