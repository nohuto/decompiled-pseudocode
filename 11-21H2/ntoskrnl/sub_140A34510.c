/*
 * XREFs of sub_140A34510 @ 0x140A34510
 * Callers:
 *     sub_140685A20 @ 0x140685A20 (sub_140685A20.c)
 * Callees:
 *     PsGetHostSilo @ 0x140203DC0 (PsGetHostSilo.c)
 *     PsDereferenceSiloContext @ 0x140251C40 (PsDereferenceSiloContext.c)
 *     ObfReferenceObjectWithTag @ 0x1402A6D50 (ObfReferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     PsDetachSiloFromCurrentThread @ 0x1402D7F90 (PsDetachSiloFromCurrentThread.c)
 *     PsAttachSiloToCurrentThread @ 0x1402D7FB0 (PsAttachSiloToCurrentThread.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwOpenDirectoryObject @ 0x14041C260 (ZwOpenDirectoryObject.c)
 *     sub_14041CCA0 @ 0x14041CCA0 (sub_14041CCA0.c)
 *     sub_140692980 @ 0x140692980 (sub_140692980.c)
 *     PsInsertSiloContext @ 0x140692A50 (PsInsertSiloContext.c)
 *     PsCreateSiloContext @ 0x140692CD0 (PsCreateSiloContext.c)
 *     sub_1406E1784 @ 0x1406E1784 (sub_1406E1784.c)
 *     ObReferenceObjectByHandle @ 0x140732D00 (ObReferenceObjectByHandle.c)
 *     RtlIntegerToUnicodeString @ 0x14075AC60 (RtlIntegerToUnicodeString.c)
 *     PsGetParentSilo @ 0x1407FC3C0 (PsGetParentSilo.c)
 *     sub_14082C020 @ 0x14082C020 (sub_14082C020.c)
 *     sub_140A349F0 @ 0x140A349F0 (sub_140A349F0.c)
 */

__int64 __fastcall sub_140A34510(__int64 a1, int a2)
{
  void *v2; // rsi
  PVOID v3; // r15
  char v4; // r14
  __int64 v6; // rcx
  __int64 ParentSilo; // rbx
  __int64 v9; // rax
  __int64 v10; // r12
  ULONG v11; // ecx
  int inserted; // ebx
  NTSTATUS v13; // eax
  __int64 v14; // r8
  HANDLE Handle; // [rsp+30h] [rbp-59h] BYREF
  _QWORD *v16; // [rsp+38h] [rbp-51h] BYREF
  HANDLE v17; // [rsp+40h] [rbp-49h] BYREF
  HANDLE v18; // [rsp+48h] [rbp-41h] BYREF
  HANDLE DirectoryHandle; // [rsp+50h] [rbp-39h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+58h] [rbp-31h] BYREF
  PVOID Object; // [rsp+88h] [rbp-1h] BYREF
  UNICODE_STRING String; // [rsp+90h] [rbp+7h] BYREF
  char v23; // [rsp+A0h] [rbp+17h] BYREF

  v2 = 0LL;
  v17 = 0LL;
  v18 = 0LL;
  v3 = 0LL;
  Handle = 0LL;
  v4 = a2;
  DirectoryHandle = 0LL;
  v16 = 0LL;
  memset(&ObjectAttributes, 0, 44);
  if ( (a2 & 0xFFFFFFF8) != 0 || (a2 & 6) == 4 || !sub_1406E1784(a1) )
    return 3221225485LL;
  ParentSilo = PsGetParentSilo(v6);
  if ( ParentSilo != PsGetHostSilo() )
    return 3221227289LL;
  v9 = PsGetParentSilo(a1);
  v10 = PsAttachSiloToCurrentThread(v9);
  *(_QWORD *)&String.Length = 1441792LL;
  String.Buffer = (wchar_t *)&v23;
  if ( a1 )
    v11 = *(_DWORD *)(a1 + 1428);
  else
    v11 = 0;
  inserted = RtlIntegerToUnicodeString(v11, 0xAu, &String);
  if ( inserted >= 0 )
  {
    inserted = sub_140A349F0(&v18);
    if ( inserted >= 0 )
    {
      if ( (v4 & 1) == 0
        || (ObjectAttributes.RootDirectory = 0LL,
            ObjectAttributes.ObjectName = (PUNICODE_STRING)&qword_140A383E8,
            ObjectAttributes.Length = 48,
            ObjectAttributes.Attributes = 512,
            *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL,
            inserted = ZwOpenDirectoryObject(&DirectoryHandle, 3u, &ObjectAttributes),
            inserted >= 0) )
      {
        ObjectAttributes.SecurityQualityOfService = 0LL;
        ObjectAttributes.RootDirectory = v18;
        ObjectAttributes.ObjectName = &String;
        ObjectAttributes.SecurityDescriptor = (PVOID)qword_140D3CA48;
        ObjectAttributes.Length = 48;
        ObjectAttributes.Attributes = 592;
        inserted = sub_14041CCA0((__int64)&Handle, 983055LL);
        if ( inserted >= 0 )
        {
          Object = 0LL;
          v13 = ObReferenceObjectByHandle(Handle, 0xF000Fu, qword_140C24FB8, 0, &Object, 0LL);
          v3 = Object;
          inserted = v13;
          if ( v13 >= 0 )
          {
            inserted = PsCreateSiloContext(a1, 16LL, 1, (__int64)sub_140A349B0, &v16);
            if ( inserted < 0 )
            {
              v2 = v16;
            }
            else
            {
              ObfReferenceObjectWithTag(v3, 0x7254624Fu);
              v2 = v16;
              v14 = (__int64)v16;
              *v16 = v3;
              inserted = PsInsertSiloContext(a1, dword_140D05144, v14);
              if ( inserted >= 0 )
              {
                inserted = sub_140692980(a1, dword_140D05060, (__int64)v3, 1);
                if ( inserted >= 0 && (v4 & 2) != 0 )
                {
                  if ( (v4 & 4) == 0
                    || (ObjectAttributes.RootDirectory = 0LL,
                        ObjectAttributes.ObjectName = (PUNICODE_STRING)&LinkTarget,
                        ObjectAttributes.Length = 48,
                        ObjectAttributes.Attributes = 512,
                        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL,
                        inserted = ZwOpenDirectoryObject(&v17, 3u, &ObjectAttributes),
                        inserted >= 0) )
                  {
                    inserted = sub_14082C020(a1, Handle, (__int64)v17, (__int64)v2 + 8);
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  if ( v17 )
    ZwClose(v17);
  if ( v18 )
    ZwClose(v18);
  if ( Handle )
    ZwClose(Handle);
  if ( v3 )
    ObfDereferenceObject(v3);
  if ( DirectoryHandle )
    ZwClose(DirectoryHandle);
  if ( v2 )
    PsDereferenceSiloContext(v2);
  PsDetachSiloFromCurrentThread(v10);
  return (unsigned int)inserted;
}
