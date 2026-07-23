/*
 * XREFs of NtCreateProcessStateChange @ 0x1409B01B0
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14022F5D0 (ObfDereferenceObjectWithTag.c)
 *     NtClose @ 0x1406E4570 (NtClose.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1406E63B0 (ObpReferenceObjectByHandleWithTag.c)
 *     ObCreateObjectEx @ 0x140730870 (ObCreateObjectEx.c)
 *     ObInsertObjectEx @ 0x140735ED0 (ObInsertObjectEx.c)
 */

NTSTATUS __cdecl NtCreateProcessStateChange(
        PHANDLE ProcessStateChangeHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        HANDLE ProcessHandle,
        ULONG64 Reserved)
{
  char PreviousMode; // r14
  __int64 v9; // rcx
  NTSTATUS inserted; // edi
  PVOID *v11; // rcx
  __int64 Tag; // [rsp+20h] [rbp-68h]
  PVOID Object; // [rsp+58h] [rbp-30h] BYREF
  HANDLE Handle; // [rsp+60h] [rbp-28h] BYREF
  PVOID v16[3]; // [rsp+68h] [rbp-20h] BYREF

  Object = 0LL;
  v16[0] = 0LL;
  Handle = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    v9 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)ProcessStateChangeHandle < 0x7FFFFFFF0000LL )
      v9 = (__int64)ProcessStateChangeHandle;
    *(_QWORD *)v9 = *(_QWORD *)v9;
  }
  if ( (_DWORD)Reserved )
  {
    inserted = -1073741811;
  }
  else
  {
    inserted = ObpReferenceObjectByHandleWithTag(
                 (ULONG_PTR)ProcessHandle,
                 512,
                 (__int64)PsProcessType,
                 PreviousMode,
                 0x63507350u,
                 &Object,
                 0LL,
                 0LL);
    if ( inserted >= 0 )
    {
      inserted = ObCreateObjectEx(
                   PreviousMode,
                   (_DWORD *)PspProcessStateChangeType,
                   (__int64)ObjectAttributes,
                   PreviousMode,
                   Tag,
                   24,
                   0,
                   0,
                   v16,
                   0LL);
      if ( inserted >= 0 )
      {
        v11 = (PVOID *)v16[0];
        *(_OWORD *)v16[0] = 0LL;
        v11[2] = 0LL;
        v11[1] = 0LL;
        *v11 = Object;
        *((_DWORD *)v11 + 4) = 0;
        Object = 0LL;
        inserted = ObInsertObjectEx((char *)v11, 0LL, DesiredAccess, 0, 0, 0LL, &Handle);
        if ( inserted >= 0 )
        {
          *ProcessStateChangeHandle = Handle;
          Handle = 0LL;
        }
      }
    }
  }
  if ( Object )
    ObfDereferenceObjectWithTag(Object, 0x63507350u);
  if ( Handle )
    NtClose(Handle);
  return inserted;
}
