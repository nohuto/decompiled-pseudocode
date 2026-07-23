/*
 * XREFs of sub_140837F88 @ 0x140837F88
 * Callers:
 *     sub_14095E13C @ 0x14095E13C (sub_14095E13C.c)
 *     sub_140B183B4 @ 0x140B183B4 (sub_140B183B4.c)
 * Callees:
 *     sub_1402D17BC @ 0x1402D17BC (sub_1402D17BC.c)
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     swprintf_s @ 0x1403E5D20 (swprintf_s.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwOpenKey @ 0x14041B9A0 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x14041BA40 (ZwQueryValueKey.c)
 *     ZwCreateKey @ 0x14041BB00 (ZwCreateKey.c)
 *     ZwSetValueKey @ 0x14041C360 (ZwSetValueKey.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_1408384CC @ 0x1408384CC (sub_1408384CC.c)
 *     sub_1408386A0 @ 0x1408386A0 (sub_1408386A0.c)
 *     sub_140838DE4 @ 0x140838DE4 (sub_140838DE4.c)
 *     sub_14091D950 @ 0x14091D950 (sub_14091D950.c)
 *     sub_14091DBC4 @ 0x14091DBC4 (sub_14091DBC4.c)
 *     sub_14091E6AC @ 0x14091E6AC (sub_14091E6AC.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall sub_140837F88(unsigned __int16 *a1, __int64 a2, __int64 a3, HANDLE *a4, _BYTE *a5)
{
  PVOID PoolWithTag; // rdi
  NTSTATUS v7; // ebx
  void *v8; // r12
  int v9; // ebx
  unsigned int v10; // esi
  int v11; // eax
  __int64 v12; // rcx
  int v13; // r14d
  unsigned int v14; // edx
  _DWORD *v15; // rcx
  unsigned int v16; // edx
  __int64 v17; // rax
  __int64 v18; // rax
  _DWORD *v19; // rcx
  unsigned int v20; // edx
  __int64 v21; // rax
  __int64 v22; // rax
  HANDLE v24; // rcx
  NTSTATUS v25; // eax
  int Length; // [rsp+20h] [rbp-E0h]
  unsigned int v27; // [rsp+40h] [rbp-C0h] BYREF
  int Data; // [rsp+44h] [rbp-BCh] BYREF
  HANDLE Handle; // [rsp+48h] [rbp-B8h] BYREF
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-B0h] BYREF
  HANDLE KeyHandle; // [rsp+60h] [rbp-A0h] BYREF
  HANDLE v32; // [rsp+68h] [rbp-98h] BYREF
  ULONG ResultLength; // [rsp+70h] [rbp-90h] BYREF
  unsigned int v34; // [rsp+74h] [rbp-8Ch] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+78h] [rbp-88h] BYREF
  PVOID P; // [rsp+A8h] [rbp-58h] BYREF
  ULONG Disposition; // [rsp+B0h] [rbp-50h] BYREF
  HANDLE v38; // [rsp+B8h] [rbp-48h] BYREF
  PVOID v39; // [rsp+C0h] [rbp-40h] BYREF
  HANDLE v40; // [rsp+C8h] [rbp-38h] BYREF
  void *v41; // [rsp+D0h] [rbp-30h] BYREF
  HANDLE *v42; // [rsp+D8h] [rbp-28h]
  __int128 v43; // [rsp+E0h] [rbp-20h] BYREF
  int KeyValueInformation; // [rsp+F0h] [rbp-10h] BYREF
  int v45; // [rsp+F4h] [rbp-Ch]
  unsigned int v46; // [rsp+F8h] [rbp-8h]
  SIZE_T NumberOfBytes; // [rsp+FCh] [rbp-4h]
  wchar_t Dst[128]; // [rsp+1F0h] [rbp+F0h] BYREF

  v41 = 0LL;
  KeyHandle = 0LL;
  v32 = 0LL;
  Handle = 0LL;
  v40 = 0LL;
  v38 = 0LL;
  PoolWithTag = 0LL;
  ResultLength = 0;
  Data = 0;
  v34 = 0;
  v27 = 0;
  Disposition = 0;
  v39 = 0LL;
  P = 0LL;
  *a5 = 0;
  v42 = a4;
  v43 = 0LL;
  DestinationString = 0LL;
  memset(&ObjectAttributes, 0, 44);
  v7 = sub_140838DE4(a1, &v41, &v43);
  if ( v7 >= 0 )
  {
    v8 = v41;
    ObjectAttributes.RootDirectory = v41;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)L"$&";
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v7 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
    if ( v7 < 0 )
    {
      KeyHandle = 0LL;
      goto LABEL_68;
    }
    v7 = sub_1408386A0((int)KeyHandle, (int)&P, (int)&v39, (int)Dst, &KeyValueInformation);
    if ( v7 < 0 )
      goto LABEL_68;
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)L"24";
    ObjectAttributes.RootDirectory = v8;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v7 = ZwOpenKey(&v32, 0x20019u, &ObjectAttributes);
    if ( v7 < 0 )
    {
      v32 = 0LL;
      goto LABEL_68;
    }
    RtlInitUnicodeString(&DestinationString, L"CurrentDockInfo");
    ObjectAttributes.RootDirectory = KeyHandle;
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v7 = ZwOpenKey(&Handle, 0x20019u, &ObjectAttributes);
    if ( v7 < 0 )
    {
      Handle = 0LL;
      goto LABEL_68;
    }
    RtlInitUnicodeString(&DestinationString, L"DockingState");
    if ( ZwQueryValueKey(
           Handle,
           &DestinationString,
           KeyValueFullInformation,
           &KeyValueInformation,
           0x100u,
           &ResultLength) < 0
      || v45 != 4 )
    {
      goto LABEL_67;
    }
    v9 = *(int *)((char *)&KeyValueInformation + v46);
    RtlInitUnicodeString(&DestinationString, L"AcpiSerialNumber");
    if ( ZwQueryValueKey(
           Handle,
           &DestinationString,
           KeyValueFullInformation,
           &KeyValueInformation,
           0x100u,
           &ResultLength) >= 0
      && v45 == 3 )
    {
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)NumberOfBytes, 0x20204D43u);
      if ( !PoolWithTag )
      {
        v7 = -1073741670;
        goto LABEL_68;
      }
      memmove(PoolWithTag, (char *)&KeyValueInformation + v46, (unsigned int)NumberOfBytes);
    }
    RtlInitUnicodeString(&DestinationString, L"CurrentConfig");
    if ( ZwQueryValueKey(
           KeyHandle,
           &DestinationString,
           KeyValueFullInformation,
           &KeyValueInformation,
           0x100u,
           &ResultLength) < 0
      || v45 != 4 )
    {
LABEL_67:
      v7 = -1073741492;
      goto LABEL_68;
    }
    v10 = *(int *)((char *)&KeyValueInformation + v46);
    v7 = sub_1408384CC((_DWORD)a1, v9, (_DWORD)PoolWithTag, v10, (__int64)P, (__int64)v39);
    if ( v7 < 0 )
      goto LABEL_68;
    v11 = sub_14042A5E0(P, &v34);
    v7 = v11;
    if ( v34 != -1 )
    {
      if ( v11 < 0 )
        goto LABEL_68;
      ObjectAttributes.Length = 48;
      ObjectAttributes.ObjectName = (PUNICODE_STRING)L"\"$";
      ObjectAttributes.RootDirectory = v8;
      ObjectAttributes.Attributes = 576;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      v7 = ZwOpenKey(&v38, 0x20019u, &ObjectAttributes);
      if ( v7 < 0 )
      {
        v38 = 0LL;
        goto LABEL_68;
      }
      v12 = 32LL * v34;
      v13 = *(_DWORD *)((char *)P + v12 + 32);
      v14 = *(_DWORD *)((char *)P + v12 + 28);
      v27 = v14;
      if ( (v13 & 8) != 0 )
      {
        v7 = sub_14091E6AC(KeyHandle, Handle, v10, v14, Dst);
        if ( v7 < 0 )
          goto LABEL_68;
        v14 = v27;
      }
      if ( (v13 & 4) != 0 || v14 != v10 )
      {
        v24 = Handle;
        *a5 = 1;
        ZwClose(v24);
        Handle = 0LL;
        if ( (v13 & 4) != 0 )
        {
          LOWORD(Length) = *a1;
          v25 = sub_14091DBC4(KeyHandle, v38, v32, v27, Length, &v32, &v27);
        }
        else
        {
          ZwClose(v32);
          swprintf_s(Dst, 0x80uLL, L"%04d", v27);
          RtlInitUnicodeString(&DestinationString, Dst);
          ObjectAttributes.RootDirectory = v38;
          ObjectAttributes.Length = 48;
          ObjectAttributes.ObjectName = &DestinationString;
          ObjectAttributes.Attributes = 576;
          *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
          v25 = ZwOpenKey(&v32, 0x20019u, &ObjectAttributes);
        }
        v7 = v25;
        if ( v25 < 0 )
        {
          v32 = 0LL;
          goto LABEL_68;
        }
        RtlInitUnicodeString(&DestinationString, L"CurrentDockInfo");
        ObjectAttributes.RootDirectory = KeyHandle;
        ObjectAttributes.Length = 48;
        ObjectAttributes.ObjectName = &DestinationString;
        ObjectAttributes.Attributes = 576;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        v7 = ZwCreateKey(&Handle, 0x2001Fu, &ObjectAttributes, 0, 0LL, 1u, &Disposition);
        if ( v7 < 0 )
        {
          Handle = 0LL;
          goto LABEL_68;
        }
        RtlInitUnicodeString(&DestinationString, L"CurrentConfig");
        if ( ZwSetValueKey(KeyHandle, &DestinationString, 0, 4u, &v27, 4u) < 0 )
          goto LABEL_67;
      }
      Data = *a1;
      RtlInitUnicodeString(&DestinationString, L"DockingState");
      ZwSetValueKey(Handle, &DestinationString, 0, 4u, &Data, 4u);
      RtlInitUnicodeString(&DestinationString, L"AcpiSerialNumber");
      v7 = ZwSetValueKey(Handle, &DestinationString, 0, 3u, a1 + 2, a1[1]);
      if ( (v13 & 2) == 0 )
        v7 = sub_14091D950(KeyHandle, a1, v27, Dst);
      if ( v27 != v10 )
      {
        ObjectAttributes.Length = 48;
        ObjectAttributes.ObjectName = (PUNICODE_STRING)L"24";
        ObjectAttributes.RootDirectory = v8;
        ObjectAttributes.Attributes = 832;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        ZwCreateKey(&v40, 0x20u, &ObjectAttributes, 0, 0LL, 8u, &Disposition);
        *(_QWORD *)&DestinationString.Length = 0x1000000LL;
        DestinationString.Buffer = Dst;
        sub_1402D17BC(
          &DestinationString,
          L"\\Registry\\Machine\\%wZ\\CurrentControlSet\\Hardware Profiles\\%04d",
          &v43,
          v27);
        v7 = ZwSetValueKey(v40, &stru_140D3CB80, 0, 6u, DestinationString.Buffer, DestinationString.Length);
      }
    }
    if ( v7 >= 0 )
    {
      *v42 = v32;
      goto LABEL_24;
    }
  }
LABEL_68:
  if ( v32 )
    ZwClose(v32);
LABEL_24:
  if ( v40 )
    ZwClose(v40);
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( Handle )
    ZwClose(Handle);
  if ( v38 )
    ZwClose(v38);
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0);
  v15 = P;
  if ( P )
  {
    v16 = 0;
    Data = 0;
    if ( *((_DWORD *)P + 1) )
    {
      v17 = 0LL;
      do
      {
        v18 = 8 * v17;
        if ( *(_QWORD *)&v15[v18 + 4] )
        {
          ExFreePoolWithTag(*(PVOID *)&v15[v18 + 4], 0);
          v16 = Data;
          v15 = P;
        }
        Data = ++v16;
        v17 = v16;
      }
      while ( v16 < v15[1] );
    }
    ExFreePoolWithTag(v15, 0);
  }
  v19 = v39;
  if ( v39 )
  {
    v20 = 0;
    Data = 0;
    if ( *((_DWORD *)v39 + 1) )
    {
      v21 = 0LL;
      do
      {
        v22 = 3 * (v21 + 1);
        if ( *(_QWORD *)&v19[2 * v22] )
        {
          ExFreePoolWithTag(*(PVOID *)&v19[2 * v22], 0);
          v20 = Data;
          v19 = v39;
        }
        Data = ++v20;
        v21 = v20;
      }
      while ( v20 < v19[1] );
    }
    ExFreePoolWithTag(v19, 0);
  }
  return (unsigned int)v7;
}
