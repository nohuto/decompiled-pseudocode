/*
 * XREFs of ?IsValidAECLoopbackSelectionMode@@YA_NPEBG@Z @ 0x18000CAF8
 * Callers:
 *     ?ConfigureAuxiliaryInputStream@CSharedStreamGroupProxy@@IEAAJXZ @ 0x18000D4B8 (-ConfigureAuxiliaryInputStream@CSharedStreamGroupProxy@@IEAAJXZ.c)
 *     ?GetCurrentLoopbackEndpointIdInternal@@YAJPEAGPEAPEAG@Z @ 0x180107570 (-GetCurrentLoopbackEndpointIdInternal@@YAJPEAGPEAPEAG@Z.c)
 *     ?UpdateLoopbackEndpointChangeRegistration@CSharedStreamGroupProxy@@UEAAXXZ @ 0x18010A7C0 (-UpdateLoopbackEndpointChangeRegistration@CSharedStreamGroupProxy@@UEAAXXZ.c)
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x180027F80 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ??$_Find_lower_bound@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@?$_Tree@V?$_Tmap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@W4AEC_LOOPBACK_SELECTION_MODE@@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@W4AEC_LOOPBACK_SELECTION_MODE@@@std@@@2@$0A@@std@@@std@@IEBA?AU?$_Tree_find_result@PEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@W4AEC_LOOPBACK_SELECTION_MODE@@@std@@PEAX@std@@@1@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@@Z @ 0x1800532E8 (--$_Find_lower_bound@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@_ea_1800532E8.c)
 *     ??$_Lower_bound_duplicate@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@?$_Tree@V?$_Tmap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@W4AEC_LOOPBACK_SELECTION_MODE@@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@W4AEC_LOOPBACK_SELECTION_MODE@@@std@@@2@$0A@@std@@@std@@IEBA_NQEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@W4AEC_LOOPBACK_SELECTION_MODE@@@std@@PEAX@1@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@@Z @ 0x1800533AC (--$_Lower_bound_duplicate@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@-$_Tree.c)
 *     __security_check_cookie @ 0x1800669A0 (__security_check_cookie.c)
 *     ??3@YAXPEAX_K@Z @ 0x180067028 (--3@YAXPEAX_K@Z.c)
 *     ?_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z @ 0x1800D2D00 (-_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z.c)
 */

char __fastcall IsValidAECLoopbackSelectionMode(const unsigned __int16 *a1)
{
  char v1; // bl
  char v2; // di
  __int64 v4; // rcx
  __int64 v5; // rcx
  char v6; // al
  __int64 v7; // rcx
  void *v8; // rcx
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // [rsp+20h] [rbp-50h] BYREF
  void *v11; // [rsp+28h] [rbp-48h] BYREF
  _BYTE v12[16]; // [rsp+30h] [rbp-40h] BYREF
  __int64 v13; // [rsp+40h] [rbp-30h]
  _QWORD v14[3]; // [rsp+48h] [rbp-28h] BYREF
  unsigned __int64 v15; // [rsp+60h] [rbp-10h]

  v1 = 0;
  LODWORD(v10) = 0;
  v2 = 0;
  if ( a1 )
  {
    std::wstring::wstring(v14, a1);
    v2 = 1;
    std::_Tree<std::_Tmap_traits<std::wstring,enum AEC_LOOPBACK_SELECTION_MODE,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,enum AEC_LOOPBACK_SELECTION_MODE>>,0>>::_Find_lower_bound<std::wstring>(
      v4,
      v12,
      v14);
    v6 = std::_Tree<std::_Tmap_traits<std::wstring,enum AEC_LOOPBACK_SELECTION_MODE,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,enum AEC_LOOPBACK_SELECTION_MODE>>,0>>::_Lower_bound_duplicate<std::wstring>(
           v5,
           v13,
           v14);
    v7 = qword_1801D0068;
    if ( v6 )
      v7 = v13;
    if ( v7 != qword_1801D0068 )
      v1 = 1;
  }
  if ( (v2 & 1) != 0 && v15 >= 8 )
  {
    v8 = (void *)v14[0];
    v9 = 2 * v15 + 2;
    v10 = v9;
    v11 = (void *)v14[0];
    if ( v9 >= 0x1000 )
    {
      std::_Adjust_manually_vector_aligned(&v11, &v10);
      v9 = v10;
      v8 = v11;
    }
    operator delete(v8, v9);
  }
  return v1;
}
