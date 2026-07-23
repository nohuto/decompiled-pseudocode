/*
 * XREFs of NtRemoveProcessDebug @ 0x140938CE0
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14022F6C0 (ObfDereferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x140231660 (ObfDereferenceObject.c)
 *     VslpEnterIumSecureMode @ 0x14033FF80 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     DbgkClearProcessDebugObject @ 0x14068277C (DbgkClearProcessDebugObject.c)
 *     PsTestProtectedProcessIncompatibility @ 0x1406B8234 (PsTestProtectedProcessIncompatibility.c)
 *     ObReferenceObjectByHandle @ 0x1406E62F0 (ObReferenceObjectByHandle.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1406E6330 (ObpReferenceObjectByHandleWithTag.c)
 */

NTSTATUS __cdecl NtRemoveProcessDebug(HANDLE ProcessHandle, HANDLE DebugObjectHandle)
{
  char PreviousMode; // si
  NTSTATUS result; // eax
  __int64 v5; // rcx
  _QWORD *v6; // rdi
  NTSTATUS v7; // ebx
  __int64 v8; // rbx
  PVOID Object[2]; // [rsp+40h] [rbp-A8h] BYREF
  _QWORD v10[14]; // [rsp+50h] [rbp-98h] BYREF

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  Object[0] = 0LL;
  result = ObpReferenceObjectByHandleWithTag(
             (ULONG_PTR)ProcessHandle,
             2048,
             (__int64)PsProcessType,
             PreviousMode,
             0x4F676244u,
             Object,
             0LL,
             0LL);
  if ( result >= 0 )
  {
    LOBYTE(v5) = PreviousMode;
    v6 = Object[0];
    if ( PsTestProtectedProcessIncompatibility(v5, (__int64)KeGetCurrentThread()->ApcState.Process, (__int64)Object[0]) )
    {
      v7 = -1073740014;
    }
    else
    {
      v8 = v6[124];
      if ( (v8 & 1) == 0
        || (memset(v10, 0, 0x68uLL),
            v10[2] = 0LL,
            v10[1] = v8,
            v7 = VslpEnterIumSecureMode(2u, 12, 0, (__int64)v10),
            v7 >= 0) )
      {
        Object[0] = 0LL;
        v7 = ObReferenceObjectByHandle(DebugObjectHandle, 2u, DbgkDebugObjectType, PreviousMode, Object, 0LL);
        if ( v7 >= 0 )
        {
          v7 = DbgkClearProcessDebugObject((ULONG_PTR)v6, (__int64)Object[0]);
          ObfDereferenceObject(Object[0]);
        }
      }
    }
    ObfDereferenceObjectWithTag(v6, 0x4F676244u);
    return v7;
  }
  return result;
}
