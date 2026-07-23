/*
 * XREFs of NtMakePermanentObject @ 0x1406EA8F0
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x1402AD0A0 (ExReleasePushLockEx.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     SeSinglePrivilegeCheck @ 0x140722A80 (SeSinglePrivilegeCheck.c)
 *     ObReferenceObjectByHandle @ 0x140732D00 (ObReferenceObjectByHandle.c)
 */

NTSTATUS __cdecl NtMakePermanentObject(HANDLE Handle)
{
  KPROCESSOR_MODE v2; // bl
  NTSTATUS result; // eax
  NTSTATUS v4; // esi
  struct _KTHREAD *CurrentThread; // rax
  char *v6; // rbx
  PVOID Object; // [rsp+48h] [rbp+10h] BYREF

  v2 = *((_BYTE *)KeGetCurrentThread() + 562);
  if ( !SeSinglePrivilegeCheck(stru_140D3CB68, v2) )
    return -1073741727;
  Object = 0LL;
  result = ObReferenceObjectByHandle(Handle, 0, 0LL, v2, &Object, 0LL);
  v4 = result;
  if ( result >= 0 )
  {
    CurrentThread = KeGetCurrentThread();
    --*((_WORD *)CurrentThread + 242);
    v6 = (char *)Object;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)Object - 32, 0LL);
    *(v6 - 21) |= 0x10u;
    ExReleasePushLockEx((ULONG_PTR)(v6 - 32), 0LL);
    sub_1402F9540((__int64)KeGetCurrentThread());
    ObfDereferenceObject(Object);
    return v4;
  }
  return result;
}
