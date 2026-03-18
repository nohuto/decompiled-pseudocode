/*
 * XREFs of LinkWindow @ 0x1C006F9A0
 * Callers:
 *     xxxCreateWindowEx @ 0x1C0043E80 (xxxCreateWindowEx.c)
 *     ?ImeSetTopmost@@YAXPEAUtagWND@@H0@Z @ 0x1C0062D18 (-ImeSetTopmost@@YAXPEAUtagWND@@H0@Z.c)
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C006E60C (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     SetWindowGroupBand @ 0x1C00810A4 (SetWindowGroupBand.c)
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x1C009C270 (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 *     xxxCreateDesktopEx @ 0x1C00CFDF4 (xxxCreateDesktopEx.c)
 * Callees:
 *     TrackLayeredZorder @ 0x1C001F3C8 (TrackLayeredZorder.c)
 *     DirtyVisRgnTrackers @ 0x1C006C250 (DirtyVisRgnTrackers.c)
 *     _GetDesktopWindow @ 0x1C006FF60 (_GetDesktopWindow.c)
 *     ?LockPointer@@YA?AU_LOCKASSIGNPAIR@@PEAV?$SharedUserObjPointerFieldspwndNext@UtagWND@@@tagWND@@PEAX@Z @ 0x1C006FF80 (-LockPointer@@YA-AU_LOCKASSIGNPAIR@@PEAV-$SharedUserObjPointerFieldspwndNext@UtagWND@@@tagWND@@P.c)
 *     ?LockPointer@@YA?AU_LOCKASSIGNPAIR@@PEAV?$SharedUserObjPointerFieldspwndPrev@UtagWND@@@tagWND@@PEAX@Z @ 0x1C006FFAC (-LockPointer@@YA-AU_LOCKASSIGNPAIR@@PEAV-$SharedUserObjPointerFieldspwndPrev@UtagWND@@@tagWND@@P.c)
 *     GetBandOrdinal @ 0x1C006FFD8 (GetBandOrdinal.c)
 *     DwmAsyncChildLink @ 0x1C0072BCC (DwmAsyncChildLink.c)
 *     HWInsertAfter @ 0x1C0072C90 (HWInsertAfter.c)
 *     GetLastTopMostWindow @ 0x1C0085494 (GetLastTopMostWindow.c)
 *     ?LockPointer@@YA?AU_LOCKASSIGNPAIR@@PEAV?$SharedUserObjPointerFieldspwndChild@UtagWND@@@tagWND@@PEAX@Z @ 0x1C00F9BAC (-LockPointer@@YA-AU_LOCKASSIGNPAIR@@PEAV-$SharedUserObjPointerFieldspwndChild@UtagWND@@@tagWND@@.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0147E84 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     ?_LogLinkWindow@@YAXW4LogBeforeOrAfter@@PEAUtagWND@@11@Z @ 0x1C021C9CC (-_LogLinkWindow@@YAXW4LogBeforeOrAfter@@PEAUtagWND@@11@Z.c)
 */

