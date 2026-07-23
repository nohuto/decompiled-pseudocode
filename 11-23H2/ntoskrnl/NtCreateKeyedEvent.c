/*
 * XREFs of NtCreateKeyedEvent @ 0x14084DED0
 * Callers:
 *     <none>
 * Callees:
 *     ObCreateObjectEx @ 0x140730AA0 (ObCreateObjectEx.c)
 *     ObInsertObjectEx @ 0x140735BC0 (ObInsertObjectEx.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A00DF0 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __cdecl NtCreateKeyedEvent(
        PHANDLE KeyedEventHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        ULONG Flags)
{
  char PreviousMode; // cl
  NTSTATUS result; // eax
  char *v8; // rcx
  _QWORD *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // [rsp+20h] [rbp-68h]
  PVOID Object; // [rsp+58h] [rbp-30h] BYREF
  __int64 v13[5]; // [rsp+60h] [rbp-28h] BYREF

  Object = 0LL;
  v13[0] = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode && ((unsigned __int8)KeyedEventHandle & 7) != 0 )
    ExRaiseDatatypeMisalignment();
  *KeyedEventHandle = 0LL;
  if ( Flags )
    return -1073741582;
  result = ObCreateObjectEx(
             PreviousMode,
             ExpKeyedEventObjectType,
             (__int64)ObjectAttributes,
             PreviousMode,
             v11,
             1536,
             0,
             0,
             &Object,
             0LL);
  if ( result >= 0 )
  {
    v8 = (char *)Object;
    v9 = (char *)Object + 8;
    v10 = 64LL;
    do
    {
      *(v9 - 1) = 0LL;
      v9[1] = v9;
      *v9 = v9;
      v9 += 3;
      --v10;
    }
    while ( v10 );
    result = ObInsertObjectEx(v8, 0LL, DesiredAccess, 0, 0, 0LL, v13);
    if ( result >= 0 )
      *KeyedEventHandle = (HANDLE)v13[0];
  }
  return result;
}
