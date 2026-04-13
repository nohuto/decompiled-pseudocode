/*
 * XREFs of ?Close@CHSTRINGResult@Internal@Windows@@QEAAXXZ @ 0x180030354
 * Callers:
 *     ?OnClose@?$AsyncOperation@U?$IAsyncOperation@PEAUHSTRING__@@@Foundation@Windows@@U?$IAsyncOperationCompletedHandler@PEAUHSTRING__@@@23@VCHSTRINGResult@Internal@3@VComTaskPoolHandler@63@UINilDelegate@63@U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@UEAAXXZ @ 0x1800396C0 (-OnClose@-$AsyncOperation@U-$IAsyncOperation@PEAUHSTRING__@@@Foundation@Windows@@U-$IAsyncOperat.c)
 * Callees:
 *     <none>
 */

void __fastcall Windows::Internal::CHSTRINGResult::Close(RTL_SRWLOCK *this)
{
  HSTRING Ptr; // rbx

  AcquireSRWLockExclusive(this + 3);
  WindowsDeleteString(0LL);
  Ptr = (HSTRING)this[2].Ptr;
  this[2].Ptr = 0LL;
  ReleaseSRWLockExclusive(this + 3);
  WindowsDeleteString(Ptr);
}
