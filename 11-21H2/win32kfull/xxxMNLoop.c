/*
 * XREFs of xxxMNLoop @ 0x1C022E038
 * Callers:
 *     xxxSysCommand @ 0x1C011BA1C (xxxSysCommand.c)
 *     xxxTrackPopupMenuEx @ 0x1C024614C (xxxTrackPopupMenuEx.c)
 *     xxxMNKeyFilter @ 0x1C024D9FC (xxxMNKeyFilter.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     xxxDispatchMessage @ 0x1C00429F0 (xxxDispatchMessage.c)
 *     xxxSendMessage @ 0x1C0050D34 (xxxSendMessage.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C0066A74 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     xxxGetSysMenuPtr @ 0x1C0067210 (xxxGetSysMenuPtr.c)
 *     ??1?$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ @ 0x1C00685A0 (--1-$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ.c)
 *     xxxInternalGetMessage @ 0x1C00A4B4C (xxxInternalGetMessage.c)
 *     _PostMessage @ 0x1C00A5270 (_PostMessage.c)
 *     IsShellFrameHangResilient @ 0x1C00A98EC (IsShellFrameHangResilient.c)
 *     xxxSendNotifyMessage @ 0x1C00ACBA0 (xxxSendNotifyMessage.c)
 *     _GetMenuState @ 0x1C00C8FD8 (_GetMenuState.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00E7BF4 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     xxxTranslateMessage @ 0x1C010081C (xxxTranslateMessage.c)
 *     FindNCHit @ 0x1C010C5EC (FindNCHit.c)
 *     _IsChild @ 0x1C011631C (_IsChild.c)
 *     SlowAppThreadInShellFrame @ 0x1C0116CD4 (SlowAppThreadInShellFrame.c)
 *     xxxCallMsgFilter @ 0x1C013EB60 (xxxCallMsgFilter.c)
 *     TryDetachShellFrame @ 0x1C01DD074 (TryDetachShellFrame.c)
 *     xxxWaitMessageEx @ 0x1C01DD5A8 (xxxWaitMessageEx.c)
 *     MNFlushDestroyedPopups @ 0x1C021BC20 (MNFlushDestroyedPopups.c)
 *     xxxMNStartMenu @ 0x1C021C1CC (xxxMNStartMenu.c)
 *     xxxEndMenuLoop @ 0x1C022D580 (xxxEndMenuLoop.c)
 *     xxxHandleMenuMessages @ 0x1C022D700 (xxxHandleMenuMessages.c)
 *     xxxMNReleaseCapture @ 0x1C023346C (xxxMNReleaseCapture.c)
 */

