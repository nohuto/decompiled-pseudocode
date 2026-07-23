/*
 * XREFs of NtOpenIoCompletion @ 0x140947E30
 * Callers:
 *     <none>
 * Callees:
 *     ObOpenObjectByName @ 0x14068C9D0 (ObOpenObjectByName.c)
 */

NTSTATUS __cdecl NtOpenIoCompletion(
        PHANDLE IoCompletionHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes)
{
  char PreviousMode; // di
  __int64 v7; // rdx
  NTSTATUS v8; // edx
  void *v10; // [rsp+48h] [rbp-20h] BYREF

  v10 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    v7 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)IoCompletionHandle < 0x7FFFFFFF0000LL )
      v7 = (__int64)IoCompletionHandle;
    *(_QWORD *)v7 = *(_QWORD *)v7;
  }
  v8 = ObOpenObjectByName(
         (__int64)ObjectAttributes,
         (__int64)IoCompletionObjectType,
         PreviousMode,
         0LL,
         DesiredAccess,
         0LL,
         (__int64)&v10);
  if ( v8 >= 0 )
    *IoCompletionHandle = v10;
  return v8;
}
