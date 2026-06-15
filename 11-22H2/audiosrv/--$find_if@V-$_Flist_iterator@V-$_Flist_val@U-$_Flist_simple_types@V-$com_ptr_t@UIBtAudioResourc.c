/*
 * XREFs of ??$find_if@V?$_Flist_iterator@V?$_Flist_val@U?$_Flist_simple_types@V?$com_ptr_t@UIBtAudioResourceManager@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@V_lambda_106e1f811817531308326247710b5667_@@@std@@YA?AV?$_Flist_iterator@V?$_Flist_val@U?$_Flist_simple_types@V?$com_ptr_t@UIBtAudioResourceManager@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@0@V10@V10@V_lambda_106e1f811817531308326247710b5667_@@@Z @ 0x1800F504C
 * Callers:
 *     ?TryGetResourceManagerService@CCustomAudioEndpointResourceManagerCache@@UEAAJPEAVCEndpointCharacteristics@@AEBU_GUID@@PEAPEAX@Z @ 0x180046FE0 (-TryGetResourceManagerService@CCustomAudioEndpointResourceManagerCache@@UEAAJPEAVCEndpointCharac.c)
 * Callees:
 *     __security_check_cookie @ 0x1800669A0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 **__fastcall std::find_if<std::_Flist_iterator<std::_Flist_val<std::_Flist_simple_types<wil::com_ptr_t<IBtAudioResourceManager,wil::err_returncode_policy>>>>,_lambda_106e1f811817531308326247710b5667_>(
        __int64 **a1,
        __int64 *a2,
        __int64 *a3,
        _QWORD *a4)
{
  _QWORD *v8; // rax
  __int64 v9; // rcx
  _BYTE v11[16]; // [rsp+20h] [rbp-28h] BYREF

  while ( a2 != a3 )
  {
    v8 = (_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)a2[1] + 40LL))(a2[1], v11);
    v9 = *v8 - *a4;
    if ( *v8 == *a4 )
      v9 = v8[1] - a4[1];
    if ( !v9 )
      break;
    a2 = (__int64 *)*a2;
  }
  *a1 = a2;
  return a1;
}
