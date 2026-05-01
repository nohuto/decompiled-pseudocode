/*
 * XREFs of ?Compare@CClassicWindowFinderByHWND@@QEBAHAEBV?$ComPtr@UIUnknown@@@WRL@Microsoft@@0@Z @ 0x18010386C
 * Callers:
 *     ?_HandleDestructionOrHide@CClassicWindowManager@@AEAA_NPEAUHWND__@@W4HandleDestructionOrHideOptions@1@@Z @ 0x180104700 (-_HandleDestructionOrHide@CClassicWindowManager@@AEAA_NPEAUHWND__@@W4HandleDestructionOrHideOpti.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CClassicWindowFinderByHWND::Compare(_QWORD *a1, _QWORD *a2)
{
  unsigned int v3; // ebx
  __int64 v4; // rcx
  __int64 v6; // [rsp+40h] [rbp+18h] BYREF

  v6 = 0LL;
  if ( (**(int (__fastcall ***)(_QWORD, GUID *, __int64 *))*a2)(*a2, &GUID_71dafe9a_4f1f_4a1b_b6ed_fd273bc0ffee, &v6) >= 0
    && (*(unsigned __int8 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v6 + 192LL))(v6, *a1) )
  {
    v3 = 0;
  }
  else
  {
    v3 = -1;
  }
  v4 = v6;
  if ( v6 )
  {
    v6 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  return v3;
}
