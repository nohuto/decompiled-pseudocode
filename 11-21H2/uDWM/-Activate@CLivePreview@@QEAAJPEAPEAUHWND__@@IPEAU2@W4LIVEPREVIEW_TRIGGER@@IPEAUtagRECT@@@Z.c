/*
 * XREFs of ?Activate@CLivePreview@@QEAAJPEAPEAUHWND__@@IPEAU2@W4LIVEPREVIEW_TRIGGER@@IPEAUtagRECT@@@Z @ 0x1800C1B08
 * Callers:
 *     ?ActivateLivePreview@CDesktopManager@@SAJPEAULivePreviewRequest@@@Z @ 0x18005CA20 (-ActivateLivePreview@CDesktopManager@@SAJPEAULivePreviewRequest@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?FindWindowDataByHwnd@CWindowList@@QEAAPEAVCWindowData@@PEAUHWND__@@@Z @ 0x180004E98 (-FindWindowDataByHwnd@CWindowList@@QEAAPEAVCWindowData@@PEAUHWND__@@@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18001EAE0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x180060050 (__security_check_cookie.c)
 *     ??$_Emplace_reallocate@AEBQEAVCWindowData@@@?$vector@PEAVCWindowData@@V?$allocator@PEAVCWindowData@@@std@@@std@@QEAAPEAPEAVCWindowData@@QEAPEAV2@AEBQEAV2@@Z @ 0x1800C184C (--$_Emplace_reallocate@AEBQEAVCWindowData@@@-$vector@PEAVCWindowData@@V-$allocator@PEAVCWindowDa.c)
 *     ?Activate@CLivePreview@@QEAAJXZ @ 0x1800C1F14 (-Activate@CLivePreview@@QEAAJXZ.c)
 *     ?_GetDesktopWorkArea@CLivePreview@@AEAA?AUtagRECT@@PEAVCWindowData@@@Z @ 0x1800C412C (-_GetDesktopWorkArea@CLivePreview@@AEAA-AUtagRECT@@PEAVCWindowData@@@Z.c)
 *     ?GetMDIOwner@CWindowData@@QEAAPEAV1@XZ @ 0x180103BFC (-GetMDIOwner@CWindowData@@QEAAPEAV1@XZ.c)
 */

__int64 __fastcall CLivePreview::Activate(
        __int64 a1,
        HWND *a2,
        unsigned int a3,
        HWND a4,
        int a5,
        int a6,
        struct tagRECT *a7)
{
  struct tagRECT *v7; // r14
  HWND *v10; // r15
  CDesktopManager *v11; // rax
  __int64 **v12; // r12
  __int64 *v13; // rcx
  __int64 *v14; // rdx
  __int64 v15; // rax
  unsigned int v16; // r13d
  struct tagRECT *v17; // rsi
  struct _RTL_CRITICAL_SECTION *v18; // rbx
  HWND v19; // r15
  __int64 v20; // r14
  unsigned int v21; // r8d
  __int64 v22; // rcx
  __int64 v23; // r9
  _BYTE *v24; // rdx
  unsigned int RecursionCount; // eax
  int v26; // ecx
  bool v27; // al
  HMONITOR v28; // r14
  __int64 v29; // rcx
  __int64 v30; // rdx
  unsigned int v31; // r9d
  __int64 v32; // r8
  __int64 v33; // rax
  __int64 v34; // rcx
  unsigned int v35; // r8d
  __int64 v36; // r9
  struct tagRECT *DesktopWorkArea; // rax
  struct tagRECT v38; // xmm0
  signed int LastError; // eax
  struct _RTL_CRITICAL_SECTION *WindowDataByHwnd; // [rsp+30h] [rbp-81h] BYREF
  struct tagRECT *v42; // [rsp+38h] [rbp-79h]
  unsigned int v43; // [rsp+40h] [rbp-71h]
  struct tagRECT v44; // [rsp+48h] [rbp-69h] BYREF
  struct tagRECT v45; // [rsp+58h] [rbp-59h] BYREF
  RECT rc1; // [rsp+68h] [rbp-49h] BYREF
  WINDOWPLACEMENT wndpl; // [rsp+78h] [rbp-39h] BYREF
  struct tagRECT Rect; // [rsp+A8h] [rbp-9h] BYREF

