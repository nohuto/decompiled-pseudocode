/*
 * XREFs of ?EnsureWindowArrangementTransition@CWindowList@@AEAAJXZ @ 0x1801037C4
 * Callers:
 *     ?OnWindowArrangementContinue@CWindowList@@AEAAJPEBUMILCMD_DWM_WINDOWARRANGEMENTNOTIFICATION@@@Z @ 0x180104E2C (-OnWindowArrangementContinue@CWindowList@@AEAAJPEBUMILCMD_DWM_WINDOWARRANGEMENTNOTIFICATION@@@Z.c)
 *     ?OnWindowArrangementStart@CWindowList@@AEAAJPEBUMILCMD_DWM_WINDOWARRANGEMENTNOTIFICATION@@@Z @ 0x180104FD8 (-OnWindowArrangementStart@CWindowList@@AEAAJPEBUMILCMD_DWM_WINDOWARRANGEMENTNOTIFICATION@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CWindowList::EnsureWindowArrangementTransition(CWindowList *this)
{
  unsigned int v1; // edi
  __int64 v3; // rax

  v1 = 0;
  if ( !*((_QWORD *)this + 68) )
  {
    v3 = (*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
           WPF::g_pProcessHeap,
           32LL);
    if ( v3 )
    {
      *(_QWORD *)(v3 + 8) = 0LL;
      *(_QWORD *)(v3 + 16) = 0LL;
      *(_QWORD *)v3 = this;
      *(_BYTE *)(v3 + 24) = 0;
      *((_QWORD *)this + 68) = v3;
    }
    else
    {
      *((_QWORD *)this + 68) = 0LL;
      v1 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, 0x1E01u);
    }
  }
  return v1;
}
