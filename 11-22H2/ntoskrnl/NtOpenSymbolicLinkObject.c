/*
 * XREFs of NtOpenSymbolicLinkObject @ 0x1407AB090
 * Callers:
 *     AdtpInitializeDriveLetters @ 0x140843C80 (AdtpInitializeDriveLetters.c)
 *     IopReassignSystemRoot @ 0x140B70E7C (IopReassignSystemRoot.c)
 * Callees:
 *     PsGetCurrentSilo @ 0x14022E220 (PsGetCurrentSilo.c)
 *     ObOpenObjectByNameEx @ 0x1406ED090 (ObOpenObjectByNameEx.c)
 */

NTSTATUS __cdecl NtOpenSymbolicLinkObject(
        PHANDLE LinkHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes)
{
  PHANDLE v5; // rbx
  char PreviousMode; // si
  POBJECT_TYPE v7; // rdi
  struct _LIST_ENTRY *CurrentSilo; // rax
  NTSTATUS result; // eax
  void *v10; // [rsp+40h] [rbp-28h] BYREF

  v5 = LinkHandle;
  v10 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    if ( (unsigned __int64)LinkHandle >= 0x7FFFFFFF0000LL )
      LinkHandle = (PHANDLE)0x7FFFFFFF0000LL;
    *LinkHandle = *LinkHandle;
  }
  v7 = ObpSymbolicLinkObjectType;
  CurrentSilo = PsGetCurrentSilo();
  result = ObOpenObjectByNameEx(
             (__int64)ObjectAttributes,
             (__int64)v7,
             PreviousMode,
             0LL,
             DesiredAccess,
             0,
             (__int64)CurrentSilo,
             &v10);
  *v5 = v10;
  return result;
}
