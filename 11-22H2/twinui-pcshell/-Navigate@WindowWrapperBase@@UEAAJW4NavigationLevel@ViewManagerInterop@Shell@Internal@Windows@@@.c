/*
 * XREFs of ?Navigate@WindowWrapperBase@@UEAAJW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1804EAB50
 * Callers:
 *     <none>
 * Callees:
 *     Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_6b9a4813d4cd55222670e24e1f9f417a___ @ 0x1804E42F8 (Windows--Internal--ComTaskPool--RunSynchronousTaskOnMTA__lambda_6b9a4813d4cd55222670e24e1f9f417a.c)
 */

__int64 __fastcall WindowWrapperBase::Navigate(__int64 a1, int a2)
{
  DWORD CurrentThreadId; // eax
  unsigned int v3; // ecx
  __int128 v5; // [rsp+20h] [rbp-18h] BYREF
  int v6; // [rsp+48h] [rbp+10h] BYREF

  v6 = a2;
  *(_QWORD *)&v5 = &v6;
  *((_QWORD *)&v5 + 1) = a1 - 8;
  CurrentThreadId = GetCurrentThreadId();
  return Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_6b9a4813d4cd55222670e24e1f9f417a___(
           v3,
           CurrentThreadId,
           &v5);
}
