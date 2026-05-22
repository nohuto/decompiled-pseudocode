/*
 * XREFs of ?DeliverToContextualProcessing@Win32kInterop@@AEAAXPEAUInputInfo@@KV?$function@$$A6AXPEAVInputContext@@@Z@std@@V?$function@$$A6AXPEAUIInputTarget@@@Z@4@@Z @ 0x1800DF79C
 * Callers:
 *     ?DoConvergedMTCallback@Win32kInterop@@AEAAXPEBU_MIT_INPUT_INTEROP_MESSAGE@@@Z @ 0x1800DF9E0 (-DoConvergedMTCallback@Win32kInterop@@AEAAXPEBU_MIT_INPUT_INTEROP_MESSAGE@@@Z.c)
 *     ?ProcessInputMessage@Win32kInterop@@AEAAXAEBUInputMessageContext@1@AEBU_InputMessageNotification@@_N@Z @ 0x1800E090C (-ProcessInputMessage@Win32kInterop@@AEAAXAEBUInputMessageContext@1@AEBU_InputMessageNotification.c)
 * Callees:
 *     ??$_Try_emplace@AEBK$$V@?$_Hash@V?$_Umap_traits@KUTargetingInfo@Win32kInterop@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUTargetingInfo@Win32kInterop@@@std@@@4@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CBKUTargetingInfo@Win32kInterop@@@std@@PEAX@std@@_N@1@AEBK@Z @ 0x1800036F0 (--$_Try_emplace@AEBK$$V@-$_Hash@V-$_Umap_traits@KUTargetingInfo@Win32kInterop@@V-$_Uhash_compare.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C7A4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18007BBB0 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??$find@X@?$_Hash@V?$_Umap_traits@KUPointerCache@EdgyProcessor@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUPointerCache@EdgyProcessor@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUPointerCache@EdgyProcessor@@@std@@@std@@@std@@@1@AEBK@Z @ 0x1800BE564 (--$find@X@-$_Hash@V-$_Umap_traits@KUPointerCache@EdgyProcessor@@V-$_Uhash_compare@KU-$hash@K@std.c)
 *     ??R?$_Func_class@XPEAUIInputTarget@@@std@@QEBAXPEAUIInputTarget@@@Z @ 0x1800DEAC8 (--R-$_Func_class@XPEAUIInputTarget@@@std@@QEBAXPEAUIInputTarget@@@Z.c)
 *     ??R?$_Func_class@XPEAVInputContext@@@std@@QEBAXPEAVInputContext@@@Z @ 0x1800DEB10 (--R-$_Func_class@XPEAVInputContext@@@std@@QEBAXPEAVInputContext@@@Z.c)
 *     ?ReceiveInput@ContextualProcessing@InputTraceLogging@@SAXPEBUInputInfo@@@Z @ 0x1800E1318 (-ReceiveInput@ContextualProcessing@InputTraceLogging@@SAXPEBUInputInfo@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Win32kInterop::DeliverToContextualProcessing(_QWORD *a1, __int64 a2, int a3, __int64 a4, __int64 a5)
{
  const char *v8; // r9
  __int64 v9; // rcx
  __int64 v10; // rbx
  __int64 v11; // rax
  __int64 v12; // r14
  __int64 v13; // rcx
  __int64 v14; // r15
  __int64 v15; // rdx
  __int64 result; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // rsi
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rcx
  int v24[4]; // [rsp+20h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+28h]
  __int64 v26; // [rsp+68h] [rbp+38h] BYREF
  int v27; // [rsp+70h] [rbp+40h] BYREF
  __int64 v28; // [rsp+78h] [rbp+48h]

  v28 = a4;
  v27 = a3;
  if ( (*(_DWORD *)a2 & 0x100003B) == 0 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      1653LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\components\\win32kinterop\\lib\\win32kinterop.cpp",
      (const char *)a4);
  InputTraceLogging::ContextualProcessing::ReceiveInput((const struct InputInfo *)a2);
  if ( *(_DWORD *)a2 == 2 )
  {
    if ( *std::_Hash<std::_Umap_traits<unsigned long,EdgyProcessor::PointerCache,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,EdgyProcessor::PointerCache>>,0>>::find<void>(
            a1 + 27,
            &v26,
            (const unsigned __int8 *)&v27) == a1[28] )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        1681LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\components\\win32kinterop\\lib\\win32kinterop.cpp",
        v8);
    v9 = (__int64)(a1 + 27);
    goto LABEL_10;
  }
  std::_Hash<std::_Umap_traits<unsigned long,EdgyProcessor::PointerCache,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,EdgyProcessor::PointerCache>>,0>>::find<void>(
    a1 + 36,
    &v26,
    (const unsigned __int8 *)(a2 + 4));
  v10 = v26;
  if ( v26 != a1[37]
    && *std::_Hash<std::_Umap_traits<unsigned long,EdgyProcessor::PointerCache,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,EdgyProcessor::PointerCache>>,0>>::find<void>(
          (_QWORD *)(v26 + 24),
          &v26,
          (const unsigned __int8 *)&v27) != *(_QWORD *)(v10 + 32) )
  {
    v9 = v10 + 24;
LABEL_10:
    v11 = std::_Hash<std::_Umap_traits<unsigned long,Win32kInterop::TargetingInfo,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,Win32kInterop::TargetingInfo>>,0>>::_Try_emplace<unsigned long const &,>(
            v9,
            (__int64)v24,
            (unsigned __int8 *)&v27);
    v12 = *(_QWORD *)v11;
    std::_Func_class<void,InputContext *>::operator()(a4, *(_QWORD *)(*(_QWORD *)v11 + 24LL));
    v13 = *(_QWORD *)(v12 + 32);
    v14 = a5;
    v15 = *(_QWORD *)(v12 + 24);
    if ( v13 && *(_BYTE *)(v15 + 184) )
    {
      result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v13 + 24LL))(v13, a2);
      if ( (_DWORD)result != -2147417853 && (int)result < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x6B1,
          (int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\components\\win32kinterop\\lib\\win32kinterop.cpp",
          (const char *)(unsigned int)result,
          v24[0]);
    }
    else
    {
      result = std::_Func_class<void,IInputTarget *>::operator()(a5, *(_QWORD *)(v15 + 16));
    }
    v18 = *(_QWORD *)(a4 + 56);
    if ( v18 )
    {
      LOBYTE(v17) = v18 != a4;
      result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v18 + 32LL))(v18, v17);
      *(_QWORD *)(a4 + 56) = 0LL;
    }
    v19 = *(_QWORD *)(v14 + 56);
    if ( v19 )
    {
      LOBYTE(v17) = v19 != v14;
      result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v19 + 32LL))(v19, v17);
      *(_QWORD *)(v14 + 56) = 0LL;
    }
    return result;
  }
  v20 = a5;
  result = std::_Func_class<void,IInputTarget *>::operator()(a5, 0LL);
  v22 = *(_QWORD *)(a4 + 56);
  if ( v22 )
  {
    LOBYTE(v21) = v22 != a4;
    result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v22 + 32LL))(v22, v21);
    *(_QWORD *)(a4 + 56) = 0LL;
  }
  v23 = *(_QWORD *)(v20 + 56);
  if ( v23 )
  {
    LOBYTE(v21) = v23 != v20;
    result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v23 + 32LL))(v23, v21);
    *(_QWORD *)(v20 + 56) = 0LL;
  }
  return result;
}
