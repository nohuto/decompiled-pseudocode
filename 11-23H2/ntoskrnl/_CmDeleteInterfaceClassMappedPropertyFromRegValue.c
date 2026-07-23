/*
 * XREFs of _CmDeleteInterfaceClassMappedPropertyFromRegValue @ 0x140A67C28
 * Callers:
 *     _CmSetInterfaceClassMappedProperty @ 0x140A6A2E8 (_CmSetInterfaceClassMappedProperty.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x14022B7D0 (RtlInitUnicodeStringEx.c)
 *     ZwClose @ 0x14041B2D0 (ZwClose.c)
 *     ZwDeleteValueKey @ 0x14041CC90 (ZwDeleteValueKey.c)
 *     _PnpOpenPropertiesKey @ 0x1406CDC70 (_PnpOpenPropertiesKey.c)
 *     _CmOpenInterfaceClassRegKey @ 0x140787A90 (_CmOpenInterfaceClassRegKey.c)
 */

__int64 __fastcall CmDeleteInterfaceClassMappedPropertyFromRegValue(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // r11d
  int v5; // ebx
  __int64 v9; // r8
  DEVPROPKEY **v10; // rcx
  DEVPROPKEY *v11; // rdi
  DEVPROPKEY **v12; // rsi
  __int64 v13; // rdx
  __int64 v14; // rax
  NTSTATUS inited; // edi
  __int64 v17; // [rsp+28h] [rbp-50h]
  HANDLE Handle; // [rsp+40h] [rbp-38h] BYREF
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-30h] BYREF
  HANDLE KeyHandle; // [rsp+98h] [rbp+20h] BYREF

  v4 = *(_DWORD *)(a4 + 16);
  v5 = 0;
  Handle = 0LL;
  KeyHandle = 0LL;
  if ( v4 < 2 )
    return (unsigned int)-1073741264;
  v9 = 0LL;
  v10 = &off_140A77D68;
  do
  {
    v11 = *v10;
    v12 = v10;
    if ( v4 == (*v10)->pid )
    {
      v13 = *(_QWORD *)a4 - *(_QWORD *)&v11->fmtid.Data1;
      if ( *(_QWORD *)a4 == *(_QWORD *)&v11->fmtid.Data1 )
        v13 = *(_QWORD *)(a4 + 8) - *(_QWORD *)v11->fmtid.Data4;
      if ( !v13 )
        break;
    }
    v12 = 0LL;
    v9 = (unsigned int)(v9 + 1);
    v10 += 2;
  }
  while ( !(_DWORD)v9 );
  if ( !v12 )
    return (unsigned int)-1073741264;
  if ( v4 == 2 )
  {
    v14 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_DeviceInterfaceClass_DefaultInterface.fmtid.Data1;
    if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_DeviceInterfaceClass_DefaultInterface.fmtid.Data1 )
      v14 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_DeviceInterfaceClass_DefaultInterface.fmtid.Data4;
    if ( !v14 )
    {
      if ( !a3 )
      {
        v5 = CmOpenInterfaceClassRegKey(a1, a2, v9, a4, 1, 0, (__int64)&Handle, 0LL);
        if ( v5 < 0 )
        {
LABEL_26:
          if ( Handle )
            ZwClose(Handle);
          return (unsigned int)v5;
        }
        LODWORD(a3) = (_DWORD)Handle;
      }
      v5 = PnpOpenPropertiesKey(a1, a3, 0LL, 2, 0, v17, &KeyHandle);
      if ( v5 == -1073741772 )
      {
        v5 = -1073741275;
      }
      else if ( v5 >= 0 )
      {
        DestinationString = 0LL;
        inited = RtlInitUnicodeStringEx(&DestinationString, L"Default");
        if ( inited >= 0 )
          inited = ZwDeleteValueKey(KeyHandle, &DestinationString);
        ZwClose(KeyHandle);
        if ( inited != -1073741772 && inited != -1073741444 && inited < 0 )
          v5 = inited;
      }
      goto LABEL_26;
    }
  }
  return (unsigned int)v5;
}