  v7 = a7;
  *(_QWORD *)&rc1.left = a2;
  v10 = a2;
  v43 = a3;
  *(_BYTE *)(a1 + 292) = 0;
  *(_BYTE *)(a1 + 291) = a5 == 4;
  *(_DWORD *)(a1 + 304) = a6;
  v11 = CDesktopManager::s_pDesktopManagerInstance;
  *(_WORD *)(a1 + 289) = 1;
  *(_DWORD *)(a1 + 568) = a5;
  v42 = a7;
  v12 = (__int64 **)(a1 + 528);
  *(_QWORD *)(a1 + 552) = CWindowList::FindWindowDataByHwnd(*((CWindowList **)v11 + 52), a4);
  v13 = *v12;
  v14 = *(__int64 **)(a1 + 536);
  if ( *v12 != v14 )
  {
    do
    {
      v15 = *v13++;
      *(_BYTE *)(v15 + 670) &= ~1u;
    }
    while ( v13 != v14 );
    v13 = *v12;
  }
  v16 = 0;
  *(_QWORD *)(a1 + 536) = v13;
  if ( a3 )
  {
    v17 = a7;
    do
    {
      WindowDataByHwnd = (struct _RTL_CRITICAL_SECTION *)CWindowList::FindWindowDataByHwnd(
                                                           *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance
                                                           + 52),
                                                           *v10);
      v18 = WindowDataByHwnd;
      if ( WindowDataByHwnd )
        goto LABEL_14;
      v19 = *v10;
      v20 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 52);
      WindowDataByHwnd = &CDesktopManager::s_csDwmInstance;
      EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
      v21 = *(_DWORD *)(v20 + 520);
      v22 = 0LL;
      if ( v21 )
      {
        v23 = *(_QWORD *)(v20 + 496);
        while ( *(HWND *)(*(_QWORD *)(v23 + 8 * v22) + 40LL) != v19 )
        {
          v22 = (unsigned int)(v22 + 1);
          if ( (unsigned int)v22 >= v21 )
            goto LABEL_13;
        }
        v18 = *(struct _RTL_CRITICAL_SECTION **)(v23 + 8 * v22);
      }
LABEL_13:
      CGuard<CDwmCS>::~CGuard<CDwmCS>(&WindowDataByHwnd);
      v10 = *(HWND **)&rc1.left;
      v7 = v42;
      WindowDataByHwnd = v18;
      if ( v18 )
      {
LABEL_14:
        if ( ((__int64)v18[16].LockSemaphore & 4) == 0 )
        {
          v24 = *(_BYTE **)(a1 + 536);
          if ( v24 == *(_BYTE **)(a1 + 544) )
          {
            std::vector<CWindowData *>::_Emplace_reallocate<CWindowData * const &>(a1 + 528, v24, &WindowDataByHwnd);
            v18 = WindowDataByHwnd;
          }
          else
          {
            *(_QWORD *)v24 = v18;
            *(_QWORD *)(a1 + 536) += 8LL;
          }
          BYTE6(v18[16].LockSemaphore) |= 1u;
        }
        if ( (v18[2].SpinCount & 0x2000000000000000LL) != 0
          && !v18[12].DebugInfo
          && !CWindowData::GetMDIOwner((CWindowData *)v18) )
        {
          wndpl.length = 44;
          memset(&wndpl.flags, 0, 40);
          SetLastError(0);
          if ( !GetWindowPlacement((HWND)v18[1].DebugInfo, &wndpl) )
          {
            LastError = GetLastError();
            if ( LastError > 0 )
              LastError = (unsigned __int16)LastError | 0x80070000;
            if ( LastError >= 0 )
              LastError = -2003304445;
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, LastError, 0x376u);
            return CLivePreview::Activate((CLivePreview *)a1);
          }
          if ( (wndpl.flags & 2) == 0 )
          {
            Rect = 0LL;
            AdjustWindowRectEx(&Rect, HIDWORD(v18[2].SpinCount), 0, (DWORD)v18[3].DebugInfo);
          }
        }
        if ( !*(_BYTE *)(a1 + 290) )
        {
          RecursionCount = v18[3].RecursionCount;
          v27 = 0;
          if ( RecursionCount <= 0xA )
          {
            v26 = 1282;
            if ( _bittest(&v26, RecursionCount) )
              v27 = 1;
          }
          *(_BYTE *)(a1 + 290) = v27;
        }
        if ( v7 && v17->right > v17->left && v17->bottom > v17->top )
        {
          if ( v18[3].RecursionCount == 1 )
          {
            v28 = MonitorFromWindow((HWND)v18[1].DebugInfo, 0);
            if ( v28 )
            {
              v29 = *(_QWORD *)(a1 + 560);
              rc1 = 0LL;
              v30 = 0LL;
              v31 = *(_DWORD *)(v29 + 40);
              if ( v31 )
              {
                v32 = *(_QWORD *)(v29 + 16);
                while ( *(HMONITOR *)(v32 + 24 * v30 + 16) != v28 )
                {
                  v30 = (unsigned int)(v30 + 1);
                  if ( (unsigned int)v30 >= v31 )
                    goto LABEL_42;
                }
                rc1 = *(RECT *)(v32 + 24 * v30);
              }
LABEL_42:
              if ( !EqualRect(&rc1, &v42[v16]) )
              {
                v33 = *(_QWORD *)(a1 + 560);
                v34 = 0LL;
                v35 = *(_DWORD *)(v33 + 40);
                if ( v35 )
                {
                  v36 = *(_QWORD *)(v33 + 16);
                  while ( *(HMONITOR *)(v36 + 24 * v34 + 16) != v28 )
                  {
                    v34 = (unsigned int)(v34 + 1);
                    if ( (unsigned int)v34 >= v35 )
                      goto LABEL_49;
                  }
                  *(struct tagRECT *)(v36 + 24 * v34) = *v17;
                }
              }
            }
LABEL_49:
            DesktopWorkArea = CLivePreview::_GetDesktopWorkArea((CLivePreview *)a1, &v44, (struct CWindowData *)v18);
            v7 = v42;
            v38 = *DesktopWorkArea;
          }
          else
          {
            v38 = *v17;
          }
        }
        else if ( v18[3].RecursionCount == 1 )
        {
          v38 = *CLivePreview::_GetDesktopWorkArea((CLivePreview *)a1, &v45, (struct CWindowData *)v18);
        }
        else
        {
          v38 = *(struct tagRECT *)&v18[1].LockCount;
        }
        *(struct tagRECT *)((char *)&v18[19].DebugInfo + 4) = v38;
      }
      ++v10;
      ++v16;
      ++v17;
      *(_QWORD *)&rc1.left = v10;
    }
    while ( v16 < v43 );
  }
  return CLivePreview::Activate((CLivePreview *)a1);
}
