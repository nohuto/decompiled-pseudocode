/*
 * XREFs of NtTerminateEnclave @ 0x140A3FB50
 * Callers:
 *     <none>
 * Callees:
 *     MiUnlockAndDereferenceVad @ 0x140274D20 (MiUnlockAndDereferenceVad.c)
 *     MiObtainReferencedVadEx @ 0x140274F40 (MiObtainReferencedVadEx.c)
 *     MiTerminateEnclave @ 0x140A3EBA0 (MiTerminateEnclave.c)
 */

NTSTATUS __cdecl NtTerminateEnclave(PVOID BaseAddress, ULONG Flags)
{
  __int64 *v5; // rax
  char *v6; // rdi
  NTSTATUS v7; // ebx
  NTSTATUS v8; // [rsp+38h] [rbp+10h] BYREF

  v8 = 0;
  if ( (Flags & 0xFFFFFFFA) != 0 )
    return -1073741584;
  v5 = MiObtainReferencedVadEx((unsigned __int64)BaseAddress, 0, &v8);
  v6 = (char *)v5;
  if ( !v5 )
    return v8;
  if ( (v5[6] & 0x6200000) == 0x4200000
    && (PVOID)((*((unsigned int *)v5 + 6) | ((unsigned __int64)*((unsigned __int8 *)v5 + 32) << 32)) << 12) == BaseAddress )
  {
    v7 = MiTerminateEnclave((__int64)KeGetCurrentThread()->ApcState.Process, (__int64)v5, Flags);
  }
  else
  {
    v7 = -1073741800;
  }
  MiUnlockAndDereferenceVad(v6);
  return v7;
}
