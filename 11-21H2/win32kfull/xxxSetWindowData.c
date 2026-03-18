/*
 * XREFs of xxxSetWindowData @ 0x1C004F920
 * Callers:
 *     ?xxxSetWindowLongPtr@@YA_KPEAUtagWND@@H_KHH@Z @ 0x1C004F3D8 (-xxxSetWindowLongPtr@@YA_KPEAUtagWND@@H_KHH@Z.c)
 *     xxxSetWindowLong @ 0x1C00E4444 (xxxSetWindowLong.c)
 * Callees:
 *     xxxSetWindowStyle @ 0x1C0050020 (xxxSetWindowStyle.c)
 *     MapClientToServerPfn @ 0x1C00622BC (MapClientToServerPfn.c)
 *     ?LockWndMenuWorker@@YAPEAXPEAUtagWND@@_NAEBV?$SmartObjStackRef@UtagMENU@@@@@Z @ 0x1C0064708 (-LockWndMenuWorker@@YAPEAXPEAUtagWND@@_NAEBV-$SmartObjStackRef@UtagMENU@@@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C0066A74 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x1C0067394 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     ThreadLock @ 0x1C0068634 (ThreadLock.c)
 *     SetOrClrWF @ 0x1C0069680 (SetOrClrWF.c)
 *     _GetProp @ 0x1C006B844 (_GetProp.c)
 *     _GetDesktopWindow @ 0x1C006FF60 (_GetDesktopWindow.c)
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     xxxInheritWindowMonitor @ 0x1C0075834 (xxxInheritWindowMonitor.c)
 *     IsParentBandValid @ 0x1C0075B14 (IsParentBandValid.c)
 *     MapClientNeuterToClientPfn @ 0x1C007F75C (MapClientNeuterToClientPfn.c)
 *     ?zzzSetWindowCompositionCloak@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@K@Z @ 0x1C0081DAC (-zzzSetWindowCompositionCloak@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@K@Z.c)
 *     ?GetWindowCloakStateComponentUIAware@@YAKQEAUtagWND@@@Z @ 0x1C0082554 (-GetWindowCloakStateComponentUIAware@@YAKQEAUtagWND@@@Z.c)
 *     ?LockPointer@@YA?AU_LOCKASSIGNPAIR@@PEAV?$SharedUserObjPointerFieldspwndOwner@UtagWND@@@tagWND@@PEAX@Z @ 0x1C0082580 (-LockPointer@@YA-AU_LOCKASSIGNPAIR@@PEAV-$SharedUserObjPointerFieldspwndOwner@UtagWND@@@tagWND@@.c)
 *     IsWindowBeingDestroyed @ 0x1C0083884 (IsWindowBeingDestroyed.c)
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x1C009C270 (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 *     ?IsWindowShellCloaked@@YAHQEAUtagWND@@H@Z @ 0x1C009D490 (-IsWindowShellCloaked@@YAHQEAUtagWND@@H@Z.c)
 *     ?xxxHandleOwnerSwitch@@YAXPEAUtagWND@@00@Z @ 0x1C00A3568 (-xxxHandleOwnerSwitch@@YAXPEAUtagWND@@00@Z.c)
 *     HMValidateHandleNoRip @ 0x1C00A3A40 (HMValidateHandleNoRip.c)
 *     GetCPD @ 0x1C00E3DB8 (GetCPD.c)
 *     xxxClientWOWGetProcModule @ 0x1C00F6CF4 (xxxClientWOWGetProcModule.c)
 *     ValidateOwnerDepth @ 0x1C0107718 (ValidateOwnerDepth.c)
 *     ?UnlockWndMenuWorker@@YAPEAXPEAUtagWND@@_N@Z @ 0x1C010E9D4 (-UnlockWndMenuWorker@@YAPEAXPEAUtagWND@@_N@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0147E84 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     MapServerToClientPfn @ 0x1C025AE20 (MapServerToClientPfn.c)
 */

