/*
 * XREFs of GreSuspendDirectDraw @ 0x1C0074F80
 * Callers:
 *     ?DrvDisableDirectDrawForModeChange@@YAPEAPEAUHDEV__@@PEAU_MDEV@@0PEAPEAU1@K@Z @ 0x1C0075E60 (-DrvDisableDirectDrawForModeChange@@YAPEAPEAUHDEV__@@PEAU_MDEV@@0PEAPEAU1@K@Z.c)
 *     ?DrvDisableDisplay@@YAHPEAUHDEV__@@H@Z @ 0x1C0077CD4 (-DrvDisableDisplay@@YAHPEAUHDEV__@@H@Z.c)
 *     DrvDisableMDEV @ 0x1C0078130 (DrvDisableMDEV.c)
 * Callees:
 *     GreLockVisRgn @ 0x1C002DE80 (GreLockVisRgn.c)
 *     GreUnlockVisRgn @ 0x1C002E140 (GreUnlockVisRgn.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C002E8B8 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     hdevEnumerate @ 0x1C006FCD0 (hdevEnumerate.c)
 *     GreLockDisplayDevice @ 0x1C006FE40 (GreLockDisplayDevice.c)
 *     GreUnlockDisplayDevice @ 0x1C006FE80 (GreUnlockDisplayDevice.c)
 *     UserIsWddmConnectedSession @ 0x1C0071CE0 (UserIsWddmConnectedSession.c)
 *     ?bLddmDriver@PDEVOBJ@@QEBAHXZ @ 0x1C0072044 (-bLddmDriver@PDEVOBJ@@QEBAHXZ.c)
 *     ?DxLddmPrimaryLockCleanUp@@YAXPEAUHDEV__@@@Z @ 0x1C0074EDC (-DxLddmPrimaryLockCleanUp@@YAXPEAUHDEV__@@@Z.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C00826F0 (EtwTraceGreLockReleaseSemaphore.c)
 *     DrvDxgkDisplayOnOff @ 0x1C00C4110 (DrvDxgkDisplayOnOff.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

void __fastcall GreSuspendDirectDraw(HDEV a1, char a2)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  struct PDEV **i; // rcx
  struct PDEV *v7; // rax
  __int64 v8; // rdi
  int v9; // eax
  char v10; // al
  __int64 v11; // rdx
  __int64 v12; // rdx
  int v13; // r8d
  __int64 v14; // rcx
  _BOOL8 v15; // rdx
  char v16; // [rsp+38h] [rbp+10h] BYREF
  struct PDEV *v17; // [rsp+40h] [rbp+18h] BYREF

  _InterlockedIncrement((volatile signed __int32 *)gpGdiSharedMemory + 393252);
  DisplayScenarioJournalDisplayUniquenessIncremented();
  DxLddmPrimaryLockCleanUp(a1);
  if ( (a2 & 1) != 0 && (unsigned int)UserIsWddmConnectedSession() )
  {
    DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v17);
    for ( i = 0LL; ; i = (struct PDEV **)v8 )
    {
      v7 = hdevEnumerate(i, v4, v5);
      v8 = (__int64)v7;
      if ( !v7 )
        break;
      v17 = v7;
      v9 = *((_DWORD *)v7 + 10);
      if ( (v9 & 1) != 0
        && (v9 & 0x400) == 0
        && (v9 & 0x20000) == 0
        && (unsigned int)PDEVOBJ::bLddmDriver((PDEVOBJ *)&v17) )
      {
        GreLockVisRgn(v8, v4, v5);
        GreLockDisplayDevice(v8);
        v16 = 0;
        v10 = ((__int64 (__fastcall *)(_QWORD, _QWORD, char *))qword_1C0296820)(
                *(_QWORD *)(*(_QWORD *)(v8 + 2552) + 240LL),
                *(unsigned int *)(*(_QWORD *)(v8 + 2552) + 256LL),
                &v16);
        *(_DWORD *)(v8 + 2592) = 1;
        if ( ((a2 & 8) == 0 || v10) && *(_QWORD *)(v8 + 2704) )
        {
          if ( (a2 & 4) != 0 && v16 )
            v11 = 0LL;
          else
            LOBYTE(v11) = 1;
          DrvDxgkDisplayOnOff(v8, v11, 3LL);
          v15 = (a2 & 4) == 0 || !v16;
          (*(void (__fastcall **)(_QWORD, _BOOL8))(v8 + 2704))(*(_QWORD *)(v8 + 1768), v15);
        }
        *(_DWORD *)(v8 + 2592) = 0;
        GreUnlockDisplayDevice(v8);
        GreUnlockVisRgn(v8, v12, v13);
      }
    }
    EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
    if ( ghsemDynamicModeChange )
    {
      ExReleaseResourceAndLeaveCriticalRegion(ghsemDynamicModeChange);
      PsLeavePriorityRegion(v14);
    }
  }
}
