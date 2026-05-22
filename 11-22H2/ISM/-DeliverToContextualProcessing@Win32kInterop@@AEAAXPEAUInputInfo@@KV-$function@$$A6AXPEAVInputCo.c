/*
 * XREFs of ?DeliverToContextualProcessing@Win32kInterop@@AEAAXPEAUInputInfo@@KV?$function@$$A6AXPEAVInputContext@@@Z@std@@V?$function@$$A6AXPEAUIInputTarget@@@Z@4@@Z @ 0x180107EA0
 * Callers:
 *     ?DoConvergedMTCallback@Win32kInterop@@AEAAXPEBU_MIT_INPUT_INTEROP_MESSAGE@@@Z @ 0x1801080E8 (-DoConvergedMTCallback@Win32kInterop@@AEAAXPEBU_MIT_INPUT_INTEROP_MESSAGE@@@Z.c)
 *     ?ProcessInputMessage@Win32kInterop@@AEAAXAEBUInputMessageContext@1@AEBU_InputMessageNotification@@_N@Z @ 0x180108C38 (-ProcessInputMessage@Win32kInterop@@AEAAXAEBUInputMessageContext@1@AEBU_InputMessageNotification.c)
 * Callees:
 *     ??$find@X@?$_Hash@V?$_Umap_traits@KUTargetingInfo@Win32kInterop@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUTargetingInfo@Win32kInterop@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUTargetingInfo@Win32kInterop@@@std@@@std@@@std@@@1@AEBK@Z @ 0x18000B074 (--$find@X@-$_Hash@V-$_Umap_traits@KUTargetingInfo@Win32kInterop@@V-$_Uhash_compare@KU-$hash@K@st.c)
 *     ??$_Try_emplace@AEBK$$V@?$_Hash@V?$_Umap_traits@KUTargetingInfo@Win32kInterop@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUTargetingInfo@Win32kInterop@@@std@@@4@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CBKUTargetingInfo@Win32kInterop@@@std@@PEAX@std@@_N@1@AEBK@Z @ 0x18000C0F0 (--$_Try_emplace@AEBK$$V@-$_Hash@V-$_Umap_traits@KUTargetingInfo@Win32kInterop@@V-$_Uhash_compare.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18005907C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180059D90 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$find@X@?$_Hash@V?$_Umap_traits@KUPointerCache@EdgyProcessor@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUPointerCache@EdgyProcessor@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUPointerCache@EdgyProcessor@@@std@@@std@@@std@@@1@AEBK@Z @ 0x1800E6314 (--$find@X@-$_Hash@V-$_Umap_traits@KUPointerCache@EdgyProcessor@@V-$_Uhash_compare@KU-$hash@K@std.c)
 *     ??R?$_Func_class@XPEAUIInputTarget@@@std@@QEBAXPEAUIInputTarget@@@Z @ 0x1801072B0 (--R-$_Func_class@XPEAUIInputTarget@@@std@@QEBAXPEAUIInputTarget@@@Z.c)
 *     ??R?$_Func_class@XPEAVInputContext@@@std@@QEBAXPEAVInputContext@@@Z @ 0x1801072F8 (--R-$_Func_class@XPEAVInputContext@@@std@@QEBAXPEAVInputContext@@@Z.c)
 *     ?ReceiveInput@ContextualProcessing@InputTraceLogging@@SAXPEBUInputInfo@@@Z @ 0x180109634 (-ReceiveInput@ContextualProcessing@InputTraceLogging@@SAXPEBUInputInfo@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Win32kInterop::DeliverToContextualProcessing(_QWORD *a1, __int64 a2, int a3, __int64 a4, __int64 a5)
{
  const char *v8; // r9
  float *v9; // rcx
  __int64 v10; // rbx
  __int64 v11; // rax
  __int64 v12; // r14
  __int64 v13; // rcx
  __int64 v14; // r15
  __int64 result; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // rsi
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rcx
  int v23[4]; // [rsp+20h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+28h]
  __int64 v25; // [rsp+68h] [rbp+38h] BYREF
  int v26; // [rsp+70h] [rbp+40h] BYREF
  __int64 v27; // [rsp+78h] [rbp+48h]

  v27 = a4;
  v26 = a3;
  if ( (*(_DWORD *)a2 & 0x100003B) == 0 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x62C,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\components\\win32kinterop\\lib\\win32kinterop.cpp",
      (const char *)a4);
  InputTraceLogging::ContextualProcessing::ReceiveInput((const struct InputInfo *)a2);
  if ( *(_DWORD *)a2 == 2 )
  {
    if ( *std::_Hash<std::_Umap_traits<unsigned long,Win32kInterop::TargetingInfo,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,Win32kInterop::TargetingInfo>>,0>>::find<void>(
            (unsigned __int64)(a1 + 27),
            &v25,
            (const unsigned __int8 *)&v26) == a1[28] )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x648,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\components\\win32kinterop\\lib\\win32kinterop.cpp",
        v8);
    v9 = (float *)(a1 + 27);
    goto LABEL_10;
  }
  std::_Hash<std::_Umap_traits<unsigned long,EdgyProcessor::PointerCache,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,EdgyProcessor::PointerCache>>,0>>::find<void>(
    a1 + 36,
    &v25,
    (const unsigned __int8 *)(a2 + 4));
  v10 = v25;
  if ( v25 != a1[37]
    && *std::_Hash<std::_Umap_traits<unsigned long,Win32kInterop::TargetingInfo,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,Win32kInterop::TargetingInfo>>,0>>::find<void>(
          v25 + 24,
          &v25,
          (const unsigned __int8 *)&v26) != *(_QWORD *)(v10 + 32) )
  {
    v9 = (float *)(v10 + 24);
LABEL_10:
    v11 = std::_Hash<std::_Umap_traits<unsigned long,Win32kInterop::TargetingInfo,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,Win32kInterop::TargetingInfo>>,0>>::_Try_emplace<unsigned long const &,>(
            v9,
            (__int64)v23,
            (unsigned __int8 *)&v26);
    v12 = *(_QWORD *)v11;
    std::_Func_class<void,InputContext *>::operator()(a4, *(_QWORD *)(*(_QWORD *)v11 + 24LL));
    v13 = *(_QWORD *)(v12 + 32);
    v14 = a5;
    if ( v13 && *(_BYTE *)(*(_QWORD *)(v12 + 24) + 184LL) )
    {
      result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v13 + 24LL))(v13, a2);
      if ( (_DWORD)result != -2147417853 && (int)result < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x668,
          (int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\components\\win32kinterop\\lib\\win32kinterop.cpp",
          (const char *)(unsigned int)result,
          v23[0]);
    }
    else
    {
      result = std::_Func_class<void,IInputTarget *>::operator()(a5, *(_QWORD *)(*(_QWORD *)(v12 + 24) + 16LL));
    }
    v17 = *(_QWORD *)(a4 + 56);
    if ( v17 )
    {
      LOBYTE(v16) = v17 != a4;
      result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v17 + 32LL))(v17, v16);
      *(_QWORD *)(a4 + 56) = 0LL;
    }
    v18 = *(_QWORD *)(v14 + 56);
    if ( v18 )
    {
      LOBYTE(v16) = v18 != v14;
      result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v18 + 32LL))(v18, v16);
      *(_QWORD *)(v14 + 56) = 0LL;
    }
    return result;
  }
  v19 = a5;
  result = std::_Func_class<void,IInputTarget *>::operator()(a5, 0LL);
  v21 = *(_QWORD *)(a4 + 56);
  if ( v21 )
  {
    LOBYTE(v20) = v21 != a4;
    result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v21 + 32LL))(v21, v20);
    *(_QWORD *)(a4 + 56) = 0LL;
  }
  v22 = *(_QWORD *)(v19 + 56);
  if ( v22 )
  {
    LOBYTE(v20) = v22 != v19;
    result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v22 + 32LL))(v22, v20);
    *(_QWORD *)(v19 + 56) = 0LL;
  }
  return result;
}