void __fastcall LinkWindow(struct tagWND *a1, _QWORD *a2, __int64 a3)
{
  struct tagWND *v3; // rbp
  _QWORD *LastTopMostWindow; // rsi
  unsigned int BandOrdinal; // edi
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r8
  __int64 v14; // r8
  _QWORD *v15; // r8
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int128 *v18; // rax
  int v19; // ecx
  struct tagWND *v20; // rax
  __int64 v21; // rax
  int v22; // ebp
  void *v23; // rax
  __int64 i; // r14
  int v25; // eax
  _QWORD *v26; // r9
  __int64 DesktopWindow; // rax
  __int64 v28; // rdx
  __int64 v29; // rdx
  unsigned int v30; // r9d
  _DWORD *v31; // rax
  _DWORD *v32; // r10
  __int64 v33; // r8
  unsigned int v34; // edx
  _DWORD *v35; // rax
  int v36; // ebp
  void *v37; // rax
  __int128 v38; // [rsp+30h] [rbp-38h] BYREF
  _BYTE v39[16]; // [rsp+40h] [rbp-28h] BYREF

  v3 = 0LL;
  LastTopMostWindow = a2;
  BandOrdinal = 0;
  if ( *(struct tagWND **)(a3 + 112) == a1 )
    return;
  if ( (unsigned __int64)a2 - 2 <= 0xFFFFFFFFFFFFFFFBuLL )
  {
    GetDesktopWindow(a1);
    DesktopWindow = GetDesktopWindow(LastTopMostWindow);
    if ( DesktopWindow != v28 )
    {
      if ( a3 == GetDesktopWindow(a1) )
        LastTopMostWindow = (_QWORD *)GetLastTopMostWindow(a1);
      else
        LastTopMostWindow = 0LL;
    }
  }
  if ( (gdwPostMortemLogging & 4) != 0 )
    _LogLinkWindow(0LL, a1, LastTopMostWindow, a3);
  if ( (*(_BYTE *)(_HMPheFromObject(a1) + 25) & 1) != 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v8);
  v9 = *((_QWORD *)a1 + 5);
  if ( *(char *)(v9 + 19) < 0 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v8);
    v9 = *((_QWORD *)a1 + 5);
  }
  if ( *(__int16 *)(v9 + 42) < 0 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v8);
    v9 = *((_QWORD *)a1 + 5);
  }
  v10 = *(_QWORD *)(a3 + 24);
  v11 = 0LL;
  if ( v10 )
  {
    v12 = *(_QWORD *)(v10 + 8);
    if ( v12 )
      v11 = *(_QWORD *)(v12 + 24);
  }
  if ( a3 == v11 )
    BandOrdinal = GetBandOrdinal(*(unsigned int *)(v9 + 236), v11, 1LL);
  else
    v13 = 0LL;
  if ( LastTopMostWindow )
  {
    if ( LastTopMostWindow == (_QWORD *)1 )
    {
      LastTopMostWindow = *(_QWORD **)(a3 + 112);
      if ( LastTopMostWindow && (*(_BYTE *)(LastTopMostWindow[5] + 20LL) & 0x20) == 0 )
      {
        while ( 1 )
        {
          v29 = LastTopMostWindow[11];
          if ( !v29 )
            break;
          if ( (_DWORD)v13 )
          {
            v30 = 0;
            v10 = *(unsigned int *)(*(_QWORD *)(v29 + 40) + 236LL);
            v31 = &gazbidOrder;
            while ( *v31 != (_DWORD)v10 )
            {
              if ( v31[1] == (_DWORD)v10 )
              {
                ++v30;
                break;
              }
              if ( v31[2] == (_DWORD)v10 )
              {
                v30 += 2;
                break;
              }
              if ( v31[3] == (_DWORD)v10 )
              {
                v30 += 3;
                break;
              }
              if ( v31[4] == (_DWORD)v10 )
              {
                v30 += 4;
                break;
              }
              if ( v31[5] == (_DWORD)v10 )
              {
                v30 += 5;
                break;
              }
              v31 += 6;
              v30 += 6;
              if ( v30 >= 0x12 )
                break;
            }
            if ( v30 < BandOrdinal )
              goto LABEL_72;
          }
          if ( (*(_BYTE *)(*(_QWORD *)(v29 + 40) + 20LL) & 0x20) != 0 )
            break;
          LastTopMostWindow = (_QWORD *)LastTopMostWindow[11];
        }
        if ( !(_DWORD)v13 )
          goto LABEL_22;
LABEL_72:
        if ( (unsigned int)GetBandOrdinal(*(unsigned int *)(LastTopMostWindow[5] + 236LL), v29, v13) >= BandOrdinal )
          goto LABEL_22;
      }
    }
    else
    {
      if ( !(_DWORD)v13 )
      {
LABEL_22:
        if ( *(char *)(LastTopMostWindow[5] + 19LL) < 0 )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v10);
        if ( (*(_BYTE *)(_HMPheFromObject(a1) + 25) & 1) != 0 )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v16);
        v17 = LastTopMostWindow[11];
        if ( v17 )
        {
          v38 = *(_OWORD *)LockPointer(v39, v17 + 96, a1);
          HMAssignmentLock(&v38, 0LL);
          v38 = *(_OWORD *)LockPointer(v39, (char *)a1 + 88, LastTopMostWindow[11]);
          HMAssignmentLock(&v38, 0LL);
        }
        v38 = *(_OWORD *)LockPointer(v39, (char *)a1 + 96, LastTopMostWindow);
        HMAssignmentLock(&v38, 0LL);
        v18 = (__int128 *)LockPointer(v39, LastTopMostWindow + 11, a1);
        goto LABEL_29;
      }
      if ( BandOrdinal <= (unsigned int)GetBandOrdinal(*(unsigned int *)(LastTopMostWindow[5] + 236LL), v11, v13) )
      {
        while ( 1 )
        {
          v14 = LastTopMostWindow[11];
          if ( !v14
            || (unsigned int)GetBandOrdinal(*(unsigned int *)(*(_QWORD *)(v14 + 40) + 236LL), v11, v14) <= BandOrdinal )
          {
            break;
          }
          LastTopMostWindow = v15;
        }
        goto LABEL_22;
      }
      while ( 1 )
      {
        LastTopMostWindow = (_QWORD *)LastTopMostWindow[12];
        if ( !LastTopMostWindow )
          break;
        if ( BandOrdinal <= (unsigned int)GetBandOrdinal(*(unsigned int *)(LastTopMostWindow[5] + 236LL), v11, v13) )
          goto LABEL_22;
      }
    }
  }
  v26 = *(_QWORD **)(a3 + 112);
  if ( v26 )
  {
    if ( (_DWORD)v13 && (unsigned int)GetBandOrdinal(*(unsigned int *)(v26[5] + 236LL), v11, v13) > BandOrdinal )
    {
      for ( LastTopMostWindow = v26; ; LastTopMostWindow = (_QWORD *)LastTopMostWindow[11] )
      {
        v33 = LastTopMostWindow[11];
        if ( !v33 )
          break;
        v34 = 0;
        v10 = *(unsigned int *)(*(_QWORD *)(v33 + 40) + 236LL);
        v35 = v32;
        while ( *v35 != (_DWORD)v10 )
        {
          if ( v35[1] == (_DWORD)v10 )
          {
            ++v34;
            break;
          }
          if ( v35[2] == (_DWORD)v10 )
          {
            v34 += 2;
            break;
          }
          if ( v35[3] == (_DWORD)v10 )
          {
            v34 += 3;
            break;
          }
          if ( v35[4] == (_DWORD)v10 )
          {
            v34 += 4;
            break;
          }
          if ( v35[5] == (_DWORD)v10 )
          {
            v34 += 5;
            break;
          }
          v35 += 6;
          v34 += 6;
          if ( v34 >= 0x12 )
            break;
        }
        if ( v34 <= BandOrdinal )
          break;
      }
      goto LABEL_22;
    }
    v38 = *(_OWORD *)LockPointer(v39, v26 + 12, a1);
    HMAssignmentLock(&v38, 0LL);
    v38 = *(_OWORD *)LockPointer(v39, (char *)a1 + 88, *(_QWORD *)(a3 + 112));
    HMAssignmentLock(&v38, 0LL);
  }
  v18 = (__int128 *)LockPointer(v39, a3 + 112, a1);
