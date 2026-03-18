/*
 * XREFs of xxxHandleMenuMessages @ 0x1C0213DC8
 * Callers:
 *     xxxMNLoop @ 0x1C02146AC (xxxMNLoop.c)
 *     xxxCallHandleMenuMessages @ 0x1C0216AB4 (xxxCallHandleMenuMessages.c)
 * Callees:
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0062940 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     ??4?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z @ 0x1C00A9F90 (--4-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z.c)
 *     xxxTranslateMessage @ 0x1C00ACC1C (xxxTranslateMessage.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C00AE308 (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     _PostMessage @ 0x1C00B6CD0 (_PostMessage.c)
 *     PtInRect @ 0x1C00D0A58 (PtInRect.c)
 *     xxxSendMessage @ 0x1C0127178 (xxxSendMessage.c)
 *     __security_check_cookie @ 0x1C0138430 (__security_check_cookie.c)
 *     safe_cast_fnid_to_PMENUWND @ 0x1C013A398 (safe_cast_fnid_to_PMENUWND.c)
 *     IsPointerPrimary @ 0x1C01C6AE4 (IsPointerPrimary.c)
 *     ?AdjustMouseCoordinates@@YAXPEAUtagWND@@PEA_J@Z @ 0x1C0213B08 (-AdjustMouseCoordinates@@YAXPEAUtagWND@@PEA_J@Z.c)
 *     ?xxxMNRemoveMessage@@YAHII@Z @ 0x1C0213BC0 (-xxxMNRemoveMessage@@YAHII@Z.c)
 *     GetMenuStateWindow @ 0x1C0216704 (GetMenuStateWindow.c)
 *     IsMFMWFPWindow @ 0x1C0216738 (IsMFMWFPWindow.c)
 *     LockMFMWFPWindow @ 0x1C021675C (LockMFMWFPWindow.c)
 *     UnlockMFMWFPWindow @ 0x1C0216A14 (UnlockMFMWFPWindow.c)
 *     xxxMNButtonDown @ 0x1C0216BE8 (xxxMNButtonDown.c)
 *     xxxMNButtonUp @ 0x1C0216CEC (xxxMNButtonUp.c)
 *     xxxMNCancel @ 0x1C0216E04 (xxxMNCancel.c)
 *     xxxMNChar @ 0x1C02170F8 (xxxMNChar.c)
 *     xxxMNDoubleClick @ 0x1C02179AC (xxxMNDoubleClick.c)
 *     xxxMNFindWindowFromPoint @ 0x1C0217C90 (xxxMNFindWindowFromPoint.c)
 *     xxxMNKeyDown @ 0x1C0218038 (xxxMNKeyDown.c)
 *     xxxMNMouseMove @ 0x1C0218950 (xxxMNMouseMove.c)
 *     xxxMNSwitchToAlternateMenu @ 0x1C021A4F4 (xxxMNSwitchToAlternateMenu.c)
 */

