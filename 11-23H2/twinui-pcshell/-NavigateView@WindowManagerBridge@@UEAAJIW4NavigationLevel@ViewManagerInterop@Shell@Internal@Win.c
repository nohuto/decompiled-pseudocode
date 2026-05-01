/*
 * XREFs of ?NavigateView@WindowManagerBridge@@UEAAJIW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1804D9A20
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_8eaa9d9bc48e0c760b532341ceadabea___ @ 0x1804D6118 (Windows--Internal--ComTaskPool--RunSynchronousTaskOnMTA__lambda_8eaa9d9bc48e0c760b532341ceadabea.c)
 */

__int64 __fastcall WindowManagerBridge::NavigateView(__int64 a1, int a2, int a3)
{
  DWORD CurrentThreadId; // eax
  unsigned int v5; // ecx
  _QWORD v7[5]; // [rsp+20h] [rbp-28h] BYREF
  int v8; // [rsp+58h] [rbp+10h] BYREF
  int v9; // [rsp+60h] [rbp+18h] BYREF

  v9 = a3;
  v8 = a2;
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 280) + 216LL))(*(_QWORD *)(a1 + 280));
  v7[0] = &v8;
  v7[1] = a1;
  v7[2] = &v9;
  CurrentThreadId = GetCurrentThreadId();
  return Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_8eaa9d9bc48e0c760b532341ceadabea___(
           v5,
           CurrentThreadId,
           (__int64)v7);
}
