/*
 * XREFs of sub_1406C9680 @ 0x1406C9680
 * Callers:
 *     sub_14078D764 @ 0x14078D764 (sub_14078D764.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     sub_1402D2E74 @ 0x1402D2E74 (sub_1402D2E74.c)
 *     sub_1406C9928 @ 0x1406C9928 (sub_1406C9928.c)
 *     ObReferenceObjectByHandle @ 0x140732D00 (ObReferenceObjectByHandle.c)
 */

__int64 __fastcall sub_1406C9680(void *a1, _QWORD *a2, _QWORD *a3)
{
  struct _KTHREAD *CurrentThread; // rax
  KPROCESSOR_MODE v6; // r9
  NTSTATUS v7; // ebx
  int v8; // eax
  __int64 v9; // rcx
  char v10; // al
  __int64 v12; // [rsp+50h] [rbp+18h] BYREF
  PVOID Object; // [rsp+58h] [rbp+20h] BYREF

  CurrentThread = KeGetCurrentThread();
  *a3 = 0LL;
  v6 = *((_BYTE *)CurrentThread + 562);
  v12 = 0LL;
  Object = 0LL;
  v7 = ObReferenceObjectByHandle(a1, 0, (POBJECT_TYPE)IoFileObjectType, v6, &Object, 0LL);
  if ( v7 >= 0 )
  {
    v8 = sub_1402D2E74((PFILE_OBJECT)Object, &v12);
    v9 = v12;
    v7 = v8;
    if ( v8 >= 0 )
    {
      *a2 = v12 + 40;
      v10 = sub_1406C9928(*((_QWORD *)KeGetCurrentThread() + 23));
      v9 = v12;
      if ( v10 )
        *a3 = *(_QWORD *)(v12 + 32);
    }
    if ( v9 )
      ObfDereferenceObject(*(PVOID *)(v9 + 32));
  }
  if ( Object )
    ObfDereferenceObject(Object);
  return (unsigned int)v7;
}
