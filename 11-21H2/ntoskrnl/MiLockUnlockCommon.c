/*
 * XREFs of MiLockUnlockCommon @ 0x1406AFE20
 * Callers:
 *     NtUnlockVirtualMemory @ 0x1402CD9C0 (NtUnlockVirtualMemory.c)
 *     NtLockVirtualMemory @ 0x1402E5D90 (NtLockVirtualMemory.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     SeSinglePrivilegeCheck @ 0x140722A80 (SeSinglePrivilegeCheck.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x140732D40 (ObpReferenceObjectByHandleWithTag.c)
 */

__int64 __fastcall MiLockUnlockCommon(
        ULONG_PTR BugCheckParameter1,
        void **a2,
        PVOID *a3,
        int a4,
        _QWORD *a5,
        _QWORD *a6,
        PVOID *a7)
{
  char v7; // si
  KPROCESSOR_MODE PreviousMode; // r14
  __int64 v10; // rcx
  __int64 v11; // rcx
  void *v12; // rdi
  PVOID v13; // rbx
  __int64 result; // rax
  PVOID Object[5]; // [rsp+48h] [rbp-30h] BYREF

  v7 = a4;
  Object[0] = 0LL;
  if ( (a4 & 0xFFFFFFFC) != 0 || (a4 & 3) == 0 )
    return 3221225485LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    v10 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)a2 < 0x7FFFFFFF0000LL )
      v10 = (__int64)a2;
    *(_QWORD *)v10 = *(_QWORD *)v10;
    v11 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)a3 < 0x7FFFFFFF0000LL )
      v11 = (__int64)a3;
    *(_QWORD *)v11 = *(_QWORD *)v11;
  }
  v12 = *a2;
  Object[2] = v12;
  v13 = *a3;
  Object[3] = *a3;
  if ( (unsigned __int64)v12 > 0x7FFFFFFEFFFFLL || 0x7FFFFFFF0000LL - (__int64)v12 < (unsigned __int64)v13 || !v13 )
    return 3221225485LL;
  result = ObpReferenceObjectByHandleWithTag(BugCheckParameter1, 0x6D566D4Du, (__int64)Object, 0LL, 0LL);
  if ( (int)result >= 0 )
  {
    if ( (v7 & 2) == 0 || SeSinglePrivilegeCheck(SeLockMemoryPrivilege, PreviousMode) )
    {
      *a5 = v12;
      *a6 = v13;
      *a7 = Object[0];
      return 0LL;
    }
    else
    {
      ObfDereferenceObjectWithTag(Object[0], 0x6D566D4Du);
      return 3221225569LL;
    }
  }
  return result;
}
