/*
 * XREFs of PiQueryRemovableDeviceOverride @ 0x1407C1460
 * Callers:
 *     PiProcessNewDeviceNode @ 0x140795938 (PiProcessNewDeviceNode.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     ZwClose @ 0x14041B2D0 (ZwClose.c)
 *     ZwOpenKey @ 0x14041B330 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x14041B3D0 (ZwQueryValueKey.c)
 *     _CmGetDeviceRegProp @ 0x1406CD48C (_CmGetDeviceRegProp.c)
 *     PnpDeviceObjectToDeviceInstance @ 0x140798984 (PnpDeviceObjectToDeviceInstance.c)
 *     PipFindDeviceOverrideEntry @ 0x1407C1754 (PipFindDeviceOverrideEntry.c)
 *     PnpGetDeviceLocationStrings @ 0x1407FCED8 (PnpGetDeviceLocationStrings.c)
 *     PnpOpenFirstMatchingSubKey @ 0x140958DD8 (PnpOpenFirstMatchingSubKey.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 */

__int64 __fastcall PiQueryRemovableDeviceOverride(__int64 a1, void *a2, void *a3, bool *a4)
{
  unsigned int v4; // r12d
  void *Pool2; // r14
  bool *v6; // r13
  int DeviceRegProp; // ebx
  char v11; // al
  int v12; // edx
  char v13; // cl
  char v14; // r8
  int DeviceOverrideEntry; // eax
  __int64 v16; // rcx
  int *v17; // r13
  int v18; // edi
  unsigned int v19; // eax
  __int64 v20; // rcx
  char v21; // al
  unsigned int v23; // [rsp+40h] [rbp-C0h] BYREF
  HANDLE KeyHandle; // [rsp+48h] [rbp-B8h] BYREF
  UNICODE_STRING ValueName; // [rsp+50h] [rbp-B0h] BYREF
  int v26; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v27; // [rsp+68h] [rbp-98h]
  HANDLE v28[2]; // [rsp+78h] [rbp-88h]
  unsigned int v29; // [rsp+88h] [rbp-78h]
  int v30; // [rsp+8Ch] [rbp-74h] BYREF
  ULONG ResultLength; // [rsp+90h] [rbp-70h] BYREF
  HANDLE Handle; // [rsp+98h] [rbp-68h] BYREF
  PVOID P; // [rsp+A0h] [rbp-60h] BYREF
  _DWORD v34[2]; // [rsp+A8h] [rbp-58h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+B0h] [rbp-50h] BYREF
  bool *v36; // [rsp+E0h] [rbp-20h]
  char KeyValueInformation[4]; // [rsp+E8h] [rbp-18h] BYREF
  int v38; // [rsp+ECh] [rbp-14h]
  int v39; // [rsp+F0h] [rbp-10h]
  unsigned int v40; // [rsp+F4h] [rbp-Ch]

  Handle = 0LL;
  v4 = 0;
  ResultLength = 0;
  Pool2 = 0LL;
  P = 0LL;
  v30 = 0;
  v6 = a4;
  v23 = 0;
  v26 = 0;
  v36 = a4;
  DeviceRegProp = -1073741772;
  v29 = 0;
  ValueName = 0LL;
  if ( !PnpDeviceOverrideHashList )
    return (unsigned int)DeviceRegProp;
  v11 = *(_BYTE *)(a1 + 680);
  v12 = -1073741772;
  v13 = v11;
  v27 = 0LL;
  *(_OWORD *)v28 = 0LL;
  if ( (v11 & 1) == 0 )
  {
    LODWORD(v27) = 2490404;
    v14 = v11;
    *((_QWORD *)&v27 + 1) = L"ChildLocationPaths";
    if ( a2 )
    {
      DeviceOverrideEntry = PipFindDeviceOverrideEntry(a2);
      v13 = *(_BYTE *)(a1 + 680);
      v12 = DeviceOverrideEntry;
      v14 = v13;
    }
    v11 = v14;
    if ( v12 >= 0 )
      goto LABEL_37;
    if ( a3 )
    {
      v12 = PipFindDeviceOverrideEntry(a3);
      v11 = *(_BYTE *)(a1 + 680);
      v13 = v11;
    }
    if ( v12 >= 0 )
    {
LABEL_37:
      ZwClose(v28[0]);
      *(_BYTE *)(a1 + 680) |= 4u;
      v11 = *(_BYTE *)(a1 + 680);
      v13 = v11;
    }
  }
  if ( (v11 & 1) == 0 || (v11 & 2) != 0 )
  {
    LODWORD(v27) = 1835034;
    *((_QWORD *)&v27 + 1) = L"LocationPaths";
    if ( a2 )
    {
      DeviceRegProp = PipFindDeviceOverrideEntry(a2);
      v11 = *(_BYTE *)(a1 + 680);
      v13 = v11;
    }
    if ( DeviceRegProp >= 0 )
      goto LABEL_40;
    if ( a3 )
    {
      DeviceRegProp = PipFindDeviceOverrideEntry(a3);
      v11 = *(_BYTE *)(a1 + 680);
      v13 = v11;
    }
    if ( DeviceRegProp >= 0 )
LABEL_40:
      v11 = v13 | 2;
  }
  *(_BYTE *)(a1 + 680) = v11 | 1;
  if ( DeviceRegProp >= 0 )
    goto LABEL_47;
  v16 = *(_QWORD *)(a1 + 16);
  if ( (*(_BYTE *)(v16 + 680) & 5) == 1 )
    return (unsigned int)DeviceRegProp;
  LODWORD(v27) = 2490404;
  *((_QWORD *)&v27 + 1) = L"ChildLocationPaths";
  DeviceRegProp = PnpDeviceObjectToDeviceInstance(*(_QWORD *)(v16 + 32), (__int64)&Handle, 131097);
  if ( DeviceRegProp < 0 )
    return (unsigned int)DeviceRegProp;
  v34[0] = 2;
  v17 = v34;
  v18 = 256;
  v34[1] = 3;
  v23 = 256;
  v19 = 256;
  do
  {
    if ( !Pool2 )
    {
      Pool2 = (void *)ExAllocatePool2(256LL, v19, 1852403792LL);
      if ( !Pool2 )
      {
        v19 = v23;
        DeviceRegProp = -1073741670;
        v18 = v23;
        goto LABEL_28;
      }
      v18 = v23;
    }
    DeviceRegProp = CmGetDeviceRegProp(
                      *(__int64 *)&PiPnpRtlCtx,
                      *(_QWORD *)(*(_QWORD *)(a1 + 16) + 48LL),
                      (__int64)Handle,
                      *v17,
                      (__int64)&v26,
                      (__int64)Pool2,
                      (__int64)&v23,
                      0);
    if ( DeviceRegProp == -1073741789 )
    {
      ExFreePoolWithTag(Pool2, 0);
      Pool2 = (void *)ExAllocatePool2(256LL, v23, 1852403792LL);
      v19 = v23;
      v18 = v23;
      if ( !Pool2 )
        DeviceRegProp = -1073741670;
    }
    else
    {
      v19 = v18;
      if ( DeviceRegProp >= 0 )
      {
        if ( v26 != 7 )
        {
          DeviceRegProp = -1073741823;
          v23 = v18;
          goto LABEL_28;
        }
        DeviceRegProp = PipFindDeviceOverrideEntry(Pool2);
        v19 = v18;
      }
      v23 = v19;
      v18 = v19;
      if ( DeviceRegProp >= 0 )
        break;
    }
LABEL_28:
    ++v4;
    ++v17;
  }
  while ( v4 < 2 );
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0);
  ZwClose(Handle);
  v20 = *(_QWORD *)(a1 + 16);
  v21 = *(_BYTE *)(v20 + 680);
  if ( (v21 & 1) == 0 )
  {
    if ( DeviceRegProp >= 0 )
      *(_BYTE *)(v20 + 680) = v21 | 4;
    *(_BYTE *)(*(_QWORD *)(a1 + 16) + 680LL) |= 1u;
  }
  if ( DeviceRegProp >= 0 )
  {
    v4 = v29;
    v6 = v36;
LABEL_47:
    KeyHandle = 0LL;
    if ( LODWORD(v28[1]) != 1 )
      goto LABEL_51;
    memset(&ObjectAttributes.Attributes + 1, 0, 20);
    ObjectAttributes.RootDirectory = v28[0];
    *(_QWORD *)&ObjectAttributes.Length = 48LL;
    ObjectAttributes.ObjectName = &ValueName;
    *(_DWORD *)&ValueName.Length = 262146;
    ValueName.Buffer = (wchar_t *)L"*";
    ObjectAttributes.Attributes = 576;
    DeviceRegProp = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
    if ( DeviceRegProp < 0 )
    {
LABEL_51:
      DeviceRegProp = PnpGetDeviceLocationStrings(a1, &P, &v30);
      if ( DeviceRegProp < 0
        || (DeviceRegProp = PnpOpenFirstMatchingSubKey((PCWSTR)P, &KeyHandle), ExFreePoolWithTag(P, 0),
                                                                               DeviceRegProp < 0) )
      {
        if ( LODWORD(v28[1]) > 1 )
        {
          memset(&ObjectAttributes.Attributes + 1, 0, 20);
          KeyHandle = 0LL;
          ObjectAttributes.RootDirectory = v28[0];
          *(_QWORD *)&ObjectAttributes.Length = 48LL;
          ObjectAttributes.ObjectName = &ValueName;
          *(_DWORD *)&ValueName.Length = 262146;
          ValueName.Buffer = (wchar_t *)L"*";
          ObjectAttributes.Attributes = 576;
          DeviceRegProp = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
        }
      }
    }
    ZwClose(v28[0]);
    if ( DeviceRegProp >= 0 )
    {
      *(_DWORD *)&ValueName.Length = 1310738;
      ValueName.Buffer = L"Removable";
      DeviceRegProp = ZwQueryValueKey(
                        KeyHandle,
                        &ValueName,
                        KeyValuePartialInformation,
                        KeyValueInformation,
                        0x14u,
                        &ResultLength);
      if ( DeviceRegProp >= 0 )
      {
        if ( v38 == 4 && v39 == 4 )
          v4 = v40;
        else
          DeviceRegProp = -1073741823;
      }
      ZwClose(KeyHandle);
      *v6 = v4 != 0;
    }
  }
  return (unsigned int)DeviceRegProp;
}
