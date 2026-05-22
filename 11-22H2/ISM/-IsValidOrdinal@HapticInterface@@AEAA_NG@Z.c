/*
 * XREFs of ?IsValidOrdinal@HapticInterface@@AEAA_NG@Z @ 0x1801B7838
 * Callers:
 *     ?SendHapticFeedbackInternal@HapticInterface@@AEAAJGMIII@Z @ 0x1801B7D2C (-SendHapticFeedbackInternal@HapticInterface@@AEAAJGMIII@Z.c)
 * Callees:
 *     ?_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z @ 0x18000F030 (-_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z.c)
 *     ??$_Find_last@G@?$_Hash@V?$_Umap_traits@GV?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@std@@@std@@V?$_Uhash_compare@GU?$hash@G@std@@U?$equal_to@G@2@@2@V?$allocator@U?$pair@$$CBGV?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@std@@@std@@@std@@@2@$0A@@std@@@std@@IEBA?AU?$_Hash_find_last_result@PEAU?$_List_node@U?$pair@$$CBGV?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@std@@@std@@@std@@PEAX@std@@@1@AEBG_K@Z @ 0x1801A2660 (--$_Find_last@G@-$_Hash@V-$_Umap_traits@GV-$unique_ptr@$$BY0A@EU-$default_delete@$$BY0A@E@std@@@.c)
 */

char __fastcall HapticInterface::IsValidOrdinal(HapticInterface *this, __int16 a2)
{
  unsigned __int64 appended; // rax
  __int64 v3; // r11
  _QWORD *v4; // rax
  char v5; // cl
  _QWORD v7[3]; // [rsp+20h] [rbp-18h] BYREF
  __int16 v8; // [rsp+48h] [rbp+10h] BYREF

  v8 = a2;
  if ( (unsigned __int16)(a2 - 1) <= 1u )
    return 1;
  appended = std::_Fnv1a_append_bytes((__int64)this, (const unsigned __int8 *const)&v8, 2uLL);
  v4 = std::_Hash<std::_Umap_traits<unsigned short,std::unique_ptr<unsigned char [0]>,std::_Uhash_compare<unsigned short,std::hash<unsigned short>,std::equal_to<unsigned short>>,std::allocator<std::pair<unsigned short const,std::unique_ptr<unsigned char [0]>>>,0>>::_Find_last<unsigned short>(
         (_QWORD *)(v3 + 24),
         v7,
         &v8,
         appended);
  v5 = 0;
  if ( v4[1] )
    return 1;
  return v5;
}
