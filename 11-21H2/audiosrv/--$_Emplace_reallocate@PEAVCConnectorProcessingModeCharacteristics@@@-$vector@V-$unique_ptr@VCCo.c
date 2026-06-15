/*
 * XREFs of ??$_Emplace_reallocate@PEAVCConnectorProcessingModeCharacteristics@@@?$vector@V?$unique_ptr@VCConnectorProcessingModeCharacteristics@@U?$default_delete@VCConnectorProcessingModeCharacteristics@@@std@@@std@@V?$allocator@V?$unique_ptr@VCConnectorProcessingModeCharacteristics@@U?$default_delete@VCConnectorProcessingModeCharacteristics@@@std@@@std@@@2@@std@@QEAAPEAV?$unique_ptr@VCConnectorProcessingModeCharacteristics@@U?$default_delete@VCConnectorProcessingModeCharacteristics@@@std@@@1@QEAV21@$$QEAPEAVCConnectorProcessingModeCharacteristics@@@Z @ 0x180047A58
 * Callers:
 *     ?DeserializeProcessingModeCharacteristics@@YAJKPEAEAEAV?$vector@V?$unique_ptr@VCConnectorProcessingModeCharacteristics@@U?$default_delete@VCConnectorProcessingModeCharacteristics@@@std@@@std@@V?$allocator@V?$unique_ptr@VCConnectorProcessingModeCharacteristics@@U?$default_delete@VCConnectorProcessingModeCharacteristics@@@std@@@std@@@2@@std@@@Z @ 0x180047350 (-DeserializeProcessingModeCharacteristics@@YAJKPEAEAEAV-$vector@V-$unique_ptr@VCConnectorProcess.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180025468 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$07@std@@YA_K_K@Z @ 0x1800254C0 (--$_Get_size_of_n@$07@std@@YA_K_K@Z.c)
 *     ?_Calculate_growth@?$vector@V?$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@AEBA_K_K@Z @ 0x18003F3DC (-_Calculate_growth@-$vector@V-$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@V-$all.c)
 *     ??$_Uninitialized_move@PEAV?$unique_ptr@VCConnectorProcessingModeCharacteristics@@U?$default_delete@VCConnectorProcessingModeCharacteristics@@@std@@@std@@V?$allocator@V?$unique_ptr@VCConnectorProcessingModeCharacteristics@@U?$default_delete@VCConnectorProcessingModeCharacteristics@@@std@@@std@@@2@@std@@YAPEAV?$unique_ptr@VCConnectorProcessingModeCharacteristics@@U?$default_delete@VCConnectorProcessingModeCharacteristics@@@std@@@0@QEAV10@0PEAV10@AEAV?$allocator@V?$unique_ptr@VCConnectorProcessingModeCharacteristics@@U?$default_delete@VCConnectorProcessingModeCharacteristics@@@std@@@std@@@0@@Z @ 0x180047B28 (--$_Uninitialized_move@PEAV-$unique_ptr@VCConnectorProcessingModeCharacteristics@@U-$default_del.c)
 *     ?_Change_array@?$vector@V?$unique_ptr@VCConnectorProcessingModeCharacteristics@@U?$default_delete@VCConnectorProcessingModeCharacteristics@@@std@@@std@@V?$allocator@V?$unique_ptr@VCConnectorProcessingModeCharacteristics@@U?$default_delete@VCConnectorProcessingModeCharacteristics@@@std@@@std@@@2@@std@@AEAAXQEAV?$unique_ptr@VCConnectorProcessingModeCharacteristics@@U?$default_delete@VCConnectorProcessingModeCharacteristics@@@std@@@2@_K1@Z @ 0x180047B58 (-_Change_array@-$vector@V-$unique_ptr@VCConnectorProcessingModeCharacteristics@@U-$default_delet.c)
 */

char *__fastcall std::vector<std::unique_ptr<CConnectorProcessingModeCharacteristics>>::_Emplace_reallocate<CConnectorProcessingModeCharacteristics *>(
        __int64 *a1,
        __int64 a2,
        _QWORD *a3)
{
  __int64 v6; // rsi
  __int64 v7; // rax
  __int64 v8; // r12
  unsigned __int64 v9; // r15
  SIZE_T size_of; // rax
  char *v11; // rdi
  char *v12; // rsi
  __int64 v13; // rdx
  _QWORD *v14; // r8
  __int64 v15; // rcx

  v6 = (a2 - *a1) >> 3;
  v7 = (a1[1] - *a1) >> 3;
  if ( v7 == 0x1FFFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector too long");
  v8 = v7 + 1;
  v9 = std::vector<wil::com_ptr_t<CAudioStream,wil::err_returncode_policy>>::_Calculate_growth(a1, v7 + 1);
  size_of = std::_Get_size_of_n<8>(v9);
  v11 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v12 = &v11[8 * v6];
  *(_QWORD *)v12 = *a3;
  v13 = a1[1];
  v14 = v11;
  v15 = *a1;
  if ( a2 != v13 )
  {
    std::_Uninitialized_move<std::unique_ptr<CConnectorProcessingModeCharacteristics> *,std::allocator<std::unique_ptr<CConnectorProcessingModeCharacteristics>>>(
      v15,
      a2,
      v11);
    v14 = v12 + 8;
    v13 = a1[1];
    v15 = a2;
  }
  std::_Uninitialized_move<std::unique_ptr<CConnectorProcessingModeCharacteristics> *,std::allocator<std::unique_ptr<CConnectorProcessingModeCharacteristics>>>(
    v15,
    v13,
    v14);
  std::vector<std::unique_ptr<CConnectorProcessingModeCharacteristics>>::_Change_array(a1, v11, v8, v9, v11);
  return v12;
}
