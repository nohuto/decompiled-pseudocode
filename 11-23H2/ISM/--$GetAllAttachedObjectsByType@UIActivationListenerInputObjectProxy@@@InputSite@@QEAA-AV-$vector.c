/*
 * XREFs of ??$GetAllAttachedObjectsByType@UIActivationListenerInputObjectProxy@@@InputSite@@QEAA?AV?$vector@V?$ComPtr@UIActivationListenerInputObjectProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIActivationListenerInputObjectProxy@@@WRL@Microsoft@@@std@@@std@@XZ @ 0x180022000
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_7686d6ebc3159bdf5e46abc7d00177b2__void__MIT_INPUT_FOCUS_MESSAGE_const___::_Do_call @ 0x180021750 (std--_Func_impl_no_alloc__lambda_7686d6ebc3159bdf5e46abc7d00177b2__void__MIT_INPUT_FOCUS_MESSAGE.c)
 * Callees:
 *     ??$_Emplace_reallocate@AEBV?$ComPtr@UIActivationListenerInputObjectProxy@@@WRL@Microsoft@@@?$vector@V?$ComPtr@UIActivationListenerInputObjectProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIActivationListenerInputObjectProxy@@@WRL@Microsoft@@@std@@@std@@QEAAPEAV?$ComPtr@UIActivationListenerInputObjectProxy@@@WRL@Microsoft@@QEAV234@AEBV234@@Z @ 0x1800246E0 (--$_Emplace_reallocate@AEBV-$ComPtr@UIActivationListenerInputObjectProxy@@@WRL@Microsoft@@@-$vec.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
_QWORD *__fastcall InputSite::GetAllAttachedObjectsByType<IActivationListenerInputObjectProxy>(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rdx
  __int64 v4; // rbx
  __int64 i; // rbp
  int (__fastcall ***v6)(_QWORD, GUID *, __int64 *); // rdi
  int (__fastcall *v7)(_QWORD, GUID *, __int64 *); // rsi
  _QWORD *v9; // rdx
  __int64 v10; // [rsp+60h] [rbp+8h] BYREF
  _QWORD *v11; // [rsp+68h] [rbp+10h]

  v11 = a2;
  *a2 = 0LL;
  a2[1] = 0LL;
  a2[2] = 0LL;
  v3 = 0LL;
  v10 = 0LL;
  v4 = *(_QWORD *)(a1 + 488);
  for ( i = *(_QWORD *)(a1 + 496); v4 != i; v4 += 16LL )
  {
    v6 = *(int (__fastcall ****)(_QWORD, GUID *, __int64 *))(v4 + 8);
    v7 = **v6;
    if ( v3 )
    {
      v10 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
    }
    if ( v7(v6, &GUID_a1cdc933_ea3a_72de_bea8_f0397564bae3, &v10) >= 0 )
    {
      v9 = (_QWORD *)a2[1];
      if ( v9 != (_QWORD *)a2[2] )
      {
        *v9 = v10;
        v3 = v10;
        if ( v10 )
        {
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
          v3 = v10;
        }
        a2[1] += 8LL;
        continue;
      }
      std::vector<Microsoft::WRL::ComPtr<IActivationListenerInputObjectProxy>>::_Emplace_reallocate<Microsoft::WRL::ComPtr<IActivationListenerInputObjectProxy> const &>(
        a2,
        v9,
        &v10);
    }
    v3 = v10;
  }
  if ( v3 )
  {
    v10 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  return a2;
}
