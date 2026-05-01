/*
 * XREFs of ??$make_shared@VGuidedSnapAssistControl@@AEBV?$com_ptr_t@UIMultitaskingViewTaskScheduler@@Uerr_exception_policy@wil@@@wil@@PEAVCSnapAssistControllerBase@@@std@@YA?AV?$shared_ptr@VGuidedSnapAssistControl@@@0@AEBV?$com_ptr_t@UIMultitaskingViewTaskScheduler@@Uerr_exception_policy@wil@@@wil@@$$QEAPEAVCSnapAssistControllerBase@@@Z @ 0x18013C6AC
 * Callers:
 *     ?Initialize@CSnapAssistControllerBase@@UEAAJAEBUSnapAssistControllerInitParams@@@Z @ 0x180139E00 (-Initialize@CSnapAssistControllerBase@@UEAAJAEBUSnapAssistControllerInitParams@@@Z.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18009CE58 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??0GuidedSnapAssistControl@@QEAA@AEBV?$com_ptr_t@UIMultitaskingViewTaskScheduler@@Uerr_exception_policy@wil@@@wil@@PEAUISnapAssistCallback@@@Z @ 0x1801377BC (--0GuidedSnapAssistControl@@QEAA@AEBV-$com_ptr_t@UIMultitaskingViewTaskScheduler@@Uerr_exception.c)
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x1801453A8 (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x1801C706C (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall std::make_shared<GuidedSnapAssistControl,wil::com_ptr_t<IMultitaskingViewTaskScheduler,wil::err_exception_policy> const &,CSnapAssistControllerBase *>(
        _QWORD *a1,
        __int64 *a2,
        _QWORD *a3)
{
  char *v6; // r14
  __int64 v7; // rax
  volatile signed __int32 *v8; // rbx
  char *v9; // rax
  __int64 v10; // rcx
  std::_Ref_count_base *v11; // rax

  v6 = (char *)operator new(0x48uLL);
  *(_OWORD *)v6 = 0LL;
  *((_DWORD *)v6 + 2) = 1;
  *((_DWORD *)v6 + 3) = 1;
  *(_QWORD *)v6 = &std::_Ref_count_obj2<GuidedSnapAssistControl>::`vftable';
  GuidedSnapAssistControl::GuidedSnapAssistControl((__int64)(v6 + 16), a2, (*a3 + 16LL) & -(__int64)(*a3 != 0LL));
  *a1 = v6 + 16;
  a1[1] = v6;
  if ( v6 != (char *)-16LL )
  {
    v7 = *((_QWORD *)v6 + 3);
    if ( !v7 || !*(_DWORD *)(v7 + 8) )
    {
      _InterlockedIncrement((volatile signed __int32 *)v6 + 2);
      v8 = (volatile signed __int32 *)a1[1];
      if ( v8 )
      {
        v9 = v6 + 16;
        v10 = a1[1];
        _InterlockedIncrement(v8 + 3);
      }
      else
      {
        v10 = 0LL;
        v9 = 0LL;
      }
      *((_QWORD *)v6 + 2) = v9;
      v11 = (std::_Ref_count_base *)*((_QWORD *)v6 + 3);
      *((_QWORD *)v6 + 3) = v10;
      if ( v11 )
        std::_Ref_count_base::_Decwref(v11);
      if ( v8 )
        std::_Ref_count_base::_Decref((std::_Ref_count_base *)v8);
    }
  }
  return a1;
}
