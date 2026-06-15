/*
 * XREFs of wil::details::lambda_call__lambda_5b1683911ba3f7f9405586de8ce9ce3b___::reset @ 0x1800E1CB0
 * Callers:
 *     ?CreateAudioSession@CAudioSessionManager@@QEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@KKKPEAPEAVCAudioSession@@@Z @ 0x18001ACB0 (-CreateAudioSession@CAudioSessionManager@@QEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@K.c)
 *     wil::details::lambda_call__lambda_5b1683911ba3f7f9405586de8ce9ce3b___::_lambda_call__lambda_5b1683911ba3f7f9405586de8ce9ce3b___ @ 0x1800DF210 (wil--details--lambda_call__lambda_5b1683911ba3f7f9405586de8ce9ce3b___--_lambda_call__lambda_5b16.c)
 * Callees:
 *     ??0?$CSimpleStringT@G$0A@@ATL@@QEAA@PEAUIAtlStringMgr@1@@Z @ 0x18001CA18 (--0-$CSimpleStringT@G$0A@@ATL@@QEAA@PEAUIAtlStringMgr@1@@Z.c)
 *     ?Release@CStringData@ATL@@QEAAXXZ @ 0x18001CA60 (-Release@CStringData@ATL@@QEAAXXZ.c)
 *     ?ToString@CAudioSessionInstanceId@@QEBAJAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@Z @ 0x18001CAA0 (-ToString@CAudioSessionInstanceId@@QEBAJAEAV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@A.c)
 *     ?_Erase_bucket@?$_Hash@V?$_Umap_traits@VCAudioSessionInstanceId@@V?$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@V?$_Uhash_compare@VCAudioSessionInstanceId@@U?$hash@VCAudioSessionInstanceId@@@std@@U?$equal_to@VCAudioSessionInstanceId@@@3@@std@@V?$allocator@U?$pair@$$CBVCAudioSessionInstanceId@@V?$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@@std@@@5@$0A@@std@@@std@@IEAAXPEAU?$_List_node@U?$pair@$$CBVCAudioSessionInstanceId@@V?$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@2@_K@Z @ 0x1800E1504 (-_Erase_bucket@-$_Hash@V-$_Umap_traits@VCAudioSessionInstanceId@@V-$com_ptr_t@VCAudioSession@@Ue.c)
 *     ?_Unchecked_erase@?$list@U?$pair@$$CBVCAudioSessionInstanceId@@V?$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@@std@@V?$allocator@U?$pair@$$CBVCAudioSessionInstanceId@@V?$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@@std@@@2@@std@@AEAAPEAU?$_List_node@U?$pair@$$CBVCAudioSessionInstanceId@@V?$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@2@QEAU32@@Z @ 0x1800E1B28 (-_Unchecked_erase@-$list@U-$pair@$$CBVCAudioSessionInstanceId@@V-$com_ptr_t@VCAudioSession@@Uerr.c)
 *     ?Hash@?$CStringElementTraits@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@ATL@@SAKPEBG@Z @ 0x1800E6488 (-Hash@-$CStringElementTraits@V-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@ATL.c)
 *     ?MakeUpper@?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAAEAV12@XZ @ 0x1800E781C (-MakeUpper@-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAAEAV12@XZ.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall wil::details::lambda_call__lambda_5b1683911ba3f7f9405586de8ce9ce3b___::reset(__int64 *a1)
{
  unsigned int v1; // edi
  __int64 v2; // rsi
  _QWORD *v3; // rbx
  _QWORD *Upper; // rax
  char *v5; // rdx
  char *v6; // [rsp+30h] [rbp+8h] BYREF

  v1 = 0;
  if ( *((_BYTE *)a1 + 16) )
  {
    *((_BYTE *)a1 + 16) = 0;
    v2 = *a1;
    v3 = *(_QWORD **)a1[1];
    ATL::CSimpleStringT<unsigned short,0>::CSimpleStringT<unsigned short,0>(&v6, (__int64)&ATL::g_strmgr);
    if ( (int)CAudioSessionInstanceId::ToString((__int64)(v3 + 2), (void **)&v6) >= 0 )
    {
      Upper = (_QWORD *)ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::MakeUpper(&v6);
      v1 = ATL::CStringElementTraits<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>>::Hash(*Upper);
    }
    ATL::CStringData::Release((ATL::CStringData *)(v6 - 24));
    std::_Hash<std::_Umap_traits<CAudioSessionInstanceId,wil::com_ptr_t<CAudioSession,wil::err_returncode_policy>,std::_Uhash_compare<CAudioSessionInstanceId,std::hash<CAudioSessionInstanceId>,std::equal_to<CAudioSessionInstanceId>>,std::allocator<std::pair<CAudioSessionInstanceId const,wil::com_ptr_t<CAudioSession,wil::err_returncode_policy>>>,0>>::_Erase_bucket(
      v2 + 48,
      v3,
      v1 & *(_QWORD *)(v2 + 96));
    std::list<std::pair<CAudioSessionInstanceId const,wil::com_ptr_t<CAudioSession,wil::err_returncode_policy>>>::_Unchecked_erase(
      v2 + 56,
      v5);
  }
}
