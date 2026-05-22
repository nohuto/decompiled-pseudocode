/*
 * XREFs of ?GetContentForResourceId@CPresentationManager@@QEAAPEAVCPresentationSurface@@_K@Z @ 0x1801B0D28
 * Callers:
 *     ?Initialize@CCompositionFramePresentStatistics@@IEAAJPEAVCPresentationManager@@AEAV?$unique_ptr@VCSerializedConsumerMessage@@U?$default_delete@VCSerializedConsumerMessage@@@std@@@std@@@Z @ 0x1801B0E04 (-Initialize@CCompositionFramePresentStatistics@@IEAAJPEAVCPresentationManager@@AEAV-$unique_ptr@.c)
 *     ?Create@CIndependentFlipFramePresentStatistics@@SAJPEAVCPresentationManager@@AEAV?$unique_ptr@VCSerializedConsumerMessage@@U?$default_delete@VCSerializedConsumerMessage@@@std@@@std@@PEAPEAV1@@Z @ 0x1801B1118 (-Create@CIndependentFlipFramePresentStatistics@@SAJPEAVCPresentationManager@@AEAV-$unique_ptr@VC.c)
 * Callees:
 *     ??$_Find_lower_bound@_K@?$_Tree@V?$_Tmap_traits@_KPEAVCPresentationSurface@@U?$less@_K@std@@V?$allocator@U?$pair@$$CB_KPEAVCPresentationSurface@@@std@@@3@$0A@@std@@@std@@IEBA?AU?$_Tree_find_result@PEAU?$_Tree_node@U?$pair@$$CB_KPEAVCPresentationSurface@@@std@@PEAX@std@@@1@AEB_K@Z @ 0x1801AFA98 (--$_Find_lower_bound@_K@-$_Tree@V-$_Tmap_traits@_KPEAVCPresentationSurface@@U-$less@_K@std@@V-$a.c)
 */

struct CPresentationSurface *__fastcall CPresentationManager::GetContentForResourceId(
        CPresentationManager *this,
        unsigned __int64 a2)
{
  unsigned __int64 v2; // r10
  _QWORD *v3; // r11
  _BYTE v5[16]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v6; // [rsp+30h] [rbp-18h]
  unsigned __int64 v7; // [rsp+58h] [rbp+10h] BYREF

  v7 = a2;
  std::_Tree<std::_Tmap_traits<unsigned __int64,CPresentationSurface *,std::less<unsigned __int64>,std::allocator<std::pair<unsigned __int64 const,CPresentationSurface *>>,0>>::_Find_lower_bound<unsigned __int64>(
    (__int64 *)this + 20,
    (__int64)v5,
    &v7);
  if ( *(_BYTE *)(v6 + 25) || v2 < *(_QWORD *)(v6 + 32) || v6 == *v3 )
    return 0LL;
  else
    return *(struct CPresentationSurface **)(v6 + 40);
}
