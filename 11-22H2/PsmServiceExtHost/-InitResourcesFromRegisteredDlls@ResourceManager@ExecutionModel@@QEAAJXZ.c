/*
 * XREFs of ?InitResourcesFromRegisteredDlls@ResourceManager@ExecutionModel@@QEAAJXZ @ 0x180045DFC
 * Callers:
 *     ?InitializePools@ResourceManager@ExecutionModel@@QEAAJXZ @ 0x180045564 (-InitializePools@ResourceManager@ExecutionModel@@QEAAJXZ.c)
 * Callees:
 *     ??0BaseResourceSet@ExecutionModel@@QEAA@XZ @ 0x18003DDB8 (--0BaseResourceSet@ExecutionModel@@QEAA@XZ.c)
 *     ?Attach@?$CComPtrBase@VBaseResourceSet@ExecutionModel@@@ATL@@QEAAXPEAVBaseResourceSet@ExecutionModel@@@Z @ 0x18004605C (-Attach@-$CComPtrBase@VBaseResourceSet@ExecutionModel@@@ATL@@QEAAXPEAVBaseResourceSet@ExecutionM.c)
 *     ?RmpSystemInvokeExternalResourceRegistrar@@YAXPEAUIExternalResourceRegister@ExecutionModel@@PEAG@Z @ 0x180046288 (-RmpSystemInvokeExternalResourceRegistrar@@YAXPEAUIExternalResourceRegister@ExecutionModel@@PEAG.c)
 *     __security_check_cookie @ 0x180049550 (__security_check_cookie.c)
 *     ??2@YAPEAX_K@Z @ 0x18004AA48 (--2@YAPEAX_K@Z.c)
 *     memset_0 @ 0x1800536FA (memset_0.c)
 */

__int64 __fastcall ExecutionModel::ResourceManager::InitResourcesFromRegisteredDlls(
        ExecutionModel::ResourceManager *this)
{
  ExecutionModel::BaseResourceSet *v2; // rax
  __int64 v3; // rax
  LSTATUS v4; // eax
  signed int v5; // ebx
  LSTATUS v6; // eax
  int v7; // ebx
  DWORD v8; // edx
  unsigned int v9; // ebx
  DWORD cbData; // [rsp+40h] [rbp-C0h] BYREF
  DWORD Type; // [rsp+44h] [rbp-BCh] BYREF
  DWORD cchValueName; // [rsp+48h] [rbp-B8h] BYREF
  HKEY phkResult; // [rsp+50h] [rbp-B0h] BYREF
  HKEY hKey; // [rsp+58h] [rbp-A8h] BYREF
  WCHAR ValueName[264]; // [rsp+60h] [rbp-A0h] BYREF
  unsigned __int16 Data[1024]; // [rsp+270h] [rbp+170h] BYREF

  hKey = 0LL;
  phkResult = 0LL;
  Type = 0;
  cchValueName = 259;
  cbData = 2046;
  memset_0(ValueName, 0, 0x208uLL);
  memset_0(Data, 0, sizeof(Data));
  v2 = (ExecutionModel::BaseResourceSet *)operator new(0x510uLL);
  if ( v2 )
    v2 = ExecutionModel::BaseResourceSet::BaseResourceSet(v2);
  ATL::CComPtrBase<ExecutionModel::BaseResourceSet>::Attach((char *)this + 24, v2);
  v3 = *((_QWORD *)this + 3);
  if ( v3 )
  {
    *(_DWORD *)(v3 + 16) = 0;
    *(_DWORD *)(v3 + 1280) = 2;
    *(_QWORD *)(v3 + 24) = this;
    if ( hKey )
      RegCloseKey(hKey);
    hKey = 0LL;
    v4 = RegOpenKeyExW(HKEY_LOCAL_MACHINE, L"System\\ResourceManager", 0, 0x20019u, &hKey);
    v5 = v4;
    if ( v4 > 0 )
      v5 = (unsigned __int16)v4 | 0xC0070000;
    if ( v5 >= 0 )
    {
      if ( phkResult )
        RegCloseKey(phkResult);
      phkResult = 0LL;
      v6 = RegOpenKeyExW(hKey, L"Registrars\\", 0, 0x20019u, &phkResult);
      v5 = v6;
      if ( v6 > 0 )
        v5 = (unsigned __int16)v6 | 0xC0070000;
      if ( v5 >= 0 )
      {
        v7 = 1;
        v8 = 0;
        while ( !RegEnumValueW(phkResult, v8, ValueName, &cchValueName, 0LL, &Type, (LPBYTE)Data, &cbData) )
        {
          if ( Type == 1 && cbData > 2 )
            RmpSystemInvokeExternalResourceRegistrar(this, Data);
          memset_0(ValueName, 0, 0x208uLL);
          memset_0(Data, 0, sizeof(Data));
          v8 = v7;
          cchValueName = 259;
          ++v7;
          cbData = 2046;
        }
        goto LABEL_20;
      }
    }
    if ( v5 == -1073283070 )
    {
LABEL_20:
      v9 = 0;
      goto LABEL_21;
    }
    v9 = v5 | 0x10000000;
  }
  else
  {
    v9 = -2147024882;
  }
LABEL_21:
  if ( phkResult )
    RegCloseKey(phkResult);
  if ( hKey )
    RegCloseKey(hKey);
  return v9;
}
