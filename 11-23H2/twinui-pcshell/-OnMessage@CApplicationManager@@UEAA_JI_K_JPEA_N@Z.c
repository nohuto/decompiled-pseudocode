/*
 * XREFs of ?OnMessage@CApplicationManager@@UEAA_JI_K_JPEA_N@Z @ 0x18016F690
 * Callers:
 *     ?OnShellHookMessage@CApplicationManager@@UEAAJ_K_J@Z @ 0x1800C6BA0 (-OnShellHookMessage@CApplicationManager@@UEAAJ_K_J@Z.c)
 * Callees:
 *     ?RemoveOperation@CDelayIAMOperations@@QEAAPEAVCOperation@1@K@Z @ 0x18004FEF0 (-RemoveOperation@CDelayIAMOperations@@QEAAPEAVCOperation@1@K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CApplicationManager::OnMessage(CDelayIAMOperations **this, int a2, __int64 a3, int a4, bool *a5)
{
  bool v5; // bl
  struct CDelayIAMOperations::COperation *v9; // rdi
  struct CDelayIAMOperations::COperation *v10; // rax
  struct CDelayIAMOperations::COperation *v11; // rdi

  v5 = 0;
  if ( a2 == 1025 )
  {
    v5 = 1;
    AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
    v10 = CDelayIAMOperations::RemoveOperation(this[75], a4);
    v11 = v10;
    if ( v10 )
    {
      (*(void (__fastcall **)(struct CDelayIAMOperations::COperation *))(*(_QWORD *)v10 + 8LL))(v10);
      (**(void (__fastcall ***)(struct CDelayIAMOperations::COperation *, __int64))v11)(v11, 1LL);
    }
    ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  }
  else if ( a2 == 1026 )
  {
    v5 = 1;
    AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
    v9 = CDelayIAMOperations::RemoveOperation(this[75], a4);
    ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
    if ( v9 )
    {
      (*(void (__fastcall **)(struct CDelayIAMOperations::COperation *))(*(_QWORD *)v9 + 8LL))(v9);
      (**(void (__fastcall ***)(struct CDelayIAMOperations::COperation *, __int64))v9)(v9, 1LL);
    }
  }
  *a5 = v5;
  return 0LL;
}
