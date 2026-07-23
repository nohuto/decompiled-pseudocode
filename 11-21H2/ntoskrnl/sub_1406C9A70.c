/*
 * XREFs of sub_1406C9A70 @ 0x1406C9A70
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     sub_1406C9B74 @ 0x1406C9B74 (sub_1406C9B74.c)
 *     ObReferenceObjectByHandle @ 0x140732D00 (ObReferenceObjectByHandle.c)
 *     sub_140732D40 @ 0x140732D40 (sub_140732D40.c)
 */

__int64 __fastcall sub_1406C9A70(ULONG_PTR a1, void *a2)
{
  struct _KTHREAD *CurrentThread; // rbx
  KPROCESSOR_MODE v5; // si
  __int64 result; // rax
  _QWORD *v7; // rbx
  NTSTATUS v8; // eax
  PVOID v9; // rdx
  unsigned int v10; // esi
  void *v11; // rdx
  PVOID Object; // [rsp+50h] [rbp+8h] BYREF

  CurrentThread = KeGetCurrentThread();
  Object = 0LL;
  v5 = *((_BYTE *)CurrentThread + 562);
  if ( a1 == -1LL )
  {
    v7 = (_QWORD *)*((_QWORD *)CurrentThread + 23);
    Object = v7;
  }
  else
  {
    result = sub_140732D40(a1, 0x624A7350u, (__int64)&Object, 0LL, 0LL);
    if ( (int)result < 0 )
      return result;
    v7 = Object;
  }
  if ( !a2 )
  {
    v9 = (PVOID)v7[162];
    v7 = Object;
LABEL_6:
    v10 = sub_1406C9B74(v7, v9);
    if ( a2 )
      ObfDereferenceObject(v11);
    goto LABEL_8;
  }
  Object = 0LL;
  v8 = ObReferenceObjectByHandle(a2, 4u, (POBJECT_TYPE)PsJobType, v5, &Object, 0LL);
  v9 = Object;
  v10 = v8;
  if ( v8 >= 0 )
    goto LABEL_6;
LABEL_8:
  if ( a1 != -1LL )
    ObfDereferenceObjectWithTag(v7, 0x624A7350u);
  return v10;
}
