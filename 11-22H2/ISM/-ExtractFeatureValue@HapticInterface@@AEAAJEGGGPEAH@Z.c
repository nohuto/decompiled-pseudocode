/*
 * XREFs of ?ExtractFeatureValue@HapticInterface@@AEAAJEGGGPEAH@Z @ 0x1801B73A0
 * Callers:
 *     ?QueryHardwareProperties@HapticInterface@@AEAAJXZ @ 0x1801B788C (-QueryHardwareProperties@HapticInterface@@AEAAJXZ.c)
 * Callees:
 *     ?_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z @ 0x18000F030 (-_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z.c)
 *     ??1?$VariableSizedPayloadStorage@UInputInfo@@@@QEAA@XZ @ 0x18001B9A0 (--1-$VariableSizedPayloadStorage@UInputInfo@@@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800334B8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x180057418 (memset_0.c)
 *     ??_V@YAXPEAX@Z @ 0x180057AD8 (--_V@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180058470 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800A7C6C (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ??$_Find_last@G@?$_Hash@V?$_Umap_traits@GV?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@std@@@std@@V?$_Uhash_compare@GU?$hash@G@std@@U?$equal_to@G@2@@2@V?$allocator@U?$pair@$$CBGV?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@std@@@std@@@std@@@2@$0A@@std@@@std@@IEBA?AU?$_Hash_find_last_result@PEAU?$_List_node@U?$pair@$$CBGV?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@std@@@std@@@std@@PEAX@std@@@1@AEBG_K@Z @ 0x1801A2660 (--$_Find_last@G@-$_Hash@V-$_Umap_traits@GV-$unique_ptr@$$BY0A@EU-$default_delete@$$BY0A@E@std@@@.c)
 *     ??$_Try_emplace@G$$V@?$_Hash@V?$_Umap_traits@GV?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@std@@@std@@V?$_Uhash_compare@GU?$hash@G@std@@U?$equal_to@G@2@@2@V?$allocator@U?$pair@$$CBGV?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@std@@@std@@@std@@@2@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CBGV?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@std@@@std@@@std@@PEAX@std@@_N@1@$$QEAG@Z @ 0x1801B6D4C (--$_Try_emplace@G$$V@-$_Hash@V-$_Umap_traits@GV-$unique_ptr@$$BY0A@EU-$default_delete@$$BY0A@E@s.c)
 *     ??$emplace@AEAEV?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@std@@@std@@@?$_Hash@V?$_Umap_traits@GV?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@std@@@std@@V?$_Uhash_compare@GU?$hash@G@std@@U?$equal_to@G@2@@2@V?$allocator@U?$pair@$$CBGV?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@std@@@std@@@std@@@2@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBGV?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@std@@@std@@@std@@@std@@@std@@@std@@_N@1@AEAE$$QEAV?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@std@@@1@@Z @ 0x1801B6E74 (--$emplace@AEAEV-$unique_ptr@$$BY0A@EU-$default_delete@$$BY0A@E@std@@@std@@@-$_Hash@V-$_Umap_tra.c)
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
  unsigned __int8 v6; // si
  _QWORD *v8; // r12
  unsigned __int64 appended; // rax
  unsigned __int16 *v10; // rbx
  size_t v11; // rbx
  unsigned __int8 *v12; // rax
  unsigned __int8 *v13; // rdi
  unsigned int LastError; // ebx
  const char *v16; // r9
  ULONG ReportLength; // ebx
  __int64 v18; // rax
  LONG UsageValue; // [rsp+40h] [rbp-28h] BYREF
  _QWORD v20[4]; // [rsp+48h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+40h]
  void *v22; // [rsp+B0h] [rbp+48h] BYREF
  __int16 v23; // [rsp+B8h] [rbp+50h] BYREF
  USHORT v24; // [rsp+C0h] [rbp+58h]
  USAGE v25; // [rsp+C8h] [rbp+60h]

  v25 = a4;
  v24 = a3;
  LOBYTE(v23) = a2;
  v6 = a2;
  v8 = (_QWORD *)((char *)this + 88);
  LOWORD(v22) = a2;
  appended = std::_Fnv1a_append_bytes((__int64)this, (const unsigned __int8 *const)&v22, 2uLL);
  v10 = (unsigned __int16 *)((char *)this + 168);
  if ( !std::_Hash<std::_Umap_traits<unsigned short,std::unique_ptr<unsigned char [0]>,std::_Uhash_compare<unsigned short,std::hash<unsigned short>,std::equal_to<unsigned short>>,std::allocator<std::pair<unsigned short const,std::unique_ptr<unsigned char [0]>>>,0>>::_Find_last<unsigned short>(
          v8,
          v20,
          &v22,
          appended)[1] )
  {
    v11 = *v10;
    v12 = (unsigned __int8 *)operator new[]((unsigned int)v11, (const struct std::nothrow_t *)&std::nothrow);
    v13 = v12;
    v22 = v12;
    if ( !v12 )
    {
      LastError = -2147024882;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x75,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\stylus\\api\\server\\hapticinterface.cpp",
        (const char *)0x8007000ELL);
      VariableSizedPayloadStorage<InputInfo>::~VariableSizedPayloadStorage<InputInfo>(&v22);
      return LastError;
    }
    memset_0(v12, 0, v11);
    *v13 = v6;
    if ( !HidD_GetFeature(*((HANDLE *)this + 32), v13, v11) )
    {
      LastError = wil::details::in1diag3::Return_GetLastError(
                    retaddr,
                    (void *)0x7F,
                    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\stylus\\api\\server\\ha"
                             "pticinterface.cpp",
                    v16);
      operator delete[](v13);
      return LastError;
    }
    std::_Hash<std::_Umap_traits<unsigned short,std::unique_ptr<unsigned char [0]>,std::_Uhash_compare<unsigned short,std::hash<unsigned short>,std::equal_to<unsigned short>>,std::allocator<std::pair<unsigned short const,std::unique_ptr<unsigned char [0]>>>,0>>::emplace<unsigned char &,std::unique_ptr<unsigned char [0]>>(
      v8,
      (__int64)v20,
      (unsigned __int8 *)&v23,
      (__int64 *)&v22);
    v10 = (unsigned __int16 *)((char *)this + 168);
    if ( v22 )
      operator delete[](v22);
    v6 = v23;
  }
  UsageValue = 0;
  ReportLength = *v10;
  v23 = v6;
  v18 = std::_Hash<std::_Umap_traits<unsigned short,std::unique_ptr<unsigned char [0]>,std::_Uhash_compare<unsigned short,std::hash<unsigned short>,std::equal_to<unsigned short>>,std::allocator<std::pair<unsigned short const,std::unique_ptr<unsigned char [0]>>>,0>>::_Try_emplace<unsigned short,>(
          v8,
          (__int64)v20,
          (unsigned __int8 *)&v23);
  if ( HidP_GetScaledUsageValue(
         HidP_Feature,
         v25,
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
