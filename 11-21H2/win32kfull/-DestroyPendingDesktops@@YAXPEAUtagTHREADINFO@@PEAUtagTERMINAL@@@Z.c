/*
 * XREFs of ?DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z @ 0x1C0099B78
 * Callers:
 *     ?xxxHandleDesktopMessages@@YAHPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z @ 0x1C00A4A14 (-xxxHandleDesktopMessages@@YAHPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z.c)
 * Callees:
 *     xxxSetWindowPos @ 0x1C0048A4C (xxxSetWindowPos.c)
 *     PopAndFreeW32ThreadLock @ 0x1C005BDE0 (PopAndFreeW32ThreadLock.c)
 *     xxxDestroyWindow @ 0x1C0062330 (xxxDestroyWindow.c)
 *     _DestroyMenu @ 0x1C0063B20 (_DestroyMenu.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C0066A74 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     ??1?$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ @ 0x1C00685A0 (--1-$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1C00788F8 (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0079D94 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     PushW32ThreadLock @ 0x1C007F6F0 (PushW32ThreadLock.c)
 *     WPP_RECORDER_AND_TRACE_SF_qqS @ 0x1C00993A4 (WPP_RECORDER_AND_TRACE_SF_qqS.c)
 *     ?GetDesktopName@@YAPEBGPEAUtagDESKTOP@@@Z @ 0x1C009A420 (-GetDesktopName@@YAPEBGPEAUtagDESKTOP@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_Sq @ 0x1C009A488 (WPP_RECORDER_AND_TRACE_SF_Sq.c)
 *     xxxSetThreadDesktop @ 0x1C00A9A4C (xxxSetThreadDesktop.c)
 *     xxxSwitchDesktop @ 0x1C00B0E54 (xxxSwitchDesktop.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00E7BF4 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     DwmAsyncShellWindowChange @ 0x1C00F150C (DwmAsyncShellWindowChange.c)
 *     ?ClearWakeBit@@YAXPEAUtagTHREADINFO@@IH@Z @ 0x1C00FA4E0 (-ClearWakeBit@@YAXPEAUtagTHREADINFO@@IH@Z.c)
 *     UnlockDesktopMenu @ 0x1C011EECC (UnlockDesktopMenu.c)
 *     xxxCleanupMotherDesktopWindow @ 0x1C01226E8 (xxxCleanupMotherDesktopWindow.c)
 *     RemoteDisableScreen @ 0x1C012368C (RemoteDisableScreen.c)
 */

