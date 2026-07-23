/*
 * XREFs of sub_14067B470 @ 0x14067B470
 * Callers:
 *     sub_14067996C @ 0x14067996C (sub_14067996C.c)
 *     IoOpenDriverRegistryKey @ 0x14067A670 (IoOpenDriverRegistryKey.c)
 *     sub_14067ABD0 @ 0x14067ABD0 (sub_14067ABD0.c)
 *     sub_14067B998 @ 0x14067B998 (sub_14067B998.c)
 *     sub_1406DF35C @ 0x1406DF35C (sub_1406DF35C.c)
 *     sub_14081F4F4 @ 0x14081F4F4 (sub_14081F4F4.c)
 *     sub_14084EA70 @ 0x14084EA70 (sub_14084EA70.c)
 *     sub_140851A60 @ 0x140851A60 (sub_140851A60.c)
 *     sub_140862BA0 @ 0x140862BA0 (sub_140862BA0.c)
 *     sub_140941490 @ 0x140941490 (sub_140941490.c)
 *     sub_140946900 @ 0x140946900 (sub_140946900.c)
 *     sub_14094C79C @ 0x14094C79C (sub_14094C79C.c)
 *     sub_140B0ED44 @ 0x140B0ED44 (sub_140B0ED44.c)
 * Callees:
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwOpenKey @ 0x14041B9A0 (ZwOpenKey.c)
 *     sub_14067A8B0 @ 0x14067A8B0 (sub_14067A8B0.c)
 *     sub_14078014C @ 0x14078014C (sub_14078014C.c)
 *     sub_1407801B8 @ 0x1407801B8 (sub_1407801B8.c)
 */

NTSTATUS __fastcall sub_14067B470(UNICODE_STRING *a1, ACCESS_MASK a2, HANDLE *a3, HANDLE *a4, char a5)
{
  NTSTATUS result; // eax
  int v10; // eax
  int v11; // ebx
  _QWORD *v12; // rbx
  _QWORD *v13; // rax
  HANDLE KeyHandle; // [rsp+38h] [rbp-21h] BYREF
  void *v15; // [rsp+40h] [rbp-19h] BYREF
  HANDLE Handle; // [rsp+48h] [rbp-11h] BYREF
  UNICODE_STRING v17; // [rsp+50h] [rbp-9h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp+7h] BYREF

  Handle = 0LL;
  v15 = 0LL;
  v17 = 0LL;
  result = sub_14078014C(*(_QWORD *)&qword_140D00AC0, 6LL, &v15);
  if ( result >= 0 )
  {
    memset(&ObjectAttributes.Attributes + 1, 0, 20);
    KeyHandle = 0LL;
    *(_QWORD *)&ObjectAttributes.Length = 48LL;
    ObjectAttributes.RootDirectory = v15;
    ObjectAttributes.Attributes = 576;
    ObjectAttributes.ObjectName = a1;
    result = ZwOpenKey(&KeyHandle, a2, &ObjectAttributes);
    if ( result == -1073741772 )
    {
      v12 = 0LL;
      while ( 1 )
      {
        v13 = (_QWORD *)(*(_QWORD *)&qword_140D00AC0 + 8LL);
        if ( v12 )
          v13 = v12;
        v12 = (_QWORD *)*v13;
        if ( *v13 == *(_QWORD *)&qword_140D00AC0 + 8LL || !v12 )
          return -1073741772;
        result = sub_1407801B8(*(_QWORD *)&qword_140D00AC0, v12, 6LL, &v15);
        if ( result < 0 )
          break;
        memset(&ObjectAttributes.Attributes + 1, 0, 20);
        KeyHandle = 0LL;
        *(_QWORD *)&ObjectAttributes.Length = 48LL;
        ObjectAttributes.RootDirectory = v15;
        ObjectAttributes.Attributes = 576;
        ObjectAttributes.ObjectName = a1;
        result = ZwOpenKey(&KeyHandle, a2, &ObjectAttributes);
        if ( result != -1073741772 )
          goto LABEL_3;
      }
      if ( result == -2147483622 )
        return -1073741772;
    }
    else
    {
LABEL_3:
      if ( result >= 0 )
      {
        if ( a4 || a5 )
        {
          *(_DWORD *)&v17.Length = 655368;
          v17.Buffer = L"Enum";
          if ( a5 )
          {
            v10 = sub_14067A8B0(&Handle, KeyHandle, &v17, a2, 1u, 0LL);
          }
          else
          {
            memset(&ObjectAttributes.Attributes + 1, 0, 20);
            ObjectAttributes.RootDirectory = KeyHandle;
            *(_QWORD *)&ObjectAttributes.Length = 48LL;
            ObjectAttributes.ObjectName = &v17;
            ObjectAttributes.Attributes = 576;
            v10 = ZwOpenKey(&Handle, a2, &ObjectAttributes);
          }
          v11 = v10;
          if ( v10 < 0 )
          {
            ZwClose(KeyHandle);
            return v11;
          }
          if ( a4 )
            *a4 = Handle;
          else
            ZwClose(Handle);
        }
        if ( a3 )
          *a3 = KeyHandle;
        else
          ZwClose(KeyHandle);
        return 0;
      }
    }
  }
  return result;
}
