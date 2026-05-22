/*
 * XREFs of ?ExtractFeatureValue@HapticInterface@@AEAAJEGGGPEAH@Z @ 0x18018B250
 * Callers:
 *     ?QueryHardwareProperties@HapticInterface@@AEAAJXZ @ 0x18018B72C (-QueryHardwareProperties@HapticInterface@@AEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044BD0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x18004A918 (memset_0.c)
 *     ??_V@YAXPEAX@Z @ 0x18004AF4C (--_V@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18004B774 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18007DEDC (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z @ 0x180080BA4 (-_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z.c)
 *     ??$_Find_last@G@?$_Hash@V?$_Umap_traits@GV?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@std@@@std@@V?$_Uhash_compare@GU?$hash@G@std@@U?$equal_to@G@2@@2@V?$allocator@U?$pair@$$CBGV?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@std@@@std@@@std@@@2@$0A@@std@@@std@@IEBA?AU?$_Hash_find_last_result@PEAU?$_List_node@U?$pair@$$CBGV?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@std@@@std@@@std@@PEAX@std@@@1@AEBG_K@Z @ 0x18017546C (--$_Find_last@G@-$_Hash@V-$_Umap_traits@GV-$unique_ptr@$$BY0A@EU-$default_delete@$$BY0A@E@std@@@.c)
 *     ??$_Try_emplace@AEBG$$V@?$_Hash@V?$_Umap_traits@GV?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@std@@@std@@V?$_Uhash_compare@GU?$hash@G@std@@U?$equal_to@G@2@@2@V?$allocator@U?$pair@$$CBGV?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@std@@@std@@@std@@@2@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CBGV?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@std@@@std@@@std@@PEAX@std@@_N@1@AEBG@Z @ 0x18018AC08 (--$_Try_emplace@AEBG$$V@-$_Hash@V-$_Umap_traits@GV-$unique_ptr@$$BY0A@EU-$default_delete@$$BY0A@.c)
 *     ??$emplace@AEAEV?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@std@@@std@@@?$_Hash@V?$_Umap_traits@GV?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@std@@@std@@V?$_Uhash_compare@GU?$hash@G@std@@U?$equal_to@G@2@@2@V?$allocator@U?$pair@$$CBGV?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@std@@@std@@@std@@@2@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBGV?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@std@@@std@@@std@@@std@@@std@@@std@@_N@1@AEAE$$QEAV?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@std@@@1@@Z @ 0x18018AD30 (--$emplace@AEAEV-$unique_ptr@$$BY0A@EU-$default_delete@$$BY0A@E@std@@@std@@@-$_Hash@V-$_Umap_tra.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall HapticInterface::ExtractFeatureValue(
        HapticInterface *this,
        unsigned __int8 a2,
        USHORT a3,
        USAGE a4,
        USAGE a5,
        int *a6)
{
  unsigned __int8 v7; // di
  float *v9; // r12
  __int64 appended; // rax
  size_t v11; // r14
  unsigned __int8 *v12; // rax
  unsigned __int8 *v13; // rbx
  unsigned int LastError; // edi
  const char *v15; // r9
  ULONG ReportLength; // ebx
  __int64 v18; // rax
  LONG UsageValue; // [rsp+40h] [rbp-20h] BYREF
  _QWORD v20[3]; // [rsp+48h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+38h]
  void *v22; // [rsp+A0h] [rbp+40h] BYREF
  __int16 v23; // [rsp+A8h] [rbp+48h] BYREF
  USHORT v24; // [rsp+B0h] [rbp+50h]

  v24 = a3;
  LOBYTE(v23) = a2;
  v7 = a2;
  v9 = (float *)((char *)this + 88);
  LOWORD(v22) = a2;
  appended = std::_Fnv1a_append_bytes((__int64)this, (const unsigned __int8 *const)&v22, 2uLL);
  if ( std::_Hash<std::_Umap_traits<unsigned short,std::unique_ptr<unsigned char [0]>,std::_Uhash_compare<unsigned short,std::hash<unsigned short>,std::equal_to<unsigned short>>,std::allocator<std::pair<unsigned short const,std::unique_ptr<unsigned char [0]>>>,0>>::_Find_last<unsigned short>(
         v9,
         v20,
         &v22,
         appended)[1] )
    goto LABEL_12;
  v11 = *((unsigned __int16 *)this + 84);
  v12 = (unsigned __int8 *)operator new[](v11, (const struct std::nothrow_t *)&std::nothrow);
  v13 = v12;
  v22 = v12;
  if ( v12 )
  {
    memset_0(v12, 0, v11);
    *v13 = v7;
    if ( !HidD_GetFeature(*((HANDLE *)this + 32), v13, v11) )
    {
      LastError = wil::details::in1diag3::Return_GetLastError(
                    retaddr,
                    (void *)0x7F,
                    (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\stylus\\api\\serve"
                                  "r\\hapticinterface.cpp",
                    v15);
      goto LABEL_6;
    }
    std::_Hash<std::_Umap_traits<unsigned short,std::unique_ptr<unsigned char [0]>,std::_Uhash_compare<unsigned short,std::hash<unsigned short>,std::equal_to<unsigned short>>,std::allocator<std::pair<unsigned short const,std::unique_ptr<unsigned char [0]>>>,0>>::emplace<unsigned char &,std::unique_ptr<unsigned char [0]>>(
      v9,
      (__int64)v20,
      (unsigned __int8 *)&v23,
      (__int64 *)&v22);
    if ( v22 )
      operator delete[](v22);
    v7 = v23;
LABEL_12:
    UsageValue = 0;
    ReportLength = *((unsigned __int16 *)this + 84);
    v23 = v7;
    v18 = std::_Hash<std::_Umap_traits<unsigned short,std::unique_ptr<unsigned char [0]>,std::_Uhash_compare<unsigned short,std::hash<unsigned short>,std::equal_to<unsigned short>>,std::allocator<std::pair<unsigned short const,std::unique_ptr<unsigned char [0]>>>,0>>::_Try_emplace<unsigned short const &,>(
            v9,
            (__int64)v20,
            (unsigned __int8 *)&v23);
    if ( HidP_GetScaledUsageValue(
           HidP_Feature,
           a4,
           v24,
           a5,
           &UsageValue,
           *((PHIDP_PREPARSED_DATA *)this + 19),
           *(PCHAR *)(*(_QWORD *)v18 + 24LL),
           ReportLength) < 0 )
      return 2147500037LL;
    *a6 = UsageValue;
    return 0LL;
  }
  LastError = -2147024882;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x75,
    (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\stylus\\api\\server\\hapticinterface.cpp",
    (const char *)0x8007000ELL);
LABEL_6:
  if ( v13 )
    operator delete[](v13);
  return LastError;
}
