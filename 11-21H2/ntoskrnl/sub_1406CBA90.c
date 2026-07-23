/*
 * XREFs of sub_1406CBA90 @ 0x1406CBA90
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     sub_1406CBB84 @ 0x1406CBB84 (sub_1406CBB84.c)
 *     ObReferenceObjectByHandle @ 0x140732D00 (ObReferenceObjectByHandle.c)
 */

__int64 __fastcall sub_1406CBA90(HANDLE Handle, int a2, __int64 a3, _DWORD *a4)
{
  struct _KTHREAD *CurrentThread; // rax
  KPROCESSOR_MODE v7; // r9
  __int64 v8; // rcx
  NTSTATUS v9; // ebx
  PVOID v10; // rdi
  PVOID Object; // [rsp+30h] [rbp-18h] BYREF
  __int64 v13; // [rsp+38h] [rbp-10h]

  v13 = 0LL;
  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  if ( a2 )
  {
    v9 = -1073741811;
  }
  else
  {
    v7 = *((_BYTE *)KeGetCurrentThread() + 562);
    if ( v7 )
    {
      v8 = 0x7FFFFFFF0000LL;
      if ( (unsigned __int64)a4 < 0x7FFFFFFF0000LL )
        v8 = (__int64)a4;
      *(_DWORD *)v8 = *(_DWORD *)v8;
    }
    Object = 0LL;
    v9 = ObReferenceObjectByHandle(Handle, 1u, qword_140D069D8, v7, &Object, 0LL);
    if ( v9 >= 0 )
    {
      v10 = Object;
      v9 = sub_1406CBB84(Object);
      if ( v9 >= 0 )
        *a4 = v13 | 0x80000000;
      ObfDereferenceObject(v10);
    }
  }
  sub_1402F9540((__int64)KeGetCurrentThread());
  return (unsigned int)v9;
}
