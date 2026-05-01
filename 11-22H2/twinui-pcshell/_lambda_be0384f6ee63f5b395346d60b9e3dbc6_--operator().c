/*
 * XREFs of _lambda_be0384f6ee63f5b395346d60b9e3dbc6_::operator() @ 0x180074404
 * Callers:
 *     wil::ResultFromException__lambda_be0384f6ee63f5b395346d60b9e3dbc6___ @ 0x1800743E4 (wil--ResultFromException__lambda_be0384f6ee63f5b395346d60b9e3dbc6___.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??$_Try_emplace@AEBK$$V@?$map@KV?$ComPtr@UIApplicationFrame@@@WRL@Microsoft@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKV?$ComPtr@UIApplicationFrame@@@WRL@Microsoft@@@std@@@5@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBKV?$ComPtr@UIApplicationFrame@@@WRL@Microsoft@@@std@@PEAX@std@@_N@1@AEBK@Z @ 0x180030038 (--$_Try_emplace@AEBK$$V@-$map@KV-$ComPtr@UIApplicationFrame@@@WRL@Microsoft@@U-$less@K@std@@V-$a.c)
 *     ?EnsureEntry@WindowSizeConverter@@AEAAJPEAUIImmersiveMonitor@@@Z @ 0x180074498 (-EnsureEntry@WindowSizeConverter@@AEAAJPEAUIImmersiveMonitor@@@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall lambda_be0384f6ee63f5b395346d60b9e3dbc6_::operator()(__int64 a1)
{
  int v2; // eax
  int v3; // eax
  __int64 v4; // rdi
  _QWORD *v5; // rbx
  __int64 result; // rax
  int v7[6]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  char v9; // [rsp+40h] [rbp+8h] BYREF

  v2 = WindowSizeConverter::EnsureEntry(*(WindowSizeConverter **)a1, **(struct IImmersiveMonitor ***)(a1 + 8));
  if ( v2 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x243,
      (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\windowsizeconverter.cpp",
      (const char *)(unsigned int)v2,
      v7[0]);
  v3 = (*(__int64 (__fastcall **)(_QWORD, char *))(***(_QWORD ***)(a1 + 8) + 24LL))(**(_QWORD **)(a1 + 8), &v9);
  if ( v3 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x247,
      (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\windowsizeconverter.cpp",
      (const char *)(unsigned int)v3,
      v7[0]);
  v4 = *(_QWORD *)std::map<unsigned long,Microsoft::WRL::ComPtr<IApplicationFrame>>::_Try_emplace<unsigned long const &,>(
                    (_QWORD *)(*(_QWORD *)a1 + 136LL),
                    (__int64)v7);
  v5 = **(_QWORD ***)(a1 + 16);
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)(v4 + 40));
  result = *(_QWORD *)(v4 + 40);
  *v5 = result;
  return result;
}
