/*
 * XREFs of ?NewNode@?$CAtlList@V?$CComQIPtr@UIAudioProcess@@$1?_GUID_f7e5c987_5246_49cc_be2e_bb1de50fc200@@3U__s_GUID@@B@ATL@@V?$CComQIPtrElementTraits@UIAudioProcess@@$1?_GUID_f7e5c987_5246_49cc_be2e_bb1de50fc200@@3U__s_GUID@@B@2@@ATL@@AEAAPEAVCNode@12@PEAUIAudioProcess@@PEAV312@1@Z @ 0x1801322E4
 * Callers:
 *     ?AddHead@?$CAtlList@V?$CComQIPtr@UIAudioProcess@@$1?_GUID_f7e5c987_5246_49cc_be2e_bb1de50fc200@@3U__s_GUID@@B@ATL@@V?$CComQIPtrElementTraits@UIAudioProcess@@$1?_GUID_f7e5c987_5246_49cc_be2e_bb1de50fc200@@3U__s_GUID@@B@2@@ATL@@QEAAPEAU__POSITION@@PEAUIAudioProcess@@@Z @ 0x18013117C (-AddHead@-$CAtlList@V-$CComQIPtr@UIAudioProcess@@$1-_GUID_f7e5c987_5246_49cc_be2e_bb1de50fc200@@.c)
 * Callees:
 *     ?Create@CAtlPlex@ATL@@SAPEAU12@AEAPEAU12@_K1@Z @ 0x18004B120 (-Create@CAtlPlex@ATL@@SAPEAU12@AEAPEAU12@_K1@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1800C3178 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall ATL::CAtlList<ATL::CComQIPtr<IAudioProcess,&__s_GUID const _GUID_f7e5c987_5246_49cc_be2e_bb1de50fc200>,ATL::CComQIPtrElementTraits<IAudioProcess,&__s_GUID const _GUID_f7e5c987_5246_49cc_be2e_bb1de50fc200>>::NewNode(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  struct ATL::CAtlPlex *v7; // r8
  int v8; // edx
  _QWORD *i; // rcx
  __int64 *v10; // rdi
  __int64 v11; // rbp

  if ( !*(_QWORD *)(a1 + 32) )
  {
    v7 = ATL::CAtlPlex::Create((struct ATL::CAtlPlex **)(a1 + 24));
    if ( !v7 )
      ATL::AtlThrowImpl(-2147024882);
    v8 = *(_DWORD *)(a1 + 40);
    for ( i = (_QWORD *)((char *)v7 + 16 * (v8 - 1) + 8 * (unsigned int)(v8 - 1) + 8); --v8 >= 0; i -= 3 )
    {
      *i = *(_QWORD *)(a1 + 32);
      *(_QWORD *)(a1 + 32) = i;
    }
  }
  v10 = *(__int64 **)(a1 + 32);
  v11 = *v10;
  v10[2] = a2;
  if ( a2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
  *(_QWORD *)(a1 + 32) = v11;
  v10[1] = 0LL;
  *v10 = a4;
  ++*(_QWORD *)(a1 + 16);
  return v10;
}
