/*
 * XREFs of _lambda_1345ebecd25b457b52b4ea936c5f1c91_::operator() @ 0x1804EA80C
 * Callers:
 *     wil::ResultFromException__lambda_1345ebecd25b457b52b4ea936c5f1c91___ @ 0x1804EA340 (wil--ResultFromException__lambda_1345ebecd25b457b52b4ea936c5f1c91___.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CreateInstance@CEnumerableObjectCollection@@SAJHAEBU_GUID@@PEAPEAX@Z @ 0x1801243A0 (-CreateInstance@CEnumerableObjectCollection@@SAJHAEBU_GUID@@PEAPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$_Try_emplace@AEBK$$V@?$map@KV?$ComPtr@UIObjectCollection@@@WRL@Microsoft@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKV?$ComPtr@UIObjectCollection@@@WRL@Microsoft@@@std@@@5@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBKV?$ComPtr@UIObjectCollection@@@WRL@Microsoft@@@std@@PEAX@std@@_N@1@AEBK@Z @ 0x1804EA384 (--$_Try_emplace@AEBK$$V@-$map@KV-$ComPtr@UIObjectCollection@@@WRL@Microsoft@@U-$less@K@std@@V-$a.c)
 */

void __fastcall lambda_1345ebecd25b457b52b4ea936c5f1c91_::operator()(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // r9
  __int64 v6; // rbx
  const struct _GUID *v7; // rdx
  __int64 v8; // rcx
  int Instance; // eax
  __int64 v10; // r9
  __int64 v11; // rax
  int v12; // eax
  _BYTE v13[24]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  if ( !*(_QWORD *)(*(_QWORD *)std::map<unsigned long,Microsoft::WRL::ComPtr<IObjectCollection>>::_Try_emplace<unsigned long const &,>(
                                 *(__int64 **)a1,
                                 (__int64)v13,
                                 *(_DWORD **)(a1 + 8),
                                 a4)
                  + 40LL) )
  {
    v6 = *(_QWORD *)std::map<unsigned long,Microsoft::WRL::ComPtr<IObjectCollection>>::_Try_emplace<unsigned long const &,>(
                      *(__int64 **)a1,
                      (__int64)v13,
                      *(_DWORD **)(a1 + 8),
                      v5);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)(v6 + 40));
    Instance = CEnumerableObjectCollection::CreateInstance(v8, v7, (void **)(v6 + 40));
    if ( Instance < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x3B4,
        (__int64)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
        (const char *)(unsigned int)Instance);
  }
  if ( *(_QWORD *)(*(_QWORD *)std::map<unsigned long,Microsoft::WRL::ComPtr<IObjectCollection>>::_Try_emplace<unsigned long const &,>(
                                *(__int64 **)a1,
                                (__int64)v13,
                                *(_DWORD **)(a1 + 8),
                                v5)
                 + 40LL) )
  {
    v11 = std::map<unsigned long,Microsoft::WRL::ComPtr<IObjectCollection>>::_Try_emplace<unsigned long const &,>(
            *(__int64 **)a1,
            (__int64)v13,
            *(_DWORD **)(a1 + 8),
            v10);
    v12 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)v11 + 40LL) + 40LL))(
            *(_QWORD *)(*(_QWORD *)v11 + 40LL),
            **(_QWORD **)(a1 + 16));
    if ( v12 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x3B4,
        (__int64)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
        (const char *)(unsigned int)v12);
  }
}
