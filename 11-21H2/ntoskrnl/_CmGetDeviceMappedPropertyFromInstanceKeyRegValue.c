/*
 * XREFs of _CmGetDeviceMappedPropertyFromInstanceKeyRegValue @ 0x1406DA4DC
 * Callers:
 *     _CmGetDeviceMappedPropertyKeys @ 0x1406DA264 (_CmGetDeviceMappedPropertyKeys.c)
 *     _CmGetDeviceMappedProperty @ 0x1407857F0 (_CmGetDeviceMappedProperty.c)
 * Callees:
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     _CmOpenDeviceRegKey @ 0x14077F2EC (_CmOpenDeviceRegKey.c)
 *     _RegRtlQueryValue @ 0x14077FC64 (_RegRtlQueryValue.c)
 */

__int64 __fastcall CmGetDeviceMappedPropertyFromInstanceKeyRegValue(
        int a1,
        int a2,
        void *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        _DWORD *a8)
{
  _DWORD *v8; // r13
  int v9; // ebx
  _DWORD *v10; // rax
  HANDLE v11; // r10
  __int64 v13; // r15
  int v15; // r14d
  int v16; // r11d
  DEVPROPKEY **v17; // rdx
  unsigned int i; // r9d
  DEVPROPKEY *v19; // r8
  DEVPROPKEY **v20; // rdi
  __int64 v21; // rcx
  __int64 v22; // rax
  int Value; // ecx
  HANDLE Handle; // [rsp+48h] [rbp-8h] BYREF

  v8 = (_DWORD *)a5;
  v9 = 0;
  v10 = a8;
  v11 = 0LL;
  v13 = a6;
  *(_DWORD *)a5 = 0;
  *v10 = 0;
  Handle = 0LL;
  if ( v13 )
    v15 = a7;
  else
    v15 = 0;
  v16 = *(_DWORD *)(a4 + 16);
  v17 = &off_140A38610;
  for ( i = 0; i < 2; ++i )
  {
    v19 = *v17;
    v20 = v17;
    if ( v16 == (*v17)->pid )
    {
      v21 = *(_QWORD *)a4 - *(_QWORD *)&v19->fmtid.Data1;
      if ( *(_QWORD *)a4 == *(_QWORD *)&v19->fmtid.Data1 )
        v21 = *(_QWORD *)(a4 + 8) - *(_QWORD *)v19->fmtid.Data4;
      if ( !v21 )
        break;
    }
    v20 = 0LL;
    v17 += 4;
  }
  if ( !v20 )
    return (unsigned int)-1073741264;
  if ( !a3 )
  {
    v9 = CmOpenDeviceRegKey(a1, a2, 16, 0, 1, 0, (__int64)&Handle, 0LL);
    if ( v9 < 0 )
      goto LABEL_18;
    v11 = Handle;
  }
  if ( *(_DWORD *)(a4 + 16) != 2 )
    goto LABEL_24;
  v22 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_Reported.fmtid.Data1;
  if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_Reported.fmtid.Data1 )
    v22 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_Reported.fmtid.Data4;
  if ( v22 )
  {
LABEL_24:
    LODWORD(a5) = v15;
    if ( a3 )
      v11 = a3;
    Value = RegRtlQueryValue(v11, (__int64)&a5);
    if ( Value != -1073741772 && Value != -1073741444 )
    {
      if ( !Value || Value == -1073741789 )
      {
        if ( *((_DWORD *)v20 + 6) )
        {
          v9 = -1073741811;
        }
        else
        {
          *a8 = a5;
          *v8 = *((_DWORD *)v20 + 2);
          if ( Value || !v15 )
            v9 = -1073741789;
        }
      }
      else
      {
        v9 = Value;
      }
      goto LABEL_18;
    }
  }
  else
  {
    LODWORD(a6) = 0;
    LODWORD(a5) = 4;
    if ( a3 )
      v11 = a3;
    RegRtlQueryValue(v11, (__int64)&a5);
  }
  v9 = -1073741275;
LABEL_18:
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)v9;
}
