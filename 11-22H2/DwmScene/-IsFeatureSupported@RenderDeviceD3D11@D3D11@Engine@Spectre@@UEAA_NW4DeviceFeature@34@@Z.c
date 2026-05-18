/*
 * XREFs of ?IsFeatureSupported@RenderDeviceD3D11@D3D11@Engine@Spectre@@UEAA_NW4DeviceFeature@34@@Z @ 0x1800C68A0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     _CxxThrowException_0 @ 0x18000CA79 (_CxxThrowException_0.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010DD0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     ??0SpectreException@Utils@Spectre@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@Z @ 0x18001C33C (--0SpectreException@Utils@Spectre@@QEAA@AEBV-$basic_string@DU-$char_traits@D@std@@V-$allocator@D.c)
 *     ?GetFeatureLevel@RenderDeviceD3D11@D3D11@Engine@Spectre@@QEAA?AW4DeviceFeatureLevel@34@XZ @ 0x1800C58B4 (-GetFeatureLevel@RenderDeviceD3D11@D3D11@Engine@Spectre@@QEAA-AW4DeviceFeatureLevel@34@XZ.c)
 */

// Hidden C++ exception states: #wind=1
bool __fastcall Spectre::Engine::D3D11::RenderDeviceD3D11::IsFeatureSupported(__int64 a1)
{
  int FeatureLevel; // eax
  int v2; // edx
  int v3; // edx
  int v4; // edx
  int v5; // edx
  int v6; // edx
  int v7; // edx
  int v8; // edx
  bool v9; // sf
  bool v10; // of
  int v12; // edx
  int v13; // edx
  int v14; // edx
  int v15; // edx
  int v16; // edx
  _QWORD v17[4]; // [rsp+20h] [rbp-68h] BYREF
  _BYTE pExceptionObject[56]; // [rsp+40h] [rbp-48h] BYREF

  FeatureLevel = Spectre::Engine::D3D11::RenderDeviceD3D11::GetFeatureLevel(a1);
  if ( v2 <= 8 )
  {
    if ( v2 == 8 )
    {
      v10 = __OFSUB__(FeatureLevel, 41216);
      v9 = FeatureLevel - 41216 < 0;
      return v9 == v10;
    }
    if ( !v2 )
      goto LABEL_23;
    v3 = v2 - 1;
    if ( !v3 )
      goto LABEL_23;
    v4 = v3 - 1;
    if ( !v4 )
    {
      v10 = __OFSUB__(FeatureLevel, 37376);
      v9 = FeatureLevel - 37376 < 0;
      return v9 == v10;
    }
    v5 = v4 - 1;
    if ( v5 )
    {
      v6 = v5 - 1;
      if ( v6 )
      {
        v7 = v6 - 1;
        if ( v7 )
        {
          v8 = v7 - 1;
          if ( v8 )
          {
            if ( v8 == 1 )
            {
              v10 = __OFSUB__(FeatureLevel, 37632);
              v9 = FeatureLevel - 37632 < 0;
              return v9 == v10;
            }
LABEL_21:
            std::string::string(v17, (__int64)"unknown device feature queried");
            Spectre::Utils::SpectreException::SpectreException((__int64)pExceptionObject, (const char *)v17, 0);
            throw (Spectre::Utils::SpectreException *)pExceptionObject;
          }
        }
LABEL_23:
        v10 = __OFSUB__(FeatureLevel, 40960);
        v9 = FeatureLevel - 40960 < 0;
        return v9 == v10;
      }
    }
    return 1;
  }
  v12 = v2 - 9;
  if ( !v12 )
    return 1;
  v13 = v12 - 1;
  if ( !v13 )
    return 1;
  v14 = v13 - 1;
  if ( !v14 )
    return 1;
  v15 = v14 - 1;
  if ( !v15 )
    goto LABEL_23;
  v16 = v15 - 1;
  if ( v16 && (unsigned int)(v16 - 1) >= 2 )
    goto LABEL_21;
  return 0;
}
