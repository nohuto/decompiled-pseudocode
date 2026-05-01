/*
 * XREFs of ?put_Completed@?$produce@Upromise_type@?$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@PEBGV?$duration@_JU?$ratio@$00$0DOI@@std@@@chrono@std@@@experimental@std@@UIAsyncAction@Foundation@Windows@winrt@@@impl@winrt@@UEAAHPEAX@Z @ 0x1800AD650
 * Callers:
 *     <none>
 * Callees:
 *     ??$make_agile_delegate@UAsyncActionCompletedHandler@Foundation@Windows@winrt@@@impl@winrt@@YA?AUAsyncActionCompletedHandler@Foundation@Windows@1@AEBU2341@@Z @ 0x1800B1F14 (--$make_agile_delegate@UAsyncActionCompletedHandler@Foundation@Windows@winrt@@@impl@winrt@@YA-AU.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ??4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z @ 0x180172F30 (--4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z.c)
 *     _CxxThrowException_0 @ 0x1801C7518 (_CxxThrowException_0.c)
 *     ReleaseSRWLockExclusive_0 @ 0x1801C7914 (ReleaseSRWLockExclusive_0.c)
 *     __Platform_AcquireSRWLockExclusive @ 0x1801C792C (__Platform_AcquireSRWLockExclusive.c)
 *     ??0hresult_illegal_delegate_assignment@winrt@@QEAA@XZ @ 0x1804FD088 (--0hresult_illegal_delegate_assignment@winrt@@QEAA@XZ.c)
 *     ??$invoke@UAsyncActionCompletedHandler@Foundation@Windows@winrt@@U?$promise_base@Upromise_type@?$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@PEBGV?$duration@_JU?$ratio@$00$0DOI@@std@@@chrono@std@@@experimental@std@@UIAsyncAction@Foundation@Windows@winrt@@X@impl@4@W4AsyncStatus@234@@impl@winrt@@YA_NAEBUAsyncActionCompletedHandler@Foundation@Windows@1@AEBU?$promise_base@Upromise_type@?$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@PEBGV?$duration@_JU?$ratio@$00$0DOI@@std@@@chrono@std@@@experimental@std@@UIAsyncAction@Foundation@Windows@winrt@@X@01@AEBW4AsyncStatus@341@@Z @ 0x18069497C (--$invoke@UAsyncActionCompletedHandler@Foundation@Windows@winrt@@U-$promise_base@Up_ea_18069497C.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall winrt::impl::produce<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,unsigned short const *,std::chrono::duration<__int64,std::ratio<1,1000>>>::promise_type,winrt::Windows::Foundation::IAsyncAction>::put_Completed(
        unsigned __int64 a1,
        __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // rax
  _BYTE pExceptionObject[40]; // [rsp+20h] [rbp-28h] BYREF
  int v6; // [rsp+50h] [rbp+8h] BYREF
  __int64 v7; // [rsp+58h] [rbp+10h] BYREF
  PSRWLOCK SRWLock; // [rsp+60h] [rbp+18h]
  __int64 v9; // [rsp+68h] [rbp+20h] BYREF

  v7 = a2;
  v2 = (a1 - 16) & ((unsigned __int128)-(__int128)a1 >> 64);
  SRWLock = (PSRWLOCK)(v2 + 48);
  _Platform_AcquireSRWLockExclusive((PSRWLOCK)(v2 + 48));
  if ( *(_BYTE *)(v2 + 92) )
  {
    winrt::hresult_illegal_delegate_assignment::hresult_illegal_delegate_assignment((winrt::hresult_illegal_delegate_assignment *)pExceptionObject);
    throw (winrt::hresult_illegal_delegate_assignment *)pExceptionObject;
  }
  *(_BYTE *)(v2 + 92) = 1;
  v6 = *(_DWORD *)(v2 + 88);
  if ( v6 )
  {
    ReleaseSRWLockExclusive_0(SRWLock);
    if ( v7 )
      winrt::impl::invoke<winrt::Windows::Foundation::AsyncActionCompletedHandler,winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,unsigned short const *,std::chrono::duration<__int64,std::ratio<1,1000>>>::promise_type,winrt::Windows::Foundation::IAsyncAction,void>,enum winrt::Windows::Foundation::AsyncStatus>(
        &v7,
        v2,
        &v6);
  }
  else
  {
    v3 = winrt::impl::make_agile_delegate<winrt::Windows::Foundation::AsyncActionCompletedHandler>((winrt::Windows::Foundation::IUnknown *)&v9);
    winrt::Windows::Foundation::IUnknown::operator=(v2 + 56, v3);
    if ( v9 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v9);
    ReleaseSRWLockExclusive_0(SRWLock);
  }
  return 0LL;
}
