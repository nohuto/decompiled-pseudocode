/*
 * XREFs of ?NavigateView@UwpWindowManagerBridge@@UEAAJUUwpWindowContextId@UwpWindowLifecycleManagement@Shell@Internal@Windows@@W4NavigationLevel@ViewManagerInterop@456@@Z @ 0x180402400
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_00182c6ee200e78e0959b7edcc3d9c9f___ @ 0x1803FE138 (Windows--Internal--ComTaskPool--RunSynchronousTaskOnMTA__lambda_00182c6ee200e78e0959b7edcc3d9c9f.c)
 */

__int64 __fastcall UwpWindowManagerBridge::NavigateView(__int64 a1, int a2, int a3)
{
  DWORD CurrentThreadId; // eax
  unsigned int v5; // ecx
  _QWORD v7[5]; // [rsp+20h] [rbp-28h] BYREF
  int v8; // [rsp+58h] [rbp+10h] BYREF
  int v9; // [rsp+60h] [rbp+18h] BYREF

  v9 = a3;
  v8 = a2;
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 288) + 224LL))(*(_QWORD *)(a1 + 288));
  v7[0] = &v8;
  v7[1] = &v9;
  v7[2] = a1;
  CurrentThreadId = GetCurrentThreadId();
  return Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_00182c6ee200e78e0959b7edcc3d9c9f___(
           v5,
           CurrentThreadId,
           (__int64)v7);
}
