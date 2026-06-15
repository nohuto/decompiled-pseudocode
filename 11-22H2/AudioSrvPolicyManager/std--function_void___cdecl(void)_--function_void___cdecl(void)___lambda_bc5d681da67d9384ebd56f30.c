/*
 * XREFs of std::function_void___cdecl(void)_::function_void___cdecl(void)___lambda_bc5d681da67d9384ebd56f302790ab0c__0_ @ 0x18002BE2C
 * Callers:
 *     ?ProcessInteractivityNotification@CApplicationManager@@QEAAJPEBG_KW4__MIDL___MIDL_itf_playbackmanagerrpc_0000_0000_0001@@K@Z @ 0x18002DFA0 (-ProcessInteractivityNotification@CApplicationManager@@QEAAJPEBG_KW4__MIDL___MIDL_itf_playbackma.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x1800025A0 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 */

__int64 __fastcall std::function_void___cdecl_void__::function_void___cdecl_void____lambda_bc5d681da67d9384ebd56f302790ab0c__0_(
        __int64 a1,
        __int64 a2)
{
  std::_Ref_count_base *v3; // rcx

  *(_QWORD *)(a1 + 56) = 0LL;
  *(_QWORD *)a1 = off_18004FA68;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 8) = *(_QWORD *)a2;
  *(_QWORD *)(a1 + 16) = *(_QWORD *)(a2 + 8);
  *(_QWORD *)a2 = 0LL;
  *(_QWORD *)(a2 + 8) = 0LL;
  *(_QWORD *)(a1 + 24) = *(_QWORD *)(a2 + 16);
  *(_DWORD *)(a1 + 32) = *(_DWORD *)(a2 + 24);
  *(_DWORD *)(a1 + 36) = *(_DWORD *)(a2 + 28);
  *(_QWORD *)(a1 + 56) = a1;
  v3 = *(std::_Ref_count_base **)(a2 + 8);
  if ( v3 )
    std::_Ref_count_base::_Decref(v3);
  return a1;
}
