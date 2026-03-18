/*
 * XREFs of xxxDrawMenuBarUnderlines @ 0x1C00BAA10
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C0108B10 (xxxRealDefWindowProc.c)
 *     xxxEndMenuLoop @ 0x1C0213C50 (xxxEndMenuLoop.c)
 * Callees:
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0024460 (PopAndFreeAlwaysW32ThreadLock.c)
 *     GetNonChildAncestor @ 0x1C00255E4 (GetNonChildAncestor.c)
 *     GreSetTextColor @ 0x1C0027D58 (GreSetTextColor.c)
 *     GetDPIMetrics @ 0x1C0041140 (GetDPIMetrics.c)
 *     PushW32ThreadLock @ 0x1C00621E0 (PushW32ThreadLock.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x1C00635B4 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     MNGetpItemIndex @ 0x1C0064060 (MNGetpItemIndex.c)
 *     ??1?$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ @ 0x1C0064FE4 (--1-$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ.c)
 *     MNGetpItemFromIndex @ 0x1C00652C8 (MNGetpItemFromIndex.c)
 *     GetOemBitmapInfoForDpi @ 0x1C009A53C (GetOemBitmapInfoForDpi.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C009D540 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C009E5C0 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     GetDpiForSystem @ 0x1C00EDB80 (GetDpiForSystem.c)
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C00EDC14 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 *     GreSelectFontInternal @ 0x1C0119F34 (GreSelectFontInternal.c)
 *     W32GetThreadWin32Thread @ 0x1C011E0CC (W32GetThreadWin32Thread.c)
 *     __security_check_cookie @ 0x1C0138430 (__security_check_cookie.c)
 *     ThreadUnlockMenuNoModify @ 0x1C01FF9C4 (ThreadUnlockMenuNoModify.c)
 *     CALL_LPK @ 0x1C0225FD4 (CALL_LPK.c)
 *     ?GetDPIMETRICS@@YAPEBUtagDPIMETRICS@@PEBUtagWND@@@Z @ 0x1C02337C0 (-GetDPIMETRICS@@YAPEBUtagDPIMETRICS@@PEBUtagWND@@@Z.c)
 *     ?xxxDrawItemUnderline@@YAXAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUHDC__@@HHPEAGJ@Z @ 0x1C0233E30 (-xxxDrawItemUnderline@@YAXAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUHDC__@@HHPEAGJ@Z.c)
 *     ?xxxSendMenuDrawItemMessage@@YAXPEAUHDC__@@IAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@HHPEAUtagWND@@@Z @ 0x1C0234208 (-xxxSendMenuDrawItemMessage@@YAXPEAUHDC__@@IAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@HHPE.c)
 *     MNIsOwnerDrawItem @ 0x1C0234ACC (MNIsOwnerDrawItem.c)
 *     xxxPSMTextOut @ 0x1C02417C4 (xxxPSMTextOut.c)
 *     GetPrefixCount @ 0x1C024D478 (GetPrefixCount.c)
 *     xxxPSMGetTextExtent @ 0x1C024EEC0 (xxxPSMGetTextExtent.c)
 *     GreSetViewportOrg @ 0x1C02D05C4 (GreSetViewportOrg.c)
 */

