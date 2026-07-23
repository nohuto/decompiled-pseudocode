/*
 * XREFs of _CmGetInterfaceClassMappedPropertyFromRegValue @ 0x1407C6270
 * Callers:
 *     _CmGetInterfaceClassMappedProperty @ 0x1407C6180 (_CmGetInterfaceClassMappedProperty.c)
 *     _CmGetInterfaceClassMappedPropertyKeys @ 0x140A69498 (_CmGetInterfaceClassMappedPropertyKeys.c)
 * Callees:
 *     ZwClose @ 0x14041B2D0 (ZwClose.c)
 *     _PnpOpenPropertiesKey @ 0x1406CDC70 (_PnpOpenPropertiesKey.c)
 *     _RegRtlQueryValue @ 0x1406CE898 (_RegRtlQueryValue.c)
 *     _CmOpenInterfaceClassRegKey @ 0x140787A90 (_CmOpenInterfaceClassRegKey.c)
 */

__int64 __fastcall CmGetInterfaceClassMappedPropertyFromRegValue(
        __int64 a1,
        int a2,
        __int64 a3,
        __int64 a4,
        _DWORD *a5,
        unsigned __int64 a6,
        int a7,
        _DWORD *a8)
{
  _DWORD *v8; // r13
  int v9; // ebx
  _DWORD *v10; // rax
  void *v13; // r14
  int v14; // esi
  __int64 v15; // r8
  int v16; // r10d
  DEVPROPKEY **v17; // rdx
  DEVPROPKEY *v18; // rdi
  DEVPROPKEY **v19; // r15
  __int64 v20; // rcx
  __int64 v21; // rax
  int v22; // eax
  int v24; // edi
  __int64 v25; // [rsp+28h] [rbp-28h]
  HANDLE KeyHandle; // [rsp+40h] [rbp-10h] BYREF
  HANDLE Handle; // [rsp+48h] [rbp-8h] BYREF
  int v29; // [rsp+A8h] [rbp+58h] BYREF

  v8 = a5;
  v9 = 0;
  v10 = a8;
  v29 = 0;
  Handle = 0LL;
  *a5 = 0;
  *v10 = 0;
  KeyHandle = 0LL;
  v13 = (void *)a6;
  if ( a6 )
  {
    v14 = a7;
    v13 = (void *)(-(__int64)(a7 != 0) & a6);
  }
  else
  {
    v14 = 0;
  }
  v15 = *(unsigned int *)(a4 + 16);
  if ( (unsigned int)v15 < 2 )
    return (unsigned int)-1073741264;
  v16 = 0;
  v17 = &off_140A77D68;
  do
  {
    v18 = *v17;
    v19 = v17;
    if ( (_DWORD)v15 == (*v17)->pid )
    {
      v20 = *(_QWORD *)a4 - *(_QWORD *)&v18->fmtid.Data1;
      if ( *(_QWORD *)a4 == *(_QWORD *)&v18->fmtid.Data1 )
        v20 = *(_QWORD *)(a4 + 8) - *(_QWORD *)v18->fmtid.Data4;
      if ( !v20 )
        break;
    }
    v19 = 0LL;
    ++v16;
    v17 += 2;
  }
  while ( !v16 );
  if ( !v19 )
    return (unsigned int)-1073741264;
  if ( (_DWORD)v15 == 2 )
  {
    v21 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_DeviceInterfaceClass_DefaultInterface.fmtid.Data1;
    if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_DeviceInterfaceClass_DefaultInterface.fmtid.Data1 )
      v21 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_DeviceInterfaceClass_DefaultInterface.fmtid.Data4;
    if ( !v21 )
    {
      if ( !a3 )
      {
        v9 = CmOpenInterfaceClassRegKey(a1, a2, v15, a4, 1, 0, (__int64)&Handle, 0LL);
        if ( v9 < 0 )
          goto LABEL_17;
        LODWORD(a3) = (_DWORD)Handle;
      }
      v22 = PnpOpenPropertiesKey(a1, a3, 0LL, 1, 0, v25, &KeyHandle);
      v9 = v22;
      if ( v22 == -1073741772 )
      {
LABEL_16:
        v9 = -1073741275;
        goto LABEL_17;
      }
      if ( v22 >= 0 )
      {
        LODWORD(a5) = v14;
        v24 = RegRtlQueryValue(KeyHandle, L"Default", &v29, v13, (unsigned int *)&a5);
        ZwClose(KeyHandle);
        if ( v24 != -1073741772 && v24 != -1073741444 )
        {
          if ( !v24 || v24 == -1073741789 )
          {
            *a8 = (_DWORD)a5;
            *v8 = 18;
            if ( v24 || !v14 )
              v9 = -1073741789;
          }
          else
          {
            v9 = v24;
          }
          goto LABEL_17;
        }
        goto LABEL_16;
      }
LABEL_17:
      if ( Handle )
        ZwClose(Handle);
    }
  }
  return (unsigned int)v9;
}
