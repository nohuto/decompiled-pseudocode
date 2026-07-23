/*
 * XREFs of sub_14082C020 @ 0x14082C020
 * Callers:
 *     sub_140A34510 @ 0x140A34510 (sub_140A34510.c)
 *     sub_140AFE184 @ 0x140AFE184 (sub_140AFE184.c)
 * Callees:
 *     PsIsHostSilo @ 0x1402A6DF0 (PsIsHostSilo.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwOpenDirectoryObject @ 0x14041C260 (ZwOpenDirectoryObject.c)
 *     ZwCreateDirectoryObject @ 0x14041CC80 (ZwCreateDirectoryObject.c)
 *     sub_14041CCA0 @ 0x14041CCA0 (sub_14041CCA0.c)
 *     ZwCreateSymbolicLinkObject @ 0x14041D000 (ZwCreateSymbolicLinkObject.c)
 *     sub_14041EC00 @ 0x14041EC00 (sub_14041EC00.c)
 *     ObReferenceObjectByHandle @ 0x140732D00 (ObReferenceObjectByHandle.c)
 *     sub_14082C308 @ 0x14082C308 (sub_14082C308.c)
 *     sub_14082C34C @ 0x14082C34C (sub_14082C34C.c)
 *     sub_14082C49C @ 0x14082C49C (sub_14082C49C.c)
 */

__int64 __fastcall sub_14082C020(__int64 a1, void *a2, __int64 a3, __int64 a4)
{
  bool IsHostSilo; // di
  int v9; // ebx
  bool v10; // sf
  int Object; // [rsp+28h] [rbp-49h]
  HANDLE Handle; // [rsp+38h] [rbp-39h] BYREF
  int v14; // [rsp+40h] [rbp-31h]
  HANDLE DirectoryHandle; // [rsp+48h] [rbp-29h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-21h] BYREF
  PVOID v17; // [rsp+80h] [rbp+Fh] BYREF
  _OWORD SecurityDescriptor[2]; // [rsp+88h] [rbp+17h] BYREF
  __int64 v19; // [rsp+A8h] [rbp+37h]

  v14 = 0;
  Handle = 0LL;
  DirectoryHandle = 0LL;
  memset(&ObjectAttributes, 0, 44);
  IsHostSilo = PsIsHostSilo(a1);
  v19 = 0LL;
  memset(SecurityDescriptor, 0, sizeof(SecurityDescriptor));
  v9 = sub_14082C34C(SecurityDescriptor);
  if ( v9 >= 0 )
  {
    if ( IsHostSilo
      || (ObjectAttributes.RootDirectory = 0LL,
          ObjectAttributes.ObjectName = (PUNICODE_STRING)&qword_140A38C00,
          ObjectAttributes.Length = 48,
          ObjectAttributes.Attributes = 592,
          *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL,
          v9 = ZwOpenDirectoryObject(&DirectoryHandle, 0xF000Fu, &ObjectAttributes),
          v9 >= 0) )
    {
      ObjectAttributes.SecurityQualityOfService = 0LL;
      Object = 0;
      ObjectAttributes.ObjectName = (PUNICODE_STRING)&qword_140A38BC0;
      ObjectAttributes.Length = 48;
      ObjectAttributes.SecurityDescriptor = SecurityDescriptor;
      ObjectAttributes.RootDirectory = a2;
      ObjectAttributes.Attributes = 592;
      v9 = sub_14041CCA0((__int64)&Handle, 983055LL);
      if ( v9 >= 0 )
      {
        ZwClose(Handle);
        Handle = 0LL;
        ObjectAttributes.ObjectName = (PUNICODE_STRING)&qword_140A38BF0;
        ObjectAttributes.Length = 48;
        ObjectAttributes.RootDirectory = a2;
        ObjectAttributes.Attributes = 592;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        if ( IsHostSilo )
        {
          v9 = ZwCreateDirectoryObject(&Handle, 0xF000Fu, &ObjectAttributes);
          if ( v9 < 0 )
            goto LABEL_9;
          v17 = 0LL;
          v9 = ObReferenceObjectByHandle(Handle, 0, qword_140C24FB8, 0, &v17, 0LL);
          qword_140C24F00 = v17;
          v10 = v9 < 0;
        }
        else
        {
          v9 = ZwCreateSymbolicLinkObject(&Handle, 0xF0001u, &ObjectAttributes, (PUNICODE_STRING)&stru_140A38C10);
          if ( v9 < 0 )
            goto LABEL_9;
          v9 = sub_14041EC00((__int64)Handle, 1LL);
          v10 = v9 < 0;
        }
        if ( !v10 )
          v9 = sub_14082C49C(a1, a2, a3, a4, Object);
      }
    }
  }
LABEL_9:
  if ( Handle )
    ZwClose(Handle);
  if ( DirectoryHandle )
    ZwClose(DirectoryHandle);
  sub_14082C308(SecurityDescriptor);
  return (unsigned int)v9;
}
