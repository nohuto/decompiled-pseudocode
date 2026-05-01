/*
 * XREFs of _lambda_1fbeaa579e3ee671bf380f4b4d3dd4b7_::operator() @ 0x18024F9DC
 * Callers:
 *     _anonymous_namespace_::RunSynchronousInSTA__lambda_1fbeaa579e3ee671bf380f4b4d3dd4b7___ @ 0x18024EBC8 (_anonymous_namespace_--RunSynchronousInSTA__lambda_1fbeaa579e3ee671bf380f4b4d3dd4b7___.c)
 *     _lambda_96fcfb23d2949330f9f81abba36111b7_::operator() @ 0x180250118 (_lambda_96fcfb23d2949330f9f81abba36111b7_--operator().c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x180085068 (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     ?CTaskbandPin_CreateInstance@@YAJPEAPEAVCPinnedList@@@Z @ 0x1801041A8 (-CTaskbandPin_CreateInstance@@YAJPEAPEAVCPinnedList@@@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_1fbeaa579e3ee671bf380f4b4d3dd4b7_::operator()(__int64 a1)
{
  int v2; // eax
  struct CPinnedList *v3; // rbx
  __int64 result; // rax
  wil *v5; // rcx
  int v6; // eax
  const char *v7; // r9
  int v8; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct CPinnedList *v11; // [rsp+48h] [rbp+10h] BYREF

  v11 = 0LL;
  v2 = CTaskbandPin_CreateInstance(&v11);
  try
  {
    if ( v2 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0xBC,
        (int)"pcshell\\twinui\\pinmanager\\lib\\PinManager.cpp",
        (const char *)(unsigned int)v2,
        v8);
    v3 = v11;
    result = (*(__int64 (__fastcall **)(char *, _QWORD, _QWORD, _QWORD))(*((_QWORD *)v11 + 3) + 128LL))(
               (char *)v11 + 24,
               **(_QWORD **)a1,
               **(_QWORD **)(a1 + 8),
               **(unsigned int **)(a1 + 16));
    v5 = retaddr;
    if ( (int)result < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0xBD,
        (int)"pcshell\\twinui\\pinmanager\\lib\\PinManager.cpp",
        (const char *)(unsigned int)result,
        v8);
    if ( v3 )
      result = winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)&v11);
  }
  catch ( ... )
  {
    v6 = wil::ResultFromCaughtException(v5);
    **(_DWORD **)(a1 + 24) = v6;
    *(_DWORD *)(*(_QWORD *)tip2::test_watcher<tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>>::operator->(
                             *(_QWORD *)(a1 + 32),
                             &v11)
              + 1320LL) = v6;
    tip2::test_data_control<tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>>::~test_data_control<tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>>(&v11);
    return wil::details::in1diag3::Log_CaughtException(
             retaddr,
             (void *)0xC3,
             (unsigned int)"pcshell\\twinui\\pinmanager\\lib\\PinManager.cpp",
             v7);
  }
  return result;
}
