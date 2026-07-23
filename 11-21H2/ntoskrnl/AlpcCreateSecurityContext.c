/*
 * XREFs of AlpcCreateSecurityContext @ 0x1409662A0
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     ObReferenceObjectByHandle @ 0x140732D00 (ObReferenceObjectByHandle.c)
 *     sub_1407A5A54 @ 0x1407A5A54 (sub_1407A5A54.c)
 *     sub_1407A74A4 @ 0x1407A74A4 (sub_1407A74A4.c)
 */

__int64 __fastcall AlpcCreateSecurityContext(void *a1, struct _KTHREAD *a2, int a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rax
  int v7; // ebx
  PVOID v8; // rdi
  struct _SECURITY_QUALITY_OF_SERVICE *v9; // r9
  ULONG_PTR v10; // rcx
  PVOID Object; // [rsp+30h] [rbp-18h] BYREF
  ULONG_PTR BugCheckParameter2[2]; // [rsp+38h] [rbp-10h] BYREF

  BugCheckParameter2[0] = 0LL;
  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  if ( a3 )
  {
    v7 = -1073741811;
  }
  else
  {
    Object = 0LL;
    v7 = ObReferenceObjectByHandle(a1, 1u, qword_140D069D8, 0, &Object, 0LL);
    if ( v7 >= 0 )
    {
      v8 = Object;
      if ( !a4 || (v9 = *(struct _SECURITY_QUALITY_OF_SERVICE **)(a4 + 8)) == 0LL )
        v9 = (struct _SECURITY_QUALITY_OF_SERVICE *)((char *)Object + 260);
      v7 = sub_1407A74A4((volatile signed __int64 *)Object, a2, 1, v9, BugCheckParameter2);
      if ( v7 >= 0 )
      {
        v10 = BugCheckParameter2[0];
        *(_QWORD *)(a4 + 16) = *(_QWORD *)(BugCheckParameter2[0] + 8);
        sub_1407A5A54(v10, 1);
      }
      ObfDereferenceObject(v8);
    }
  }
  sub_1402F9540((__int64)KeGetCurrentThread());
  return (unsigned int)v7;
}
