/*
 * XREFs of ?DrvUpdateDisplayModeInPdev@@YAHPEAUHDEV__@@PEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C0171DC0
 * Callers:
 *     ?DrvUpdateDisplayModeInMdev@@YAHPEAU_MDEV@@PEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C017193C (-DrvUpdateDisplayModeInMdev@@YAHPEAU_MDEV@@PEAUD3DKMT_GETPATHSMODALITY@@@Z.c)
 * Callees:
 *     EngAcquireSemaphore @ 0x1C002DF70 (EngAcquireSemaphore.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C00826F0 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C0087C00 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     ?UpdateDisplayMode@PDEVOBJ@@QEAAHPEAU_devicemodeW@@@Z @ 0x1C016AB74 (-UpdateDisplayMode@PDEVOBJ@@QEAAHPEAU_devicemodeW@@@Z.c)
 *     ?DevmodeAutoRotateCompatible@@YA_NPEBU_devicemodeW@@0@Z @ 0x1C01705FC (-DevmodeAutoRotateCompatible@@YA_NPEBU_devicemodeW@@0@Z.c)
 *     ?DrvCheckGraphicsDeviceForSmoothRotation@@YAHPEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C0170B80 (-DrvCheckGraphicsDeviceForSmoothRotation@@YAHPEAUtagGRAPHICS_DEVICE@@@Z.c)
 */

__int64 __fastcall DrvUpdateDisplayModeInPdev(HSEMAPHORE *a1, struct D3DKMT_GETPATHSMODALITY *a2)
{
  HSEMAPHORE *v2; // rbx
  unsigned int updated; // esi
  int v5; // r8d
  _DWORD *v6; // r8
  int v7; // eax
  unsigned int v8; // ecx
  __int64 v9; // rdx
  struct _devicemodeW *v10; // rdi
  int v11; // r8d
  struct _ERESOURCE *v12; // rcx
  __int64 v13; // rcx
  struct _ERESOURCE *v14; // rcx
  __int64 v15; // rcx
  HSEMAPHORE *v17; // [rsp+30h] [rbp+8h] BYREF

  v2 = a1;
  v17 = a1;
  updated = 0;
  EngAcquireSemaphore(a1[7]);
  EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"po.hsemPointer()", (int)v2[7], 4);
  EngAcquireSemaphore(v2[6]);
  EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"po.hsemDevLock()", (int)v2[6], 11);
  if ( v2[321] )
  {
    if ( !(unsigned int)DrvCheckGraphicsDeviceForSmoothRotation((struct tagGRAPHICS_DEVICE *)v2[319])
      || (v6 = v2[319], v7 = v6[40], (v7 & 0x4000000) != 0)
      || (v7 & 0x2000000) != 0
      || (v7 & 8) != 0 )
    {
      WdLogSingleEntry1(4LL, 2LL);
    }
    else
    {
      v8 = 0;
      if ( !*((_WORD *)a2 + 10) )
        goto LABEL_13;
      while ( 1 )
      {
        v9 = 296LL * v8;
        if ( v6[64] == *(_DWORD *)((char *)a2 + v9 + 80)
          && v6[62] == *(_DWORD *)((char *)a2 + v9 + 72)
          && v6[63] == *(_DWORD *)((char *)a2 + v9 + 76)
          && !_bittest64((const signed __int64 *)((char *)a2 + v9 + 56), 0x24u) )
        {
          break;
        }
        if ( ++v8 >= *((unsigned __int16 *)a2 + 10) )
          goto LABEL_13;
      }
      v10 = (struct _devicemodeW *)*((_QWORD *)a2 + 37 * v8 + 38);
      if ( v10 )
      {
        if ( DevmodeAutoRotateCompatible(v10, (const struct _devicemodeW *)v2[321]) )
        {
          updated = PDEVOBJ::UpdateDisplayMode((PDEVOBJ *)&v17, v10);
          if ( updated )
          {
            _InterlockedIncrement((volatile signed __int32 *)gpGdiSharedMemory + 393252);
            DisplayScenarioJournalDisplayUniquenessIncremented();
            WdLogSingleEntry1(4LL, 4LL);
          }
          v2 = v17;
        }
        else
        {
          WdLogSingleEntry0(4LL);
        }
      }
      else
      {
LABEL_13:
        WdLogSingleEntry1(4LL, 28105LL);
      }
    }
  }
  else
  {
    WdLogSingleEntry1(4LL, 1LL);
  }
  EtwTraceGreLockReleaseSemaphore((__int64)L"po.hsemDevLock()", (int)v2[6], v5);
  v12 = (struct _ERESOURCE *)v2[6];
  if ( v12 )
  {
    ExReleaseResourceAndLeaveCriticalRegion(v12);
    PsLeavePriorityRegion(v13);
  }
  EtwTraceGreLockReleaseSemaphore((__int64)L"po.hsemPointer()", (int)v2[7], v11);
  v14 = (struct _ERESOURCE *)v2[7];
  if ( v14 )
  {
    ExReleaseResourceAndLeaveCriticalRegion(v14);
    PsLeavePriorityRegion(v15);
  }
  return updated;
}
