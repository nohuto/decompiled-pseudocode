/*
 * XREFs of NtAllocateReserveObject @ 0x1407D7B90
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x140435E00 (memset.c)
 *     ObCreateObjectEx @ 0x140730AA0 (ObCreateObjectEx.c)
 *     ObInsertObjectEx @ 0x140735BC0 (ObInsertObjectEx.c)
 */

NTSTATUS __cdecl NtAllocateReserveObject(
        PHANDLE MemoryReserveHandle,
        POBJECT_ATTRIBUTES ObjectAttributes,
        MEMORY_RESERVE_TYPE Type)
{
  __int64 v3; // r14
  char PreviousMode; // si
  __int64 v6; // rcx
  NTSTATUS result; // eax
  _DWORD *v8; // rbx
  NTSTATUS inserted; // edx
  __int64 v10; // [rsp+20h] [rbp-58h]
  __int64 v11; // [rsp+50h] [rbp-28h] BYREF
  PVOID Object; // [rsp+98h] [rbp+20h] BYREF

  v3 = Type;
  v11 = 0LL;
  Object = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    v6 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)MemoryReserveHandle < 0x7FFFFFFF0000LL )
      v6 = (__int64)MemoryReserveHandle;
    *(_QWORD *)v6 = *(_QWORD *)v6;
  }
  if ( (unsigned int)Type > MemoryReserveIoCompletion )
    return -1073741811;
  result = ObCreateObjectEx(
             PreviousMode,
             *(&PspMemoryReserveObjectTypes + (int)Type),
             (__int64)ObjectAttributes,
             PreviousMode,
             v10,
             PspMemoryReserveObjectSizes[Type],
             0,
             0,
             &Object,
             0LL);
  if ( result >= 0 )
  {
    v8 = Object;
    memset(Object, 0, PspMemoryReserveObjectSizes[v3]);
    if ( (_DWORD)v3 == 1 )
    {
      v8[6] = 4;
      *((_QWORD *)v8 + 8) = PspIoMiniPacketCallbackRoutine;
      *((_QWORD *)v8 + 9) = v8;
      *((_BYTE *)v8 + 80) = 0;
    }
    inserted = ObInsertObjectEx((char *)v8, 0LL, 983043, 0, 0, 0LL, &v11);
    LODWORD(Object) = inserted;
    if ( inserted >= 0 )
      *MemoryReserveHandle = (HANDLE)v11;
    return inserted;
  }
  return result;
}
