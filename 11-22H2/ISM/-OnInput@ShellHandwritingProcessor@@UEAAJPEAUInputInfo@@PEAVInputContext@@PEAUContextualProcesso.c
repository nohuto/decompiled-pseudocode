/*
 * XREFs of ?OnInput@ShellHandwritingProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x180077EB0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18001B688 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockExclusive@.c)
 *     ?lock_exclusive@srwlock@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x18001B8CC (-lock_exclusive@srwlock@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL.c)
 *     __security_check_cookie @ 0x1800574C0 (__security_check_cookie.c)
 *     _anonymous_namespace_::CopyPointerInfo @ 0x180077A6C (_anonymous_namespace_--CopyPointerInfo.c)
 *     ?IsInputContextOptedOut@ContextualProcessor@ShellHandwriting@InputTraceLogging@@SAX_N@Z @ 0x180077D48 (-IsInputContextOptedOut@ContextualProcessor@ShellHandwriting@InputTraceLogging@@SAX_N@Z.c)
 *     ?IsShellHandwritingCanvasContext@ShellHandwritingProcessor@@CA_NPEAVInputContext@@@Z @ 0x180077DA0 (-IsShellHandwritingCanvasContext@ShellHandwritingProcessor@@CA_NPEAVInputContext@@@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_MTestAbShIIPD@@@details@wil@@QEAA_NXZ @ 0x180078298 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_MTestAbShIIPD@@@details@wil@@QEAA.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ShellHandwritingProcessor::OnInput(
        ShellHandwritingProcessor *this,
        struct InputInfo *a2,
        struct InputContext *a3,
        struct ContextualProcessorResponse *a4)
{
  char v8; // si
  bool IsShellHandwritingCanvasContext; // al
  LARGE_INTEGER PerformanceCount; // [rsp+20h] [rbp-F8h] BYREF
  __int128 v12; // [rsp+28h] [rbp-F0h] BYREF
  _BYTE v13[112]; // [rsp+40h] [rbp-D8h] BYREF
  LARGE_INTEGER v14; // [rsp+B0h] [rbp-68h]
  __int64 v15; // [rsp+B8h] [rbp-60h]
  __int128 v16; // [rsp+C0h] [rbp-58h]

  v8 = 0;
  if ( *((_BYTE *)this + 48) )
    goto LABEL_9;
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_MTestAbShIIPD>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_MTestAbShIIPD>::GetImpl'::`2'::impl) )
    v8 = (*((_BYTE *)a2 + 416) & 6) != 0;
  *((_BYTE *)this + 49) = 0;
  if ( !*((_BYTE *)a2 + 313) )
  {
    IsShellHandwritingCanvasContext = ShellHandwritingProcessor::IsShellHandwritingCanvasContext(a3);
    *((_BYTE *)this + 49) = IsShellHandwritingCanvasContext;
    if ( !IsShellHandwritingCanvasContext )
      v8 = 1;
  }
  InputTraceLogging::ShellHandwriting::ContextualProcessor::IsInputContextOptedOut(v8);
  *((_BYTE *)this + 48) = 1;
  if ( !v8 )
  {
LABEL_9:
    *((_DWORD *)a4 + 2) = 4 - (*((_BYTE *)this + 49) != 0);
    if ( (*((_DWORD *)a2 + 83) & 0x10000) != 0 )
    {
      *(_QWORD *)&v12 = *((_QWORD *)a2 + 11);
      DWORD2(v12) = *((_DWORD *)a2 + 81);
      *(_OWORD *)((char *)this + 56) = v12;
    }
    wil::srwlock::lock_exclusive((RTL_SRWLOCK *)this + 4, (RTL_SRWLOCK **)&v12);
    if ( *((_QWORD *)this + 5) )
    {
      anonymous_namespace_::CopyPointerInfo((__int64)a2 + 320, (__int64)v13);
      if ( (*((_DWORD *)a2 + 83) & 0x50000) != 0 )
      {
        PerformanceCount.QuadPart = 0LL;
        QueryPerformanceCounter(&PerformanceCount);
        v14 = PerformanceCount;
        v15 = *((_QWORD *)a2 + 11);
      }
      v16 = *(_OWORD *)((char *)this + 56);
      (*(void (__fastcall **)(__int64, _BYTE *, __int64))(*(_QWORD *)(*((_QWORD *)this + 5) + 8LL) + 24LL))(
        *((_QWORD *)this + 5) + 8LL,
        v13,
        1LL);
    }
    wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>((RTL_SRWLOCK **)&v12);
  }
  else
  {
    *((_DWORD *)a4 + 2) = 0;
  }
  return 0LL;
}
