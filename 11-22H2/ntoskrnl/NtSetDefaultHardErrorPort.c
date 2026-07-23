/*
 * XREFs of NtSetDefaultHardErrorPort @ 0x140862640
 * Callers:
 *     <none>
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x14022D390 (PsGetCurrentServerSiloGlobals.c)
 *     ObfReferenceObject @ 0x140233C20 (ObfReferenceObject.c)
 *     PsIsCurrentThreadInServerSilo @ 0x140287350 (PsIsCurrentThreadInServerSilo.c)
 *     ObReferenceObjectByHandle @ 0x1406E6370 (ObReferenceObjectByHandle.c)
 *     SeSinglePrivilegeCheck @ 0x140738000 (SeSinglePrivilegeCheck.c)
 */

NTSTATUS __cdecl NtSetDefaultHardErrorPort(HANDLE DefaultHardErrorPort)
{
  _DWORD *CurrentServerSiloGlobals; // rbx
  NTSTATUS result; // eax
  _KPROCESS *Process; // rcx
  PVOID Object; // [rsp+48h] [rbp+10h] BYREF

  CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
  if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, KeGetCurrentThread()->PreviousMode) )
    return -1073741727;
  if ( CurrentServerSiloGlobals[224] == 1 )
    return -1073741823;
  Object = 0LL;
  result = ObReferenceObjectByHandle(
             DefaultHardErrorPort,
             0,
             LpcPortObjectType,
             KeGetCurrentThread()->PreviousMode,
             &Object,
             0LL);
  *((_QWORD *)CurrentServerSiloGlobals + 111) = Object;
  if ( result >= 0 )
  {
    if ( !PsIsCurrentThreadInServerSilo() )
      ExReadyForErrors = 1;
    CurrentServerSiloGlobals[224] = 1;
    Process = KeGetCurrentThread()->ApcState.Process;
    *((_QWORD *)CurrentServerSiloGlobals + 110) = Process;
    ObfReferenceObject(Process);
    return 0;
  }
  return result;
}
