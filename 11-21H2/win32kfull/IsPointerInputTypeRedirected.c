/*
 * XREFs of IsPointerInputTypeRedirected @ 0x1C01ECC60
 * Callers:
 *     <none>
 * Callees:
 *     IsPointerInputRedirected @ 0x1C01ECBC4 (IsPointerInputRedirected.c)
 */

__int64 __fastcall IsPointerInputTypeRedirected(__int64 a1)
{
  int v1; // edi
  __int64 v2; // rbx
  __int64 CurrentProcessWin32Process; // rax

  v1 = a1;
  v2 = *(_QWORD *)(grpdeskRitInput + 8LL);
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1);
  return IsPointerInputRedirected(CurrentProcessWin32Process, v2, v1, 0LL);
}
