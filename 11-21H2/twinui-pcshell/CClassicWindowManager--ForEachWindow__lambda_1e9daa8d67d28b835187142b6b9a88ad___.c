/*
 * XREFs of CClassicWindowManager::ForEachWindow__lambda_1e9daa8d67d28b835187142b6b9a88ad___ @ 0x180105B18
 * Callers:
 *     ?_HandleDestructionOrHide@CClassicWindowManager@@AEAA_NPEAUHWND__@@W4HandleDestructionOrHideOptions@1@@Z @ 0x180104700 (-_HandleDestructionOrHide@CClassicWindowManager@@AEAA_NPEAUHWND__@@W4HandleDestructionOrHideOpti.c)
 *     ?_ChangeWindowType@CClassicWindowManager@@AEAA?AW4WindowChangeFlags@@PEAUIClassicWindow@@W42@@Z @ 0x180105678 (-_ChangeWindowType@CClassicWindowManager@@AEAA-AW4WindowChangeFlags@@PEAUIClassicWindow@@W42@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall CClassicWindowManager::ForEachWindow__lambda_1e9daa8d67d28b835187142b6b9a88ad___(
        __int64 a1,
        __int64 a2)
{
  unsigned __int64 v4; // r14
  unsigned __int64 v5; // rsi
  __int64 *v6; // r12
  __int64 v7; // rbx
  __int64 v8; // rdi
  void (__fastcall *v10)(__int64, _QWORD); // rdi
  _QWORD *v11; // rax

  v4 = *(_QWORD *)(a1 + 200);
  v5 = 0LL;
  if ( v4 )
  {
    v6 = *(__int64 **)a2;
    do
    {
      v7 = *(_QWORD *)(*(_QWORD *)(a1 + 192) + 8 * v5);
      if ( v7 )
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v7 + 8LL))(*(_QWORD *)(*(_QWORD *)(a1 + 192) + 8 * v5));
      v8 = *v6;
      if ( *(_QWORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 96LL))(v7) == v8 )
      {
        v10 = *(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v7 + 104LL);
        v11 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD))(****(_QWORD ****)(a2 + 8) + 96LL))(***(_QWORD ***)(a2 + 8));
        v10(v7, *v11);
      }
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
      ++v5;
    }
    while ( v5 < v4 );
  }
  return 1;
}
