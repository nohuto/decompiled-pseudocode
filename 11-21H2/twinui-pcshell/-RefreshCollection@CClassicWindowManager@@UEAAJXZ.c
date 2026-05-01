/*
 * XREFs of ?RefreshCollection@CClassicWindowManager@@UEAAJXZ @ 0x180105590
 * Callers:
 *     <none>
 * Callees:
 *     ?_ChangeWindowType@CClassicWindowManager@@AEAA?AW4WindowChangeFlags@@PEAUIClassicWindow@@W42@@Z @ 0x180105678 (-_ChangeWindowType@CClassicWindowManager@@AEAA-AW4WindowChangeFlags@@PEAUIClassicWindow@@W42@@Z.c)
 *     ?IsWindowPseudoTrayAfterChange@CClassicWindowManager@@AEAA_NPEAUIClassicWindow@@W4WindowChangeFlags@@@Z @ 0x1801057D8 (-IsWindowPseudoTrayAfterChange@CClassicWindowManager@@AEAA_NPEAUIClassicWindow@@W4WindowChangeFl.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CClassicWindowManager::RefreshCollection(CClassicWindowManager *this)
{
  __int64 v2; // rcx
  unsigned __int64 v3; // r14
  unsigned __int64 i; // rsi
  __int64 v5; // rbx
  char v6; // al

  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v3 = *((_QWORD *)this + 12);
  for ( i = 0LL; i < v3; ++i )
  {
    v5 = *(_QWORD *)(*((_QWORD *)this + 11) + 8 * i);
    if ( v5 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v5 + 8LL))(*(_QWORD *)(*((_QWORD *)this + 11) + 8 * i));
    v6 = CClassicWindowManager::IsWindowPseudoTrayAfterChange(v2, v5, 0LL);
    CClassicWindowManager::_ChangeWindowType((char *)this - 104, v5, v6 != 0 ? 32 : 64);
    if ( v5 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  return 0LL;
}
