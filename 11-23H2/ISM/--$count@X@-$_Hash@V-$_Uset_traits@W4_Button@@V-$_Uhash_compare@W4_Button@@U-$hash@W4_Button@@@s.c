/*
 * XREFs of ??$count@X@?$_Hash@V?$_Uset_traits@W4_Button@@V?$_Uhash_compare@W4_Button@@U?$hash@W4_Button@@@std@@U?$equal_to@W4_Button@@@3@@std@@V?$allocator@W4_Button@@@3@$0A@@std@@@std@@QEBA_KAEBW4_Button@@@Z @ 0x1800DD128
 * Callers:
 *     ?OnButtonEnabledOnIdleChanged@MobileButtonDeviceCollection@@QEAAXKW4_Button@@_N@Z @ 0x1800DDBE4 (-OnButtonEnabledOnIdleChanged@MobileButtonDeviceCollection@@QEAAXKW4_Button@@_N@Z.c)
 *     ?OnInvalidateInput@MobileButtonDeviceCollection@@UEAAJPEAX@Z @ 0x1800DE400 (-OnInvalidateInput@MobileButtonDeviceCollection@@UEAAJPEAX@Z.c)
 * Callees:
 *     ?_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z @ 0x18000E920 (-_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z.c)
 *     ??$_Find_last@W4_Button@@@?$_Hash@V?$_Uset_traits@W4_Button@@V?$_Uhash_compare@W4_Button@@U?$hash@W4_Button@@@std@@U?$equal_to@W4_Button@@@3@@std@@V?$allocator@W4_Button@@@3@$0A@@std@@@std@@IEBA?AU?$_Hash_find_last_result@PEAU?$_List_node@W4_Button@@PEAX@std@@@1@AEBW4_Button@@_K@Z @ 0x1800DCEFC (--$_Find_last@W4_Button@@@-$_Hash@V-$_Uset_traits@W4_Button@@V-$_Uhash_compare@W4_Button@@U-$has.c)
 */

_BOOL8 __fastcall std::_Hash<std::_Uset_traits<enum _Button,std::_Uhash_compare<enum _Button,std::hash<enum _Button>,std::equal_to<enum _Button>>,std::allocator<enum _Button>,0>>::count<void>(
        __int64 a1,
        const unsigned __int8 *a2)
{
  unsigned __int64 appended; // rax
  _DWORD *v3; // rdx
  _QWORD *v4; // r11
  _QWORD v6[3]; // [rsp+20h] [rbp-18h] BYREF

  appended = std::_Fnv1a_append_bytes(a1, a2, 4uLL);
  return std::_Hash<std::_Uset_traits<enum _Button,std::_Uhash_compare<enum _Button,std::hash<enum _Button>,std::equal_to<enum _Button>>,std::allocator<enum _Button>,0>>::_Find_last<enum _Button>(
           v4,
           v6,
           v3,
           appended)[1] != 0LL;
}