void __fastcall DestroyPendingDesktops(struct tagTHREADINFO *a1, struct tagTERMINAL *a2)
{
  struct tagTERMINAL *v2; // r14
  struct tagTHREADINFO *v3; // r15
  int v4; // edx
  int v5; // r8d
  char *v6; // r12
  __int64 v7; // rdi
  bool v8; // bl
  bool v9; // si
  const unsigned __int16 *DesktopName; // rax
  int v11; // r8d
  int v12; // edx
  __int64 v13; // r13
  void *v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // r8
  struct tagTHREADINFO *v17; // rsi
  _QWORD *i; // rdx
  _DWORD *v19; // r15
  __int64 v20; // r12
  __int64 v21; // r8
  __int64 v22; // rdx
  __int64 v23; // rdx
  __int64 v24; // rdx
  __int64 v25; // rdx
  _QWORD *v26; // rax
  __int64 v27; // rcx
  _QWORD *v28; // rbx
  _QWORD *v29; // rbx
  volatile signed __int32 *v30; // rcx
  __int64 v31; // r9
  struct tagDESKTOP *v32; // rbx
  char v33; // si
  char v34; // r14
  const char *v35; // rax
  __int64 v36; // rbx
  struct tagWND *v37; // rbx
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  int v41; // edx
  int v42; // r8d
  int v43; // r9d
  __int64 v44; // rcx
  struct tagDESKTOP *v45; // rbx
  bool v46; // si
  bool v47; // r14
  const unsigned __int16 *v48; // rax
  int v49; // r8d
  int v50; // edx
  __int64 v51; // rdx
  __int64 v52; // rcx
  PVOID *v53; // rcx
  PVOID *v54; // rcx
  PVOID *v55; // rcx
  PVOID *v56; // rcx
  void *v57; // rax
  __int64 v58; // rcx
  __int64 v59; // rax
  int v60; // [rsp+28h] [rbp-A9h]
  int v61; // [rsp+30h] [rbp-A1h]
  int v62; // [rsp+38h] [rbp-99h]
  int v63; // [rsp+40h] [rbp-91h]
  _QWORD v64[2]; // [rsp+68h] [rbp-69h] BYREF
  PVOID *v65; // [rsp+78h] [rbp-59h]
  __int128 v66; // [rsp+80h] [rbp-51h] BYREF
  __int64 v67; // [rsp+90h] [rbp-41h]
  __int128 v68; // [rsp+98h] [rbp-39h] BYREF
  __int64 v69; // [rsp+A8h] [rbp-29h]
  __int128 v70; // [rsp+B0h] [rbp-21h] BYREF
  __int64 v71; // [rsp+C0h] [rbp-11h]
  __int128 v72; // [rsp+C8h] [rbp-9h] BYREF
  __int64 v73; // [rsp+D8h] [rbp+7h]
  __int128 v74; // [rsp+E0h] [rbp+Fh] BYREF
  __int64 v75; // [rsp+F0h] [rbp+1Fh]

  v2 = a2;
  v3 = a1;
  SmartObjStackRefBase<tagMENU>::Init(v64, 0LL);
  v65 = 0LL;
  v6 = (char *)v2 + 48;
  v7 = *((_QWORD *)v2 + 6);
  v75 = 0LL;
  v73 = 0LL;
  v67 = 0LL;
  v71 = 0LL;
  v74 = 0LL;
  v72 = 0LL;
  v66 = 0LL;
  v70 = 0LL;
  if ( v7 )
  {
    while ( 1 )
    {
      v8 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80u) != 0
        && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
      v9 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v8 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        DesktopName = GetDesktopName((struct tagDESKTOP *)v7);
        LOBYTE(v11) = v9;
        LOBYTE(v12) = v8;
        WPP_RECORDER_AND_TRACE_SF_Sq(
          WPP_GLOBAL_Control->AttachedDevice,
          v12,
          v11,
          WPP_MAIN_CB.Queue.ListEntry.Flink,
          v60,
          v61,
          10,
          v63,
          (__int64)DesktopName,
          v7);
      }
      PushW32ThreadLock(v7, &v74, UserDereferenceObject);
      ObfReferenceObject((PVOID)v7);
      v13 = *(_QWORD *)(v7 + 40);
      PushW32ThreadLock(v13, &v72, UserDereferenceObject);
      v14 = *(void **)(v7 + 40);
      if ( v14 )
        ObfReferenceObject(v14);
      LockObjectAssignment(v6, *(_QWORD *)(v7 + 32));
      UnlockObjectAssignment(v7 + 32);
      if ( v7 == grpdeskRitInput )
        break;
      v17 = a1;
      if ( v7 == *((_QWORD *)a1 + 57) )
      {
        v51 = 0LL;
        v52 = grpWinStaList;
        if ( grpWinStaList )
        {
          while ( (*(_DWORD *)(v52 + 64) & 0x10) != 0
               || *(struct tagTERMINAL **)(v52 + 56) != v2
               || !*(_QWORD *)(v52 + 16) )
          {
            v52 = *(_QWORD *)(v52 + 8);
            if ( !v52 )
              goto LABEL_153;
          }
          v51 = *(_QWORD *)(v52 + 16);
          do
          {
            if ( v51 != v7 )
              break;
            v51 = *(_QWORD *)(v51 + 32);
          }
          while ( v51 );
        }
LABEL_153:
        xxxSetThreadDesktop(0LL, v51);
      }
LABEL_12:
      if ( v7 == gspdeskShouldBeForeground )
      {
        for ( i = *(_QWORD **)(v13 + 16); i && (i == gspdeskDisconnect || i == grpdeskLogon); i = (_QWORD *)i[4] )
          ;
        LockObjectAssignment(gspdeskShouldBeForeground, i);
      }
      v19 = (_DWORD *)*((_QWORD *)v17 + 57);
      v20 = *((_QWORD *)v17 + 74);
      PushW32ThreadLock((__int64)v19, &v70, UserDereferenceObject);
      if ( v19 )
        ObfReferenceObject(v19);
      xxxSetThreadDesktop(0LL, v7);
      HMAssignmentUnlock(v7 + 88);
      HMAssignmentUnlock(v7 + 96);
      HMAssignmentUnlock(v7 + 184);
      *(_DWORD *)(v7 + 48) &= 0xFFFFFA3F;
      v22 = *(_QWORD *)(v7 + 56);
      if ( v22 )
      {
        v65 = 0LL;
        SmartObjStackRefBase<tagMENU>::operator=((__int64)v64, v22);
        *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v7 + 56) + 40LL) + 40LL) &= ~0x80u;
        if ( UnlockDesktopMenu(v7 + 56) )
        {
          v53 = v65;
          if ( !v65 )
            v53 = *(PVOID **)v64[0];
          DestroyMenu(v53);
        }
      }
      v23 = *(_QWORD *)(v7 + 64);
      if ( v23 )
      {
        v65 = 0LL;
        SmartObjStackRefBase<tagMENU>::operator=((__int64)v64, v23);
        *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v7 + 64) + 40LL) + 40LL) &= ~0x80u;
        if ( UnlockDesktopMenu(v7 + 64) )
        {
          v54 = v65;
          if ( !v65 )
            v54 = *(PVOID **)v64[0];
          DestroyMenu(v54);
        }
      }
      v24 = *(_QWORD *)(v7 + 72);
      if ( v24 )
      {
        v65 = 0LL;
        SmartObjStackRefBase<tagMENU>::operator=((__int64)v64, v24);
        if ( UnlockDesktopMenu(v7 + 72) )
        {
          v55 = v65;
          if ( !v65 )
            v55 = *(PVOID **)v64[0];
          DestroyMenu(v55);
        }
      }
      v25 = *(_QWORD *)(v7 + 80);
      if ( v25 )
      {
        v65 = 0LL;
        SmartObjStackRefBase<tagMENU>::operator=((__int64)v64, v25);
        if ( UnlockDesktopMenu(v7 + 80) )
        {
          v56 = v65;
          if ( !v65 )
            v56 = *(PVOID **)v64[0];
          DestroyMenu(v56);
        }
      }
      v26 = *(_QWORD **)(v7 + 8);
      if ( v26 )
      {
        v27 = v26[21];
        if ( v27 )
        {
          if ( (unsigned int)IsWindowDesktopComposed(v27) )
          {
            v57 = (void *)ReferenceDwmApiPort();
            DwmAsyncShellWindowChange(v57);
          }
          v58 = *(_QWORD *)(v7 + 8) + 168LL;
          *(_QWORD *)(**(_QWORD **)(v7 + 8) + 24LL) = 0LL;
          HMAssignmentUnlock(v58);
          v26 = *(_QWORD **)(v7 + 8);
        }
        if ( v26[23] )
        {
          HMAssignmentUnlock(v26 + 23);
          v26 = *(_QWORD **)(v7 + 8);
        }
        if ( v26[24] )
        {
          *(_QWORD *)(*v26 + 32LL) = 0LL;
          HMAssignmentUnlock(v26 + 24);
          v26 = *(_QWORD **)(v7 + 8);
        }
        if ( v26[25] )
        {
          *(_QWORD *)(*v26 + 40LL) = 0LL;
          HMAssignmentUnlock(v26 + 25);
        }
      }
      v28 = *(_QWORD **)(v7 + 104);
      if ( v28 && HMAssignmentUnlock(v7 + 104) )
        xxxDestroyWindow(v28);
      v29 = *(_QWORD **)(v7 + 112);
      if ( v29 && HMAssignmentUnlock(v7 + 112) )
        xxxDestroyWindow(v29);
      v30 = *(volatile signed __int32 **)(v7 + 256);
      if ( v30 )
      {
        if ( _InterlockedExchangeAdd(v30, 0xFFFFFFFF) == 1 )
          Win32FreePool(v30);
        *(_QWORD *)(v7 + 256) = 0LL;
      }
      v31 = *((_QWORD *)v2 + 1);
      if ( !v31 || *(_QWORD *)(v31 + 24) != v7 )
        goto LABEL_50;
      if ( (*(_DWORD *)v2 & 2) != 0 )
      {
        v59 = grpWinStaList;
        if ( grpWinStaList )
        {
          while ( 1 )
          {
            v59 = *(_QWORD *)(v59 + 8);
            if ( !v59 )
              break;
            v32 = *(struct tagDESKTOP **)(v59 + 16);
            if ( v32 )
              goto LABEL_43;
          }
        }
LABEL_99:
        if ( v2 == (struct tagTERMINAL *)gTermIO[0] )
        {
          LOBYTE(v25) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                     && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80u) != 0
                     && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
          LOBYTE(v21) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          if ( (_BYTE)v25 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_AND_TRACE_SF_q(
              WPP_GLOBAL_Control->AttachedDevice,
              v25,
              v21,
              v31,
              4,
              8,
              16,
              (__int64)&WPP_d78c2f93cefb39adad771009d44421f9_Traceguids,
              *((_QWORD *)v2 + 1));
          xxxCleanupMotherDesktopWindow(v2, v25, v21);
        }
        goto LABEL_50;
      }
      v32 = *(struct tagDESKTOP **)(v13 + 16);
      if ( !v32 )
        goto LABEL_99;
