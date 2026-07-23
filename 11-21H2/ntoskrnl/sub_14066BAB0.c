/*
 * XREFs of sub_14066BAB0 @ 0x14066BAB0
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     sub_14066BC7C @ 0x14066BC7C (sub_14066BC7C.c)
 *     ObReferenceObjectByHandle @ 0x140732D00 (ObReferenceObjectByHandle.c)
 *     sub_1407A59D8 @ 0x1407A59D8 (sub_1407A59D8.c)
 *     sub_1407A5A54 @ 0x1407A5A54 (sub_1407A5A54.c)
 */

__int64 __fastcall sub_14066BAB0(HANDLE Handle, int a2, __int64 a3, void *a4, _QWORD *a5, _QWORD *a6)
{
  struct _KTHREAD *CurrentThread; // rax
  char v9; // r14
  NTSTATUS v10; // ebx
  __int64 v11; // rdx
  __int64 v12; // rcx
  KPROCESSOR_MODE v13; // r9
  PVOID v14; // rsi
  ULONG_PTR v15; // rdi
  ULONG_PTR BugCheckParameter2; // [rsp+30h] [rbp-18h] BYREF
  PVOID Object; // [rsp+38h] [rbp-10h] BYREF

  BugCheckParameter2 = 0LL;
  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  v9 = *((_BYTE *)KeGetCurrentThread() + 562);
  if ( (a2 & 0xFFFBFFFF) != 0 || (a2 & 0x40000) != 0 && a3 )
  {
    v10 = -1073741811;
  }
  else
  {
    if ( v9 )
    {
      v11 = 0x7FFFFFFF0000LL;
      v12 = 0x7FFFFFFF0000LL;
      if ( (unsigned __int64)a5 < 0x7FFFFFFF0000LL )
        v12 = (__int64)a5;
      *(_QWORD *)v12 = *(_QWORD *)v12;
      if ( (unsigned __int64)a6 < 0x7FFFFFFF0000LL )
        v11 = (__int64)a6;
      *(_QWORD *)v11 = *(_QWORD *)v11;
    }
    v13 = *((_BYTE *)KeGetCurrentThread() + 562);
    Object = 0LL;
    v10 = ObReferenceObjectByHandle(Handle, 1u, qword_140D069D8, v13, &Object, 0LL);
    if ( v10 >= 0 )
    {
      v14 = Object;
      v10 = sub_14066BC7C(Object, a4, (__int64)&BugCheckParameter2);
      if ( v10 >= 0 )
      {
        v15 = BugCheckParameter2;
        *a5 = *(_QWORD *)(BugCheckParameter2 + 24);
        *a6 = *(_QWORD *)(v15 + 8);
        sub_1407A5A54(v15);
      }
      ObfDereferenceObject(v14);
    }
  }
  sub_1402F9540((__int64)KeGetCurrentThread());
  return (unsigned int)v10;
}
