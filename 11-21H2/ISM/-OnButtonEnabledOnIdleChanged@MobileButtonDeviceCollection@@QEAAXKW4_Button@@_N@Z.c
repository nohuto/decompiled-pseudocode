/*
 * XREFs of ?OnButtonEnabledOnIdleChanged@MobileButtonDeviceCollection@@QEAAXKW4_Button@@_N@Z @ 0x1800C4AF0
 * Callers:
 *     ?SendCommandToInputDevice@RIMRawInputProvider@@UEAAJKPEBUDeviceCommandMessage@@@Z @ 0x1800BA7C0 (-SendCommandToInputDevice@RIMRawInputProvider@@UEAAJKPEBUDeviceCommandMessage@@@Z.c)
 * Callees:
 *     ??$count@X@?$_Hash@V?$_Uset_traits@W4_Button@@V?$_Uhash_compare@W4_Button@@U?$hash@W4_Button@@@std@@U?$equal_to@W4_Button@@@3@@std@@V?$allocator@W4_Button@@@3@$0A@@std@@@std@@QEBA_KAEBW4_Button@@@Z @ 0x1800C408C (--$count@X@-$_Hash@V-$_Uset_traits@W4_Button@@V-$_Uhash_compare@W4_Button@@U-$hash@W4_Button@@@s.c)
 *     ??$emplace@AEBW4_Button@@@?$_Hash@V?$_Uset_traits@W4_Button@@V?$_Uhash_compare@W4_Button@@U?$hash@W4_Button@@@std@@U?$equal_to@W4_Button@@@3@@std@@V?$allocator@W4_Button@@@3@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@W4_Button@@@std@@@std@@@std@@_N@1@AEBW4_Button@@@Z @ 0x1800C40CC (--$emplace@AEBW4_Button@@@-$_Hash@V-$_Uset_traits@W4_Button@@V-$_Uhash_compare@W4_Button@@U-$has.c)
 *     ?SendIOCTLMessage@MobileButtonDeviceCollection@@AEAAXW4_Button@@_N@Z @ 0x1800C5640 (-SendIOCTLMessage@MobileButtonDeviceCollection@@AEAAXW4_Button@@_N@Z.c)
 *     ?erase@?$_Hash@V?$_Uset_traits@W4_Button@@V?$_Uhash_compare@W4_Button@@U?$hash@W4_Button@@@std@@U?$equal_to@W4_Button@@@3@@std@@V?$allocator@W4_Button@@@3@$0A@@std@@@std@@QEAA_KAEBW4_Button@@@Z @ 0x1800C5994 (-erase@-$_Hash@V-$_Uset_traits@W4_Button@@V-$_Uhash_compare@W4_Button@@U-$hash@W4_Button@@@std@@.c)
 */

__int64 __fastcall MobileButtonDeviceCollection::OnButtonEnabledOnIdleChanged(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        char a4)
{
  float *v4; // rsi
  __int64 result; // rax
  __int64 v9; // r8
  _BYTE v10[24]; // [rsp+20h] [rbp-18h] BYREF
  unsigned int v11; // [rsp+50h] [rbp+18h] BYREF

  v11 = a3;
  v4 = (float *)(a1 + 2824);
  result = std::_Hash<std::_Uset_traits<enum _Button,std::_Uhash_compare<enum _Button,std::hash<enum _Button>,std::equal_to<enum _Button>>,std::allocator<enum _Button>,0>>::count<void>(
             a1 + 2824,
             (const unsigned __int8 *)&v11);
  if ( a4 )
  {
    if ( !result )
    {
      LOBYTE(v9) = a4;
      MobileButtonDeviceCollection::SendIOCTLMessage(a1, a3, v9);
      return std::_Hash<std::_Uset_traits<enum _Button,std::_Uhash_compare<enum _Button,std::hash<enum _Button>,std::equal_to<enum _Button>>,std::allocator<enum _Button>,0>>::emplace<enum _Button const &>(
               v4,
               (__int64)v10,
               (unsigned __int8 *)&v11);
    }
  }
  else if ( result )
  {
    MobileButtonDeviceCollection::SendIOCTLMessage(a1, a3, 0LL);
    return std::_Hash<std::_Uset_traits<enum _Button,std::_Uhash_compare<enum _Button,std::hash<enum _Button>,std::equal_to<enum _Button>>,std::allocator<enum _Button>,0>>::erase(
             v4,
             &v11);
  }
  return result;
}
