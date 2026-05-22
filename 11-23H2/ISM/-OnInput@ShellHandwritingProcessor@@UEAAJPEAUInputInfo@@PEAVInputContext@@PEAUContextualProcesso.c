/*
 * XREFs of ?OnInput@ShellHandwritingProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x180064420
 * Callers:
 *     <none>
 * Callees:
 *     ?lock_exclusive@srwlock@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x18001AF80 (-lock_exclusive@srwlock@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL.c)
 *     __security_check_cookie @ 0x180056730 (__security_check_cookie.c)
 *     _anonymous_namespace_::CopyPointerInfo @ 0x180063FCC (_anonymous_namespace_--CopyPointerInfo.c)
 *     ?IsInputContextOptedOut@ContextualProcessor@ShellHandwriting@InputTraceLogging@@SAX_N@Z @ 0x180064298 (-IsInputContextOptedOut@ContextualProcessor@ShellHandwriting@InputTraceLogging@@SAX_N@Z.c)
 *     ?IsShellHandwritingCanvasContext@ShellHandwritingProcessor@@CA_NPEAVInputContext@@@Z @ 0x1800642F0 (-IsShellHandwritingCanvasContext@ShellHandwritingProcessor@@CA_NPEAVInputContext@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ShellHandwritingProcessor::OnInput(
        ShellHandwritingProcessor *this,
        struct InputInfo *a2,
        struct InputContext *a3,
        struct ContextualProcessorResponse *a4)
{
  char v7; // bp
  bool *v8; // rsi
  bool IsShellHandwritingCanvasContext; // al
  LARGE_INTEGER PerformanceCount; // [rsp+20h] [rbp-F8h] BYREF
  PSRWLOCK SRWLock[2]; // [rsp+28h] [rbp-F0h] BYREF
  _BYTE v13[112]; // [rsp+40h] [rbp-D8h] BYREF
  LARGE_INTEGER v14; // [rsp+B0h] [rbp-68h]
  __int64 v15; // [rsp+B8h] [rbp-60h]
  __int128 v16; // [rsp+C0h] [rbp-58h]

  v7 = 0;
  v8 = (bool *)this + 49;
  if ( *((_BYTE *)this + 48) )
    goto LABEL_6;
  *v8 = 0;
  if ( !*((_BYTE *)a2 + 313) )
  {
    IsShellHandwritingCanvasContext = ShellHandwritingProcessor::IsShellHandwritingCanvasContext(a3);
    *v8 = IsShellHandwritingCanvasContext;
    v7 = !IsShellHandwritingCanvasContext;
  }
  InputTraceLogging::ShellHandwriting::ContextualProcessor::IsInputContextOptedOut(v7);
  *((_BYTE *)this + 48) = 1;
  if ( !v7 )
  {
LABEL_6:
    *((_DWORD *)a4 + 2) = 4 - *v8;
    if ( (*((_DWORD *)a2 + 83) & 0x10000) != 0 )
    {
      SRWLock[0] = *((PSRWLOCK *)a2 + 11);
      LODWORD(SRWLock[1]) = *((_DWORD *)a2 + 81);
      *(_OWORD *)((char *)this + 56) = *(_OWORD *)SRWLock;
    }
    wil::srwlock::lock_exclusive((RTL_SRWLOCK *)this + 4, SRWLock);
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
    if ( SRWLock[0] )
      ReleaseSRWLockExclusive(SRWLock[0]);
  }
  else
  {
    *((_DWORD *)a4 + 2) = 0;
  }
  return 0LL;
}
