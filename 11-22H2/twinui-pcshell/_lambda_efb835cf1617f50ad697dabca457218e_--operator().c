/*
 * XREFs of _lambda_efb835cf1617f50ad697dabca457218e_::operator() @ 0x18021164C
 * Callers:
 *     wil::ResultFromException__lambda_efb835cf1617f50ad697dabca457218e___ @ 0x1802113B4 (wil--ResultFromException__lambda_efb835cf1617f50ad697dabca457218e___.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?CreateInstance@CEnumerableObjectCollection@@SAJHAEBU_GUID@@PEAPEAX@Z @ 0x1800D0440 (-CreateInstance@CEnumerableObjectCollection@@SAJHAEBU_GUID@@PEAPEAX@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$_Try_emplace@AEBK$$V@?$map@KV?$ComPtr@UIObjectCollection@@@WRL@Microsoft@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKV?$ComPtr@UIObjectCollection@@@WRL@Microsoft@@@std@@@5@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBKV?$ComPtr@UIObjectCollection@@@WRL@Microsoft@@@std@@PEAX@std@@_N@1@AEBK@Z @ 0x1805A2414 (--$_Try_emplace@AEBK$$V@-$map@KV-$ComPtr@UIObjectCollection@@@WRL@Microsoft@@U-$less@K@std@@V-$a.c)
 */

void __fastcall lambda_efb835cf1617f50ad697dabca457218e_::operator()(_QWORD *a1)
{
  __int64 v2; // rbx
  const struct _GUID *v3; // rdx
  __int64 v4; // rcx
  int Instance; // eax
  __int64 v6; // rax
  int v7; // eax
  _BYTE v8[24]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  if ( !*(_QWORD *)(*(_QWORD *)std::map<unsigned long,Microsoft::WRL::ComPtr<IObjectCollection>>::_Try_emplace<unsigned long const &,>(
                                 *a1,
                                 v8,
                                 a1[1])
                  + 40LL) )
  {
    v2 = *(_QWORD *)std::map<unsigned long,Microsoft::WRL::ComPtr<IObjectCollection>>::_Try_emplace<unsigned long const &,>(
                      *a1,
                      v8,
                      a1[1]);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)(v2 + 40));
    Instance = CEnumerableObjectCollection::CreateInstance(v4, v3, (void **)(v2 + 40));
    if ( Instance < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x3E0,
        (int)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
        (const char *)(unsigned int)Instance);
  }
  if ( *(_QWORD *)(*(_QWORD *)std::map<unsigned long,Microsoft::WRL::ComPtr<IObjectCollection>>::_Try_emplace<unsigned long const &,>(
                                *a1,
                                v8,
                                a1[1])
                 + 40LL) )
  {
    v6 = std::map<unsigned long,Microsoft::WRL::ComPtr<IObjectCollection>>::_Try_emplace<unsigned long const &,>(
           *a1,
           v8,
           a1[1]);
    v7 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)v6 + 40LL) + 40LL))(
           *(_QWORD *)(*(_QWORD *)v6 + 40LL),
           *(_QWORD *)a1[2]);
    if ( v7 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x3E0,
        (int)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
        (const char *)(unsigned int)v7);
  }
}
