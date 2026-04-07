/*
 * XREFs of ?DestroyWindow@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x1800223E0
 * Callers:
 *     ?DestroySprite@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18001FC80 (-DestroySprite@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ImmediateDestroyWindow@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x180022660 (-ImmediateDestroyWindow@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 *     ?SyncWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@PEAVCWindowData@@@Z @ 0x180023170 (-SyncWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@PEAVCWindowData@@@Z.c)
 *     ??0CWindowData@@QEAA@XZ @ 0x180023D44 (--0CWindowData@@QEAA@XZ.c)
 *     CWindowList::ForEachSoftwareCursorListener__lambda_d44e13c9ad42c49c59c67279626bbdcc___ @ 0x18005F860 (CWindowList--ForEachSoftwareCursorListener__lambda_d44e13c9ad42c49c59c67279626bbdcc___.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 *     ?OnWindowDestroyed@CWindowArrangementTransition@@QEAAJXZ @ 0x180100F38 (-OnWindowDestroyed@CWindowArrangementTransition@@QEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWindowList::DestroyWindow(CWindowArrangementTransition **this, struct IDwmWindow *a2)
{
  int v4; // edi
  struct CWindowData *v5; // rbx
  void (__fastcall ***v7)(_QWORD, _QWORD); // rcx
  __int64 v8; // r15
  struct CWindowData *v9; // rcx
  struct CWindowData **v10; // rax
  CWindowArrangementTransition *v11; // rcx
  CWindowData *v12; // rax
  CWindowData *v13; // rax
  int v14; // eax
  struct CWindowData *v15; // [rsp+78h] [rbp+48h] BYREF
  struct CWindowData **v16; // [rsp+80h] [rbp+50h] BYREF
  struct _RTL_CRITICAL_SECTION *v17; // [rsp+88h] [rbp+58h]

  v17 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v15 = 0LL;
  v4 = 0;
  v5 = (struct CWindowData *)(*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 8LL))(a2);
  if ( !v5 && (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 16LL))(a2) )
  {
    v12 = (CWindowData *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
                           WPF::g_pProcessHeap,
                           840LL);
    v16 = (struct CWindowData **)v12;
    if ( !v12 || (v13 = CWindowData::CWindowData(v12), (v5 = v13) == 0LL) )
    {
      v4 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, 0x820u);
      goto LABEL_22;
    }
    *((_QWORD *)v13 + 3) = a2;
    (**(void (__fastcall ***)(struct IDwmWindow *, CWindowData *))a2)(a2, v13);
    *((_QWORD *)v5 + 5) = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 24LL))(a2);
    v14 = CWindowList::SyncWindowData((CWindowList *)this, a2, v5);
    v4 = v14;
    if ( v14 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v14, 0x824u);
      goto LABEL_22;
    }
  }
  v15 = v5;
  if ( v4 < 0 )
  {
LABEL_22:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v4, 0x8AEu);
    goto LABEL_5;
  }
  if ( v5 )
  {
    v7 = (void (__fastcall ***)(_QWORD, _QWORD))*((_QWORD *)v5 + 3);
    if ( v7 )
    {
      (**v7)(v7, 0LL);
      *((_QWORD *)v15 + 3) = 0LL;
      v5 = v15;
    }
    v8 = *((_QWORD *)v5 + 5);
    if ( (*((_BYTE *)v5 + 668) & 2) != 0 )
    {
      v16 = &v15;
      CWindowList::ForEachSoftwareCursorListener__lambda_d44e13c9ad42c49c59c67279626bbdcc___(this, &v16);
      v5 = v15;
    }
    if ( (*((_BYTE *)v5 + 664) & 4) == 0 )
    {
      v9 = *(struct CWindowData **)v5;
      v10 = (struct CWindowData **)*((_QWORD *)v5 + 1);
      if ( *(struct CWindowData **)(*(_QWORD *)v5 + 8LL) != v5 || *v10 != v5 )
        __fastfail(3u);
      *v10 = v9;
      *((_QWORD *)v9 + 1) = v10;
      *((_QWORD *)v15 + 1) = v15;
      *(_QWORD *)v15 = v15;
      CWindowList::ImmediateDestroyWindow((CWindowList *)this, v15);
    }
    v11 = this[68];
    if ( v11 && v8 == *((_QWORD *)v11 + 2) )
      CWindowArrangementTransition::OnWindowDestroyed(v11);
  }
LABEL_5:
  LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
  return (unsigned int)v4;
}
