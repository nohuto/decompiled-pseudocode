/*
 * XREFs of ?ClientMarginsChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180021790
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?OnClientMarginsChange@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x180021188 (-OnClientMarginsChange@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 *     ?SyncWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@PEAVCWindowData@@@Z @ 0x180023170 (-SyncWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@PEAVCWindowData@@@Z.c)
 *     ??0CWindowData@@QEAA@XZ @ 0x180023D44 (--0CWindowData@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x180060050 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWindowList::ClientMarginsChange(CWindowList *this, struct IDwmWindow *a2)
{
  int v4; // edi
  __int64 v5; // rbx
  int v6; // edx
  CWindowList *v7; // rcx
  CWindowList *v9; // rax
  CWindowData *v10; // rax
  int v11; // eax
  CWindowList *v12[2]; // [rsp+38h] [rbp-30h] BYREF

  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v4 = 0;
  v5 = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 8LL))(a2);
  if ( !v5 && (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 16LL))(a2) )
  {
    v9 = (CWindowList *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
                          WPF::g_pProcessHeap,
                          840LL);
    v12[0] = v9;
    if ( !v9 || (v10 = CWindowData::CWindowData(v9), (v5 = (__int64)v10) == 0) )
    {
      v4 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, 0x820u);
      goto LABEL_16;
    }
    *((_QWORD *)v10 + 3) = a2;
    (**(void (__fastcall ***)(struct IDwmWindow *, CWindowData *))a2)(a2, v10);
    *(_QWORD *)(v5 + 40) = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 24LL))(a2);
    v11 = CWindowList::SyncWindowData(this, a2, (struct CWindowData *)v5);
    v4 = v11;
    if ( v11 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v11, 0x824u);
      goto LABEL_16;
    }
  }
  if ( v4 < 0 )
  {
LABEL_16:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v4, 0xD8Bu);
    goto LABEL_9;
  }
  if ( v5 )
  {
    *(_OWORD *)v12 = 0LL;
    (*(void (__fastcall **)(struct IDwmWindow *, CWindowList **))(*(_QWORD *)a2 + 112LL))(a2, v12);
    v6 = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 128LL))(a2);
    if ( *(_DWORD *)(v5 + 296) != v6
      || (v7 = (CWindowList *)LODWORD(v12[0]), *(_DWORD *)(v5 + 264) != LODWORD(v12[0]))
      || (v7 = (CWindowList *)HIDWORD(v12[0]), *(_DWORD *)(v5 + 268) != HIDWORD(v12[0]))
      || (v7 = (CWindowList *)LODWORD(v12[1]), *(CWindowList **)(v5 + 272) != v12[1]) )
    {
      *(_DWORD *)(v5 + 296) = v6;
      *(_OWORD *)(v5 + 264) = *(_OWORD *)v12;
      CWindowList::OnClientMarginsChange(v7, (struct CWindowData *)v5);
    }
  }
LABEL_9:
  LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
  return (unsigned int)v4;
}
