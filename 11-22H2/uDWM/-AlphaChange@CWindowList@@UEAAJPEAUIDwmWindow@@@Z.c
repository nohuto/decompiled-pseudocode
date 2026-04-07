/*
 * XREFs of ?AlphaChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18001D140
 * Callers:
 *     <none>
 * Callees:
 *     ?OnSourceConstantAlphaUpdated@CSecondaryWindowRepresentation@@QEAAJXZ @ 0x18001D0AC (-OnSourceConstantAlphaUpdated@CSecondaryWindowRepresentation@@QEAAJXZ.c)
 *     ?OnAlphaChange@CLivePreview@@QEAAXPEBVCWindowData@@E@Z @ 0x18001D2E8 (-OnAlphaChange@CLivePreview@@QEAAXPEBVCWindowData@@E@Z.c)
 *     ?OnSourceConstantAlphaUpdated@CTopLevelWindow@@QEAAXXZ @ 0x18001D34C (-OnSourceConstantAlphaUpdated@CTopLevelWindow@@QEAAXXZ.c)
 *     ?UpdateRemoteAppRenderTargetOpacity@CTopLevelWindow@@QEAAJXZ @ 0x180030280 (-UpdateRemoteAppRenderTargetOpacity@CTopLevelWindow@@QEAAJXZ.c)
 *     ??0CWindowData@@QEAA@XZ @ 0x1800308C8 (--0CWindowData@@QEAA@XZ.c)
 *     ?SyncWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@PEAVCWindowData@@@Z @ 0x1800338F0 (-SyncWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@PEAVCWindowData@@@Z.c)
 *     ?PropagateDirtyChildren@CVisual@@QEAAXXZ @ 0x180037860 (-PropagateDirtyChildren@CVisual@@QEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18006610C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?OnAlphaUpdated@CWindowIconic@@QEAAJ_N@Z @ 0x180106FE0 (-OnAlphaUpdated@CWindowIconic@@QEAAJ_N@Z.c)
 *     ?OnColorizationUpdated@CWindowIconic@@QEAAJ_N@Z @ 0x180107060 (-OnColorizationUpdated@CWindowIconic@@QEAAJ_N@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWindowList::AlphaChange(CWindowList *this, struct IDwmWindow *a2)
{
  int v4; // edi
  __int64 v5; // rbx
  unsigned int v6; // esi
  CTopLevelWindow **v7; // r15
  CTopLevelWindow *v8; // rcx
  CWindowIconic **v9; // r12
  CWindowIconic *v10; // rcx
  unsigned int v11; // edi
  char v12; // al
  CTopLevelWindow *v13; // rcx
  int v14; // eax
  int updated; // eax
  CWindowData *v17; // rax
  CWindowData *v18; // rax
  unsigned int v19; // [rsp+20h] [rbp-48h]

  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v4 = 0;
  v5 = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 8LL))(a2);
  if ( !v5 && (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 16LL))(a2) )
  {
    v17 = (CWindowData *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
                           WPF::g_pProcessHeap,
                           864LL);
    if ( !v17 || (v18 = CWindowData::CWindowData(v17), (v5 = (__int64)v18) == 0) )
    {
      v4 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x884u, 0LL);
LABEL_24:
      v6 = v4;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, 0x167Bu, 0LL);
      goto LABEL_17;
    }
    *((_QWORD *)v18 + 3) = a2;
    (**(void (__fastcall ***)(struct IDwmWindow *, CWindowData *))a2)(a2, v18);
    *(_QWORD *)(v5 + 40) = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 24LL))(a2);
    v4 = CWindowList::SyncWindowData(this, a2, (struct CWindowData *)v5);
    if ( v4 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, 0x888u, 0LL);
      goto LABEL_24;
    }
  }
  v6 = v4;
  if ( !v5 )
    goto LABEL_17;
  *(_BYTE *)(v5 + 408) = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 152LL))(a2);
  v7 = (CTopLevelWindow **)(v5 + 440);
  v8 = *(CTopLevelWindow **)(v5 + 440);
  if ( v8 )
  {
    CTopLevelWindow::OnSourceConstantAlphaUpdated(v8);
    CLivePreview::OnAlphaChange(
      *((CLivePreview **)CDesktopManager::s_pDesktopManagerInstance + 57),
      (const struct CWindowData *)v5,
      *(_BYTE *)(v5 + 408));
  }
  v9 = (CWindowIconic **)(v5 + 488);
  v10 = *(CWindowIconic **)(v5 + 488);
  if ( v10 )
    CWindowIconic::OnAlphaUpdated(v10, 1);
  v11 = 0;
  if ( *(_DWORD *)(v5 + 520) )
  {
    while ( 1 )
    {
      updated = CSecondaryWindowRepresentation::OnSourceConstantAlphaUpdated(*(CSecondaryWindowRepresentation **)(*(_QWORD *)(v5 + 496) + 8LL * v11));
      v6 = updated;
      if ( updated < 0 )
        break;
      if ( ++v11 >= *(_DWORD *)(v5 + 520) )
        goto LABEL_9;
    }
    v19 = 5775;
    goto LABEL_31;
  }
LABEL_9:
  v12 = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 208LL))(a2);
  if ( v12 != ((*(_BYTE *)(v5 + 673) & 0x40) != 0) )
  {
    *(_BYTE *)(v5 + 673) ^= (*(_BYTE *)(v5 + 673) ^ (v12 << 6)) & 0x40;
    v13 = *v7;
    if ( *v7 )
    {
      v14 = *((_DWORD *)v13 + 22);
      if ( (v14 & 0x100000) == 0 )
      {
        *((_DWORD *)v13 + 22) = v14 | 0x100000;
        CVisual::PropagateDirtyChildren(v13);
      }
    }
    if ( *v9 )
      CWindowIconic::OnColorizationUpdated(*v9, 1);
  }
  if ( *v7 )
  {
    updated = CTopLevelWindow::UpdateRemoteAppRenderTargetOpacity(*v7);
    v6 = updated;
    if ( updated < 0 )
    {
      v19 = 5795;
LABEL_31:
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, updated, v19, 0LL);
    }
  }
LABEL_17:
  LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
  return v6;
}
