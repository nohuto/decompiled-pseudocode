/*
 * XREFs of ?ChildContentChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18000CEA0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?NotifyRepresentationChanged@CWindowData@@QEAAJXZ @ 0x18001F880 (-NotifyRepresentationChanged@CWindowData@@QEAAJXZ.c)
 *     ?SyncWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@PEAVCWindowData@@@Z @ 0x180023170 (-SyncWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@PEAVCWindowData@@@Z.c)
 *     ??0CWindowData@@QEAA@XZ @ 0x180023D44 (--0CWindowData@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 *     ?RecloneWindow@CDesktopThumbnailBase@@QEAAXPEAVCWindowData@@@Z @ 0x1800B2DC0 (-RecloneWindow@CDesktopThumbnailBase@@QEAAXPEAVCWindowData@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWindowList::ChildContentChange(CWindowList *this, struct IDwmWindow *a2)
{
  unsigned int v4; // ebx
  int v5; // edi
  __int64 v6; // rsi
  unsigned int v7; // ebp
  char v8; // al
  CDesktopManager *v9; // rdi
  int v11; // eax
  CWindowData *v12; // rax
  CWindowData *v13; // rax

  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v4 = 0;
  v5 = 0;
  v6 = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 8LL))(a2);
  if ( !v6 && (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 16LL))(a2) )
  {
    v12 = (CWindowData *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
                           WPF::g_pProcessHeap,
                           840LL);
    if ( !v12 || (v13 = CWindowData::CWindowData(v12), (v6 = (__int64)v13) == 0) )
    {
      v5 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, 0x820u);
LABEL_15:
      v7 = v5;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v5, 0x1699u);
      goto LABEL_6;
    }
    *((_QWORD *)v13 + 3) = a2;
    (**(void (__fastcall ***)(struct IDwmWindow *, CWindowData *))a2)(a2, v13);
    *(_QWORD *)(v6 + 40) = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 24LL))(a2);
    v5 = CWindowList::SyncWindowData(this, a2, (struct CWindowData *)v6);
    if ( v5 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v5, 0x824u);
      goto LABEL_15;
    }
  }
  v7 = v5;
  if ( v6 )
  {
    v8 = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 184LL))(a2);
    if ( ((*(_BYTE *)(v6 + 665) & 0x10) != 0) == v8
      || (*(_BYTE *)(v6 + 665) ^= (*(_BYTE *)(v6 + 665) ^ (16 * v8)) & 0x10,
          v11 = CWindowData::NotifyRepresentationChanged((CWindowData *)v6),
          v7 = v11,
          v11 >= 0) )
    {
      v9 = CDesktopManager::s_pDesktopManagerInstance;
      if ( *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 184) )
      {
        do
          CDesktopThumbnailBase::RecloneWindow(
            *(CDesktopThumbnailBase **)(*((_QWORD *)v9 + 89) + 8LL * v4++),
            (struct CWindowData *)v6);
        while ( v4 < *((_DWORD *)v9 + 184) );
      }
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v11, 0x16A3u);
    }
  }
LABEL_6:
  LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
  return v7;
}