_QWORD *__fastcall xxxDrawMenuBarUnderlines(__int64 a1, int a2)
{
  int v2; // r12d
  struct tagTHREADINFO *v4; // rax
  __int64 ThreadWin32Thread; // rax
  __int64 NonChildAncestor; // rax
  const struct tagWND *v7; // r13
  __int64 v9; // rdx
  BOOL v10; // r14d
  int v11; // ecx
  __int64 v12; // r15
  _QWORD *v13; // rdi
  __int64 DCEx; // rax
  __int64 v15; // rcx
  HDC v16; // rsi
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // rcx
  int v20; // ebx
  const struct tagDPIMETRICS *DPIMETRICS; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  _DWORD *v24; // rax
  int v25; // r15d
  unsigned int v26; // r12d
  __int64 v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // rcx
  int v30; // ebx
  unsigned int DpiForSystem; // eax
  int v32; // edx
  int v33; // ebx
  __int64 v34; // rcx
  __int64 v35; // rax
  unsigned int v36; // eax
  __int64 v37; // rax
  _BYTE *v38; // rbx
  unsigned __int16 PrefixCount; // ax
  __int64 v40; // rcx
  unsigned int v41; // edx
  __int64 v42; // rax
  unsigned int v43; // edx
  _QWORD v45[2]; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v46; // [rsp+60h] [rbp-A8h]
  __int64 v47; // [rsp+68h] [rbp-A0h]
  __int64 v48; // [rsp+70h] [rbp-98h]
  __int64 v49; // [rsp+78h] [rbp-90h]
  __int64 v50; // [rsp+80h] [rbp-88h]
  __int64 v51; // [rsp+88h] [rbp-80h]
  struct tagTHREADINFO *v52; // [rsp+90h] [rbp-78h]
  __int128 v53; // [rsp+98h] [rbp-70h] BYREF
  __int64 v54; // [rsp+A8h] [rbp-60h]
  __int128 v55; // [rsp+B0h] [rbp-58h] BYREF
  __int64 v56; // [rsp+C0h] [rbp-48h]
  _BYTE v57[512]; // [rsp+C8h] [rbp-40h] BYREF

  v2 = a2;
  SmartObjStackRefBase<tagMENU>::Init(v45, 0LL);
  v46 = 0LL;
  v55 = 0LL;
  v56 = 0LL;
  v4 = PtiCurrentShared();
  v50 = 0LL;
  v52 = v4;
  if ( (gdwPUDFlags & 0x20000) == 0 && ((unsigned int)gpdwCPUserPreferencesMask & 0x80000020) == 0x80000000 )
  {
    ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
    if ( *(_DWORD *)(ThreadWin32Thread + 632) > 0x400u || (*(_DWORD *)(ThreadWin32Thread + 648) & 2) == 0 )
    {
      NonChildAncestor = GetNonChildAncestor(a1);
      v7 = (const struct tagWND *)NonChildAncestor;
      if ( NonChildAncestor )
      {
        if ( (*(_BYTE *)(*(_QWORD *)(NonChildAncestor + 40) + 16LL) & 1) != 0 )
        {
          v9 = *(_QWORD *)(NonChildAncestor + 168);
          v46 = 0LL;
          SmartObjStackRefBase<tagMENU>::operator=(v45, v9);
          if ( !SmartObjStackRef<tagMENU>::operator==((__int64)v45) )
          {
            v10 = ((unsigned int)gpdwCPUserPreferencesMask & 0x80020000) == 0x80020000
               && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v45[0] + 40LL) + 40LL) & 1) == 0;
            v11 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v45[0] + 40LL) + 40LL);
            if ( v2 )
            {
              if ( (v11 & 4) != 0 )
                return SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v45);
              v12 = *(_QWORD *)(gpsi + 4752LL);
              *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v45[0] + 40LL) + 40LL) |= 4u;
            }
            else
            {
              if ( (v11 & 4) == 0 )
                return SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v45);
              if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v45[0] + 40LL) + 24LL) )
              {
                v12 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v45[0] + 40LL) + 24LL);
              }
              else if ( v10 )
              {
                v12 = *(_QWORD *)(gpsi + 4936LL);
              }
              else
              {
                v12 = *(_QWORD *)(gpsi + 4728LL);
              }
              *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v45[0] + 40LL) + 40LL) &= ~4u;
            }
            v48 = v12;
            v13 = *(_QWORD **)(*(_QWORD *)v45[0] + 88LL);
            DCEx = _GetDCEx(v7, 0LL, 65539LL);
            v15 = v46;
            v16 = (HDC)DCEx;
            if ( !v46 )
              v15 = *(_QWORD *)v45[0];
            *(_DWORD *)(*(_QWORD *)(v15 + 40) + 40LL) |= 0x200u;
            ThreadLock(v15, &v55);
            LODWORD(v47) = 0;
            if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v45[0] + 40LL) + 44LL) )
            {
              do
              {
                v17 = v46;
                if ( !v46 )
                  v17 = *(_QWORD *)v45[0];
                if ( (unsigned int)MNGetpItemIndex(v17, (__int64)v13) == -1 )
                  break;
                v18 = v46;
                if ( !v46 )
                  v18 = *(_QWORD *)v45[0];
                v20 = MNIsOwnerDrawItem(v18, v13);
                v51 = v13[11];
                v49 = v13[3];
                if ( v49 || v20 )
                {
                  if ( v20 )
                    DPIMETRICS = GetDPIMETRICS(v7);
                  else
                    DPIMETRICS = (const struct tagDPIMETRICS *)GetDPIMetrics(v19);
                  GreSelectFontInternal(v16, *(_QWORD *)DPIMETRICS, 1LL);
                  GreSetViewportOrg(v16);
                  if ( v2 && (*(_DWORD *)(*v13 + 4LL) & 0x100) != 0 )
                    v22 = *(_QWORD *)(gpsi + 4904LL);
                  else
                    v22 = v12;
                  GreSelectBrush(v16, v22);
                  if ( v20 )
                  {
                    xxxSendMenuDrawItemMessage((_DWORD)v16, 1, (unsigned int)v45, (_DWORD)v13, 0, 0, 0LL);
                  }
                  else
                  {
                    v24 = (_DWORD *)GetDPIMetrics(v23);
                    v25 = v24[5];
                    if ( *(_DWORD *)(*v13 + 76LL) - v24[3] - v25 != 1 )
                      v25 += (unsigned int)(*(_DWORD *)(*v13 + 76LL) - v24[3] - v25 - 1) >> 1;
                    v26 = v24[2];
                    if ( (*(_DWORD *)*v13 & 0x2000) != 0 )
                    {
                      xxxPSMGetTextExtent(v16);
                      v27 = v46;
                      if ( !v46 )
                        v27 = *(_QWORD *)v45[0];
                      if ( (unsigned int)MNGetpItemIndex(v27, (__int64)v13) == -1 || v51 != v13[11] )
                        break;
                      v30 = *(_DWORD *)(*v13 + 72LL);
                      DpiForSystem = GetDpiForSystem(v29, v28);
                      v26 = v30 - *((__int16 *)GetOemBitmapInfoForDpi(63LL, DpiForSystem) + 2) - v50 + v26 - 2;
                    }
                    if ( (unsigned int)CALL_LPK(v52) )
                    {
                      if ( a2 )
                      {
                        v32 = *(_DWORD *)(gpsi + 4596LL);
                      }
                      else if ( v10 )
                      {
                        v32 = *(_DWORD *)(gpsi + 4688LL);
                      }
                      else
                      {
                        v32 = *(_DWORD *)(gpsi + 4584LL);
                      }
                      v33 = GreSetTextColor((__int64)v16, v32);
                      xxxPSMTextOut(v16, *(_DWORD *)(*v13 + 48LL), 0x200000);
                      v34 = v46;
                      if ( !v46 )
                        v34 = *(_QWORD *)v45[0];
                      if ( (unsigned int)MNGetpItemIndex(v34, (__int64)v13) == -1 || v51 != v13[11] )
                        break;
                      GreSetTextColor((__int64)v16, v33);
                    }
                    else
                    {
                      v54 = 0LL;
                      v35 = *v13;
                      v53 = 0LL;
                      v36 = *(_DWORD *)(v35 + 48);
                      if ( v36 < 0xFF )
                      {
                        v38 = v57;
                      }
                      else
                      {
                        v37 = Win32AllocPoolZInit(2LL * (v36 + 1), 1953657685LL);
                        v38 = (_BYTE *)v37;
                        if ( !v37 )
                          break;
                        PushW32ThreadLock(v37, &v53, (__int64)Win32FreePool);
                      }
                      PrefixCount = GetPrefixCount(
                                      v49,
                                      *(unsigned int *)(*v13 + 48LL),
                                      v38,
                                      *(unsigned int *)(*v13 + 48LL));
                      xxxDrawItemUnderline(v45, v13, v16, v26, v25, v38, PrefixCount);
                      if ( v38 != v57 )
                        PopAndFreeAlwaysW32ThreadLock((__int64)&v53);
                    }
                    v2 = a2;
                  }
                }
                v40 = v46;
                v41 = v47 + 1;
                LODWORD(v47) = v47 + 1;
                if ( !v46 )
                  v40 = *(_QWORD *)v45[0];
                v42 = MNGetpItemFromIndex(v40, v41);
                v12 = v48;
                v13 = (_QWORD *)v42;
              }
              while ( v43 < *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v45[0] + 40LL) + 44LL) );
            }
            ThreadUnlockMenuNoModify(&v55);
            _ReleaseDC(v16);
          }
        }
      }
    }
  }
  return SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v45);
}
