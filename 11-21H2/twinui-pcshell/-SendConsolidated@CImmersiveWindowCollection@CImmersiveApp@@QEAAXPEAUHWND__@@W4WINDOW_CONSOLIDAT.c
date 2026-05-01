/*
 * XREFs of ?SendConsolidated@CImmersiveWindowCollection@CImmersiveApp@@QEAAXPEAUHWND__@@W4WINDOW_CONSOLIDATED_FLAGS@@@Z @ 0x180307814
 * Callers:
 *     ?SendConsolidated@CImmersiveApp@@UEAAXPEAUHWND__@@W4WINDOW_CONSOLIDATED_FLAGS@@@Z @ 0x180307800 (-SendConsolidated@CImmersiveApp@@UEAAXPEAUHWND__@@W4WINDOW_CONSOLIDATED_FLAGS@@@Z.c)
 * Callees:
 *     ?_FindWindow@CImmersiveWindowCollection@CImmersiveApp@@AEBAJPEAUHWND__@@PEA_K@Z @ 0x18002107C (-_FindWindow@CImmersiveWindowCollection@CImmersiveApp@@AEBAJPEAUHWND__@@PEA_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CImmersiveApp::CImmersiveWindowCollection::SendConsolidated(
        CImmersiveApp::CImmersiveWindowCollection *a1,
        HWND a2,
        unsigned int a3)
{
  __int64 result; // rax
  unsigned __int64 v6; // rdi
  __int64 v7; // rcx
  __int64 v8; // rcx
  unsigned __int64 v9; // [rsp+48h] [rbp+20h] BYREF

  result = CImmersiveApp::CImmersiveWindowCollection::_FindWindow(a1, a2, &v9);
  if ( (int)result >= 0 )
  {
    v6 = v9;
    v7 = *(_QWORD *)(*((_QWORD *)a1 + 21) + 8 * v9);
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 56LL))(v7);
    if ( (_BYTE)result )
    {
      v8 = *(_QWORD *)(*((_QWORD *)a1 + 21) + 8 * v6);
      return (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v8 + 160LL))(v8, a3);
    }
  }
  return result;
}
