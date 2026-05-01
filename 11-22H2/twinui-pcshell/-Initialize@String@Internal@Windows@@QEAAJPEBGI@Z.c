/*
 * XREFs of ?Initialize@String@Internal@Windows@@QEAAJPEBGI@Z @ 0x18003F2AC
 * Callers:
 *     ?GetProcessFullPathFromProcessId@IsGameManager@@AEAAJKPEAVString@Internal@Windows@@@Z @ 0x18003F1C4 (-GetProcessFullPathFromProcessId@IsGameManager@@AEAAJKPEAVString@Internal@Windows@@@Z.c)
 *     ?RegisterKGLLocationForNotifications@IsGameManager@@AEAAJPEAUKGLUpdateLocationInfo@@@Z @ 0x1800EBC44 (-RegisterKGLLocationForNotifications@IsGameManager@@AEAAJPEAUKGLUpdateLocationInfo@@@Z.c)
 *     ?GetGlobalStringFromGameConfigStore@IsGameManager@@AEAAJW4GlobalProperty_t@ExecutionModel@@PEAVString@Internal@Windows@@@Z @ 0x1803DE8A4 (-GetGlobalStringFromGameConfigStore@IsGameManager@@AEAAJW4GlobalProperty_t@ExecutionModel@@PEAVS.c)
 *     ?GetStringFromGameConfigStore@IsGameManager@@AEAAJU_GUID@@W4GameProperty_t@ExecutionModel@@PEAVString@Internal@Windows@@@Z @ 0x1803DECB8 (-GetStringFromGameConfigStore@IsGameManager@@AEAAJU_GUID@@W4GameProperty_t@ExecutionModel@@PEAVS.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::Internal::String::Initialize(HSTRING *this, const unsigned __int16 *a2, UINT32 a3)
{
  HRESULT v4; // edi
  HSTRING v5; // rcx
  HSTRING string; // [rsp+30h] [rbp+8h] BYREF

  v4 = WindowsCreateString(a2, a3, &string);
  if ( v4 >= 0 )
  {
    v5 = *this;
    *this = string;
    WindowsDeleteString(v5);
  }
  return (unsigned int)v4;
}
