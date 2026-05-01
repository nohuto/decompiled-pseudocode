/*
 * XREFs of ?GetResults@?$produce@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@I@Foundation@Windows@winrt@@PEAUDragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@34@AEBV?$com_ptr_t@UIDropTarget@@Uerr_exception_policy@wil@@@wil@@AEBV?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@AEBUtagPOINT@@_N@experimental@std@@U?$IAsyncOperation@I@Foundation@Windows@winrt@@@impl@winrt@@UEAAHPEAI@Z @ 0x18056D680
 * Callers:
 *     <none>
 * Callees:
 *     _CxxThrowException_0 @ 0x180188F6C (_CxxThrowException_0.c)
 *     ReleaseSRWLockExclusive_0 @ 0x180189314 (ReleaseSRWLockExclusive_0.c)
 *     __Platform_AcquireSRWLockExclusive @ 0x18018932C (__Platform_AcquireSRWLockExclusive.c)
 *     ??0hresult_illegal_method_call@winrt@@QEAA@XZ @ 0x1803531FC (--0hresult_illegal_method_call@winrt@@QEAA@XZ.c)
 *     ?rethrow_if_failed@?$promise_base@Upromise_type@?$coroutine_traits@U?$IAsyncOperationWithProgress@UMeetAndChatInstallResult@MeetAndChat@Shell@Internal@Windows@winrt@@UMeetAndChatInstallProgress@23456@@Foundation@Windows@winrt@@PEAUMeetAndChatManager@implementation@Shell@Internal@34@@experimental@std@@U?$IAsyncOperationWithProgress@UMeetAndChatInstallResult@MeetAndChat@Shell@Internal@Windows@winrt@@UMeetAndChatInstallProgress@23456@@Foundation@Windows@winrt@@UMeetAndChatInstallProgress@MeetAndChat@Shell@Internal@78@@impl@winrt@@IEBAXXZ @ 0x18041F160 (-rethrow_if_failed@-$promise_base@Upromise_type@-$coroutine_traits@U-$IAsyncOperationWithProgres.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall winrt::impl::produce<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<unsigned int>,winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent *,wil::com_ptr_t<IDropTarget,wil::err_exception_policy> const &,wil::com_ptr_t<IDataObject,wil::err_exception_policy> const &,tagPOINT const &,bool>::promise_type,winrt::Windows::Foundation::IAsyncOperation<unsigned int>>::GetResults(
        unsigned __int64 a1,
        _DWORD *a2)
{
  __int64 v3; // rbx
  int v4; // ebx
  __int64 v6; // rdx
  _BYTE pExceptionObject[40]; // [rsp+20h] [rbp-28h] BYREF
  unsigned int v9; // [rsp+50h] [rbp+8h] BYREF
  RTL_SRWLOCK *SRWLock; // [rsp+60h] [rbp+18h]

  v3 = (a1 - 16) & ((unsigned __int128)-(__int128)a1 >> 64);
  SRWLock = (RTL_SRWLOCK *)(v3 + 48);
  _Platform_AcquireSRWLockExclusive((PSRWLOCK)(v3 + 48));
  if ( *(_DWORD *)(v3 + 88) != 1 )
  {
    try
    {
      winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperationWithProgress<winrt::Windows::Internal::Shell::MeetAndChat::MeetAndChatInstallResult,winrt::Windows::Internal::Shell::MeetAndChat::MeetAndChatInstallProgress>,winrt::Windows::Internal::Shell::implementation::MeetAndChatManager *>::promise_type,winrt::Windows::Foundation::IAsyncOperationWithProgress<winrt::Windows::Internal::Shell::MeetAndChat::MeetAndChatInstallResult,winrt::Windows::Internal::Shell::MeetAndChat::MeetAndChatInstallProgress>,winrt::Windows::Internal::Shell::MeetAndChat::MeetAndChatInstallProgress>::rethrow_if_failed(v3);
      winrt::hresult_illegal_method_call::hresult_illegal_method_call((winrt::hresult_illegal_method_call *)pExceptionObject);
      throw (winrt::hresult_illegal_method_call *)pExceptionObject;
    }
    catch ( ... )
    {
      *(_DWORD *)(v6 + 80) = *winrt::to_hresult(&v9);
      return v9;
    }
  }
  v4 = *(_DWORD *)(v3 + 96);
  ReleaseSRWLockExclusive_0(SRWLock);
  *a2 = v4;
  return 0LL;
}