unsigned __int64 __fastcall xxxSetWindowData(struct tagWND *a1, int a2, __int64 a3, unsigned int a4)
{
  __int64 v5; // r14
  __int64 *ThreadWin32Thread; // rax
  __int64 v10; // rcx
  unsigned __int64 v11; // rdi
  __int64 v12; // rbx
  __int64 *v13; // rax
  _QWORD *v14; // rcx
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rax
  int v20; // ecx
  unsigned int v21; // r11d
  __int64 v22; // r10
  __int64 v23; // r12
  __int64 v24; // rax
  __int64 v25; // r10
  __int64 DesktopWindow; // rax
  __int64 v27; // r12
  __int64 v28; // r13
  __int64 v29; // rdi
  unsigned __int64 **v30; // rdi
  __int64 v31; // rcx
  struct tagWND *v32; // rsi
  __int64 CurrentProcessWin32Process; // rax
  __int64 v34; // rax
  unsigned __int64 *v35; // rdi
  struct tagWND *v36; // r15
  int v37; // eax
  struct tagWND *v38; // rcx
  int v39; // eax
  unsigned int WindowCloakStateComponentUIAware; // eax
  struct tagWND *v41; // rcx
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r8
  __int64 v48; // rax
  __int64 v49; // rax
  __int64 v50; // rax
  __int64 CPD; // rax
  __int64 v52; // rcx
  __int64 v53; // rax
  unsigned int v54; // r8d
  const struct tagWINDOWCOMPOSITIONATTRIBDATA_UNION *v55; // rdx
  unsigned __int64 *v56; // rax
  __int64 v57; // rax
  __int64 v58; // rcx
  signed __int32 v59[8]; // [rsp+8h] [rbp-89h] BYREF
  __int64 v60; // [rsp+28h] [rbp-69h] BYREF
  __int64 v61; // [rsp+30h] [rbp-61h] BYREF
  __int64 v62; // [rsp+38h] [rbp-59h]
  struct tagWND *v63; // [rsp+40h] [rbp-51h]
  unsigned __int64 **v64; // [rsp+48h] [rbp-49h]
  __int128 v65; // [rsp+58h] [rbp-39h] BYREF
  __int128 v66; // [rsp+68h] [rbp-29h] BYREF
  __int64 v67; // [rsp+78h] [rbp-19h]
  __int128 v68; // [rsp+80h] [rbp-11h] BYREF
  __int64 v69; // [rsp+90h] [rbp-1h]
  __int128 v70; // [rsp+98h] [rbp+7h] BYREF
  __int64 v71; // [rsp+A8h] [rbp+17h]
  _BYTE v72[24]; // [rsp+B0h] [rbp+1Fh] BYREF

  v5 = 0LL;
  ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( ThreadWin32Thread )
    v5 = *ThreadWin32Thread;
  v60 = gSmartObjNullRef;
  v61 = *(_QWORD *)(v5 + 1472);
  *(_QWORD *)(v5 + 1472) = &v61;
  v62 = 0LL;
  v69 = 0LL;
  v67 = 0LL;
  v68 = 0LL;
  v66 = 0LL;
  if ( a2 == -16 )
    goto LABEL_4;
  if ( a2 == -2 )
  {
    v16 = *((_QWORD *)a1 + 5);
    v11 = *(_QWORD *)(v16 + 240);
    *(_QWORD *)(v16 + 240) = a3;
    goto LABEL_5;
  }
  if ( a2 != -4 )
  {
    if ( a2 == -12 )
    {
      v17 = *((_QWORD *)a1 + 5);
      if ( (*(_BYTE *)(v17 + 31) & 0xC0) == 0x40 )
      {
        v11 = *(_QWORD *)(v17 + 320);
        *(_QWORD *)(v17 + 320) = a3;
        goto LABEL_5;
      }
      v56 = (unsigned __int64 *)*((_QWORD *)a1 + 21);
      v11 = 0LL;
      if ( v56 )
        v11 = *v56;
      if ( !a3 )
      {
        UnlockWndMenuWorker(a1, 0);
        goto LABEL_5;
      }
      v57 = ValidateHmenu(a3);
      v62 = 0LL;
      SmartObjStackRefBase<tagMENU>::operator=(&v60, v57);
      if ( !(unsigned __int8)SmartObjStackRef<tagMENU>::operator==(&v60) )
      {
        if ( (unsigned int)IsWindowBeingDestroyed(a1) )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v58);
        LockWndMenuWorker(a1, 0LL, &v60);
        goto LABEL_5;
      }
LABEL_104:
      v11 = 0LL;
      goto LABEL_5;
    }
    if ( a2 == -21 )
    {
      v48 = *((_QWORD *)a1 + 5);
      v11 = *(_QWORD *)(v48 + 216);
      *(_QWORD *)(v48 + 216) = a3;
      goto LABEL_5;
    }
    if ( a2 != -40 )
    {
      switch ( a2 )
      {
        case -20:
LABEL_4:
          v11 = (int)xxxSetWindowStyle(a1);
          goto LABEL_5;
        case -8:
          DesktopWindow = GetDesktopWindow(a1);
          v27 = *((_QWORD *)a1 + 13);
          v28 = DesktopWindow;
          if ( v27 == DesktopWindow )
            v63 = (struct tagWND *)*((_QWORD *)a1 + 15);
          else
            v63 = (struct tagWND *)*((_QWORD *)a1 + 13);
          v29 = 120LL;
          if ( v27 != DesktopWindow )
            v29 = 104LL;
          v30 = (unsigned __int64 **)((char *)a1 + v29);
          v64 = v30;
          v32 = (struct tagWND *)ValidateHwnd(a3);
          if ( !v32 && a3 )
            goto LABEL_80;
          if ( v27 == v28 )
          {
            CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v31);
            if ( (unsigned int)ShouldSetNoOwner(CurrentProcessWin32Process, v32) )
              v32 = 0LL;
          }
          if ( (unsigned int)IsParentBandValid(a1, v32) )
          {
            if ( !v32
              || !GetProp(a1, WORD2(WPP_MAIN_CB.Dpc.DpcListEntry.Next), 1LL)
              && (v27 != v28 || !GetProp(v32, WORD2(WPP_MAIN_CB.Dpc.DpcListEntry.Next), 1LL))
              && (v34 = *((_QWORD *)v32 + 5), *(char *)(v34 + 20) >= 0)
              && *(char *)(v34 + 19) >= 0 )
            {
              v35 = *v30;
              if ( v35 )
                v11 = *v35;
              else
                v11 = 0LL;
              ThreadLock(v32, &v66);
              if ( v27 != v28 )
              {
                v46 = -(__int64)(xxxSetParentWorker(a1, v32, 0LL, 0) != 0LL);
                v11 &= v46;
                goto LABEL_59;
              }
              v36 = v63;
              ThreadLock(v63, &v68);
              xxxHandleOwnerSwitch(a1, v32, v36);
              v37 = IsParentBandValid(a1, v32);
              v38 = a1;
              if ( v37 && (v39 = ValidateOwnerDepth(a1, v32), v38 = a1, v39) )
              {
                if ( (*(_BYTE *)(_HMPheFromObject(a1) + 25) & 1) == 0 )
                {
                  if ( !v32 )
                  {
                    HMAssignmentUnlock(v64);
                    goto LABEL_57;
                  }
                  if ( (*(_BYTE *)(_HMPheFromObject(v32) + 25) & 1) == 0 )
                  {
                    *(_QWORD *)&v65 = v64;
                    v71 = 0LL;
                    *((_QWORD *)&v65 + 1) = v32;
                    v70 = 0LL;
                    HMAssignmentLock(&v65, 0LL);
                    WindowCloakStateComponentUIAware = GetWindowCloakStateComponentUIAware(v32);
                    v41 = a1;
                    if ( WindowCloakStateComponentUIAware )
                    {
                      v54 = WindowCloakStateComponentUIAware;
                      v55 = 0LL;
                    }
                    else
                    {
                      if ( !(unsigned int)IsWindowShellCloaked(a1, 1) )
                      {
LABEL_57:
                        v65 = *(_OWORD *)LockPointer(v72, (char *)a1 + 120, *((_QWORD *)a1 + 15));
                        HMAssignmentLock(&v65, 0LL);
                        xxxInheritWindowMonitor(a1);
LABEL_58:
                        ThreadUnlock1(v43, v42, v44);
LABEL_59:
                        ThreadUnlock1(v46, v45, v47);
                        goto LABEL_5;
                      }
                      v54 = 2;
                      v55 = (const struct tagWINDOWCOMPOSITIONATTRIBDATA_UNION *)&v70;
                      v41 = a1;
                    }
                    zzzSetWindowCompositionCloak(v41, v55, v54);
                    goto LABEL_57;
                  }
                }
                if ( (*(_BYTE *)(_HMPheFromObject(a1) + 25) & 1) != 0 )
                  MicrosoftTelemetryAssertTriggeredNoArgsKM(v43);
                if ( v32 && (*(_BYTE *)(_HMPheFromObject(v32) + 25) & 1) != 0 )
                  MicrosoftTelemetryAssertTriggeredNoArgsKM(v43);
              }
              else
              {
                xxxHandleOwnerSwitch(v38, v36, v32);
                UserSetLastError(87LL);
              }
              v11 = 0LL;
              goto LABEL_58;
            }
            v52 = 5LL;
          }
          else
          {
LABEL_80:
            v52 = 87LL;
          }
          break;
        case -6:
          v53 = *((_QWORD *)a1 + 5);
          v11 = *(_QWORD *)(v53 + 32);
          *(_QWORD *)(v53 + 32) = a3;
          goto LABEL_5;
        default:
          v52 = 1413LL;
          break;
      }
LABEL_103:
      UserSetLastError(v52);
      goto LABEL_104;
    }
    if ( PsGetCurrentProcessWin32Process(v10) == *(_QWORD *)(*((_QWORD *)a1 + 2) + 424LL) )
    {
      v11 = ((unsigned __int64)*(unsigned __int8 *)(*((_QWORD *)a1 + 5) + 232LL) >> 5) & 1;
      SetOrClrWF(a3 != 0, a1, 55328LL, 0LL);
      goto LABEL_5;
    }
