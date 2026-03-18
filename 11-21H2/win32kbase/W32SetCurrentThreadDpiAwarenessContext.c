/*
 * XREFs of W32SetCurrentThreadDpiAwarenessContext @ 0x1C002E240
 * Callers:
 *     ?zzzUpdateUserScreen@@YAJXZ @ 0x1C0063D18 (-zzzUpdateUserScreen@@YAJXZ.c)
 * Callees:
 *     CaptureAndValidateUserModeDpiAwarenessContext @ 0x1C002EB00 (CaptureAndValidateUserModeDpiAwarenessContext.c)
 *     UserSetLastError @ 0x1C003CCC0 (UserSetLastError.c)
 */

__int64 __fastcall W32SetCurrentThreadDpiAwarenessContext(int a1)
{
  unsigned int v1; // ebx
  int v2; // esi
  __int64 v3; // rdi
  __int64 *ThreadWin32Thread; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  int *v9; // rax

  v1 = 0;
  v2 = 0;
  if ( a1 >= 0 )
    v2 = a1;
  v3 = 0LL;
  ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( ThreadWin32Thread )
    v3 = *ThreadWin32Thread;
  if ( v3 )
  {
    v9 = *(int **)(v3 + 360);
    if ( v9 )
    {
      CaptureAndValidateUserModeDpiAwarenessContext(v3);
      v9 = *(int **)(v3 + 360);
    }
    v1 = *(_DWORD *)(v3 + 340);
    *(_DWORD *)(v3 + 340) = v2;
    if ( v9 )
      *v9 = v2;
  }
  if ( !v1 )
    return *(_DWORD *)(PsGetCurrentProcessWin32Process(v6, v5, v7, v8) + 280) | 0x80000000;
  return v1;
}
