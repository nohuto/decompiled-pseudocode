/*
 * XREFs of sub_1406BC370 @ 0x1406BC370
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 *     ObReferenceObjectByHandle @ 0x140732D00 (ObReferenceObjectByHandle.c)
 *     sub_1407A4914 @ 0x1407A4914 (sub_1407A4914.c)
 *     sub_1407A58A4 @ 0x1407A58A4 (sub_1407A58A4.c)
 *     sub_1407A5A54 @ 0x1407A5A54 (sub_1407A5A54.c)
 */

__int64 __fastcall sub_1406BC370(void *a1, int a2, ULONG_PTR a3)
{
  struct _KTHREAD *CurrentThread; // rax
  NTSTATUS v5; // ebx
  PVOID v6; // rdi
  signed __int64 *v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // r8
  int v10; // edi
  ULONG_PTR v11; // rdi
  ULONG_PTR BugCheckParameter2[4]; // [rsp+38h] [rbp-20h] BYREF
  PVOID Object; // [rsp+78h] [rbp+20h] BYREF

  *(_OWORD *)BugCheckParameter2 = 0LL;
  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  if ( a2 )
  {
    v5 = -1073741811;
  }
  else
  {
    Object = 0LL;
    v5 = ObReferenceObjectByHandle(a1, 1u, qword_140D069D8, *((_BYTE *)KeGetCurrentThread() + 562), &Object, 0LL);
    if ( v5 >= 0 )
    {
      BugCheckParameter2[0] = a3;
      v6 = Object;
      BugCheckParameter2[1] = 0LL;
      v7 = (signed __int64 *)((char *)Object + 352);
      while ( 1 )
      {
        ExAcquirePushLockSharedEx((ULONG_PTR)v7, 0LL);
        v10 = sub_1407A4914(v6, v8, v9, BugCheckParameter2);
        if ( _InterlockedCompareExchange64(v7, 0LL, 17LL) != 17 )
          ExfReleasePushLockShared(v7);
        sub_1402AFC00((ULONG_PTR)v7);
        if ( v10 != -1073741267 )
          break;
        v6 = Object;
      }
      v11 = BugCheckParameter2[1];
      if ( BugCheckParameter2[1] )
      {
        v5 = (unsigned __int8)sub_1407A58A4(BugCheckParameter2[1]) == 0 ? 0xC0000056 : 0;
        sub_1407A5A54(v11);
      }
      else
      {
        v5 = -1073741503;
      }
      ObfDereferenceObject(Object);
    }
  }
  sub_1402F9540((__int64)KeGetCurrentThread());
  return (unsigned int)v5;
}
