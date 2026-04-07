/*
 * XREFs of ?RegisterSharedThumbnailVisual@CWindowList@@UEAAJPEAUHWND__@@0HHAEBU_DWM_THUMBNAIL_PROPERTIES@@T_LARGE_INTEGER@@PEAX@Z @ 0x180008B60
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateU0p_EtwEventWriteTransfer @ 0x1800085F0 (McTemplateU0p_EtwEventWriteTransfer.c)
 *     ?IsBaseThumbnailDestinationReachable@CWindowList@@AEAA_NPEAVCWindowData@@@Z @ 0x1800086BC (-IsBaseThumbnailDestinationReachable@CWindowList@@AEAA_NPEAVCWindowData@@@Z.c)
 *     ?UpdateProperties@CThumbnailData@@QEAAJPEBU_DWM_THUMBNAIL_PROPERTIES@@@Z @ 0x180009004 (-UpdateProperties@CThumbnailData@@QEAAJPEBU_DWM_THUMBNAIL_PROPERTIES@@@Z.c)
 *     ??$CreateProxyFromSharedHandle@VCVisualTargetProxy@@@CCompositor@@IEAAJPEAXPEAPEAVCVisualTargetProxy@@@Z @ 0x18001F324 (--$CreateProxyFromSharedHandle@VCVisualTargetProxy@@@CCompositor@@IEAAJPEAXPEAPEAVCVisualTargetP.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18001F59C (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180022C70 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180025534 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?GetSyncedWindowDataByHwnd@CWindowList@@QEAAJPEAUHWND__@@PEAPEAVCWindowData@@@Z @ 0x1800302A8 (-GetSyncedWindowDataByHwnd@CWindowList@@QEAAJPEAUHWND__@@PEAPEAVCWindowData@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180035400 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?PropagateDirtyChildren@CVisual@@QEAAXXZ @ 0x180037860 (-PropagateDirtyChildren@CVisual@@QEAAXXZ.c)
 *     ?Create@CVisual@@SAJPEAPEAV1@@Z @ 0x180037EFC (-Create@CVisual@@SAJPEAPEAV1@@Z.c)
 *     ?IsLogonDesktop@CDesktopManager@@SA_N_K@Z @ 0x18003918C (-IsLogonDesktop@CDesktopManager@@SA_N_K@Z.c)
 *     ?SetRoot@CVisualTargetProxy@@QEAAJPEAVCVisualProxy@@@Z @ 0x18005633C (-SetRoot@CVisualTargetProxy@@QEAAJPEAVCVisualProxy@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18006610C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
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
  CBaseObject *v12; // r15
  struct CVisual *v13; // r13
  int SyncedWindowDataByHwnd; // eax
  unsigned int v15; // ebx
  struct CWindowData *v16; // r12
  bool v17; // zf
  struct CWindowData *v18; // r14
  char IsBaseThumbnailDestinationReachable; // al
  __int64 v20; // rax
  _QWORD *v21; // rdi
  int v22; // eax
  int v23; // eax
  int v24; // eax
  __int64 v25; // rcx
  unsigned int v26; // eax
  unsigned int v27; // edx
  unsigned int v28; // eax
  unsigned int v29; // edx
  unsigned int v30; // eax
  unsigned int v31; // edx
  struct CWindowData *v32; // rsi
  __int64 v33; // rbx
  struct CVisual *v34; // rax
  CVisual *v35; // rcx
  int v36; // eax
  int v38; // eax
  int v39; // esi
  int v40; // eax
  int v41; // esi
  int v42; // eax
  int v43; // r9d
  int v44; // r9d
  unsigned int v45; // eax
  int v46; // r9d
  unsigned int v47; // eax
  int v48; // r9d
  unsigned int v49; // eax
  __int64 v50; // rbx
  struct CVisual *v51; // rax
  bool v52; // [rsp+20h] [rbp-40h]
  unsigned int v53; // [rsp+20h] [rbp-40h]
  CVisualTargetProxy *v54; // [rsp+30h] [rbp-30h] BYREF
  struct CWindowData *v55; // [rsp+38h] [rbp-28h] BYREF
  struct CVisual *v56; // [rsp+40h] [rbp-20h] BYREF
  struct CWindowData *v57; // [rsp+48h] [rbp-18h] BYREF
  struct _RTL_CRITICAL_SECTION *v58; // [rsp+50h] [rbp-10h] BYREF

  v58 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v12 = 0LL;
  v54 = 0LL;
  v13 = 0LL;
  v56 = 0LL;
  v57 = 0LL;
  v55 = 0LL;
  SyncedWindowDataByHwnd = CWindowList::GetSyncedWindowDataByHwnd(this, a2, &v57);
  v15 = SyncedWindowDataByHwnd;
  if ( SyncedWindowDataByHwnd < 0 )
  {
    v53 = 4662;
    goto LABEL_42;
  }
  SyncedWindowDataByHwnd = CWindowList::GetSyncedWindowDataByHwnd(this, a3, &v55);
  v15 = SyncedWindowDataByHwnd;
  if ( SyncedWindowDataByHwnd < 0 )
  {
    v53 = 4663;
    goto LABEL_42;
  }
  v16 = v57;
  if ( !v57 )
    goto LABEL_48;
  v17 = a4 == 0;
  v18 = v55;
  if ( v17 )
  {
    if ( v55 )
      goto LABEL_6;
LABEL_48:
    v15 = -2147024809;
LABEL_49:
    if ( v12 )
      CBaseObject::Release(v12);
    if ( v13 )
      CBaseObject::Release(v13);
    goto LABEL_32;
  }
  if ( v55 )
    goto LABEL_48;
LABEL_6:
  *((_QWORD *)this + 52) = v57;
  if ( v18 )
  {
    IsBaseThumbnailDestinationReachable = CWindowList::IsBaseThumbnailDestinationReachable(
                                            (struct CWindowData **)this,
                                            v18);
    *((_QWORD *)this + 52) = 0LL;
    if ( IsBaseThumbnailDestinationReachable )
    {
      v15 = -2147024809;
      goto LABEL_32;
    }
  }
  else
  {
    *((_QWORD *)this + 52) = 0LL;
  }
  v20 = (*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
          WPF::g_pProcessHeap,
          128LL);
  v21 = (_QWORD *)v20;
  if ( !v20 )
  {
    v15 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x1255u, 0LL);
    goto LABEL_32;
  }
  *(_DWORD *)(v20 + 32) = 0;
  *(_OWORD *)(v20 + 36) = 0LL;
  *(_OWORD *)(v20 + 52) = 0LL;
  *(_QWORD *)(v20 + 68) = 0LL;
  *(_DWORD *)(v20 + 76) = 0;
  *(_BYTE *)(v20 + 80) = 0;
  *(_QWORD *)(v20 + 88) = 0LL;
  *(_QWORD *)v20 = &CDCompThumbnailData::`vftable';
  *(_QWORD *)(v20 + 96) = 0LL;
  *(_QWORD *)(v20 + 104) = 0LL;
  *(_QWORD *)(v20 + 112) = 0LL;
  *(union _LARGE_INTEGER *)(v20 + 8) = a7;
  *(_QWORD *)(v20 + 16) = v16;
  *(_QWORD *)(v20 + 24) = v18;
  *(_BYTE *)(v20 + 32) = 0;
  *(_BYTE *)(v20 + 33) = a5 != 0;
  *(_BYTE *)(v20 + 34) = 1;
  *(_DWORD *)(v20 + 120) = a4 != 0;
  v22 = CCompositor::CreateProxyFromSharedHandle<CVisualTargetProxy>(
          *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 6),
          a8,
          &v54);
  v15 = v22;
  if ( v22 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v22, 0x1260u, 0LL);
    v12 = v54;
    goto LABEL_49;
  }
  v23 = CVisual::Create(&v56);
  v15 = v23;
  if ( v23 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v23, 0x1261u, 0LL);
    v12 = v54;
    v13 = v56;
    goto LABEL_49;
  }
  v13 = v56;
  v12 = v54;
  v24 = CVisualTargetProxy::SetRoot(v54, *((struct CVisualProxy **)v56 + 2));
  v15 = v24;
  if ( v24 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v24, 0x1262u, 0LL);
    goto LABEL_49;
  }
  if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    McTemplateU0p_EtwEventWriteTransfer(v25, (int)"-#", (__int64)a2);
  v21[12] = v12;
  v57 = (struct CWindowData *)(v21 + 13);
  v21[13] = v13;
  v56 = (struct CVisual *)v21;
  v26 = *((_DWORD *)this + 102);
  v27 = v26 + 1;
  if ( v26 + 1 < v26 )
  {
    v39 = -2147024362;
    v15 = -2147024362;
    v46 = -2147024362;
    v47 = 181;
    goto LABEL_58;
  }
  if ( v27 <= *((_DWORD *)this + 101) )
  {
    *(_QWORD *)(*((_QWORD *)this + 48) + 8LL * v26) = v21;
    *((_DWORD *)this + 102) = v27;
    goto LABEL_17;
  }
  v38 = DynArrayImpl<0>::AddMultipleAndSet((char *)this + 384, 8LL, 1LL, &v56);
  v39 = v38;
  v15 = v38;
  if ( v38 < 0 )
  {
    v46 = v38;
    v47 = 192;
LABEL_58:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v46, v47, 0LL);
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v39, 0x126Au, 0LL);
    goto LABEL_49;
  }
LABEL_17:
  v56 = (struct CVisual *)v21;
  v28 = *((_DWORD *)v16 + 140);
  v29 = v28 + 1;
  if ( v28 + 1 < v28 )
  {
    v41 = -2147024362;
    v15 = -2147024362;
    v44 = -2147024362;
    v45 = 181;
    goto LABEL_43;
  }
  if ( v29 <= *((_DWORD *)v16 + 139) )
  {
    *(_QWORD *)(*((_QWORD *)v16 + 67) + 8LL * v28) = v21;
    *((_DWORD *)v16 + 140) = v29;
    goto LABEL_20;
  }
  v40 = DynArrayImpl<0>::AddMultipleAndSet((char *)v16 + 536, 8LL, 1LL, &v56);
  v41 = v40;
  v15 = v40;
  if ( v40 < 0 )
  {
    v44 = v40;
    v45 = 192;
LABEL_43:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v44, v45, 0LL);
    v53 = 4723;
    goto LABEL_44;
  }
LABEL_20:
  if ( v18 )
  {
    v56 = (struct CVisual *)v21;
    v30 = *((_DWORD *)v18 + 148);
    v31 = v30 + 1;
    if ( v30 + 1 < v30 )
    {
      v41 = -2147024362;
      v15 = -2147024362;
      v48 = -2147024362;
      v49 = 181;
    }
    else
    {
      if ( v31 <= *((_DWORD *)v18 + 147) )
      {
        *(_QWORD *)(*((_QWORD *)v18 + 71) + 8LL * v30) = v21;
        *((_DWORD *)v18 + 148) = v31;
        goto LABEL_24;
      }
      v42 = DynArrayImpl<0>::AddMultipleAndSet((char *)v18 + 568, 8LL, 1LL, &v56);
      v41 = v42;
      v15 = v42;
      if ( v42 >= 0 )
        goto LABEL_24;
      v48 = v42;
      v49 = 192;
    }
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v48, v49, 0LL);
    v53 = 4726;
LABEL_44:
    v43 = v41;
    goto LABEL_45;
  }
LABEL_24:
  if ( a4 )
  {
    SyncedWindowDataByHwnd = CThumbnailData::UpdateProperties((CThumbnailData *)v21, a6);
    v15 = SyncedWindowDataByHwnd;
    if ( SyncedWindowDataByHwnd < 0 )
    {
      v53 = 4738;
      goto LABEL_42;
    }
    SyncedWindowDataByHwnd = (*(__int64 (__fastcall **)(_QWORD *))(*v21 + 8LL))(v21);
    v15 = SyncedWindowDataByHwnd;
    if ( SyncedWindowDataByHwnd < 0 )
    {
      v53 = 4739;
      goto LABEL_42;
    }
    v50 = *(_QWORD *)v57;
    v51 = (struct CVisual *)(*(__int64 (__fastcall **)(_QWORD *))(*v21 + 16LL))(v21);
    SyncedWindowDataByHwnd = VisualCollection::InsertRelative((VisualCollection *)(v50 + 32), v51, 0LL, 0, v52);
    v15 = SyncedWindowDataByHwnd;
    if ( SyncedWindowDataByHwnd < 0 )
    {
      v53 = 4740;
      goto LABEL_42;
    }
  }
  else
  {
    SyncedWindowDataByHwnd = (*(__int64 (__fastcall **)(_QWORD *))(*v21 + 8LL))(v21);
    v15 = SyncedWindowDataByHwnd;
    if ( SyncedWindowDataByHwnd < 0 )
    {
      v53 = 4744;
      goto LABEL_42;
    }
    SyncedWindowDataByHwnd = CThumbnailData::UpdateProperties((CThumbnailData *)v21, a6);
    v15 = SyncedWindowDataByHwnd;
    if ( SyncedWindowDataByHwnd < 0 )
    {
      v53 = 4745;
      goto LABEL_42;
    }
    v32 = v57;
    v33 = *(_QWORD *)v57;
    v34 = (struct CVisual *)(*(__int64 (__fastcall **)(_QWORD *))(*v21 + 16LL))(v21);
    SyncedWindowDataByHwnd = VisualCollection::InsertRelative((VisualCollection *)(v33 + 32), v34, 0LL, 0, v52);
    v15 = SyncedWindowDataByHwnd;
    if ( SyncedWindowDataByHwnd < 0 )
    {
      v53 = 4746;
      goto LABEL_42;
    }
    if ( CDesktopManager::IsLogonDesktop(*((_QWORD *)v16 + 17)) )
    {
      SyncedWindowDataByHwnd = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)v32 + 64LL))(*(_QWORD *)v32);
      v15 = SyncedWindowDataByHwnd;
      if ( SyncedWindowDataByHwnd < 0 )
      {
        v53 = 4752;
LABEL_42:
        v43 = SyncedWindowDataByHwnd;
LABEL_45:
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v43, v53, 0LL);
        goto LABEL_32;
      }
    }
  }
  v35 = (CVisual *)*((_QWORD *)v16 + 55);
  if ( v35 )
  {
    v36 = *((_DWORD *)v35 + 22);
    if ( (v36 & 0x8000000) == 0 )
    {
      *((_DWORD *)v35 + 22) = v36 | 0x8000000;
      CVisual::PropagateDirtyChildren(v35);
    }
  }
LABEL_32:
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v58);
  return v15;
}
