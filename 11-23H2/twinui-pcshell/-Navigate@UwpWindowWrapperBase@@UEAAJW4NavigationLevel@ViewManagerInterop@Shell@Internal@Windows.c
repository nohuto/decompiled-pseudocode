/*
 * XREFs of ?Navigate@UwpWindowWrapperBase@@UEAAJW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x18016A330
 * Callers:
 *     <none>
 * Callees:
 *     Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_53baa370e40e033c43d6bef617b2fce4___ @ 0x18016A378 (Windows--Internal--ComTaskPool--RunSynchronousTaskOnMTA__lambda_53baa370e40e033c43d6bef617b2fce4.c)
 */

__int64 __fastcall UwpWindowWrapperBase::Navigate(__int64 a1, int a2)
{
  DWORD CurrentThreadId; // eax
  __int64 v3; // rcx
  _QWORD v5[3]; // [rsp+20h] [rbp-18h] BYREF
  int v6; // [rsp+48h] [rbp+10h] BYREF

  v6 = a2;
  v5[0] = &v6;
  v5[1] = a1 - 8;
  CurrentThreadId = GetCurrentThreadId();
  return Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_53baa370e40e033c43d6bef617b2fce4___(
           v3,
           CurrentThreadId,
           v5);
}
