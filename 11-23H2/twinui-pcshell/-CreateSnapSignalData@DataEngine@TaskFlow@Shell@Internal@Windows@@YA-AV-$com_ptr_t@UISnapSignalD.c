/*
 * XREFs of ?CreateSnapSignalData@DataEngine@TaskFlow@Shell@Internal@Windows@@YA?AV?$com_ptr_t@UISnapSignalData@DataEngine@TaskFlow@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@W4SnapEventType@12345@UDateTime@Foundation@5@_K@Z @ 0x1804A6EEC
 * Callers:
 *     ?TryCreateSnapSignalData@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@AEAA?AV?$com_ptr_t@UISnapSignalData@DataEngine@TaskFlow@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@W4SnapEventType@23456@PEAUIApplicationView@@@Z @ 0x1804A4B60 (-TryCreateSnapSignalData@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@AEAA-AV-$co.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801C6900 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?_Throw_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1801D66A8 (-_Throw_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??0SnapSignalData@DataEngine@TaskFlow@Shell@Internal@Windows@@QEAA@W4SnapEventType@12345@UDateTime@Foundation@5@_K@Z @ 0x1804A6DE0 (--0SnapSignalData@DataEngine@TaskFlow@Shell@Internal@Windows@@QEAA@W4SnapEventType@12345@UDateTi.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall Windows::Internal::Shell::TaskFlow::DataEngine::CreateSnapSignalData(
        __int64 *a1,
        int a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v8; // rax
  __int64 v9; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v8 = (__int64)operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v8 )
  {
    v8 = Windows::Internal::Shell::TaskFlow::DataEngine::SnapSignalData::SnapSignalData(v8, a2, a3, a4);
    v9 = v8;
  }
  else
  {
    v9 = 0LL;
  }
  if ( !v8 )
    wil::details::in1diag3::_Throw_NullAlloc(
      retaddr,
      (void *)0x38,
      (__int64)"pcshell\\twinui\\taskflowbroker\\lib\\snapsignaldata.cpp",
      (const char *)retaddr);
  *a1 = v9;
  return a1;
}
