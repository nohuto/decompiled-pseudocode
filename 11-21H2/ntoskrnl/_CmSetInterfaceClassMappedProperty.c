/*
 * XREFs of _CmSetInterfaceClassMappedProperty @ 0x140A2CC38
 * Callers:
 *     _PnpDispatchInterfaceClass @ 0x140787620 (_PnpDispatchInterfaceClass.c)
 *     _CmDeleteInterfaceClassWorker @ 0x140A25124 (_CmDeleteInterfaceClassWorker.c)
 * Callees:
 *     _PnpObjectRaisePropertyChangeEvent @ 0x1407720B8 (_PnpObjectRaisePropertyChangeEvent.c)
 *     _CmDeleteInterfaceClassMappedPropertyFromRegValue @ 0x140A2A640 (_CmDeleteInterfaceClassMappedPropertyFromRegValue.c)
 *     _CmSetInterfaceClassMappedPropertyFromRegValue @ 0x140A2CD54 (_CmSetInterfaceClassMappedPropertyFromRegValue.c)
 */

__int64 __fastcall CmSetInterfaceClassMappedProperty(
        __int64 a1,
        __int64 a2,
        void *a3,
        __int64 a4,
        __int64 a5,
        unsigned int a6,
        __int64 a7,
        ULONG a8)
{
  unsigned int v11; // edi
  __int64 v12; // rcx
  int v13; // eax
  __int64 v14; // rcx

  v11 = -1073741802;
  if ( !a4 )
  {
    if ( &DEVPKEY_DeviceInterfaceClass_DefaultInterface
      && *(_DWORD *)(a5 + 16) == DEVPKEY_DeviceInterfaceClass_DefaultInterface.pid )
    {
      v12 = *(_QWORD *)a5 - *(_QWORD *)&DEVPKEY_DeviceInterfaceClass_DefaultInterface.fmtid.Data1;
      if ( *(_QWORD *)a5 == *(_QWORD *)&DEVPKEY_DeviceInterfaceClass_DefaultInterface.fmtid.Data1 )
        v12 = *(_QWORD *)(a5 + 8) - *(_QWORD *)DEVPKEY_DeviceInterfaceClass_DefaultInterface.fmtid.Data4;
      if ( !v12 )
      {
        if ( a6 < 2 )
          v13 = CmDeleteInterfaceClassMappedPropertyFromRegValue(a1, a2, a3, a5);
        else
          v13 = CmSetInterfaceClassMappedPropertyFromRegValue(a1, a2, (int)a3, a5, a6, a7, a8);
        v11 = v13;
        if ( v13 >= 0 )
        {
          PnpObjectRaisePropertyChangeEvent(a1, a2, 4LL, (__int64)a3, 0LL, a5);
          return v11;
        }
        if ( v13 != -1073741802 )
          return v11;
      }
    }
    if ( *(_DWORD *)(a5 + 16) == DEVPKEY_NAME.pid )
    {
      v14 = *(_QWORD *)a5 - *(_QWORD *)&DEVPKEY_NAME.fmtid.Data1;
      if ( *(_QWORD *)a5 == *(_QWORD *)&DEVPKEY_NAME.fmtid.Data1 )
        v14 = *(_QWORD *)(a5 + 8) - *(_QWORD *)DEVPKEY_NAME.fmtid.Data4;
      if ( !v14 )
        return (unsigned int)-1073741790;
    }
  }
  return v11;
}
