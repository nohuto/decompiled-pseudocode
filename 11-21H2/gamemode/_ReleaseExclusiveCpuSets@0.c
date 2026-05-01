/*
 * XREFs of _ReleaseExclusiveCpuSets@0 @ 0x10005C20
 * Callers:
 *     <none>
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@2IPAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YGJ0122I3@ZPBU2@PBU2@@@SGJPBU_tlgProvider_t@@PBXPBU_GUID@@2ABU?$_tlgWrapperByVal@$03@@@Z @ 0x10001E70 (--$Write@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@2IP.c)
 *     ?IsCurrentProcessStronglyNamed@CallerIdentity@@YGJPA_N@Z @ 0x10006515 (-IsCurrentProcessStronglyNamed@CallerIdentity@@YGJPA_N@Z.c)
 *     ?CheckCallerCapability@CallerIdentity@@YGJPBGPA_N@Z @ 0x10006756 (-CheckCallerCapability@CallerIdentity@@YGJPBGPA_N@Z.c)
 *     @__security_check_cookie@4 @ 0x10006D50 (@__security_check_cookie@4.c)
 */

HRESULT __stdcall ReleaseExclusiveCpuSets()
{
  int v0; // ecx
  HRESULT IsCurrentProcessStronglyNamed; // esi
  DWORD CurrentProcessId; // eax
  HANDLE v3; // edi
  signed int LastError; // eax
  int v5; // esi
  CallerIdentity *v7; // [esp+0h] [ebp-50h]
  CallerIdentity *v8; // [esp+0h] [ebp-50h]
  bool *v9; // [esp+4h] [ebp-4Ch]
  const unsigned __int16 *v10; // [esp+4h] [ebp-4Ch]
  bool *v11; // [esp+8h] [ebp-48h]
  HRESULT v12; // [esp+Ch] [ebp-44h] BYREF
  DWORD pcbData; // [esp+10h] [ebp-40h] BYREF
  int v14; // [esp+14h] [ebp-3Ch] BYREF
  int pvData; // [esp+18h] [ebp-38h] BYREF
  char v16; // [esp+1Eh] [ebp-32h]
  char v17; // [esp+1Fh] [ebp-31h]
  _DWORD v18[11]; // [esp+20h] [ebp-30h] BYREF

  memset(v18, 0, 0x28u);
  IsCurrentProcessStronglyNamed = CallerIdentity::IsCurrentProcessStronglyNamed(v7, v9);
  if ( IsCurrentProcessStronglyNamed >= 0 )
  {
    IsCurrentProcessStronglyNamed = CallerIdentity::CheckCallerCapability(v8, v10, v11);
    if ( IsCurrentProcessStronglyNamed >= 0 )
    {
      if ( v17 && v16 )
      {
        RtlGetDeviceFamilyInfoEnum(0, &v14, 0);
        if ( v14 == 5 )
        {
          IsCurrentProcessStronglyNamed = -2147467263;
        }
        else
        {
          pvData = 0;
          pcbData = 4;
          if ( RegGetValueW(
                 HKEY_LOCAL_MACHINE,
                 L"Software\\Policies\\Microsoft\\Windows\\GameDVR",
                 L"AllowAutoGameMode",
                 0x18u,
                 0,
                 &pvData,
                 &pcbData)
            || pvData )
          {
            CurrentProcessId = GetCurrentProcessId();
            v3 = OpenProcess(0x1000u, 0, CurrentProcessId);
            if ( v3 )
            {
              RmGameModeInitializeResourceRequest(v18);
              v18[0] = 6;
              memset(&v18[1], 0, 12);
              v18[7] = v18[7] & 0xFFFFFFE0 | 0x10;
              v18[4] = 2;
              v18[5] = 50;
              v18[6] = 30;
              v5 = RmGameModeRegisterProcess(v3, v18, 0);
              if ( v5 == -1073740008 )
              {
                RmGameModeUnregisterProcess(v3);
                v5 = RmGameModeRegisterProcess(v3, v18, 0);
              }
              if ( v5 >= 0 )
                IsCurrentProcessStronglyNamed = 0;
              else
                IsCurrentProcessStronglyNamed = (unsigned int)&_ImageBase | v5;
              CloseHandle(v3);
            }
            else
            {
              LastError = GetLastError();
              IsCurrentProcessStronglyNamed = LastError;
              if ( LastError > 0 )
                IsCurrentProcessStronglyNamed = (unsigned __int16)LastError | 0x80070000;
            }
          }
          else
          {
            IsCurrentProcessStronglyNamed = -2147019873;
          }
        }
      }
      else
      {
        IsCurrentProcessStronglyNamed = -2147024891;
      }
    }
  }
  if ( (unsigned int)dword_10008000 > 4 )
  {
    v12 = IsCurrentProcessStronglyNamed;
    _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>>(
      v0,
      (int)dword_10001A38,
      v0,
      v0,
      (int)&v12);
  }
  return IsCurrentProcessStronglyNamed;
}