LABEL_102:
    v52 = 5LL;
    goto LABEL_103;
  }
  if ( PsGetCurrentProcessWin32Process(v10) != *(_QWORD *)(*((_QWORD *)a1 + 2) + 424LL) )
    goto LABEL_102;
  v19 = *((_QWORD *)a1 + 5);
  v20 = *(unsigned __int16 *)(v19 + 42);
  if ( (v20 & 0x8000u) != 0 )
    goto LABEL_102;
  v21 = *(unsigned __int8 *)(v19 + 18);
  if ( (v21 & 4) != 0 )
  {
    v11 = MapServerToClientPfn(*(_QWORD *)(v19 + 120), a4);
    if ( !v11 )
      goto LABEL_104;
  }
  else
  {
    if ( (v20 & 0xFFFF2FFF) == 0x2A5 )
    {
      v11 = *(_QWORD *)(v19 + 120);
      goto LABEL_22;
    }
    v11 = MapClientNeuterToClientPfn(*((_QWORD *)a1 + 17), *(_QWORD *)(v19 + 120), a4);
    if ( v11 == v22 )
    {
LABEL_22:
      if ( a4 != ((v21 >> 3) & 1) )
      {
        CPD = GetCPD(a1, 34 - (unsigned int)(a4 != 0), v11);
        if ( CPD )
          v11 = CPD;
      }
    }
  }
  if ( (a3 & 0xFFFF0000) == 0xFFFF0000 )
  {
    LOBYTE(v18) = 7;
    v49 = HMValidateHandleNoRip(a3, v18);
    if ( v49 )
    {
      v50 = *(_QWORD *)(v49 + 40);
      a3 = *(_QWORD *)(v50 + 16);
      a4 = *(_WORD *)(v50 + 24) & 2;
    }
  }
  v23 = MapClientToServerPfn(a3);
  if ( v23 )
  {
    SetOrClrWF(0LL, a1, 520LL, 1LL);
    SetOrClrWF(1LL, a1, 516LL, 1LL);
    *(_QWORD *)(*((_QWORD *)a1 + 5) + 120LL) = v23;
    _InterlockedOr(v59, 0);
  }
  else
  {
    SetOrClrWF(a4 != 0, a1, 520LL, 1LL);
    if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 18LL) & 4) != 0 )
      SetOrClrWF(0LL, a1, 516LL, 1LL);
    v24 = MapClientNeuterToClientPfn(*((_QWORD *)a1 + 17), a3, a4);
    *(_QWORD *)(v25 + 120) = v24;
    _InterlockedOr(v59, 0);
    *(_WORD *)(*((_QWORD *)a1 + 5) + 40LL) = xxxClientWOWGetProcModule(*(_QWORD *)(*((_QWORD *)a1 + 5) + 120LL));
  }
LABEL_5:
  v12 = 0LL;
  v13 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( v13 )
    v12 = *v13;
  if ( v60 != gSmartObjNullRef && !--*(_DWORD *)(v60 + 8) )
  {
    if ( *(_BYTE *)(v60 + 12) )
      Win32FreeToPagedLookasideList(gpStackRefLookAside, v60);
  }
  v14 = *(_QWORD **)(v12 + 1472);
  if ( v14 )
    *(_QWORD *)(v12 + 1472) = *v14;
  return v11;
}
