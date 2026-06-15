/*
 * XREFs of ??$_Uninitialized_move@PEAV?$com_ptr_t@VCEndpointCharacteristics@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCEndpointCharacteristics@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAPEAV?$com_ptr_t@VCEndpointCharacteristics@@Uerr_returncode_policy@wil@@@wil@@QEAV12@0PEAV12@AEAV?$allocator@V?$com_ptr_t@VCEndpointCharacteristics@@Uerr_returncode_policy@wil@@@wil@@@0@@Z @ 0x1800627FC
 * Callers:
 *     ??$_Emplace_reallocate@AEAPEAVCEndpointCharacteristics@@@?$vector@V?$com_ptr_t@VCEndpointCharacteristics@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCEndpointCharacteristics@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAPEAV?$com_ptr_t@VCEndpointCharacteristics@@Uerr_returncode_policy@wil@@@wil@@QEAV23@AEAPEAVCEndpointCharacteristics@@@Z @ 0x1800626F8 (--$_Emplace_reallocate@AEAPEAVCEndpointCharacteristics@@@-$vector@V-$com_ptr_t@VCEndpointCharact.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@V?$com_ptr_t@VCEndpointCharacteristics@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@VCEndpointCharacteristics@@Uerr_returncode_policy@wil@@@wil@@QEAV12@AEAV?$allocator@V?$com_ptr_t@VCEndpointCharacteristics@@Uerr_returncode_policy@wil@@@wil@@@0@@Z @ 0x180016D94 (--$_Destroy_range@V-$allocator@V-$com_ptr_t@VCEndpointCharacteristics@@Uerr_returncode_policy@wi.c)
 */

__int64 *__fastcall std::_Uninitialized_move<wil::com_ptr_t<CEndpointCharacteristics,wil::err_returncode_policy> *,std::allocator<wil::com_ptr_t<CEndpointCharacteristics,wil::err_returncode_policy>>>(
        __int64 *a1,
        __int64 *a2,
        __int64 *a3)
{
  __int64 v5; // r8

  while ( a1 != a2 )
  {
    v5 = *a1;
    *a1 = 0LL;
    *a3++ = v5;
    ++a1;
  }
  std::_Destroy_range<std::allocator<wil::com_ptr_t<CEndpointCharacteristics,wil::err_returncode_policy>>>(a3, a3);
  return a3;
}
