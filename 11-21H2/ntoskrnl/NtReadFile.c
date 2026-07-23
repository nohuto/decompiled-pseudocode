/*
 * XREFs of NtReadFile @ 0x14073A320
 * Callers:
 *     sub_1405FB258 @ 0x1405FB258 (sub_1405FB258.c)
 *     sub_1407D84EC @ 0x1407D84EC (sub_1407D84EC.c)
 * Callees:
 *     sub_1402AC840 @ 0x1402AC840 (sub_1402AC840.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     sub_14065863C @ 0x14065863C (sub_14065863C.c)
 *     ObReferenceObjectByHandle @ 0x140732D00 (ObReferenceObjectByHandle.c)
 *     sub_14073A450 @ 0x14073A450 (sub_14073A450.c)
 */

NTSTATUS __stdcall NtReadFile(
        HANDLE FileHandle,
        HANDLE Event,
        PIO_APC_ROUTINE ApcRoutine,
        PVOID ApcContext,
        PIO_STATUS_BLOCK IoStatusBlock,
        PVOID Buffer,
        ULONG Length,
        PLARGE_INTEGER ByteOffset,
        PULONG Key)
{
  KPROCESSOR_MODE v10; // r9
  NTSTATUS result; // eax
  PVOID v12; // rbx
  SIZE_T v13; // [rsp+30h] [rbp-58h]
  PVOID Object; // [rsp+70h] [rbp-18h] BYREF

  if ( (unsigned int)dword_140C0959C >= 2 )
    sub_14065863C();
  v10 = *((_BYTE *)KeGetCurrentThread() + 562);
  Object = 0LL;
  result = ObReferenceObjectByHandle(FileHandle, 1u, (POBJECT_TYPE)IoFileObjectType, v10, &Object, 0LL);
  if ( result >= 0 )
  {
    v12 = Object;
    if ( sub_1402AC840((__int64)Object) )
    {
      ObfDereferenceObject(v12);
      return -1073739504;
    }
    else
    {
      LODWORD(v13) = Length;
      return sub_14073A450(
               v12,
               (__int64)IoStatusBlock,
               Buffer,
               v13,
               (__int64)ByteOffset,
               (__int64)Key,
               0LL,
               0LL,
               0,
               0LL);
    }
  }
  return result;
}
