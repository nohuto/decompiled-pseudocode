/*
 * XREFs of ?RequestCloseAsync@CTaskWindow@@UEAAJPEAPEAU?$IAsyncOperation@W4AppRequestHandledResult@ViewManagerInterop@Shell@Internal@Windows@@@Foundation@Windows@@@Z @ 0x1803C81B0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CTaskWindow::RequestCloseAsync(__int64 a1)
{
  __int64 v1; // rcx

  v1 = *(_QWORD *)(a1 + 48);
  if ( v1 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v1 + 416LL))(v1);
  return 0LL;
}
