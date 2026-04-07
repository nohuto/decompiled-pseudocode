/*
 * XREFs of ?IconChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYICONCHANGE@@@Z @ 0x180034554
 * Callers:
 *     ?ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z @ 0x1800321C0 (-ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z.c)
 * Callees:
 *     ??0CWindowData@@QEAA@XZ @ 0x1800308C8 (--0CWindowData@@QEAA@XZ.c)
 *     ?SyncWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@PEAVCWindowData@@@Z @ 0x1800338F0 (-SyncWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@PEAVCWindowData@@@Z.c)
 *     ?PropagateDirtyChildren@CVisual@@QEAAXXZ @ 0x180037860 (-PropagateDirtyChildren@CVisual@@QEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18006610C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?OnIconUpdated@CWindowIconic@@QEAAJ_N@Z @ 0x180107194 (-OnIconUpdated@CWindowIconic@@QEAAJ_N@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWindowList::IconChange(CWindowList *this, const struct MILCMD_DWM_REDIRECTION_NOTIFYICONCHANGE *a2)
{
  int v4; // edi
  struct CWindowData *v5; // rbx
  __int64 v6; // rax
  struct IDwmWindow *v7; // rsi
  unsigned int v8; // esi
  char v9; // al
  __int64 v10; // rcx
  __int64 v11; // rcx
  CVisual *v13; // rcx
  CWindowIconic *v14; // rcx
  int v15; // eax
  CWindowData *v16; // rax
  CWindowData *v17; // rax
  unsigned int v18; // eax
  int v19; // eax

  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v4 = 0;
  v5 = 0LL;
  if ( *(_QWORD *)((char *)a2 + 4) )
  {
    v6 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance + 8) + 8LL))(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 8));
    v7 = (struct IDwmWindow *)v6;
    if ( v6 )
    {
      v5 = (struct CWindowData *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
      if ( !v5 )
      {
        v16 = (CWindowData *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
                               WPF::g_pProcessHeap,
                               864LL);
        if ( v16 && (v17 = CWindowData::CWindowData(v16), (v5 = v17) != 0LL) )
        {
          *((_QWORD *)v17 + 3) = v7;
          (**(void (__fastcall ***)(struct IDwmWindow *, CWindowData *))v7)(v7, v17);
          *((_QWORD *)v5 + 5) = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)v7 + 24LL))(v7);
          v4 = CWindowList::SyncWindowData(this, v7, v5);
          if ( v4 >= 0 )
            goto LABEL_4;
          v18 = 2184;
        }
        else
        {
          v4 = -2147024882;
          v18 = 2180;
        }
        v8 = v4;
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, v18, 0LL);
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, 0x867u, 0LL);
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, 0x11A4u, 0LL);
        goto LABEL_10;
      }
    }
  }
LABEL_4:
  v8 = v4;
  if ( v5 )
  {
    v9 = 0;
    v10 = *(_QWORD *)((char *)a2 + 12);
    if ( *((_QWORD *)v5 + 19) != v10 )
    {
      *((_QWORD *)v5 + 19) = v10;
      v9 = 1;
    }
    v11 = *(_QWORD *)((char *)a2 + 20);
    if ( *((_QWORD *)v5 + 20) == v11 )
    {
      if ( !v9 )
        goto LABEL_10;
    }
    else
    {
      *((_QWORD *)v5 + 20) = v11;
    }
    v13 = (CVisual *)*((_QWORD *)v5 + 55);
    if ( v13 )
    {
      v15 = *((_DWORD *)v13 + 22);
      if ( (v15 & 0x20000) == 0 )
      {
        *((_DWORD *)v13 + 22) = v15 | 0x20000;
        CVisual::PropagateDirtyChildren(v13);
      }
    }
    v14 = (CWindowIconic *)*((_QWORD *)v5 + 61);
    if ( v14 )
    {
      v19 = CWindowIconic::OnIconUpdated(v14, 1);
      v8 = v19;
      if ( v19 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v19, 0x11BFu, 0LL);
    }
  }
LABEL_10:
  LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
  return v8;
}
