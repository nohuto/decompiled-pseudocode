/*
 * XREFs of ?Release@?$implements_delegate@U?$AsyncOperationCompletedHandler@U?$IKeyValuePair@ULogoInfo@LogoLoading@UnifiedTile@Shell@WindowsInternal@winrt@@UIRandomAccessStream@Streams@Storage@Windows@6@@Collections@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@Ushared_type@?1???$wait_for_completed@U?$IAsyncOperation@U?$IKeyValuePair@ULogoInfo@LogoLoading@UnifiedTile@Shell@WindowsInternal@winrt@@UIRandomAccessStream@Streams@Storage@Windows@6@@Collections@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@@impl@4@YA?A_PAEBU?$IAsyncOperation@U?$IKeyValuePair@ULogoInfo@LogoLoading@UnifiedTile@Shell@WindowsInternal@winrt@@UIRandomAccessStream@Streams@Storage@Windows@6@@Collections@Foundation@Windows@winrt@@@234@I@Z@@impl@winrt@@UEAAIXZ @ 0x1806A4C70
 * Callers:
 *     <none>
 * Callees:
 *     ??Fatomic_ref_count@impl@winrt@@QEAAIXZ @ 0x1800D8E58 (--Fatomic_ref_count@impl@winrt@@QEAAIXZ.c)
 *     ??3@YAXPEAX@Z @ 0x1801C7278 (--3@YAXPEAX@Z.c)
 *     WINRT_IMPL_CloseHandle @ 0x1801C7938 (WINRT_IMPL_CloseHandle.c)
 */

__int64 __fastcall _Release___implements_delegate_U__AsyncOperationCompletedHandler_U__IKeyValuePair_ULogoInfo_LogoLoading_UnifiedTile_Shell_WindowsInternal_winrt__UIRandomAccessStream_Streams_Storage_Windows_6__Collections_Foundation_Windows_winrt___Foundation_Windows_winrt__Ushared_type__1____wait_for_completed_U__IAsyncOperation_U__IKeyValuePair_ULogoInfo_LogoLoading_UnifiedTile_Shell_WindowsInternal_winrt__UIRandomAccessStream_Streams_Storage_Windows_6__Collections_Foundation_Windows_winrt___Foundation_Windows_winrt___impl_4_YA_A_PAEBU__IAsyncOperation_U__IKeyValuePair_ULogoInfo_LogoLoading_UnifiedTile_Shell_WindowsInternal_winrt__UIRandomAccessStream_Streams_Storage_Windows_6__Collections_Foundation_Windows_winrt___234_I_Z__impl_winrt__UEAAIXZ(
        volatile signed __int32 *Block)
{
  unsigned int v2; // edi
  void *v3; // rcx

  v2 = winrt::impl::atomic_ref_count::operator--(Block + 6);
  if ( !v2 && Block )
  {
    winrt::impl::atomic_ref_count::operator--(&`winrt::get_module_lock'::`2'::s_lock);
    v3 = (void *)*((_QWORD *)Block + 1);
    if ( v3 )
    {
      WINRT_IMPL_CloseHandle(v3);
      *((_QWORD *)Block + 1) = 0LL;
    }
    operator delete((void *)Block);
  }
  return v2;
}
