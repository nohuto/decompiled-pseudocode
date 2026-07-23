/*
 * XREFs of sub_1406A22D0 @ 0x1406A22D0
 * Callers:
 *     <none>
 * Callees:
 *     IoSetIoCompletionEx @ 0x14022A180 (IoSetIoCompletionEx.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     ObReferenceObjectByHandle @ 0x140732D00 (ObReferenceObjectByHandle.c)
 */

NTSTATUS __fastcall sub_1406A22D0(void *a1, void *a2, __int64 a3, __int64 a4, int a5, __int64 a6)
{
  NTSTATUS result; // eax
  KPROCESSOR_MODE v10; // r9
  int v11; // ebx
  signed __int32 v12; // eax
  _DWORD *v13; // rsi
  __int64 v14; // r8
  PVOID v15; // rdi
  PVOID v16; // [rsp+40h] [rbp-18h] BYREF
  PVOID Object; // [rsp+48h] [rbp-10h] BYREF

  Object = 0LL;
  result = ObReferenceObjectByHandle(
             a1,
             2u,
             IoCompletionObjectType,
             *((_BYTE *)KeGetCurrentThread() + 562),
             &Object,
             0LL);
  if ( result < 0 )
    return result;
  v10 = *((_BYTE *)KeGetCurrentThread() + 562);
  v16 = 0LL;
  v11 = ObReferenceObjectByHandle(a2, 2u, qword_140D07028, v10, &v16, 0LL);
  if ( v11 < 0 )
  {
    v15 = Object;
    goto LABEL_5;
  }
  v12 = _InterlockedCompareExchange((volatile signed __int32 *)v16, 1, 0);
  v13 = v16;
  if ( v12 )
  {
    v15 = Object;
    v11 = -1073741584;
LABEL_11:
    if ( v13 )
      ObfDereferenceObject(v13);
    goto LABEL_5;
  }
  v14 = a4;
  v15 = Object;
  v11 = IoSetIoCompletionEx((__int64)Object, a3, v14, a5, a6, 0, (__int64)v16 + 8);
  if ( v11 < 0 )
  {
    *v13 = 0;
    goto LABEL_11;
  }
LABEL_5:
  if ( v15 )
    ObfDereferenceObject(v15);
  return v11;
}
