/*
 * XREFs of ?Rehash@?$CAtlMap@_KV?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@V?$CElementTraits@_K@2@V?$CElementTraits@V?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@@2@@ATL@@QEAAXI@Z @ 0x140056670
 * Callers:
 *     ?PublishDeviceGraphWnfState@@YAXXZ @ 0x14000AA3C (-PublishDeviceGraphWnfState@@YAXXZ.c)
 *     ??1?$CAtlMap@_KV?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@V?$CElementTraits@_K@2@V?$CElementTraits@V?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@@2@@ATL@@QEAA@XZ @ 0x140055FC4 (--1-$CAtlMap@_KV-$CAtlList@PEAVCDisplayNode@@V-$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@V-$.c)
 *     ?NewNode@?$CAtlMap@_KV?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@V?$CElementTraits@_K@2@V?$CElementTraits@V?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@@2@@ATL@@AEAAPEAVCNode@12@_KII@Z @ 0x140062F4C (-NewNode@-$CAtlMap@_KV-$CAtlList@PEAVCDisplayNode@@V-$CElementTraits@PEAVCDisplayNode@@@ATL@@@AT.c)
 * Callees:
 *     ?UpdateRehashThresholds@?$CAtlMap@_KV?$com_ptr_t@UICPAudioHistoryControl@@Uerr_returncode_policy@wil@@@wil@@V?$CElementTraits@_K@ATL@@V?$CElementTraits@V?$com_ptr_t@UICPAudioHistoryControl@@Uerr_returncode_policy@wil@@@wil@@@4@@ATL@@AEAAXXZ @ 0x14000A848 (-UpdateRehashThresholds@-$CAtlMap@_KV-$com_ptr_t@UICPAudioHistoryControl@@Uerr_returncode_policy.c)
 *     ??_V@YAXPEAX@Z @ 0x140028500 (--_V@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x140028518 (--_U@YAPEAX_K@Z.c)
 *     memset_0 @ 0x140029234 (memset_0.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x14004B9DC (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?InitHashTable@?$CAtlMap@_KV?$com_ptr_t@UICPAudioHistoryControl@@Uerr_returncode_policy@wil@@@wil@@V?$CElementTraits@_K@ATL@@V?$CElementTraits@V?$com_ptr_t@UICPAudioHistoryControl@@Uerr_returncode_policy@wil@@@wil@@@4@@ATL@@QEAA_NI_N@Z @ 0x140053AA4 (-InitHashTable@-$CAtlMap@_KV-$com_ptr_t@UICPAudioHistoryControl@@Uerr_returncode_policy@wil@@@wi.c)
 *     ?PickSize@?$CAtlMap@_KV?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@V?$CElementTraits@_K@2@V?$CElementTraits@V?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@@2@@ATL@@AEBAI_K@Z @ 0x14005449C (-PickSize@-$CAtlMap@_KV-$CAtlList@PEAVCDisplayNode@@V-$CElementTraits@PEAVCDisplayNode@@@ATL@@@A.c)
 */

void __fastcall ATL::CAtlMap<unsigned __int64,ATL::CAtlList<CDisplayNode *,ATL::CElementTraits<CDisplayNode *>>,ATL::CElementTraits<unsigned __int64>,ATL::CElementTraits<ATL::CAtlList<CDisplayNode *,ATL::CElementTraits<CDisplayNode *>>>>::Rehash(
        __int64 a1,
        unsigned int a2)
{
  unsigned int v2; // edi
  __int64 v3; // rbx
  unsigned int *v4; // rsi
  __int64 v5; // r15
  size_t v6; // rax
  void *v7; // r14
  __int64 i; // r9
  __int64 v9; // r10
  __int64 v10; // r8
  __int64 v11; // rdx
  __int64 v12; // [rsp+20h] [rbp-38h]
  unsigned int v14; // [rsp+68h] [rbp+10h]
  void *v15; // [rsp+70h] [rbp+18h]
  unsigned int *v16; // [rsp+78h] [rbp+20h]

  v14 = a2;
  v2 = a2;
  v3 = a1;
  if ( !a2 )
  {
    v2 = ATL::CAtlMap<unsigned __int64,ATL::CAtlList<CDisplayNode *,ATL::CElementTraits<CDisplayNode *>>,ATL::CElementTraits<unsigned __int64>,ATL::CElementTraits<ATL::CAtlList<CDisplayNode *,ATL::CElementTraits<CDisplayNode *>>>>::PickSize(
           a1,
           *(_QWORD *)(a1 + 8));
    v14 = v2;
  }
  v4 = (unsigned int *)(v3 + 16);
  v16 = (unsigned int *)(v3 + 16);
  if ( v2 != *(_DWORD *)(v3 + 16) )
  {
    if ( *(_QWORD *)v3 )
    {
      v5 = v2;
      v12 = v2;
      v6 = 8LL * v2;
      if ( !is_mul_ok(v2, 8uLL) )
        v6 = -1LL;
      try
      {
        v7 = operator new[](v6);
        v15 = v7;
      }
      catch ( ... )
      {
        v3 = a1;
        v2 = v14;
        v7 = v15;
        v4 = v16;
        v5 = v12;
      }
      if ( !v7 )
        ATL::AtlThrowImpl(-2147024882);
      memset_0(v7, 0, 8 * v5);
      for ( i = 0LL; (unsigned int)i < *v4; i = (unsigned int)(i + 1) )
      {
        v9 = *(_QWORD *)(*(_QWORD *)v3 + 8 * i);
        if ( v9 )
        {
          do
          {
            v10 = *(_QWORD *)(v9 + 56);
            v11 = *(_DWORD *)(v9 + 64) % v2;
            *(_QWORD *)(v9 + 56) = *((_QWORD *)v7 + v11);
            *((_QWORD *)v7 + (unsigned int)v11) = v9;
            v9 = v10;
          }
          while ( v10 );
        }
      }
      operator delete[](*(void **)v3);
      *(_QWORD *)v3 = v7;
      *v4 = v2;
      ATL::CAtlMap<unsigned __int64,wil::com_ptr_t<ICPAudioHistoryControl,wil::err_returncode_policy>,ATL::CElementTraits<unsigned __int64>,ATL::CElementTraits<wil::com_ptr_t<ICPAudioHistoryControl,wil::err_returncode_policy>>>::UpdateRehashThresholds(v3);
    }
    else
    {
      ATL::CAtlMap<unsigned __int64,wil::com_ptr_t<ICPAudioHistoryControl,wil::err_returncode_policy>,ATL::CElementTraits<unsigned __int64>,ATL::CElementTraits<wil::com_ptr_t<ICPAudioHistoryControl,wil::err_returncode_policy>>>::InitHashTable(
        (void **)v3,
        v2,
        0);
    }
  }
}
