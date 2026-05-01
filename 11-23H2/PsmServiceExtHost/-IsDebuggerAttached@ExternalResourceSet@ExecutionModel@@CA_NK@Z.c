/*
 * XREFs of ?IsDebuggerAttached@ExternalResourceSet@ExecutionModel@@CA_NK@Z @ 0x18008B520
 * Callers:
 *     ?RunWatchdog@ExternalResourceSet@ExecutionModel@@AEAAXXZ @ 0x18008B70C (-RunWatchdog@ExternalResourceSet@ExecutionModel@@AEAAXXZ.c)
 * Callees:
 *     ?HampSystemQueryProcessIsDebuggerAttached@@YAKPEAX@Z @ 0x18001107C (-HampSystemQueryProcessIsDebuggerAttached@@YAKPEAX@Z.c)
 */

bool __fastcall ExecutionModel::ExternalResourceSet::IsDebuggerAttached(DWORD dwProcessId)
{
  bool IsDebuggerAttached; // di
  HANDLE v2; // rax
  void *v3; // rbx

  IsDebuggerAttached = 0;
  v2 = OpenProcess(0x400u, 0, dwProcessId);
  v3 = v2;
  if ( v2 )
  {
    IsDebuggerAttached = HampSystemQueryProcessIsDebuggerAttached(v2);
    CloseHandle(v3);
  }
  return IsDebuggerAttached;
}