__int64 __fastcall xxxMNLoop(__int64 **a1, __int64 a2, __int64 a3, int a4)
{
  int v5; // r12d
  int v9; // eax
  __int16 KeyState; // ax
  _DWORD *v11; // rcx
  __int64 v12; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 v14; // r8
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  int v18; // eax
  __int64 *v19; // rax
  int v20; // eax
  __int64 v22; // rdx
  int v23; // eax
  int v24; // ebx
  int v25; // eax
  __int64 v26; // rbx
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  bool v31; // zf
  struct tagTHREADINFO *v32; // rax
  _QWORD *v33; // rbx
  __int64 v34; // rax
  __int64 SysMenuPtr; // rax
  __int64 v36; // rcx
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int128 v40; // [rsp+38h] [rbp-29h] BYREF
  __int64 v41; // [rsp+48h] [rbp-19h]
  _QWORD v42[2]; // [rsp+50h] [rbp-11h] BYREF
  __int64 v43; // [rsp+60h] [rbp-1h]
  __int64 v44[2]; // [rsp+68h] [rbp+7h] BYREF
  __int128 v45; // [rsp+78h] [rbp+17h]
  __int128 v46; // [rsp+88h] [rbp+27h]
  int v47; // [rsp+D0h] [rbp+6Fh] BYREF

  *(_DWORD *)(a2 + 8) |= 4u;
  v41 = 0LL;
  *(_OWORD *)v44 = 0LL;
  v5 = 1;
  *(_DWORD *)(a2 + 24) = 0;
  v45 = 0LL;
  v46 = 0LL;
  v40 = 0LL;
  *(_DWORD *)(a2 + 12) = *(_DWORD *)(gptiCurrent + 764LL);
  *(_DWORD *)(a2 + 16) = *(_DWORD *)(gptiCurrent + 768LL);
  *(_DWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 388LL) &= ~0x40u;
  v9 = *(_DWORD *)(a2 + 8);
  if ( (v9 & 1) == 0 )
  {
    KeyState = _GetKeyState((unsigned int)((*(_DWORD *)**a1 & 0x40) != 0) + 1);
    v11 = (_DWORD *)**a1;
    if ( KeyState >= 0 )
    {
      if ( (*v11 & 0x800) == 0 && *(_QWORD *)(**a1 + 8) )
      {
        v12 = *(_QWORD *)(**a1 + 8);
        ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
        *(_QWORD *)&v40 = *(_QWORD *)(ThreadWin32Thread + 416);
        *(_QWORD *)(ThreadWin32Thread + 416) = &v40;
        *((_QWORD *)&v40 + 1) = v12;
        HMLockObject(v12);
        if ( (*(_DWORD *)**a1 & 8) == 0 || (v14 = 1LL, (*(_DWORD *)**a1 & 4) != 0) )
          v14 = 0LL;
        xxxSendNotifyMessage(*(struct tagWND **)(**a1 + 8), 0x212u, v14, 0LL, 1);
        ThreadUnlock1(v16, v15, v17);
      }
      goto LABEL_81;
    }
    if ( (*v11 & 8) == 0 && !xxxMNStartMenu((__int64 *)a1, a2, -1) )
    {
LABEL_81:
      *(_DWORD *)(a2 + 8) &= 0xFFFFFEFB;
      xxxEndMenuLoop(a2, **a1);
      xxxMNReleaseCapture(a2);
      xxxInternalGetMessage(v44, 0LL, 0x200u, 0x200u, 2, 0);
      return *(unsigned int *)(a2 + 24);
    }
    if ( (*(_DWORD *)**a1 & 0x40) != 0 )
    {
      *(_QWORD *)&v45 = 2LL;
      v18 = a4 != 0 ? 518 : 516;
    }
    else
    {
      *(_QWORD *)&v45 = 1LL;
      v18 = a4 != 0 ? 515 : 513;
    }
    LODWORD(v44[1]) = v18;
    v19 = *a1;
    *((_QWORD *)&v45 + 1) = a3;
    if ( *(_QWORD *)(*v19 + 16) )
      v44[0] = **(_QWORD **)(**a1 + 16);
    else
      v44[0] = 0LL;
    xxxHandleMenuMessages((__int64)v44, a2, a1);
    v9 = *(_DWORD *)(a2 + 8);
  }
  if ( (v9 & 0x100) == 0 )
  {
    while ( 1 )
    {
      if ( (v9 & 4) == 0 )
        goto LABEL_81;
      if ( !(unsigned int)xxxInternalGetMessage(v44, 0LL, 0, 0, 2, 0) )
        goto LABEL_60;
      if ( (*(_DWORD *)(a2 + 8) & 4) == 0 )
        goto LABEL_81;
      if ( (*(_DWORD *)**a1 & 0x8000) != 0 )
        goto LABEL_81;
      if ( (*(_DWORD *)**a1 & 8) == 0 )
      {
        v22 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 120LL);
        if ( v22 != *(_QWORD *)(**a1 + 8)
          && (!v22
           || !(unsigned int)IsChild(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 120LL), *(_QWORD *)(**a1 + 8))) )
        {
          goto LABEL_81;
        }
      }
      if ( (*(_DWORD *)**a1 & 1) == 0 )
        goto LABEL_37;
      v23 = v44[1];
      if ( LODWORD(v44[1]) == 515 )
        break;
LABEL_38:
      if ( v23 == 513 || v23 == 516 || v23 == 161 || v23 == 164 )
      {
        v24 = 1;
        goto LABEL_47;
      }
LABEL_42:
      *(_DWORD *)(gptiCurrent + 488LL) |= 0x200000u;
      v24 = 0;
      if ( !(unsigned int)xxxInternalGetMessage(v44, 0LL, v44[1], v44[1], 1, 0) )
      {
        v25 = *(_DWORD *)(gptiCurrent + 488LL);
        if ( (v25 & 0x200000) != 0 )
        {
          *(_DWORD *)(gptiCurrent + 488LL) = v25 & 0xFFDFFFFF;
LABEL_60:
          if ( (*(_DWORD *)(a2 + 8) & 4) == 0 || (*(_DWORD *)**a1 & 0x8000) != 0 )
            goto LABEL_81;
          if ( (*(_DWORD *)**a1 & 0x20000) != 0 )
          {
            MNFlushDestroyedPopups((_DWORD *)**a1);
            *(_DWORD *)**a1 &= ~0x20000u;
          }
          if ( v5 )
          {
            if ( *(_QWORD *)(**a1 + 8) )
            {
              v26 = *(_QWORD *)(**a1 + 8);
              v27 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
              *(_QWORD *)&v40 = *(_QWORD *)(v27 + 416);
              *(_QWORD *)(v27 + 416) = &v40;
              *((_QWORD *)&v40 + 1) = v26;
              HMLockObject(v26);
              xxxSendMessage(*(_QWORD *)(**a1 + 8));
              ThreadUnlock1(v29, v28, v30);
            }
            v5 = 0;
          }
          else
          {
            v31 = *(_QWORD *)(a2 + 96) == 0LL;
            v47 = 0;
            xxxWaitMessageEx(0x3CFFu, !v31, (enum SLEEP_STATUS *)&v47);
            if ( (unsigned int)IsShellFrameHangResilient(gptiCurrent) )
            {
              if ( v47 )
              {
                v32 = SlowAppThreadInShellFrame(gptiCurrent, 0LL, 0LL, 1);
                if ( v32 )
                  TryDetachShellFrame(gptiCurrent, (__int64)v32, v47 == 2, 0);
              }
            }
          }
          goto LABEL_72;
        }
      }
      *(_DWORD *)(gptiCurrent + 488LL) &= ~0x200000u;
LABEL_47:
      if ( (unsigned int)xxxCallMsgFilter((__int64)v44, 2) )
      {
        if ( v24 )
          xxxInternalGetMessage(v44, 0LL, v44[1], v44[1], 1, 0);
LABEL_59:
        v5 = 1;
        goto LABEL_72;
      }
      if ( !(unsigned int)xxxHandleMenuMessages((__int64)v44, a2, a1) )
      {
        xxxTranslateMessage((__int64)v44, 0);
        xxxDispatchMessage((__int64)v44);
      }
      if ( (*(_DWORD *)(a2 + 8) & 4) == 0
        || (*(_DWORD *)**a1 & 0x8000) != 0
        || (*(_DWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 388LL) & 0x40) != 0 )
      {
        goto LABEL_81;
      }
      if ( LODWORD(v44[1]) == 280 )
        goto LABEL_60;
      if ( LODWORD(v44[1]) != 275 && LODWORD(v44[1]) != 15 )
        goto LABEL_59;
LABEL_72:
      v9 = *(_DWORD *)(a2 + 8);
    }
    if ( !*(_QWORD *)(**a1 + 8) )
      goto LABEL_42;
    if ( (unsigned int)FindNCHit(*(_QWORD *)(**a1 + 8), SDWORD2(v45)) == 2 )
    {
      SmartObjStackRefBase<tagMENU>::Init(v42, 0LL);
      v43 = 0LL;
      xxxInternalGetMessage(v44, 0LL, v44[1], v44[1], 1, 0);
      if ( (*(_DWORD *)(a2 + 8) & 4) == 0 || (*(_DWORD *)**a1 & 0x8000) != 0 )
        goto LABEL_80;
      if ( *(_QWORD *)(**a1 + 8) )
      {
        v33 = *(_QWORD **)(**a1 + 8);
        v34 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
        *(_QWORD *)&v40 = *(_QWORD *)(v34 + 416);
        *(_QWORD *)(v34 + 416) = &v40;
        *((_QWORD *)&v40 + 1) = v33;
        HMLockObject(v33);
        SysMenuPtr = xxxGetSysMenuPtr(v33);
        v43 = 0LL;
        SmartObjStackRefBase<tagMENU>::operator=((__int64)v42, SysMenuPtr);
        v36 = v43;
        if ( !v43 )
          v36 = *(_QWORD *)v42[0];
        if ( (GetMenuState(v36, 0xF120u) & 3) == 0 )
          PostMessage((int)v33, 274, 61728, 0);
        ThreadUnlock1(v38, v37, v39);
LABEL_80:
        SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v42);
        goto LABEL_81;
      }
      SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v42);
    }
LABEL_37:
    v23 = v44[1];
    goto LABEL_38;
  }
  xxxMNReleaseCapture(a2);
  v20 = *(_DWORD *)(a2 + 8);
  if ( (v20 & 0x2000000) != 0 )
  {
    --guSFWLockCount;
    *(_DWORD *)(a2 + 8) = v20 & 0xFDFFFFFF;
  }
  return 0LL;
}
