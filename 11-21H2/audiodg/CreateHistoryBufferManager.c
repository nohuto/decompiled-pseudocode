/*
 * XREFs of CreateHistoryBufferManager @ 0x140063530
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateRehashThresholds@?$CAtlMap@_KV?$com_ptr_t@UICPAudioHistoryControl@@Uerr_returncode_policy@wil@@@wil@@V?$CElementTraits@_K@ATL@@V?$CElementTraits@V?$com_ptr_t@UICPAudioHistoryControl@@Uerr_returncode_policy@wil@@@wil@@@4@@ATL@@AEAAXXZ @ 0x1400028B8 (-UpdateRehashThresholds@-$CAtlMap@_KV-$com_ptr_t@UICPAudioHistoryControl@@Uerr_returncode_policy.c)
 *     ??3@YAXPEAX_K@Z @ 0x14002FC18 (--3@YAXPEAX_K@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x14002FC5C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x1400309B4 (memset_0.c)
 *     ?RemoveAll@?$CAtlMap@_KV?$com_ptr_t@UICPAudioHistoryControl@@Uerr_returncode_policy@wil@@@wil@@V?$CElementTraits@_K@ATL@@V?$CElementTraits@V?$com_ptr_t@UICPAudioHistoryControl@@Uerr_returncode_policy@wil@@@wil@@@4@@ATL@@QEAAXXZ @ 0x140063C88 (-RemoveAll@-$CAtlMap@_KV-$com_ptr_t@UICPAudioHistoryControl@@Uerr_returncode_policy@wil@@@wil@@V.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CreateHistoryBufferManager(PINIT_ONCE InitOnce, PVOID Parameter, PVOID *Context)
{
  struct _RTL_CRITICAL_SECTION *v3; // rax
  LPCRITICAL_SECTION v4; // rbx
  unsigned int v5; // edi
  struct _RTL_CRITICAL_SECTION *v6; // rsi

  v3 = (struct _RTL_CRITICAL_SECTION *)operator new(0x70uLL, (const struct std::nothrow_t *)&std::nothrow);
  v4 = v3;
  v5 = 0;
  if ( v3 )
  {
    memset_0(v3, 0, 0x70uLL);
    InitializeCriticalSectionEx(v4, 0, 0);
    v4[1].DebugInfo = 0LL;
    *(_QWORD *)&v4[1].LockCount = 0LL;
    LODWORD(v4[1].OwningThread) = 17;
    v4[1].SpinCount = 0xFFFFFFFFLL;
    v4[2].DebugInfo = 0LL;
    v4[2].LockCount = 0;
    v4[2].RecursionCount = 10;
    v4[2].OwningThread = 0LL;
    v4[2].LockSemaphore = 0LL;
    HIDWORD(v4[1].OwningThread) = 1061158912;
    LODWORD(v4[1].LockSemaphore) = 1048576000;
    HIDWORD(v4[1].LockSemaphore) = 1074790400;
    ATL::CAtlMap<unsigned __int64,wil::com_ptr_t<ICPAudioHistoryControl,wil::err_returncode_policy>,ATL::CElementTraits<unsigned __int64>,ATL::CElementTraits<wil::com_ptr_t<ICPAudioHistoryControl,wil::err_returncode_policy>>>::UpdateRehashThresholds((__int64)&v4[1]);
  }
  else
  {
    v4 = 0LL;
  }
  v6 = Block;
  Block = v4;
  if ( v6 )
  {
    ATL::CAtlMap<unsigned __int64,wil::com_ptr_t<ICPAudioHistoryControl,wil::err_returncode_policy>,ATL::CElementTraits<unsigned __int64>,ATL::CElementTraits<wil::com_ptr_t<ICPAudioHistoryControl,wil::err_returncode_policy>>>::RemoveAll(&v6[1]);
    DeleteCriticalSection(v6);
    operator delete(v6);
    v4 = Block;
  }
  LOBYTE(v5) = v4 != 0LL;
  return v5;
}
