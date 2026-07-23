/*
 * XREFs of RtlpOpenBaseImageFileOptionsKeyEx @ 0x140860494
 * Callers:
 *     RtlpOpenBaseImageFileOptionsKey @ 0x1407CE4AC (RtlpOpenBaseImageFileOptionsKey.c)
 * Callees:
 *     ZwOpenKey @ 0x14041B330 (ZwOpenKey.c)
 */

NTSTATUS __fastcall RtlpOpenBaseImageFileOptionsKeyEx(HANDLE *a1)
{
  char PreviousMode; // dl
  ULONG v3; // eax
  NTSTATUS result; // eax
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+20h] [rbp-30h] BYREF
  HANDLE KeyHandle; // [rsp+78h] [rbp+28h] BYREF

  KeyHandle = 0LL;
  *(&ObjectAttributes.Attributes + 1) = 0;
  *(&ObjectAttributes.Length + 1) = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v3 = 1600;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Length = 48;
  if ( PreviousMode != 1 )
    v3 = 576;
  ObjectAttributes.Attributes = v3;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&qword_1400058D0;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  result = ZwOpenKey(&KeyHandle, 9u, &ObjectAttributes);
  if ( result >= 0 )
  {
    *a1 = KeyHandle;
    return 0;
  }
  return result;
}
