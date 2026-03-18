/*
 * XREFs of NtRemoveProcessDebug @ 0x140929080
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     VslpEnterIumSecureMode @ 0x140358A20 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     PsTestProtectedProcessIncompatibility @ 0x14066CFE4 (PsTestProtectedProcessIncompatibility.c)
 *     DbgkClearProcessDebugObject @ 0x1406E9FB0 (DbgkClearProcessDebugObject.c)
 *     ObReferenceObjectByHandle @ 0x140732D00 (ObReferenceObjectByHandle.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x140732D40 (ObpReferenceObjectByHandleWithTag.c)
 */

__int64 __fastcall NtRemoveProcessDebug(ULONG_PTR a1, void *a2)
{
  char PreviousMode; // si
  __int64 result; // rax
  __int64 v5; // rcx
  _QWORD *v6; // rdi
  int v7; // ebx
  __int64 v8; // rbx
  PVOID Object[2]; // [rsp+40h] [rbp-A8h] BYREF
  _QWORD v10[14]; // [rsp+50h] [rbp-98h] BYREF

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  Object[0] = 0LL;
  result = ObpReferenceObjectByHandleWithTag(
             a1,
             2048,
             (__int64)PsProcessType,
             PreviousMode,
             0x4F676244u,
             Object,
             0LL,
             0LL);
  if ( (int)result >= 0 )
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
        v7 = ObReferenceObjectByHandle(a2, 2u, DbgkDebugObjectType, PreviousMode, Object, 0LL);
        if ( v7 >= 0 )
        {
          v7 = DbgkClearProcessDebugObject((ULONG_PTR)v6, (__int64)Object[0]);
          ObfDereferenceObject(Object[0]);
        }
      }
    }
    ObfDereferenceObjectWithTag(v6, 0x4F676244u);
    return (unsigned int)v7;
  }
  return result;
}
