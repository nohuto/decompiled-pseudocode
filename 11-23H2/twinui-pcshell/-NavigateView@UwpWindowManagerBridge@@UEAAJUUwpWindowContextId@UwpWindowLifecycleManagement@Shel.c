/*
 * XREFs of ?NavigateView@UwpWindowManagerBridge@@UEAAJUUwpWindowContextId@UwpWindowLifecycleManagement@Shell@Internal@Windows@@W4NavigationLevel@ViewManagerInterop@456@@Z @ 0x18016D240
 * Callers:
 *     <none>
 * Callees:
 *     Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_39a728035cbc11bf105c92e6056dabb4___ @ 0x18016D2B4 (Windows--Internal--ComTaskPool--RunSynchronousTaskOnMTA__lambda_39a728035cbc11bf105c92e6056dabb4.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall UwpWindowManagerBridge::NavigateView(__int64 a1, int a2, int a3)
{
  DWORD CurrentThreadId; // eax
  __int64 v5; // rcx
  _QWORD v7[5]; // [rsp+20h] [rbp-28h] BYREF
  int v8; // [rsp+58h] [rbp+10h] BYREF
  int v9; // [rsp+60h] [rbp+18h] BYREF

  v9 = a3;
  v8 = a2;
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 296) + 224LL))(*(_QWORD *)(a1 + 296));
  v7[0] = &v8;
  v7[1] = &v9;
  v7[2] = a1;
  CurrentThreadId = GetCurrentThreadId();
  return Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_39a728035cbc11bf105c92e6056dabb4___(
           v5,
           CurrentThreadId,
           v7);
}
