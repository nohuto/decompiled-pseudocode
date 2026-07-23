/*
 * XREFs of sub_1407444A8 @ 0x1407444A8
 * Callers:
 *     IoCreateDeviceSecure @ 0x1407435E0 (IoCreateDeviceSecure.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x1402DFB70 (RtlInitUnicodeStringEx.c)
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwOpenKey @ 0x14041B9A0 (ZwOpenKey.c)
 *     ZwSetValueKey @ 0x14041C360 (ZwSetValueKey.c)
 *     sub_14067A4C4 @ 0x14067A4C4 (sub_14067A4C4.c)
 *     sub_14067A8B0 @ 0x14067A8B0 (sub_14067A8B0.c)
 *     RtlFreeUnicodeString @ 0x1407023F0 (RtlFreeUnicodeString.c)
 *     sub_1407443F8 @ 0x1407443F8 (sub_1407443F8.c)
 *     sub_1407454A8 @ 0x1407454A8 (sub_1407454A8.c)
 *     RtlEqualUnicodeString @ 0x1407CD6A0 (RtlEqualUnicodeString.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_1407444A8(__int64 a1, __int64 a2, _BYTE *a3)
{
  WCHAR *v6; // rdi
  __int64 v7; // r8
  int inited; // ebx
  __int64 v9; // rcx
  __int64 v10; // r8
  int v11; // eax
  NTSTATUS v13; // eax
  int v14; // eax
  PVOID *v15; // rbx
  HANDLE Handle; // [rsp+30h] [rbp-59h] BYREF
  HANDLE KeyHandle; // [rsp+38h] [rbp-51h] BYREF
  HANDLE v18; // [rsp+40h] [rbp-49h] BYREF
  UNICODE_STRING String1; // [rsp+48h] [rbp-41h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+58h] [rbp-31h] BYREF
  UNICODE_STRING String2; // [rsp+88h] [rbp-1h] BYREF
  UNICODE_STRING DestinationString; // [rsp+98h] [rbp+Fh] BYREF
  PCWSTR SourceString; // [rsp+A8h] [rbp+1Fh] BYREF
  ULONG v24; // [rsp+108h] [rbp+7Fh] BYREF

  *(_QWORD *)&String2.Length = 7471216LL;
  v24 = 0;
  String2.Buffer = (wchar_t *)L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Class";
  Handle = 0LL;
  SourceString = 0LL;
  KeyHandle = 0LL;
  v18 = 0LL;
  String1 = 0LL;
  v6 = 0LL;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, 0LL);
  LOBYTE(v7) = 1;
  inited = sub_1407454A8(a1, &DestinationString, v7);
  if ( inited >= 0 )
  {
    *(_QWORD *)&ObjectAttributes.Length = 48LL;
    ObjectAttributes.ObjectName = &String2;
    *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
    ObjectAttributes.RootDirectory = 0LL;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    inited = ZwOpenKey(&KeyHandle, 0xF003Fu, &ObjectAttributes);
    if ( inited < 0 )
      goto LABEL_44;
    ObjectAttributes.RootDirectory = KeyHandle;
    *(_QWORD *)&ObjectAttributes.Length = 48LL;
    ObjectAttributes.ObjectName = &DestinationString;
    *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    inited = ZwOpenKey(&Handle, 0x20019u, &ObjectAttributes);
    if ( inited < 0
      || (RtlInitUnicodeString(&String1, L"Properties"),
          ObjectAttributes.RootDirectory = Handle,
          *(_QWORD *)&ObjectAttributes.Length = 48LL,
          ObjectAttributes.ObjectName = &String1,
          *(_QWORD *)&ObjectAttributes.Attributes = 576LL,
          *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL,
          inited = ZwOpenKey(&v18, 0x20019u, &ObjectAttributes),
          inited < 0) )
    {
LABEL_44:
      if ( inited != -1073741772 )
        goto LABEL_12;
    }
    else
    {
      inited = sub_14067A4C4(v18, (__int64)a3);
      if ( inited < 0 )
        goto LABEL_12;
      if ( (*a3 & 0xF) == 0xF )
        goto LABEL_11;
    }
    v11 = sub_1407443F8(v9, String2.Buffer, v10, (WCHAR **)&SourceString);
    v6 = (WCHAR *)SourceString;
    inited = v11;
    if ( v11 >= 0 )
    {
      inited = RtlInitUnicodeStringEx(&String1, SourceString);
      if ( inited >= 0 )
      {
        if ( RtlEqualUnicodeString(&String1, &String2, 1u) )
        {
          if ( Handle )
          {
LABEL_11:
            inited = 0;
            goto LABEL_12;
          }
        }
        else
        {
          if ( KeyHandle )
          {
            ZwClose(KeyHandle);
            KeyHandle = 0LL;
          }
          if ( Handle )
          {
            ZwClose(Handle);
            Handle = 0LL;
          }
          inited = sub_14067A8B0(&KeyHandle, 0LL, &String1, 0xF003Fu, 0, &v24);
          if ( inited < 0 )
            goto LABEL_12;
        }
        inited = sub_14067A8B0(&Handle, KeyHandle, &DestinationString, 0xF003Fu, 0, &v24);
        if ( inited < 0 )
          goto LABEL_12;
        if ( v24 == 2 )
        {
          if ( v18 )
            ZwClose(v18);
          RtlInitUnicodeString(&String1, L"Properties");
          ObjectAttributes.RootDirectory = Handle;
          *(_QWORD *)&ObjectAttributes.Length = 48LL;
          ObjectAttributes.ObjectName = &String1;
          *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
          v18 = 0LL;
          *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
          v13 = ZwOpenKey(&v18, 0x20019u, &ObjectAttributes);
          inited = v13;
          if ( v13 >= 0 )
          {
            v14 = sub_14067A4C4(v18, (__int64)a3);
LABEL_41:
            inited = v14;
            goto LABEL_12;
          }
          if ( v13 == -1073741772 )
            goto LABEL_11;
        }
        else
        {
          v15 = (PVOID *)(*(_QWORD *)(a2 + 48) + 24LL);
          if ( *(_QWORD *)(a2 + 48) == -24LL )
          {
            inited = -1073741670;
            goto LABEL_12;
          }
          RtlInitUnicodeString(&String1, L"Class");
          inited = ZwSetValueKey(Handle, &String1, 0, 1u, v15[1], *(unsigned __int16 *)v15 + 2);
          if ( inited >= 0 )
          {
            RtlInitUnicodeString(&String1, L"NoDisplayClass");
            inited = ZwSetValueKey(Handle, &String1, 0, 1u, qword_1408681D0, 4u);
            if ( inited >= 0 )
            {
              RtlInitUnicodeString(&String1, L"NoUseClass");
              v14 = ZwSetValueKey(Handle, &String1, 0, 1u, qword_1408681D0, 4u);
              goto LABEL_41;
            }
          }
        }
      }
    }
  }
LABEL_12:
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( Handle )
    ZwClose(Handle);
  if ( v18 )
    ZwClose(v18);
  if ( v6 )
    ExFreePoolWithTag(v6, 0);
  RtlFreeUnicodeString(&DestinationString);
  return (unsigned int)inited;
}
