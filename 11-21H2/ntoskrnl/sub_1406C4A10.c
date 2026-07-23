/*
 * XREFs of sub_1406C4A10 @ 0x1406C4A10
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     sub_1406C4AE4 @ 0x1406C4AE4 (sub_1406C4AE4.c)
 *     ObReferenceObjectByHandle @ 0x140732D00 (ObReferenceObjectByHandle.c)
 */

__int64 __fastcall sub_1406C4A10(HANDLE Handle)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v3; // rcx
  __int64 v4; // rdi
  NTSTATUS v5; // ebx
  __int64 v7; // [rsp+48h] [rbp+10h] BYREF
  PVOID Object; // [rsp+50h] [rbp+18h] BYREF

  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  v3 = *((_QWORD *)KeGetCurrentThread() + 23);
  v7 = *(_QWORD *)(v3 + 2152);
  v4 = v7;
  if ( !v7 )
  {
    v5 = sub_1406C4AE4(v3, &v7);
    if ( v5 < 0 )
      goto LABEL_5;
    v4 = v7;
  }
  Object = 0LL;
  v5 = ObReferenceObjectByHandle(Handle, 2u, (POBJECT_TYPE)ExEventObjectType, 1, &Object, 0LL);
  if ( v5 >= 0 )
  {
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v4 + 128), (signed __int64)Object, 0LL) )
    {
      ObfDereferenceObject(Object);
      v5 = -1073740008;
    }
    else
    {
      v5 = 0;
    }
  }
LABEL_5:
  sub_1402F9540((__int64)KeGetCurrentThread());
  return (unsigned int)v5;
}
