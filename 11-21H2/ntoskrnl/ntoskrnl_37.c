/*
 * XREFs of ntoskrnl_37 @ 0x140939130
 * Callers:
 *     <none>
 * Callees:
 *     sub_14025E7A8 @ 0x14025E7A8 (sub_14025E7A8.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     sub_14055A060 @ 0x14055A060 (sub_14055A060.c)
 *     ObReferenceObjectByHandle @ 0x140732D00 (ObReferenceObjectByHandle.c)
 */

__int64 __fastcall ntoskrnl_37(HANDLE Handle, unsigned int a2, unsigned int a3, void **a4)
{
  KPROCESSOR_MODE v7; // r15
  PVOID v8; // rdi
  unsigned int v9; // ecx
  NTSTATUS v10; // ebx
  unsigned __int64 v11; // rcx
  NTSTATUS v12; // eax
  PVOID Object; // [rsp+40h] [rbp-18h] BYREF
  void *v15; // [rsp+48h] [rbp-10h] BYREF

  v7 = *((_BYTE *)KeGetCurrentThread() + 562);
  v8 = 0LL;
  if ( a2 > 1 )
    goto LABEL_15;
  v9 = *((_DWORD *)&qword_14003B858 + (int)a2);
  if ( !v9 )
    goto LABEL_15;
  if ( a3 < v9 )
  {
    v10 = -1073741820;
    goto LABEL_16;
  }
  if ( v7 )
  {
    if ( a3 )
    {
      v11 = (unsigned __int64)a4 + a3;
      if ( v11 > 0x7FFFFFFF0000LL || v11 < (unsigned __int64)a4 )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
  }
  Object = 0LL;
  v10 = ObReferenceObjectByHandle(Handle, 0, ntoskrnl_29, v7, &Object, 0LL);
  v8 = Object;
  if ( v10 >= 0 )
  {
    if ( a2 == 1 )
    {
      v15 = *a4;
      v12 = sub_14055A060((__int64)Object, &v15, v7);
      v10 = v12;
      if ( v12 == -1073741816 || v12 == -1073741788 )
        v10 = -1073741582;
      goto LABEL_16;
    }
LABEL_15:
    v10 = -1073741821;
  }
LABEL_16:
  if ( v8 )
    ObfDereferenceObject(v8);
  return (unsigned int)v10;
}
