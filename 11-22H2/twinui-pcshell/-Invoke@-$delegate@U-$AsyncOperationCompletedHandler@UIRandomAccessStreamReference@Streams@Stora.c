/*
 * XREFs of ?Invoke@?$delegate@U?$AsyncOperationCompletedHandler@UIRandomAccessStreamReference@Streams@Storage@Windows@winrt@@@Foundation@Windows@winrt@@Ushared_type@?1???$when_any@U?$IAsyncOperation@UIRandomAccessStreamReference@Streams@Storage@Windows@winrt@@@Foundation@Windows@winrt@@U1234@@4@YA?AU?$IAsyncOperation@UIRandomAccessStreamReference@Streams@Storage@Windows@winrt@@@234@AEBU6234@0@Z@@impl@winrt@@UEAAHPEAXH@Z @ 0x18006CA50
 * Callers:
 *     <none>
 * Callees:
 *     WINRT_IMPL_SetEvent @ 0x1801C7C8A (WINRT_IMPL_SetEvent.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall _Invoke___delegate_U__AsyncOperationCompletedHandler_UIRandomAccessStreamReference_Streams_Storage_Windows_winrt___Foundation_Windows_winrt__Ushared_type__1____when_any_U__IAsyncOperation_UIRandomAccessStreamReference_Streams_Storage_Windows_winrt___Foundation_Windows_winrt__U1234__4_YA_AU__IAsyncOperation_UIRandomAccessStreamReference_Streams_Storage_Windows_winrt___234_AEBU6234_0_Z__impl_winrt__UEAAHPEAXH_Z(
        __int64 a1,
        signed __int64 a2,
        int a3)
{
  if ( !_InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 24), a2, 0LL) )
  {
    (*(void (__fastcall **)(signed __int64))(*(_QWORD *)a2 + 8LL))(a2);
    *(_DWORD *)(a1 + 16) = a3;
    WINRT_IMPL_SetEvent(*(HANDLE *)(a1 + 8));
  }
  return 0LL;
}
