/*
 * XREFs of sub_14074D580 @ 0x14074D580
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     KeReleaseSemaphore @ 0x1402D3440 (KeReleaseSemaphore.c)
 *     sub_14056AA7C @ 0x14056AA7C (sub_14056AA7C.c)
 *     ObReferenceObjectByHandle @ 0x140732D00 (ObReferenceObjectByHandle.c)
 */

__int64 __fastcall sub_14074D580(void *a1, int a2, LONG *a3)
{
  KPROCESSOR_MODE v5; // r14
  NTSTATUS v6; // edi
  LONG v7; // r8d
  PVOID v8; // rsi
  LONG v9; // r15d
  __int64 v11; // rdx
  PVOID Object; // [rsp+38h] [rbp-20h] BYREF

  v5 = *((_BYTE *)KeGetCurrentThread() + 562);
  if ( a3 && v5 )
  {
    v11 = (__int64)a3;
    if ( (unsigned __int64)a3 >= 0x7FFFFFFF0000LL )
      v11 = 0x7FFFFFFF0000LL;
    *(_DWORD *)v11 = *(_DWORD *)v11;
  }
  if ( a2 <= 0 )
    return 3221225485LL;
  Object = 0LL;
  v6 = ObReferenceObjectByHandle(a1, 2u, (POBJECT_TYPE)ExSemaphoreObjectType, v5, &Object, 0LL);
  if ( v6 >= 0 )
  {
    v7 = a2;
    v8 = Object;
    v9 = KeReleaseSemaphore((PRKSEMAPHORE)Object, 1, v7, 0);
    ObfDereferenceObject(v8);
    if ( a3 )
      *a3 = v9;
  }
  return (unsigned int)v6;
}
