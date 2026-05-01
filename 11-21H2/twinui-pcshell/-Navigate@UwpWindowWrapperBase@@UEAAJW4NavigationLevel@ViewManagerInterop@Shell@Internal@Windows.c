/*
 * XREFs of ?Navigate@UwpWindowWrapperBase@@UEAAJW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180415770
 * Callers:
 *     <none>
 * Callees:
 *     Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_b43377fd694361d7de0643b09c3ea597___ @ 0x1804104A4 (Windows--Internal--ComTaskPool--RunSynchronousTaskOnMTA__lambda_b43377fd694361d7de0643b09c3ea597.c)
 */

__int64 __fastcall UwpWindowWrapperBase::Navigate(__int64 a1, int a2)
{
  DWORD CurrentThreadId; // eax
  unsigned int v3; // ecx
  __int128 v5; // [rsp+20h] [rbp-18h] BYREF
  int v6; // [rsp+48h] [rbp+10h] BYREF

  v6 = a2;
  *(_QWORD *)&v5 = &v6;
  *((_QWORD *)&v5 + 1) = a1 - 8;
  CurrentThreadId = GetCurrentThreadId();
  return Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_b43377fd694361d7de0643b09c3ea597___(
           v3,
           CurrentThreadId,
           &v5);
}
