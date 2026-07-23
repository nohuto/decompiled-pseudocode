/*
 * XREFs of PpDevCfgProcessDeviceClass @ 0x1409629AC
 * Callers:
 *     PiConfigureDevice @ 0x140959364 (PiConfigureDevice.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
 *     ZwClose @ 0x14041A880 (ZwClose.c)
 *     ZwOpenKey @ 0x14041A8E0 (ZwOpenKey.c)
 *     memset @ 0x140435400 (memset.c)
 *     RtlStringFromGUIDEx @ 0x1406852B0 (RtlStringFromGUIDEx.c)
 *     _CmGetDeviceRegProp @ 0x1406CD50C (_CmGetDeviceRegProp.c)
 *     _PnpOpenObjectRegKey @ 0x1406CFA10 (_PnpOpenObjectRegKey.c)
 *     RtlFreeUnicodeString @ 0x14076F8E0 (RtlFreeUnicodeString.c)
 *     PiDevCfgFreeDeviceContext @ 0x1407D95B0 (PiDevCfgFreeDeviceContext.c)
 *     PiDevCfgQueryObjectProperties @ 0x14086D134 (PiDevCfgQueryObjectProperties.c)
 *     PiDevCfgSetDeviceRegProp @ 0x14087C2AC (PiDevCfgSetDeviceRegProp.c)
 *     PiDevCfgGetDeviceClassConfigFlags @ 0x14087C7D0 (PiDevCfgGetDeviceClassConfigFlags.c)
 *     PiDevCfgConfigureDeviceLocation @ 0x14087C9C8 (PiDevCfgConfigureDeviceLocation.c)
 *     PiDevCfgInitDeviceContext @ 0x14087CCD8 (PiDevCfgInitDeviceContext.c)
 *     PiDevCfgConfigureDeviceKeys @ 0x14087CF74 (PiDevCfgConfigureDeviceKeys.c)
 */

__int64 __fastcall PpDevCfgProcessDeviceClass(__int64 a1)
{
  wchar_t *Buffer; // r14
  int v3; // edi
  unsigned __int8 v4; // si
  int inited; // ebx
  __int64 v6; // rcx
  __int64 v7; // r12
  __int64 v8; // rdx
  int v9; // eax
  NTSTATUS v10; // eax
  int v11; // edi
  __int64 v12; // rdx
  __int64 v13; // rcx
  int v14; // eax
  int v16; // [rsp+48h] [rbp-C0h] BYREF
  int v17; // [rsp+4Ch] [rbp-BCh] BYREF
  __int64 v18; // [rsp+50h] [rbp-B8h] BYREF
  HANDLE Handle; // [rsp+58h] [rbp-B0h] BYREF
  HANDLE KeyHandle; // [rsp+60h] [rbp-A8h] BYREF
  UNICODE_STRING GuidString; // [rsp+68h] [rbp-A0h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+78h] [rbp-90h] BYREF
  __int128 v23; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v24[10]; // [rsp+B8h] [rbp-50h] BYREF
  GUID Guid; // [rsp+108h] [rbp+0h] BYREF

  memset(v24, 0, 0x48uLL);
  Handle = 0LL;
  v23 = 0LL;
  KeyHandle = 0LL;
  Buffer = 0LL;
  Guid = 0LL;
  *(_QWORD *)&GuidString.Length = 0LL;
  v3 = 0;
  GuidString.Buffer = 0LL;
  v4 = 0;
  v16 = 0;
  v17 = 0;
  v18 = 0x100000000LL;
  if ( !PiDevCfgMode )
  {
    inited = 0;
    goto LABEL_29;
  }
  v6 = *(_QWORD *)(a1 + 48);
  if ( !v6 )
  {
    inited = -1073741808;
    goto LABEL_29;
  }
  inited = PiDevCfgInitDeviceContext(v6, 0LL, v24);
  if ( inited < 0 )
    goto LABEL_29;
  v7 = v24[2];
  v8 = *(_QWORD *)(a1 + 48);
  *(_QWORD *)&ObjectAttributes.Length = &DEVPKEY_Device_ClassGuid;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&Guid;
  ObjectAttributes.RootDirectory = (HANDLE)13;
  *(_QWORD *)(&ObjectAttributes.Attributes + 1) = 0LL;
  HIDWORD(ObjectAttributes.SecurityDescriptor) = 0;
  ObjectAttributes.Attributes = 16;
  inited = PiDevCfgQueryObjectProperties(1LL, v8, 1u, (void *)v24[2], (__int64)&ObjectAttributes, 1u);
  if ( inited < 0 )
    goto LABEL_29;
  if ( SLODWORD(ObjectAttributes.SecurityDescriptor) < 0 )
    goto LABEL_12;
  inited = RtlStringFromGUIDEx(&Guid, &GuidString, 1u);
  if ( inited < 0 )
    goto LABEL_29;
  Buffer = GuidString.Buffer;
  v9 = PnpOpenObjectRegKey(*(__int64 *)&PiPnpRtlCtx, (__int64)GuidString.Buffer, 2u, 131097, 0, (__int64)&Handle);
  inited = v9;
  if ( v9 != -1073741772 )
  {
    if ( v9 < 0 )
      goto LABEL_29;
LABEL_12:
    if ( Handle )
    {
      ObjectAttributes.RootDirectory = Handle;
      *((_QWORD *)&v23 + 1) = L"Configuration";
      LODWORD(v23) = 1835034;
      *(_QWORD *)&ObjectAttributes.Length = 48LL;
      *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
      ObjectAttributes.ObjectName = (PUNICODE_STRING)&v23;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      v10 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
      inited = v10;
      if ( v10 != -1073741772 )
      {
        if ( v10 < 0 )
          goto LABEL_29;
        inited = PiDevCfgConfigureDeviceKeys(a1, (__int64)v24, KeyHandle, -1, &v16, &v17);
        if ( inited < 0 )
          goto LABEL_29;
        v3 = v16;
        v4 = v17;
      }
    }
    goto LABEL_17;
  }
  Handle = 0LL;
LABEL_17:
  inited = PiDevCfgConfigureDeviceLocation(a1, (__int64)v24, &v16, &v17);
  if ( inited < 0 )
    goto LABEL_29;
  v11 = v16 | v3;
  if ( (((unsigned __int8)v17 | v4) & 2) == 0 && Buffer && Handle )
  {
    inited = PiDevCfgGetDeviceClassConfigFlags((__int64)Buffer, (__int64)Handle, &v16);
    if ( inited < 0 )
      goto LABEL_29;
    v11 |= v16;
  }
  if ( v11 )
  {
    v12 = *(_QWORD *)(a1 + 48);
    LODWORD(v18) = 4;
    if ( (int)CmGetDeviceRegProp(
                *(__int64 *)&PiPnpRtlCtx,
                v12,
                v7,
                11,
                (__int64)&v18 + 4,
                (__int64)&v16,
                (__int64)&v18,
                0) < 0
      || HIDWORD(v18) != 4
      || (v14 = v16, (_DWORD)v18 != 4) )
    {
      v14 = 0;
    }
    v16 = v11 | v14;
    PiDevCfgSetDeviceRegProp(v13, (__int64)v24, 0xBu, 4, (__int64)&v16, 4);
  }
LABEL_29:
  RtlFreeUnicodeString(&GuidString);
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( Handle )
    ZwClose(Handle);
  PiDevCfgFreeDeviceContext((__int64)v24);
  return (unsigned int)inited;
}
