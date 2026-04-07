/*
 * XREFs of ?RegisterSharedVirtualDesktopVisual@CWindowList@@UEAAJPEAUHWND__@@T_LARGE_INTEGER@@PEAX@Z @ 0x180105550
 * Callers:
 *     ?ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z @ 0x180021CF0 (-ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18001EAE0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?GetSyncedWindowDataByHwnd@CWindowList@@QEAAJPEAUHWND__@@PEAPEAVCWindowData@@@Z @ 0x180020CF0 (-GetSyncedWindowDataByHwnd@CWindowList@@QEAAJPEAUHWND__@@PEAPEAVCWindowData@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180028A00 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180035AB8 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?CreateFromSharedHandle@CVisual@@SAJPEAXPEAPEAV1@@Z @ 0x180037344 (-CreateFromSharedHandle@CVisual@@SAJPEAXPEAPEAV1@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0CDCompVirtualDesktopThumbnailData@@QEAA@XZ @ 0x1801015B4 (--0CDCompVirtualDesktopThumbnailData@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWindowList::RegisterSharedVirtualDesktopVisual(
        CWindowList *this,
        HWND a2,
        union _LARGE_INTEGER a3,
        void *a4)
{
  struct CVisual *v8; // r14
  int SyncedWindowDataByHwnd; // eax
  unsigned int v10; // edi
  struct CWindowData *v11; // r15
  struct CWindowData *v12; // rax
  CDCompVirtualDesktopThumbnailData *v13; // rax
  struct CWindowData *v14; // rsi
  int v15; // eax
  _QWORD *v16; // r10
  __int64 v17; // rax
  unsigned int v18; // edx
  int v19; // r9d
  unsigned int v20; // eax
  unsigned int v21; // eax
  unsigned int v22; // edx
  int v23; // r9d
  unsigned int v24; // eax
  int v25; // eax
  int v26; // eax
  unsigned int v28; // [rsp+20h] [rbp-30h]
  struct CVisual *v29; // [rsp+30h] [rbp-20h] BYREF
  struct CWindowData *v30; // [rsp+38h] [rbp-18h] BYREF
  struct _RTL_CRITICAL_SECTION *v31; // [rsp+40h] [rbp-10h] BYREF

  v31 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v8 = 0LL;
  v29 = 0LL;
  v30 = 0LL;
  SyncedWindowDataByHwnd = CWindowList::GetSyncedWindowDataByHwnd(this, a2, &v30);
  v10 = SyncedWindowDataByHwnd;
  if ( SyncedWindowDataByHwnd < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, SyncedWindowDataByHwnd, 0x1250u);
    goto LABEL_25;
  }
  v11 = v30;
  if ( !v30 )
  {
    v10 = -2147024809;
    goto LABEL_25;
  }
  v12 = (struct CWindowData *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                                WPF::g_pProcessHeap,
                                200LL);
  v30 = v12;
  if ( !v12 || (v13 = CDCompVirtualDesktopThumbnailData::CDCompVirtualDesktopThumbnailData(v12), (v14 = v13) == 0LL) )
  {
    v10 = -2147024882;
    v28 = 4699;
    goto LABEL_24;
  }
  *((union _LARGE_INTEGER *)v13 + 1) = a3;
  *((_QWORD *)v13 + 2) = v11;
  *((_QWORD *)v13 + 3) = 0LL;
  *((_WORD *)v13 + 16) = 0;
  *((_BYTE *)v13 + 34) = 1;
  *((_DWORD *)v13 + 28) = 2;
  v15 = CVisual::CreateFromSharedHandle(a4, &v29);
  v10 = v15;
  if ( v15 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v15, 0x1267u);
    v8 = v29;
    goto LABEL_25;
  }
  v8 = v29;
  *((_QWORD *)v14 + 12) = v29;
  v16 = (_QWORD *)((char *)this + 384);
  v30 = v14;
  v17 = *((unsigned int *)this + 102);
  v18 = v17 + 1;
  if ( (int)v17 + 1 < (unsigned int)v17 )
  {
    v19 = -2147024362;
    v10 = -2147024362;
    v20 = 181;
LABEL_17:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v19, v20);
    v28 = 4717;
LABEL_24:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v10, v28);
    goto LABEL_25;
  }
  if ( v18 > *((_DWORD *)this + 101) )
  {
    v25 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v16, 8u, 1, &v30);
    v10 = v25;
    if ( v25 < 0 )
    {
      v19 = v25;
      v20 = 192;
      goto LABEL_17;
    }
  }
  else
  {
    *(_QWORD *)(*v16 + 8 * v17) = v14;
    *((_DWORD *)this + 102) = v18;
  }
  v8 = 0LL;
  v30 = v14;
  v21 = *((_DWORD *)v11 + 140);
  v22 = v21 + 1;
  if ( v21 + 1 < v21 )
  {
    v23 = -2147024362;
    v10 = -2147024362;
    v24 = 181;
LABEL_22:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v23, v24);
    v28 = 4723;
    goto LABEL_24;
  }
  if ( v22 <= *((_DWORD *)v11 + 139) )
  {
    *(_QWORD *)(*((_QWORD *)v11 + 67) + 8LL * *((unsigned int *)v11 + 140)) = v14;
    *((_DWORD *)v11 + 140) = v22;
    v10 = 0;
    goto LABEL_25;
  }
  v26 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v11 + 536, 8u, 1, &v30);
  v10 = v26;
  if ( v26 < 0 )
  {
    v23 = v26;
    v24 = 192;
    goto LABEL_22;
  }
LABEL_25:
  CloseHandle(a4);
  if ( v8 )
    CBaseObject::Release(v8);
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v31);
  return v10;
}
