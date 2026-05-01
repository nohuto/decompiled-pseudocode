/*
 * XREFs of ??$wait_for_completion@PEAVGetCurrentActivityForViewOperationResults@Activities@Data@Internal@Windows@@V?$ComPtr@UIGetCurrentActivityForViewOperationResults@Activities@Data@Internal@Windows@@@WRL@Microsoft@@@wil@@YA?AV?$ComPtr@UIGetCurrentActivityForViewOperationResults@Activities@Data@Internal@Windows@@@WRL@Microsoft@@PEAU?$IAsyncOperation@PEAVGetCurrentActivityForViewOperationResults@Activities@Data@Internal@Windows@@@Foundation@Windows@@W4tagCOWAIT_FLAGS@@@Z @ 0x18049A878
 * Callers:
 *     _lambda_67d44a18aa71790abd3976d622df6952_::operator() @ 0x18049BB74 (_lambda_67d44a18aa71790abd3976d622df6952_--operator().c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$WaitForCompletion@PEAU?$IAsyncOperation@PEAVGetCurrentActivityForViewOperationResults@Activities@Data@Internal@Windows@@@Foundation@Windows@@@details@wil@@YAJPEAU?$IAsyncOperation@PEAVGetCurrentActivityForViewOperationResults@Activities@Data@Internal@Windows@@@Foundation@Windows@@W4tagCOWAIT_FLAGS@@KPEA_N@Z @ 0x18049A340 (--$WaitForCompletion@PEAU-$IAsyncOperation@PEAVGetCurrentActivityForViewOperationResults@Activit.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall wil::wait_for_completion<Windows::Internal::Data::Activities::GetCurrentActivityForViewOperationResults *,Microsoft::WRL::ComPtr<Windows::Internal::Data::Activities::IGetCurrentActivityForViewOperationResults>>(
        _QWORD *a1,
        __int64 (__fastcall ***a2)(_QWORD, GUID *, __int64 *),
        int a3)
{
  int CurrentActivityForViewOperation; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  *a1 = 0LL;
  CurrentActivityForViewOperation = wil::details::WaitForCompletion<Windows::Foundation::IAsyncOperation<Windows::Internal::Data::Activities::GetCurrentActivityForViewOperationResults *> *>(
                                      a2,
                                      (DWORD)a2,
                                      a3);
  if ( CurrentActivityForViewOperation >= 0 )
    CurrentActivityForViewOperation = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *), _QWORD *))(*a2)[8])(
                                        a2,
                                        a1);
  if ( CurrentActivityForViewOperation < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x66F,
      (int)"onecore\\internal\\sdk\\inc\\wil\\opensource/wil/winrt.h",
      (const char *)(unsigned int)CurrentActivityForViewOperation,
      1);
  return a1;
}
