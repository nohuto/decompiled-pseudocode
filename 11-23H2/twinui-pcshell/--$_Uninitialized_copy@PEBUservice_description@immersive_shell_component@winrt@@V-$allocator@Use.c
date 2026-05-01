/*
 * XREFs of ??$_Uninitialized_copy@PEBUservice_description@immersive_shell_component@winrt@@V?$allocator@Uservice_description@immersive_shell_component@winrt@@@std@@@std@@YAPEAUservice_description@immersive_shell_component@winrt@@QEBU123@0PEAU123@AEAV?$allocator@Uservice_description@immersive_shell_component@winrt@@@0@@Z @ 0x1800BDDC4
 * Callers:
 *     ??$_Insert_range@PEBUservice_description@immersive_shell_component@winrt@@@?$vector@Uservice_description@immersive_shell_component@winrt@@V?$allocator@Uservice_description@immersive_shell_component@winrt@@@std@@@std@@AEAAXV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@Uservice_description@immersive_shell_component@winrt@@@std@@@std@@@1@PEBUservice_description@immersive_shell_component@winrt@@1Uforward_iterator_tag@1@@Z @ 0x1800BDE54 (--$_Insert_range@PEBUservice_description@immersive_shell_component@winrt@@@-$vector@Uservice_des.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
_OWORD *__fastcall std::_Uninitialized_copy<winrt::immersive_shell_component::service_description const *>(
        _DWORD *a1,
        _DWORD *a2,
        _OWORD *a3)
{
  _OWORD *v3; // rdi
  _DWORD *v5; // rbx
  char *v6; // rsi
  __int64 v7; // rcx

  v3 = a3;
  if ( a1 != a2 )
  {
    v5 = a1 + 6;
    v6 = (char *)((char *)a3 - (char *)a1);
    do
    {
      *v3 = *(_OWORD *)(v5 - 6);
      v7 = *((_QWORD *)v5 - 1);
      *(_QWORD *)((char *)v5 + (_QWORD)v6 - 8) = v7;
      if ( v7 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
      *(_DWORD *)&v6[(_QWORD)v5] = *v5;
      v3 += 2;
      v5 += 8;
    }
    while ( v5 - 6 != a2 );
  }
  return v3;
}
