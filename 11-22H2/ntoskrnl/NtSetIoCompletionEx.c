/*
 * XREFs of NtSetIoCompletionEx @ 0x14077A340
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x140231570 (ObfDereferenceObject.c)
 *     IoSetIoCompletionEx @ 0x14031A7E0 (IoSetIoCompletionEx.c)
 *     ObReferenceObjectByHandle @ 0x1406E6370 (ObReferenceObjectByHandle.c)
 */

NTSTATUS __cdecl NtSetIoCompletionEx(
        HANDLE IoCompletionHandle,
        HANDLE IoCompletionPacketHandle,
        PVOID KeyContext,
        PVOID ApcContext,
        NTSTATUS IoStatus,
        ULONG_PTR IoStatusInformation)
{
  int v6; // ebp
  int v7; // r14d
  NTSTATUS v9; // eax
  PVOID v10; // rsi
  NTSTATUS v11; // edi
  NTSTATUS v12; // eax
  PVOID v13; // rbx
  PVOID Object; // [rsp+40h] [rbp-18h] BYREF
  PVOID v16; // [rsp+48h] [rbp-10h] BYREF

  v6 = (int)ApcContext;
  v7 = (int)KeyContext;
  Object = 0LL;
  v9 = ObReferenceObjectByHandle(
         IoCompletionHandle,
         2u,
         IoCompletionObjectType,
         KeGetCurrentThread()->PreviousMode,
         &Object,
         0LL);
  v10 = Object;
  v11 = v9;
  if ( v9 < 0 )
    return v11;
  v16 = 0LL;
  v12 = ObReferenceObjectByHandle(
          IoCompletionPacketHandle,
          2u,
          ObjectType,
          KeGetCurrentThread()->PreviousMode,
          &v16,
          0LL);
  v13 = v16;
  v11 = v12;
  if ( v12 >= 0 )
  {
    if ( _InterlockedCompareExchange((volatile signed __int32 *)v16, 1, 0) )
    {
      v11 = -1073741584;
    }
    else
    {
      v11 = IoSetIoCompletionEx((int)Object, v7, v6, IoStatus, IoStatusInformation, 0, (__int64)v13 + 8);
      if ( v11 >= 0 )
        goto LABEL_5;
      *(_DWORD *)v16 = 0;
    }
    if ( v13 )
      ObfDereferenceObject(v13);
  }
LABEL_5:
  if ( v10 )
    ObfDereferenceObject(v10);
  return v11;
}
