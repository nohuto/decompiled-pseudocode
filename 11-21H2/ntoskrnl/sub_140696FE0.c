/*
 * XREFs of sub_140696FE0 @ 0x140696FE0
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     IoRemoveIoCompletion @ 0x1402B7BD0 (IoRemoveIoCompletion.c)
 *     ObReferenceObjectByHandle @ 0x140732D00 (ObReferenceObjectByHandle.c)
 */

NTSTATUS __fastcall sub_140696FE0(HANDLE Handle, _QWORD *a2, _QWORD *a3, _OWORD *a4, unsigned __int64 a5)
{
  KPROCESSOR_MODE v9; // si
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rax
  LARGE_INTEGER *v14; // rbx
  NTSTATUS result; // eax
  int v16; // edi
  ULONG v17; // [rsp+44h] [rbp-64h] BYREF
  LARGE_INTEGER *v18; // [rsp+48h] [rbp-60h]
  __int64 v19; // [rsp+50h] [rbp-58h] BYREF
  PVOID Object; // [rsp+58h] [rbp-50h] BYREF
  __int128 v21; // [rsp+60h] [rbp-48h] BYREF
  __int128 v22; // [rsp+70h] [rbp-38h]
  PLIST_ENTRY v23; // [rsp+88h] [rbp-20h] BYREF

  v23 = 0LL;
  v21 = 0LL;
  v22 = 0LL;
  v17 = 0;
  v19 = 0LL;
  v18 = 0LL;
  v9 = *((_BYTE *)KeGetCurrentThread() + 562);
  if ( v9 )
  {
    v10 = (__int64)a3;
    if ( (unsigned __int64)a3 >= 0x7FFFFFFF0000LL )
      v10 = 0x7FFFFFFF0000LL;
    *(_QWORD *)v10 = *(_QWORD *)v10;
    v11 = (__int64)a2;
    if ( (unsigned __int64)a2 >= 0x7FFFFFFF0000LL )
      v11 = 0x7FFFFFFF0000LL;
    *(_QWORD *)v11 = *(_QWORD *)v11;
    v12 = (__int64)a4;
    if ( (unsigned __int64)a4 >= 0x7FFFFFFF0000LL )
      v12 = 0x7FFFFFFF0000LL;
    *(_DWORD *)v12 = *(_DWORD *)v12;
    v13 = a5;
    if ( a5 )
    {
      v18 = (LARGE_INTEGER *)&v19;
      if ( a5 >= 0x7FFFFFFF0000LL )
        v13 = 0x7FFFFFFF0000LL;
      v19 = *(_QWORD *)v13;
    }
    v14 = v18;
  }
  else
  {
    v14 = v18;
    if ( a5 )
      v14 = (LARGE_INTEGER *)a5;
  }
  Object = 0LL;
  result = ObReferenceObjectByHandle(Handle, 2u, IoCompletionObjectType, v9, &Object, 0LL);
  if ( result >= 0 )
  {
    v16 = IoRemoveIoCompletion((struct _KQUEUE *)Object, (__int64)&v21, &v23, 1u, &v17, v9, v14, 0);
    ObfDereferenceObject(Object);
    if ( !v16 )
    {
      *a2 = v21;
      *a3 = *((_QWORD *)&v21 + 1);
      *a4 = v22;
    }
    return v16;
  }
  return result;
}
