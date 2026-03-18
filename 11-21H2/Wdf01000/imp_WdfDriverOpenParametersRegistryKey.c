/*
 * XREFs of imp_WdfDriverOpenParametersRegistryKey @ 0x1C0014B80
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0005610 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C00058D8 (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x1C0005B30 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     ?FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x1C00062C0 (-FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z.c)
 *     ?FxObjectHandleAllocCommon@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@UFxPoolTypeOrPoolFlags@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObjectType@@@Z @ 0x1C0006B70 (-FxObjectHandleAllocCommon@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@UFxPoolTypeOrPoolFlags@@_KKPEAU_WDF_OB.c)
 *     ??0FxRegKey@@QEAA@PEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0015BCC (--0FxRegKey@@QEAA@PEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_ @ 0x1C0028B14 (WPP_IFR_SF_.c)
 *     WPP_IFR_SF_d @ 0x1C00306F4 (WPP_IFR_SF_d.c)
 *     ?ClearEvtCallbacks@FxObject@@QEAAXXZ @ 0x1C0032F1C (-ClearEvtCallbacks@FxObject@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0035840 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0036BA0 (_guard_dispatch_icall_nop.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C006CAD4 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

__int64 __fastcall imp_WdfDriverOpenParametersRegistryKey(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDRIVER__ *Driver,
        ACCESS_MASK DesiredAccess,
        _WDF_OBJECT_ATTRIBUTES *KeyAttributes,
        WDFKEY__ **Key)
{
  _FX_DRIVER_GLOBALS *v5; // rsi
  _FX_DRIVER_GLOBALS *v9; // rcx
  __int64 result; // rax
  FxRegKey *v11; // rax
  FxObject *v12; // rax
  FxObject *v13; // rdi
  int v14; // ebx
  int v15; // eax
  void *hKey[2]; // [rsp+40h] [rbp-61h] BYREF
  _UNICODE_STRING parameters; // [rsp+50h] [rbp-51h] BYREF
  FxDriver *pDriver; // [rsp+60h] [rbp-41h] BYREF
  WDFKEY__ *keyHandle; // [rsp+68h] [rbp-39h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+70h] [rbp-31h] BYREF
  wchar_t parameters_buffer[12]; // [rsp+A0h] [rbp-1h] BYREF
  void *retaddr; // [rsp+F8h] [rbp+57h]

  v5 = (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8];
  pDriver = 0LL;
  hKey[0] = 0LL;
  keyHandle = 0LL;
  v9 = (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8];
  if ( !Key )
    FxVerifierNullBugCheck(v9, retaddr);
  *Key = 0LL;
  result = FxVerifierCheckIrqlLevel(v9, 0);
  if ( (int)result >= 0 )
  {
    result = FxValidateObjectAttributes(v5, KeyAttributes, 0);
    if ( (int)result >= 0 )
    {
      FxObjectHandleGetPtr(v5, (unsigned __int64)Driver, 0x1001u, (void **)&pDriver);
      *(_QWORD *)&parameters.Length = 0LL;
      parameters.Buffer = (wchar_t *)64;
      v11 = (FxRegKey *)FxObjectHandleAllocCommon(
                          v5,
                          (FxPoolTypeOrPoolFlags *)&parameters,
                          0x78uLL,
                          0,
                          KeyAttributes,
                          0,
                          FxObjectTypeExternal);
      if ( !v11 )
        return 3221225626LL;
      FxRegKey::FxRegKey(v11, v5);
      v13 = v12;
      if ( !v12 )
        return 3221225626LL;
      v14 = FxObject::Commit(v12, (_FX_DRIVER_GLOBALS *)KeyAttributes, (void **)&keyHandle, 0LL, 1u);
      if ( v14 >= 0 )
      {
        if ( (DesiredAccess & 0x7FFDFFE6) != 0 )
        {
          WPP_IFR_SF_(v5, 3u, 6u, 0xAu, WPP_FxDriverApiKm_cpp_Traceguids);
          *(_QWORD *)&ObjectAttributes.Length = 48LL;
          ObjectAttributes.ObjectName = &pDriver->m_RegistryPath;
          *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
          ObjectAttributes.RootDirectory = 0LL;
          *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
          v14 = ZwOpenKey(hKey, 0xF003Fu, &ObjectAttributes);
          if ( v14 >= 0 )
          {
            parameters.Buffer = parameters_buffer;
            ObjectAttributes.RootDirectory = hKey[0];
            wcscpy(parameters_buffer, L"Parameters");
            ObjectAttributes.ObjectName = &parameters;
            *(_QWORD *)&parameters.Length = 1441812LL;
            *(_QWORD *)&ObjectAttributes.Length = 48LL;
            *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
            *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
            v14 = ZwCreateKey((PHANDLE)&v13[1].m_Type, DesiredAccess, &ObjectAttributes, 0, 0LL, 0, 0LL);
            if ( v14 >= 0 )
              *Key = keyHandle;
            ZwClose(hKey[0]);
            if ( v14 >= 0 )
              return (unsigned int)v14;
          }
        }
        else
        {
          v15 = IoOpenDriverRegistryKey(pDriver->m_DriverObject.m_DriverObject, 0LL, DesiredAccess, 0LL, hKey);
          v14 = v15;
          if ( v15 >= 0 )
          {
            *(void **)&v13[1].m_Type = hKey[0];
            *Key = keyHandle;
            return (unsigned int)v14;
          }
          WPP_IFR_SF_d(v5, 2u, 6u, 0xBu, WPP_FxDriverApiKm_cpp_Traceguids, v15);
        }
      }
      FxObject::ClearEvtCallbacks(v13);
      v13->DeleteObject(v13);
      return (unsigned int)v14;
    }
  }
  return result;
}