LABEL_29:
  v38 = *v18;
  HMAssignmentLock(&v38, 0LL);
  *((_DWORD *)a1 + 80) |= 0x1000000u;
  v19 = 0;
  v20 = *(struct tagWND **)(a3 + 112);
  if ( !v20 )
    goto LABEL_108;
  do
  {
    if ( v20 == a1 )
      v19 = 1;
    v20 = (struct tagWND *)*((_QWORD *)v20 + 11);
  }
  while ( v20 );
  if ( v19 )
    *((_DWORD *)a1 + 80) |= 0x2000000u;
  else
LABEL_108:
    *((_DWORD *)a1 + 80) &= ~0x2000000u;
  if ( (*((_DWORD *)a1 + 80) & 0x2000000) != 0
    && (unsigned int)IsWindowDesktopComposed(a1)
    && a1 != (struct tagWND *)GetDesktopWindow(a1) )
  {
    v21 = *((_QWORD *)a1 + 3);
    if ( v21 )
      v3 = *(struct tagWND **)(v21 + 104);
    if ( a1 != v3 && a3 != gTermIO[1] )
    {
      DirtyVisRgnTrackers(a1);
      v22 = *(_DWORD *)(*((_QWORD *)a1 + 5) + 236LL);
      HWInsertAfter(LastTopMostWindow);
      v23 = (void *)ReferenceDwmApiPort();
      DwmAsyncChildLink(v23, v22);
      for ( i = *((_QWORD *)a1 + 11); i; i = *(_QWORD *)(i + 88) )
      {
        v25 = *(_DWORD *)(i + 320);
        if ( (v25 & 0x2000000) == 0 )
        {
          *(_DWORD *)(i + 320) = v25 | 0x2000000;
          DirtyVisRgnTrackers((struct tagWND *)i);
          v36 = *(_DWORD *)(*(_QWORD *)(i + 40) + 236LL);
          HWInsertAfter(*(_QWORD *)(i + 96));
          v37 = (void *)ReferenceDwmApiPort();
          DwmAsyncChildLink(v37, v36);
        }
      }
    }
  }
  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 26LL) & 8) != 0 )
    TrackLayeredZorder(a1);
  if ( (gdwPostMortemLogging & 4) != 0 )
    _LogLinkWindow(1LL, a1, 0LL, 0LL);
}
