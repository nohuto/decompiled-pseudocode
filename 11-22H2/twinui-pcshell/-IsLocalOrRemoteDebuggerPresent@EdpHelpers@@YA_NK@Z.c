/*
 * XREFs of ?IsLocalOrRemoteDebuggerPresent@EdpHelpers@@YA_NK@Z @ 0x1803CEB80
 * Callers:
 *     ?GetEnterpriseIdForWindow@EdpHelpers@@YAJPEAUHWND__@@PEAPEAG@Z @ 0x1803CE39C (-GetEnterpriseIdForWindow@EdpHelpers@@YAJPEAUHWND__@@PEAPEAG@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall EdpHelpers::IsLocalOrRemoteDebuggerPresent(DWORD dwProcessId)
{
  char v2; // di
  HANDLE v3; // rax
  void *v4; // rbx
  BOOL v5; // eax
  WINBOOL pbDebuggerPresent; // [rsp+38h] [rbp+10h] BYREF

  v2 = 0;
  pbDebuggerPresent = IsDebuggerPresent();
  if ( pbDebuggerPresent )
    return 1;
  v3 = OpenProcess(0x1000u, 0, dwProcessId);
  v4 = v3;
  if ( v3 )
  {
    v5 = CheckRemoteDebuggerPresent(v3, &pbDebuggerPresent);
    pbDebuggerPresent = v5 ? pbDebuggerPresent : 0;
    if ( v4 != (void *)-1LL )
      CloseHandle(v4);
  }
  if ( pbDebuggerPresent )
    return 1;
  return v2;
}
