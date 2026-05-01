/*
 * XREFs of ?SetBehaviorFlags@CTaskWindow@@UEAAXW4__MIDL___MIDL_itf_shpriv_core_0000_0325_0003@@@Z @ 0x180190BF0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     WPP_SF_Dq @ 0x18030C214 (WPP_SF_Dq.c)
 */

int __fastcall CTaskWindow::SetBehaviorFlags(HWND *a1, int a2)
{
  void *v3; // rdi
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // r8

  v3 = (void *)a2;
  v4 = (*((__int64 (__fastcall **)(HWND *))*a1 + 4))(a1);
  if ( v4 )
  {
    LODWORD(v4) = (_DWORD)CApplicationManagerUtility::g_pIAMGlobals;
    if ( HIWORD(CApplicationManagerUtility::g_pIAMGlobals[13].Ptr) )
    {
      LODWORD(v4) = SetPropW(a1[4], (LPCWSTR)HIWORD(CApplicationManagerUtility::g_pIAMGlobals[13].Ptr), v3);
      if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        LODWORD(v4) = WPP_SF_Dq(*((_QWORD *)WPP_GLOBAL_Control + 2), v5, v6, (unsigned int)v3, a1[4]);
    }
  }
  return v4;
}
