/*
 * XREFs of ?RegisterSharedThumbnailVisual@CWindowList@@UEAAJPEAUHWND__@@0HHAEBU_DWM_THUMBNAIL_PROPERTIES@@T_LARGE_INTEGER@@PEAX@Z @ 0x18001D100
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateU0p_EtwEventWriteTransfer @ 0x180003C20 (McTemplateU0p_EtwEventWriteTransfer.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?IsBaseThumbnailDestinationReachable@CWindowList@@AEAA_NPEAVCWindowData@@@Z @ 0x180011C94 (-IsBaseThumbnailDestinationReachable@CWindowList@@AEAA_NPEAVCWindowData@@@Z.c)
 *     ?UpdateProperties@CThumbnailData@@QEAAJPEBU_DWM_THUMBNAIL_PROPERTIES@@@Z @ 0x180018FF0 (-UpdateProperties@CThumbnailData@@QEAAJPEBU_DWM_THUMBNAIL_PROPERTIES@@@Z.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x18001DB80 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18001EAE0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?GetSyncedWindowDataByHwnd@CWindowList@@QEAAJPEAUHWND__@@PEAPEAVCWindowData@@@Z @ 0x180020CF0 (-GetSyncedWindowDataByHwnd@CWindowList@@QEAAJPEAUHWND__@@PEAPEAVCWindowData@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180028A00 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180034D80 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180035AB8 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?CreateFromSharedHandle@CVisual@@SAJPEAXPEAPEAV1@@Z @ 0x180037344 (-CreateFromSharedHandle@CVisual@@SAJPEAXPEAPEAV1@@Z.c)
 *     ?IsLogonDesktop@CDesktopManager@@SA_N_K@Z @ 0x180038E08 (-IsLogonDesktop@CDesktopManager@@SA_N_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWindowList::RegisterSharedThumbnailVisual(
        CWindowList *this,
        HWND a2,
        HWND a3,
        int a4,
        int a5,
        const struct _DWM_THUMBNAIL_PROPERTIES *a6,
        union _LARGE_INTEGER a7,
        void *a8)
{
  struct CVisual *v12; // r15
  int SyncedWindowDataByHwnd; // eax
  unsigned int v14; // ebx
  struct CWindowData *v15; // r13
  bool v16; // zf
  struct CWindowData *v17; // rsi
  char IsBaseThumbnailDestinationReachable; // al
  __int64 v19; // rax
  _QWORD *v20; // rdi
  int v21; // eax
  __int64 v22; // rcx
  _QWORD *v23; // r12
  unsigned int v24; // eax
  unsigned int v25; // edx
  unsigned int v26; // eax
  unsigned int v27; // edx
  unsigned int v28; // eax
  unsigned int v29; // edx
  __int64 v30; // rbx
  struct CVisual *v31; // rax
  CVisual *v32; // rcx
  int v34; // eax
  int v35; // eax
  int v36; // eax
  int v37; // r9d
  int v38; // r9d
  unsigned int v39; // eax
  int v40; // r9d
  unsigned int v41; // eax
  int v42; // r9d
  unsigned int v43; // eax
  __int64 v44; // rbx
  struct CVisual *v45; // rax
  unsigned int v46; // [rsp+20h] [rbp-30h]
  struct CWindowData *v47; // [rsp+30h] [rbp-20h] BYREF
  struct CVisual *v48; // [rsp+38h] [rbp-18h] BYREF
  struct CWindowData *v49; // [rsp+40h] [rbp-10h] BYREF
  struct _RTL_CRITICAL_SECTION *v50; // [rsp+48h] [rbp-8h] BYREF

  v50 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v12 = 0LL;
  v48 = 0LL;
  v49 = 0LL;
  v47 = 0LL;
  SyncedWindowDataByHwnd = CWindowList::GetSyncedWindowDataByHwnd(this, a2, &v49);
  v14 = SyncedWindowDataByHwnd;
  if ( SyncedWindowDataByHwnd < 0 )
  {
    v46 = 4531;
    goto LABEL_39;
  }
  SyncedWindowDataByHwnd = CWindowList::GetSyncedWindowDataByHwnd(this, a3, &v47);
  v14 = SyncedWindowDataByHwnd;
  if ( SyncedWindowDataByHwnd < 0 )
  {
    v46 = 4532;
    goto LABEL_39;
  }
  v15 = v49;
  if ( !v49 )
    goto LABEL_45;
  v16 = a4 == 0;
  v17 = v47;
  if ( v16 )
  {
    if ( v47 )
      goto LABEL_6;
LABEL_45:
    v14 = -2147024809;
    goto LABEL_46;
  }
  if ( v47 )
    goto LABEL_45;
LABEL_6:
  *((_QWORD *)this + 52) = v49;
  if ( v17 )
  {
    IsBaseThumbnailDestinationReachable = CWindowList::IsBaseThumbnailDestinationReachable(
                                            (struct CWindowData **)this,
                                            v17);
    *((_QWORD *)this + 52) = 0LL;
    if ( IsBaseThumbnailDestinationReachable )
    {
      v14 = -2147024809;
      goto LABEL_29;
    }
  }
  else
  {
    *((_QWORD *)this + 52) = 0LL;
  }
  v19 = (*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
          WPF::g_pProcessHeap,
          120LL);
  v20 = (_QWORD *)v19;
  if ( !v19 )
  {
    v14 = -2147024882;
    v46 = 4562;
    goto LABEL_41;
  }
  *(_DWORD *)(v19 + 32) = 0;
  *(_OWORD *)(v19 + 36) = 0LL;
  *(_OWORD *)(v19 + 52) = 0LL;
  *(_QWORD *)(v19 + 68) = 0LL;
  *(_DWORD *)(v19 + 76) = 0;
  *(_BYTE *)(v19 + 80) = 0;
  *(_QWORD *)(v19 + 88) = 0LL;
  *(_QWORD *)v19 = &CDCompThumbnailData::`vftable';
  *(_QWORD *)(v19 + 96) = 0LL;
  *(_QWORD *)(v19 + 104) = 0LL;
  *(union _LARGE_INTEGER *)(v19 + 8) = a7;
  *(_QWORD *)(v19 + 16) = v15;
  *(_QWORD *)(v19 + 24) = v17;
  *(_BYTE *)(v19 + 32) = 0;
  *(_BYTE *)(v19 + 33) = a5 != 0;
  *(_BYTE *)(v19 + 34) = 1;
  *(_DWORD *)(v19 + 112) = a4 != 0;
  v21 = CVisual::CreateFromSharedHandle(a8, &v48);
  v14 = v21;
  if ( v21 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v21, 0x11DDu);
    v12 = v48;
    goto LABEL_46;
  }
  if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    McTemplateU0p_EtwEventWriteTransfer(v22, (int)&CommitChannel_WindowList_Thumbnail, (__int64)a2);
  v23 = v20 + 12;
  v12 = v48;
  v20[12] = v48;
  v49 = (struct CWindowData *)v20;
  v24 = *((_DWORD *)this + 102);
  v25 = v24 + 1;
  if ( v24 + 1 < v24 )
  {
    v38 = -2147024362;
    v14 = -2147024362;
    v39 = 181;
    goto LABEL_52;
  }
  if ( v25 <= *((_DWORD *)this + 101) )
  {
    *(_QWORD *)(*((_QWORD *)this + 48) + 8LL * v24) = v20;
    *((_DWORD *)this + 102) = v25;
    goto LABEL_15;
  }
  v34 = DynArrayImpl<0>::AddMultipleAndSet((char *)this + 384, 8LL, 1LL, &v49);
  v14 = v34;
  if ( v34 < 0 )
  {
    v38 = v34;
    v39 = 192;
LABEL_52:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v38, v39);
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v14, 0x11E4u);
LABEL_46:
    if ( v12 )
      CBaseObject::Release(v12);
    goto LABEL_29;
  }
LABEL_15:
  v49 = (struct CWindowData *)v20;
  v26 = *((_DWORD *)v15 + 140);
  v27 = v26 + 1;
  if ( v26 + 1 < v26 )
  {
    v40 = -2147024362;
    v14 = -2147024362;
    v41 = 181;
    goto LABEL_54;
  }
  if ( v27 <= *((_DWORD *)v15 + 139) )
  {
    *(_QWORD *)(*((_QWORD *)v15 + 67) + 8LL * v26) = v20;
    *((_DWORD *)v15 + 140) = v27;
    goto LABEL_18;
  }
  v35 = DynArrayImpl<0>::AddMultipleAndSet((char *)v15 + 536, 8LL, 1LL, &v49);
  v14 = v35;
  if ( v35 < 0 )
  {
    v40 = v35;
    v41 = 192;
LABEL_54:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v40, v41);
    v46 = 4588;
    goto LABEL_41;
  }
LABEL_18:
  if ( v17 )
  {
    v49 = (struct CWindowData *)v20;
    v28 = *((_DWORD *)v17 + 148);
    v29 = v28 + 1;
    if ( v28 + 1 < v28 )
    {
      v42 = -2147024362;
      v14 = -2147024362;
      v43 = 181;
    }
    else
    {
      if ( v29 <= *((_DWORD *)v17 + 147) )
      {
        *(_QWORD *)(*((_QWORD *)v17 + 71) + 8LL * v28) = v20;
        *((_DWORD *)v17 + 148) = v29;
        goto LABEL_22;
      }
      v36 = DynArrayImpl<0>::AddMultipleAndSet((char *)v17 + 568, 8LL, 1LL, &v49);
      v14 = v36;
      if ( v36 >= 0 )
        goto LABEL_22;
      v42 = v36;
      v43 = 192;
    }
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v42, v43);
    v46 = 4591;
LABEL_41:
    v37 = v14;
    goto LABEL_42;
  }
LABEL_22:
  if ( a4 )
  {
    SyncedWindowDataByHwnd = CThumbnailData::UpdateProperties((CThumbnailData *)v20, a6);
    v14 = SyncedWindowDataByHwnd;
    if ( SyncedWindowDataByHwnd < 0 )
    {
      v46 = 4603;
      goto LABEL_39;
    }
    SyncedWindowDataByHwnd = (*(__int64 (__fastcall **)(_QWORD *))(*v20 + 8LL))(v20);
    v14 = SyncedWindowDataByHwnd;
    if ( SyncedWindowDataByHwnd < 0 )
    {
      v46 = 4604;
      goto LABEL_39;
    }
    v44 = *v23;
    v45 = (struct CVisual *)(*(__int64 (__fastcall **)(_QWORD *))(*v20 + 16LL))(v20);
    SyncedWindowDataByHwnd = VisualCollection::InsertRelative((VisualCollection *)(v44 + 32), v45, 0LL, 0, 1);
    v14 = SyncedWindowDataByHwnd;
    if ( SyncedWindowDataByHwnd < 0 )
    {
      v46 = 4605;
      goto LABEL_39;
    }
  }
  else
  {
    SyncedWindowDataByHwnd = (*(__int64 (__fastcall **)(_QWORD *))(*v20 + 8LL))(v20);
    v14 = SyncedWindowDataByHwnd;
    if ( SyncedWindowDataByHwnd < 0 )
    {
      v46 = 4609;
      goto LABEL_39;
    }
    SyncedWindowDataByHwnd = CThumbnailData::UpdateProperties((CThumbnailData *)v20, a6);
    v14 = SyncedWindowDataByHwnd;
    if ( SyncedWindowDataByHwnd < 0 )
    {
      v46 = 4610;
      goto LABEL_39;
    }
    v30 = *v23;
    v31 = (struct CVisual *)(*(__int64 (__fastcall **)(_QWORD *))(*v20 + 16LL))(v20);
    SyncedWindowDataByHwnd = VisualCollection::InsertRelative((VisualCollection *)(v30 + 32), v31, 0LL, 0, 1);
    v14 = SyncedWindowDataByHwnd;
    if ( SyncedWindowDataByHwnd < 0 )
    {
      v46 = 4611;
      goto LABEL_39;
    }
    if ( CDesktopManager::IsLogonDesktop(*((_QWORD *)v15 + 17)) )
    {
      SyncedWindowDataByHwnd = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v23 + 64LL))(*v23);
      v14 = SyncedWindowDataByHwnd;
      if ( SyncedWindowDataByHwnd < 0 )
      {
        v46 = 4617;
LABEL_39:
        v37 = SyncedWindowDataByHwnd;
LABEL_42:
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v37, v46);
        goto LABEL_29;
      }
    }
  }
  v32 = (CVisual *)*((_QWORD *)v15 + 55);
  if ( v32 )
    CVisual::SetDirtyFlags(v32, 0x8000000u);
LABEL_29:
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v50);
  return v14;
}