__int64 __fastcall xxxHandleMenuMessages(__int64 a1, __int64 a2, __int64 **a3)
{
  __int64 *v3; // rax
  __int64 v7; // rdx
  __int64 v9; // r12
  unsigned int v10; // eax
  unsigned int v11; // r14d
  unsigned int v12; // eax
  unsigned int v13; // eax
  unsigned int v14; // eax
  unsigned int v15; // eax
  __int16 v16; // ecx^2
  __int64 v17; // r8
  __int64 v18; // r12
  __int64 v19; // rcx
  unsigned int v20; // eax
  unsigned int v21; // eax
  unsigned int v22; // eax
  unsigned int v23; // eax
  int v24; // eax
  unsigned int v25; // eax
  ULONG_PTR v26; // rcx
  unsigned int v27; // eax
  unsigned int v28; // eax
  unsigned int v29; // eax
  unsigned int v30; // eax
  int v31; // r9d
  int v32; // eax
  int v33; // edx
  struct tagWND *MenuStateWindow; // rax
  int v35; // r9d
  __int64 v36; // r14
  __int64 v37; // rcx
  unsigned int v38; // eax
  unsigned int v39; // eax
  unsigned int v40; // eax
  unsigned int v41; // eax
  int v42; // eax
  unsigned int v43; // eax
  __int16 v44; // ecx^2
  __int64 v45; // r8
  __int64 v46; // rcx
  int v47; // r8d
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // r8
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // r8
  bool v54; // zf
  __int64 v55; // rax
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // r8
  ULONG_PTR v59; // rcx
  unsigned int v60; // [rsp+28h] [rbp-39h] BYREF
  __int64 v61; // [rsp+30h] [rbp-31h] BYREF
  __int64 v62; // [rsp+38h] [rbp-29h] BYREF
  __int64 v63; // [rsp+40h] [rbp-21h]
  int v64; // [rsp+48h] [rbp-19h]
  __int128 v65; // [rsp+50h] [rbp-11h] BYREF
  __int64 v66; // [rsp+60h] [rbp-1h]
  __int128 v67; // [rsp+68h] [rbp+7h] BYREF
  __int64 v68; // [rsp+78h] [rbp+17h]
  __int128 v69; // [rsp+80h] [rbp+1Fh] BYREF
  __int64 v70; // [rsp+90h] [rbp+2Fh]

  v68 = 0LL;
  v66 = 0LL;
  v3 = *a3;
  v67 = 0LL;
  v65 = 0LL;
  v7 = *v3;
  v60 = 0;
  if ( !*(_QWORD *)(v7 + 40) )
    return 0LL;
  v9 = *(_QWORD *)(a1 + 24);
  v10 = *(_DWORD *)(a1 + 8);
  v11 = *(_DWORD *)(a1 + 16);
  v61 = v9;
  if ( v10 > 0x105 )
  {
    if ( v10 > 0x203 )
    {
      v38 = v10 - 516;
      if ( !v38 )
      {
LABEL_12:
        if ( (*(_DWORD *)**a3 & 0x40) != 0 )
          goto LABEL_13;
LABEL_138:
        *(_DWORD *)(a2 + 20) = -1;
        AdjustMouseCoordinates(*(struct tagWND **)(**a3 + 16), &v61);
        if ( xxxMNFindWindowFromPoint(a3, &v60, (unsigned int)v61) )
        {
          v54 = (*(_DWORD *)(a2 + 8) & 0x100) == 0;
LABEL_140:
          if ( v54 )
            xxxMNRemoveMessage(*(_DWORD *)(a1 + 8), 0);
          return 1LL;
        }
LABEL_85:
        xxxMNCancel(a2);
        return 1LL;
      }
      v39 = v38 - 1;
      if ( v39 )
      {
        v40 = v39 - 1;
        if ( v40 )
        {
          v41 = v40 - 60;
          if ( (!v41 || v41 == 4)
            && IsPointerPrimary(gptiCurrent, *(_WORD *)(a1 + 16))
            && !xxxMNFindWindowFromPoint(a3, &v60, (unsigned int)v9) )
          {
            xxxMNCancel(a2);
          }
          return 0LL;
        }
        goto LABEL_138;
      }
      goto LABEL_95;
    }
    if ( v10 == 515 )
    {
LABEL_77:
      *(_DWORD *)(a2 + 20) = -1;
      AdjustMouseCoordinates(*(struct tagWND **)(**a3 + 16), &v61);
      v36 = xxxMNFindWindowFromPoint(a3, &v60, (unsigned int)v61);
      if ( !v36 && !v60 )
        goto LABEL_85;
      if ( (*(_DWORD *)**a3 & 2) != 0 && v36 == 4294967291LL )
      {
        xxxMNSwitchToAlternateMenu(a3, a2);
LABEL_83:
        xxxMNDoubleClick(a2, a3, v60);
        return 1LL;
      }
      if ( v36 == 0xFFFFFFFFLL )
        goto LABEL_83;
      if ( !(unsigned int)IsMFMWFPWindow(v36) )
        goto LABEL_85;
      ThreadLock(v37, &v67);
      goto LABEL_116;
    }
    v27 = v10 - 262;
    if ( v27 )
    {
      v28 = v27 - 18;
      if ( !v28 )
        return 1LL;
      v29 = v28 - 232;
      if ( v29 )
      {
        v30 = v29 - 1;
        if ( !v30 )
          goto LABEL_13;
        if ( v30 != 1 )
          return 0LL;
        goto LABEL_96;
      }
LABEL_66:
      v31 = *(_DWORD *)(a2 + 8);
      if ( (v31 & 0x400) != 0 && (v31 & 8) != 0 && (v31 & 0x80u) == 0 && (v31 & 0x40) == 0 )
      {
        if ( *(_QWORD *)(a2 + 64) )
        {
          v62 = *(_QWORD *)(a2 + 56);
          v63 = v62;
          v32 = *(_DWORD *)(gpsi + 2168LL);
          LODWORD(v62) = v62 - v32;
          LODWORD(v63) = v32 + v63;
          v33 = *(_DWORD *)(gpsi + 2172LL);
          HIDWORD(v62) -= v33;
          HIDWORD(v63) += v33;
          LODWORD(v61) = (__int16)v9;
          HIDWORD(v61) = SWORD1(v9);
          if ( !PtInRect(&v62, v61) )
          {
            MenuStateWindow = (struct tagWND *)GetMenuStateWindow(a2);
            if ( MenuStateWindow )
            {
              *(_DWORD *)(a2 + 8) = v35 | 0x80;
              PostMessage(MenuStateWindow, 0x1F4u, 0LL, 0LL);
            }
          }
        }
      }
      xxxMNMouseMove(a3, a2, (unsigned int)v9);
      return 1LL;
    }
    goto LABEL_75;
  }
  if ( v10 == 261 )
  {
    if ( v11 == 18 || v11 == 121 )
      return 1LL;
    goto LABEL_56;
  }
  if ( v10 > 0xA5 )
  {
    v20 = v10 - 166;
    if ( !v20 )
      goto LABEL_138;
    v21 = v20 - 90;
    if ( !v21 )
      goto LABEL_29;
    v22 = v21 - 1;
    if ( !v22 )
      goto LABEL_56;
    v23 = v22 - 1;
    if ( v23 )
    {
      if ( v23 != 2 )
        return 0LL;
LABEL_29:
      v24 = *(_DWORD *)(a2 + 8);
      if ( (v24 & 8) != 0 && v11 != 112 )
      {
        if ( (v24 & 0x80u) == 0 || v11 != 27 )
          return 1LL;
        v25 = v24 | 0x2000;
        goto LABEL_34;
      }
      *(_DWORD *)(a2 + 20) = 1;
      if ( v11 > 0x25 )
      {
        if ( v11 != 38 && v11 != 39 && v11 != 40 && v11 != 112 && v11 != 121 )
          goto LABEL_56;
      }
      else if ( v11 != 37 && v11 != 3 )
      {
        if ( v11 != 9 )
        {
          if ( v11 != 13 && v11 != 18 && v11 != 27 )
            goto LABEL_56;
          goto LABEL_51;
        }
        if ( (*(_DWORD *)**a3 & 1) != 0 && !*(_QWORD *)(**a3 + 56) )
          goto LABEL_85;
LABEL_56:
        if ( (*(_DWORD *)(a2 + 8) & 0x100) == 0 )
          xxxTranslateMessage(a1, 0);
        return 1LL;
      }
LABEL_51:
      if ( !*(_QWORD *)(**a3 + 56) )
      {
        xxxMNKeyDown(a3, a2, v11);
        return 1LL;
      }
      goto LABEL_52;
    }
LABEL_75:
    if ( !*(_QWORD *)(**a3 + 56) )
    {
      xxxMNChar(a3, a2, v11);
      return 1LL;
    }
LABEL_52:
    ThreadLockAlways(*(_QWORD *)(**a3 + 56), &v65);
    v26 = *(_QWORD *)(**a3 + 56);
LABEL_117:
    xxxSendMessage(v26);
LABEL_137:
    ThreadUnlock1(v52, v51, v53);
    return 1LL;
  }
  if ( v10 == 165 )
  {
LABEL_95:
    if ( (*(_DWORD *)**a3 & 0x40) == 0 )
    {
      if ( (*(_DWORD *)(a2 + 8) & 8) == 0 )
      {
        if ( *(_DWORD *)(a1 + 8) == 517 && (*(_DWORD *)**a3 & 0x800) == 0 )
        {
          SmartObjStackRefBase<tagPOPUPMENU>::Init(&v62, 0LL);
          v55 = safe_cast_fnid_to_PMENUWND(*(_QWORD *)(**a3 + 56));
          if ( v55 )
          {
            SmartObjStackRefBase<tagPOPUPMENU>::operator=(&v62, *(_QWORD *)(v55 + 8));
            if ( *(_QWORD *)v62 )
            {
              if ( *(int *)(*(_QWORD *)v62 + 80LL) >= 0 && *(_QWORD *)(*(_QWORD *)v62 + 8LL) )
              {
                v70 = 0LL;
                v69 = 0LL;
                ThreadLockAlways(*(_QWORD *)(*(_QWORD *)v62 + 8LL), &v69);
                xxxSendMessage(*(_QWORD *)(*(_QWORD *)v62 + 8LL));
                ThreadUnlock1(v57, v56, v58);
              }
            }
          }
          SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(&v62);
        }
        return 0LL;
      }
      v54 = (*(_DWORD *)(a2 + 8) & 0x100) == 0;
      goto LABEL_140;
    }
    goto LABEL_96;
  }
  v12 = v10 - 160;
  if ( !v12 )
    goto LABEL_66;
  v13 = v12 - 1;
  if ( v13 )
  {
    v14 = v13 - 1;
    if ( v14 )
    {
      v15 = v14 - 1;
      if ( v15 )
      {
        if ( v15 == 1 )
          goto LABEL_12;
        return 0LL;
      }
      goto LABEL_77;
    }
LABEL_96:
    v42 = *(_DWORD *)(a2 + 8);
    if ( (v42 & 8) == 0 )
      return 1LL;
    if ( (v42 & 0x400) != 0 )
    {
      UnlockMFMWFPWindow(a2 + 64);
      v43 = *(_DWORD *)(a2 + 8) & 0xFFFFFF7F;
      *(_DWORD *)(a2 + 8) = v43;
      if ( (v43 & 0x2000) != 0 )
      {
        v25 = v43 & 0xFFFFDFF7;
LABEL_34:
        *(_DWORD *)(a2 + 8) = v25;
        return 1LL;
      }
    }
    AdjustMouseCoordinates(*(struct tagWND **)(**a3 + 16), &v61);
    v44 = WORD1(v61);
    v45 = (unsigned int)v61;
    *(_DWORD *)(a2 + 12) = (__int16)v61;
    *(_DWORD *)(a2 + 16) = v44;
    v36 = xxxMNFindWindowFromPoint(a3, &v60, v45);
    v64 = IsMFMWFPWindow(v36);
    v47 = v64;
    if ( v64 )
    {
      ThreadLock(v46, &v67);
      v47 = v64;
    }
    if ( (*(_DWORD *)**a3 & 2) != 0 )
    {
      if ( !v36 && !v60 )
        goto LABEL_132;
      if ( v36 == 0xFFFFFFFFLL )
      {
        if ( (*(_DWORD *)**a3 & 4) != 0 && (*(_DWORD *)**a3 & 0x80u) != 0 )
          goto LABEL_132;
LABEL_114:
        xxxMNButtonUp(a3, a2, v60, 0LL);
        goto LABEL_136;
      }
    }
    else
    {
      if ( !v36 && !v60 && (*(_DWORD *)**a3 & 0x200) == 0 )
      {
        ThreadLock(*(_QWORD *)(**a3 + 16), &v65);
        xxxSendMessage(*(_QWORD *)(**a3 + 16));
        ThreadUnlock1(v49, v48, v50);
        goto LABEL_136;
      }
      *(_DWORD *)**a3 &= ~0x200u;
      if ( v36 == 0xFFFFFFFFLL )
        goto LABEL_114;
    }
    if ( !v47 )
    {
      *(_DWORD *)(a2 + 8) &= 0xFFFFFFB7;
      return 1LL;
    }
LABEL_116:
    v26 = v36;
    goto LABEL_117;
  }
LABEL_13:
  *(_DWORD *)(a2 + 20) = -1;
  AdjustMouseCoordinates(*(struct tagWND **)(**a3 + 16), &v61);
  v16 = WORD1(v61);
  v17 = (unsigned int)v61;
  *(_DWORD *)(a2 + 12) = (__int16)v61;
  *(_DWORD *)(a2 + 16) = v16;
  v18 = xxxMNFindWindowFromPoint(a3, &v60, v17);
  v64 = IsMFMWFPWindow(v18);
  if ( v64 )
    ThreadLock(v19, &v67);
  if ( (*(_DWORD *)(a2 + 8) & 0x400) != 0 )
  {
    *(_QWORD *)(a2 + 56) = *(_QWORD *)(a2 + 12);
    *(_DWORD *)(a2 + 72) = v60;
    LockMFMWFPWindow(a2 + 64, v18);
  }
  if ( (*(_DWORD *)(a2 + 8) & 0x500) != 0 )
    *(_DWORD *)(a2 + 76) = ((v11 & 2) != 0) + 1;
  if ( !v18 && !v60 )
    goto LABEL_132;
  if ( (*(_DWORD *)**a3 & 2) != 0 && v18 == 4294967291LL )
  {
    xxxMNSwitchToAlternateMenu(a3, a2);
LABEL_130:
    xxxMNButtonDown(a3, a2, v60, 1LL);
    goto LABEL_134;
  }
  if ( v18 == 0xFFFFFFFFLL )
    goto LABEL_130;
  if ( !(unsigned int)IsMFMWFPWindow(v18) )
  {
LABEL_132:
    xxxMNCancel(a2);
    goto LABEL_136;
  }
  xxxSendMessage(v59);
LABEL_134:
  if ( (*(_DWORD *)(a2 + 8) & 0x100) == 0 )
    xxxMNRemoveMessage(*(_DWORD *)(a1 + 8), 516);
LABEL_136:
  if ( v64 )
    goto LABEL_137;
  return 1LL;
}