LABEL_43:
      v33 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
         && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80u) != 0
         && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
      v34 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v33 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v35 = (const char *)GetDesktopName(v32);
        WPP_RECORDER_AND_TRACE_SF_qqS(
          (__int64)WPP_GLOBAL_Control->AttachedDevice,
          v33,
          v34,
          (__int64)WPP_MAIN_CB.Queue.ListEntry.Flink,
          v60,
          v61,
          v62,
          v63,
          *((_QWORD *)a2 + 1),
          (char)v32,
          v35);
      }
      v2 = a2;
      LockObjectAssignment(*((_QWORD *)a2 + 1) + 24LL, v32);
      v17 = a1;
LABEL_50:
      v36 = *(_QWORD *)(v7 + 8);
      if ( v36 )
      {
        v37 = *(struct tagWND **)(v36 + 24);
        if ( v37 )
        {
          if ( (*(_BYTE *)(*((_QWORD *)v37 + 5) + 31LL) & 0x10) != 0 )
          {
            *(_QWORD *)&v66 = *((_QWORD *)v17 + 52);
            *((_QWORD *)v17 + 52) = &v66;
            *((_QWORD *)&v66 + 1) = v37;
            HMLockObject(v37);
            xxxSetWindowPos(v37, 0LL, 0LL, 0LL, 0, 0, 1183);
            ThreadUnlock1(v39, v38, v40);
          }
          LOBYTE(v25) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                     && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80u) != 0
                     && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
          if ( (_BYTE)v25 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v21) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
            WPP_RECORDER_AND_TRACE_SF_(
              WPP_GLOBAL_Control->AttachedDevice,
              v25,
              v21,
              v31,
              4,
              8,
              18,
              (__int64)&WPP_d78c2f93cefb39adad771009d44421f9_Traceguids);
          }
          xxxDestroyWindow(*(_QWORD **)(*(_QWORD *)(v7 + 8) + 24LL));
          if ( v7 == grpdeskRitInput )
          {
            *(_DWORD *)(v7 + 48) |= 1u;
            LOBYTE(v41) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                       && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80u) != 0
                       && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
            if ( (_BYTE)v41 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v42) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
              WPP_RECORDER_AND_TRACE_SF_q(
                WPP_GLOBAL_Control->AttachedDevice,
                v41,
                v42,
                v43,
                4,
                8,
                19,
                (__int64)&WPP_d78c2f93cefb39adad771009d44421f9_Traceguids,
                v7);
            }
          }
          else
          {
            v44 = *(_QWORD *)(v7 + 8) + 24LL;
            *(_QWORD *)(**(_QWORD **)(v7 + 8) + 8LL) = 0LL;
            HMAssignmentUnlock(v44);
          }
          *(_DWORD *)(v7 + 48) |= 2u;
        }
      }
      if ( (*(_DWORD *)v2 & 2) == 0 || !v19 || (v19[12] & 6) == 0 )
        xxxSetThreadDesktop(v20, v19);
      PopAndFreeW32ThreadLock((__int64)&v70);
      PopAndFreeW32ThreadLock((__int64)&v72);
      PopAndFreeW32ThreadLock((__int64)&v74);
      v3 = a1;
      v6 = (char *)v2 + 48;
      v7 = *((_QWORD *)v2 + 6);
      if ( !v7 )
        goto LABEL_66;
    }
    v68 = 0LL;
    v69 = 0LL;
    LOBYTE(v15) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
               && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80) != 0
               && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    if ( (_BYTE)v15 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v16) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v15,
        v16,
        (unsigned int)&WPP_GLOBAL_Control,
        4,
        8,
        11,
        (__int64)&WPP_d78c2f93cefb39adad771009d44421f9_Traceguids);
    }
    if ( (*(_DWORD *)(v13 + 64) & 1) != 0 )
    {
      LOBYTE(v15) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                 && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80) != 0
                 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
      if ( (_BYTE)v15 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v16) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          v15,
          v16,
          (unsigned int)&WPP_GLOBAL_Control,
          4,
          8,
          12,
          (__int64)&WPP_d78c2f93cefb39adad771009d44421f9_Traceguids);
      }
      if ( gspdeskDisconnect
        && ((PVOID)v7 == grpdeskLogon || !grpdeskLogon || (*((_DWORD *)grpdeskLogon + 12) & 2) != 0) )
      {
        LOBYTE(v15) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                   && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80) != 0
                   && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
        LOBYTE(v16) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( (_BYTE)v15 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_AND_TRACE_SF_(
            WPP_GLOBAL_Control->AttachedDevice,
            v15,
            v16,
            (unsigned int)&WPP_GLOBAL_Control,
            4,
            8,
            13,
            (__int64)&WPP_d78c2f93cefb39adad771009d44421f9_Traceguids);
        RemoteDisableScreen(grpdeskRitInput, v15, v16, gbDesktopLocked);
LABEL_97:
        v17 = a1;
        goto LABEL_12;
      }
      v45 = (struct tagDESKTOP *)grpdeskLogon;
    }
    else
    {
      v45 = *(struct tagDESKTOP **)(v13 + 16);
      if ( v45 == (struct tagDESKTOP *)v7 )
        v45 = *(struct tagDESKTOP **)(v7 + 32);
      if ( !v45 )
      {
        LOBYTE(v15) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                   && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80) != 0
                   && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
        if ( (_BYTE)v15 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v16) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          WPP_RECORDER_AND_TRACE_SF_(
            WPP_GLOBAL_Control->AttachedDevice,
            v15,
            v16,
            (unsigned int)&WPP_d78c2f93cefb39adad771009d44421f9_Traceguids,
            4,
            8,
            14,
            (__int64)&WPP_d78c2f93cefb39adad771009d44421f9_Traceguids);
        }
        ClearWakeBit(v3, 0x3C07u, 0);
      }
    }
    v46 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
       && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80) != 0
       && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    v47 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v46 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v48 = GetDesktopName(v45);
      LOBYTE(v49) = v47;
      LOBYTE(v50) = v46;
      WPP_RECORDER_AND_TRACE_SF_Sq(
        WPP_GLOBAL_Control->AttachedDevice,
        v50,
        v49,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        v60,
        v61,
        15,
        v63,
        (__int64)v48,
        (char)v45);
    }
    PushW32ThreadLock((__int64)v45, &v68, UserDereferenceObject);
    if ( v45 )
      ObfReferenceObject(v45);
    xxxSwitchDesktop(v13, v45, 0LL, 0LL);
    PopAndFreeW32ThreadLock((__int64)&v68);
    v2 = a2;
    goto LABEL_97;
  }
LABEL_66:
  LOBYTE(v4) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80u) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( (_BYTE)v4 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v5) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      v4,
      v5,
      (unsigned int)&WPP_d78c2f93cefb39adad771009d44421f9_Traceguids,
      4,
      8,
      20,
      (__int64)&WPP_d78c2f93cefb39adad771009d44421f9_Traceguids);
  }
  KeSetEvent(gpevtDesktopDestroyed, 1, 0);
  SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v64);
}
