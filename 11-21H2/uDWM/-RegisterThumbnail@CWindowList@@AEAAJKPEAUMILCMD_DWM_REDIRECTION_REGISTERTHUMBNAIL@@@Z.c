/*
 * XREFs of ?RegisterThumbnail@CWindowList@@AEAAJKPEAUMILCMD_DWM_REDIRECTION_REGISTERTHUMBNAIL@@@Z @ 0x180105810
 * Callers:
 *     ?ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z @ 0x18000A3A0 (-ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?IsBaseThumbnailDestinationReachable@CWindowList@@AEAA_NPEAVCWindowData@@@Z @ 0x180011C94 (-IsBaseThumbnailDestinationReachable@CWindowList@@AEAA_NPEAVCWindowData@@@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18001EAE0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?GetSyncedWindowDataByHwnd@CWindowList@@QEAAJPEAUHWND__@@PEAPEAVCWindowData@@@Z @ 0x180020CF0 (-GetSyncedWindowDataByHwnd@CWindowList@@QEAAJPEAUHWND__@@PEAPEAVCWindowData@@@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180035AB8 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 *     ?OnThumbnailAdded@CTopLevelWindow@@QEAAJPEAVCVisual@@@Z @ 0x1800E5820 (-OnThumbnailAdded@CTopLevelWindow@@QEAAJPEAVCVisual@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWindowList::RegisterThumbnail(
        CWindowList *this,
        int a2,
        struct MILCMD_DWM_REDIRECTION_REGISTERTHUMBNAIL *a3)
{
  int SyncedWindowDataByHwnd; // eax
  unsigned int v7; // ebx
  int v8; // r9d
  struct CWindowData *v9; // rdi
  struct CWindowData *v10; // r15
  char IsBaseThumbnailDestinationReachable; // al
  __int64 v12; // rax
  unsigned int v13; // eax
  unsigned int v14; // r8d
  int v15; // r9d
  unsigned int v16; // eax
  unsigned int v17; // eax
  unsigned int v18; // r8d
  int v19; // r9d
  unsigned int v20; // eax
  int v21; // eax
  unsigned int v22; // eax
  unsigned int v23; // r8d
  int v24; // r9d
  unsigned int v25; // eax
  int v26; // eax
  int v27; // eax
  unsigned int v29; // [rsp+20h] [rbp-20h]
  struct CWindowData *v30; // [rsp+30h] [rbp-10h] BYREF
  struct _RTL_CRITICAL_SECTION *v31; // [rsp+38h] [rbp-8h] BYREF
  DWORD dwProcessId; // [rsp+90h] [rbp+50h] BYREF
  struct CWindowData *v33; // [rsp+98h] [rbp+58h] BYREF

  v31 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v33 = 0LL;
  v30 = 0LL;
  SyncedWindowDataByHwnd = CWindowList::GetSyncedWindowDataByHwnd(this, *(HWND *)((char *)a3 + 12), &v33);
  v7 = SyncedWindowDataByHwnd;
  if ( SyncedWindowDataByHwnd >= 0 )
  {
    SyncedWindowDataByHwnd = CWindowList::GetSyncedWindowDataByHwnd(this, *(HWND *)((char *)a3 + 20), &v30);
    v7 = SyncedWindowDataByHwnd;
    if ( SyncedWindowDataByHwnd < 0 )
    {
      v29 = 4435;
      goto LABEL_3;
    }
    dwProcessId = 0;
    v9 = v33;
    if ( !v33
      || !GetWindowThreadProcessId(*((HWND *)v33 + 5), &dwProcessId)
      || (v10 = v30) == 0LL
      || a2 != dwProcessId
      || *((_DWORD *)a3 + 7) && a2 != GetCurrentProcessId()
      || (*((_QWORD *)this + 52) = v9,
          IsBaseThumbnailDestinationReachable = CWindowList::IsBaseThumbnailDestinationReachable(
                                                  (struct CWindowData **)this,
                                                  v10),
          *((_QWORD *)this + 52) = 0LL,
          IsBaseThumbnailDestinationReachable) )
    {
      v7 = -2147024809;
      goto LABEL_44;
    }
    v12 = (*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
            WPF::g_pProcessHeap,
            96LL);
    if ( !v12 )
    {
      v33 = 0LL;
      v7 = -2147024882;
      v29 = 4472;
      goto LABEL_42;
    }
    *(_QWORD *)v12 = &CThumbnailData::`vftable';
    *(_QWORD *)(v12 + 8) = 0LL;
    *(_QWORD *)(v12 + 16) = 0LL;
    *(_QWORD *)(v12 + 24) = 0LL;
    *(_DWORD *)(v12 + 32) = 0;
    *(_OWORD *)(v12 + 36) = 0LL;
    *(_OWORD *)(v12 + 52) = 0LL;
    *(_QWORD *)(v12 + 68) = 0LL;
    *(_DWORD *)(v12 + 76) = 0;
    *(_BYTE *)(v12 + 80) = 0;
    *(_QWORD *)(v12 + 88) = 0LL;
    v33 = (struct CWindowData *)v12;
    *(_QWORD *)(v12 + 8) = *(_QWORD *)((char *)a3 + 4);
    *((_QWORD *)v33 + 2) = v9;
    *((_QWORD *)v33 + 3) = v10;
    *((_BYTE *)v33 + 32) = *((_DWORD *)a3 + 7) != 0;
    *((_BYTE *)v33 + 33) = *((_DWORD *)a3 + 8) != 0;
    *((_BYTE *)v33 + 34) = 0;
    v13 = *((_DWORD *)this + 102);
    v14 = v13 + 1;
    if ( v13 + 1 < v13 )
    {
      v15 = -2147024362;
      v7 = -2147024362;
      v16 = 181;
LABEL_23:
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v15, v16);
      v29 = 4481;
LABEL_42:
      v8 = v7;
      goto LABEL_4;
    }
    if ( v14 > *((_DWORD *)this + 101) )
    {
      v21 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 384, 8u, 1, &v33);
      v7 = v21;
      if ( v21 < 0 )
      {
        v15 = v21;
        v16 = 192;
        goto LABEL_23;
      }
    }
    else
    {
      *(_QWORD *)(*((_QWORD *)this + 48) + 8LL * *((unsigned int *)this + 102)) = v33;
      *((_DWORD *)this + 102) = v14;
    }
    v17 = *((_DWORD *)v9 + 140);
    v18 = v17 + 1;
    if ( v17 + 1 < v17 )
    {
      v19 = -2147024362;
      v7 = -2147024362;
      v20 = 181;
LABEL_30:
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v19, v20);
      v29 = 4488;
      goto LABEL_42;
    }
    if ( v18 > *((_DWORD *)v9 + 139) )
    {
      v26 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v9 + 536, 8u, 1, &v33);
      v7 = v26;
      if ( v26 < 0 )
      {
        v19 = v26;
        v20 = 192;
        goto LABEL_30;
      }
    }
    else
    {
      *(_QWORD *)(*((_QWORD *)v9 + 67) + 8LL * *((unsigned int *)v9 + 140)) = v33;
      *((_DWORD *)v9 + 140) = v18;
    }
    v22 = *((_DWORD *)v10 + 148);
    v23 = v22 + 1;
    if ( v22 + 1 < v22 )
    {
      v24 = -2147024362;
      v7 = -2147024362;
      v25 = 181;
LABEL_38:
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v24, v25);
      v29 = 4489;
      goto LABEL_42;
    }
    if ( v23 > *((_DWORD *)v10 + 147) )
    {
      v27 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v10 + 568, 8u, 1, &v33);
      v7 = v27;
      if ( v27 < 0 )
      {
        v24 = v27;
        v25 = 192;
        goto LABEL_38;
      }
    }
    else
    {
      *(_QWORD *)(*((_QWORD *)v10 + 71) + 8LL * *((unsigned int *)v10 + 148)) = v33;
      *((_DWORD *)v10 + 148) = v23;
      v7 = 0;
    }
    if ( !*((_QWORD *)v9 + 55) )
      goto LABEL_44;
    SyncedWindowDataByHwnd = (*(__int64 (__fastcall **)(struct CWindowData *))(*(_QWORD *)v33 + 8LL))(v33);
    v7 = SyncedWindowDataByHwnd;
    if ( SyncedWindowDataByHwnd >= 0 )
    {
      SyncedWindowDataByHwnd = CTopLevelWindow::OnThumbnailAdded(
                                 *((CTopLevelWindow **)v9 + 55),
                                 *((struct CVisual **)v33 + 11));
      v7 = SyncedWindowDataByHwnd;
      if ( SyncedWindowDataByHwnd >= 0 )
        goto LABEL_44;
      v29 = 4499;
    }
    else
    {
      v29 = 4497;
    }
    goto LABEL_3;
  }
  v29 = 4434;
LABEL_3:
  v8 = SyncedWindowDataByHwnd;
LABEL_4:
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v8, v29);
LABEL_44:
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v31);
  return v7;
}
