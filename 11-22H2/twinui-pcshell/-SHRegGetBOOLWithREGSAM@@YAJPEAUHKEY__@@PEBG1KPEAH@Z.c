/*
 * XREFs of ?SHRegGetBOOLWithREGSAM@@YAJPEAUHKEY__@@PEBG1KPEAH@Z @ 0x18017F720
 * Callers:
 *     ?OnTabtipRegistryChanged@TouchKeyboardExperienceManager@@AEAAJXZ @ 0x1800A7A68 (-OnTabtipRegistryChanged@TouchKeyboardExperienceManager@@AEAAJXZ.c)
 *     ??0XamlLauncher@@QEAA@XZ @ 0x1801039F4 (--0XamlLauncher@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@UndockedSearchAppExperienceManager@@QEAAJPEAUIServiceProvider@@AEBV?$ComPtr@VIMiniSearch@@@WRL@Microsoft@@AEBUViewCoordinator@Shell@UI@WindowsUdk@winrt@@V?$unique_ptr@VIUndockedSearchAppExperienceManagerConfig@@U?$default_delete@VIUndockedSearchAppExperienceManagerConfig@@@wistd@@@wistd@@V?$unique_ptr@VISearchAppPositioner@@U?$default_delete@VISearchAppPositioner@@@wistd@@@wistd@@4V?$unique_ptr@VISearchAppActivator@@U?$default_delete@VISearchAppActivator@@@wistd@@@wistd@@@Z @ 0x1801716F8 (-RuntimeClassInitialize@UndockedSearchAppExperienceManager@@QEAAJPEAUIServiceProvider@@AEBV-$Com.c)
 *     ?IsDeviceConvertible@TabletModeHelpers@@YA_NXZ @ 0x1805131F8 (-IsDeviceConvertible@TabletModeHelpers@@YA_NXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SHRegGetBOOLWithREGSAM(
        HKEY a1,
        const unsigned __int16 *a2,
        const unsigned __int16 *a3,
        unsigned int a4,
        int *a5)
{
  LSTATUS ValueW; // eax
  unsigned int v6; // ecx
  int v8; // ecx
  bool v9; // zf
  DWORD v10; // [rsp+40h] [rbp-18h] BYREF
  DWORD v11[5]; // [rsp+44h] [rbp-14h] BYREF
  unsigned int v12; // [rsp+78h] [rbp+20h] BYREF

  v12 = a4;
  v10 = 0;
  v11[0] = 4;
  ValueW = RegGetValueW(a1, a2, a3, 0x10000012u, &v10, &v12, v11);
  v6 = ValueW;
  if ( !ValueW )
  {
    LOWORD(v6) = 13;
    if ( v10 == 4 )
    {
      if ( v12 > 1 )
        return (unsigned __int16)v6 | 0x80070000;
      v8 = 0;
      v9 = v12 == 1;
    }
    else
    {
      if ( v11[0] != 4 || (unsigned __int16)(v12 - 48) > 1u )
        return (unsigned __int16)v6 | 0x80070000;
      v8 = 0;
      v9 = (_WORD)v12 == 49;
    }
    LOBYTE(v8) = v9;
    *a5 = v8;
    return 0;
  }
  if ( ValueW == 234 )
  {
    LOWORD(v6) = 13;
    return (unsigned __int16)v6 | 0x80070000;
  }
  if ( ValueW > 0 )
    return (unsigned __int16)v6 | 0x80070000;
  return v6;
}
