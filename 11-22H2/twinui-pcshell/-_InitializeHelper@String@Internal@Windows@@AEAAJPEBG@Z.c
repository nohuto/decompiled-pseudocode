/*
 * XREFs of ?_InitializeHelper@String@Internal@Windows@@AEAAJPEBG@Z @ 0x1800C0B00
 * Callers:
 *     ?CheckStateRepositoryForIsGameFromAppId@IsGameManager@@AEAAJPEBGPEA_NPEAU_GUID@@PEAK@Z @ 0x180039290 (-CheckStateRepositoryForIsGameFromAppId@IsGameManager@@AEAAJPEBGPEA_NPEAU_GUID@@PEAK@Z.c)
 *     ?IsGameFromAppId@IsGameManager@@UEAAJPEBGPEAUGameConfigInfo@@@Z @ 0x180039630 (-IsGameFromAppId@IsGameManager@@UEAAJPEBGPEAUGameConfigInfo@@@Z.c)
 *     ?GetPathProcessNameFromProcessId@IsGameManager@@UEAAJKPEAVString@Internal@Windows@@@Z @ 0x18003F120 (-GetPathProcessNameFromProcessId@IsGameManager@@UEAAJKPEAVString@Internal@Windows@@@Z.c)
 *     ?s_PropEnumCallback@LightweightPropertySet@@CAHPEAUHWND__@@PEAGPEAX_K@Z @ 0x180049CF0 (-s_PropEnumCallback@LightweightPropertySet@@CAHPEAUHWND__@@PEAGPEAX_K@Z.c)
 *     ?MangleAndInitializeName@LightweightProperty@LightweightPropertySet@@QEAAJPEBG@Z @ 0x18004A028 (-MangleAndInitializeName@LightweightProperty@LightweightPropertySet@@QEAAJPEBG@Z.c)
 *     ?Initialize@UwpWindowWrapperBase@@QEAAJPEAUIUwpWindowEventDispatcherInternal@@PEAUIUwpWindowContext@UwpWindowLifecycleManagement@Shell@Internal@Windows@@PEAUHSTRING__@@W4AppModelKind@WindowManagement@ApplicationModel@67@UUwpWindowContextId@4567@PEAUIWindow@WindowManagement@ApplicationModel@67@UWindowId@WindowManagement@ApplicationModel@67@PEBGW4WindowCreatedType@@_K@Z @ 0x1800A16BC (-Initialize@UwpWindowWrapperBase@@QEAAJPEAUIUwpWindowEventDispatcherInternal@@PEAUIUwpWindowCont.c)
 *     ?Initialize@GameDVR_OutputDebug@@SAJXZ @ 0x1800A7798 (-Initialize@GameDVR_OutputDebug@@SAJXZ.c)
 *     ?GetKnownFolderSubFolder@@YAJAEBU_GUID@@PEBG1PEAVString@Internal@Windows@@@Z @ 0x1800A94E0 (-GetKnownFolderSubFolder@@YAJAEBU_GUID@@PEBG1PEAVString@Internal@Windows@@@Z.c)
 *     ?GetKGLLocationForApp@IsGameManager@@AEAAJPEBG0PEAVString@Internal@Windows@@@Z @ 0x1800C0768 (-GetKGLLocationForApp@IsGameManager@@AEAAJPEBG0PEAVString@Internal@Windows@@@Z.c)
 *     ?RuntimeClassInitialize@ViewEventArgsForPropertyChanged@@QEAAJPEBG@Z @ 0x1800F6438 (-RuntimeClassInitialize@ViewEventArgsForPropertyChanged@@QEAAJPEBG@Z.c)
 *     ?UpdateGameConfigStoreFromKGL@IsGameManager@@AEAAJPEAUIGameEntry@KnownGameList@@U_GUID@@K_NPEAVString@Internal@Windows@@PEAU4@@Z @ 0x1803E0524 (-UpdateGameConfigStoreFromKGL@IsGameManager@@AEAAJPEAUIGameEntry@KnownGameList@@U_GUID@@K_NPEAVS.c)
 *     ?QueuePendingActivation@WindowEventDispatcher@@AEAAXPEAUIWindowWrapperInternal@@PEAUIPropertySet@Collections@Foundation@Windows@@_N@Z @ 0x1804C7810 (-QueuePendingActivation@WindowEventDispatcher@@AEAAXPEAUIWindowWrapperInternal@@PEAUIPropertySet.c)
 *     ?QueuePendingActivation@UwpWindowEventDispatcher@@AEAAXPEAUIUwpWindowWrapperInternal@@PEAUIPropertySet@Collections@Foundation@Windows@@_N@Z @ 0x1804D1B70 (-QueuePendingActivation@UwpWindowEventDispatcher@@AEAAXPEAUIUwpWindowWrapperInternal@@PEAUIPrope.c)
 *     ?Initialize@WindowWrapperBase@@QEAAJPEAUIWindowEventDispatcherInternal@@PEAUIAppView@WindowManagement@ApplicationModel@Internal@Windows@@PEAUIAppModel@4567@W4AppModelKind@4567@UAppViewId@4567@PEAUIWindow@4567@UWindowId@4567@PEBGW4WindowCreatedType@@@Z @ 0x1804EA780 (-Initialize@WindowWrapperBase@@QEAAJPEAUIWindowEventDispatcherInternal@@PEAUIAppView@WindowManag.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::Internal::String::_InitializeHelper(HSTRING *this, const unsigned __int16 *a2)
{
  unsigned __int64 v2; // rax
  HRESULT v4; // ebx
  HSTRING v5; // rcx
  HSTRING string; // [rsp+40h] [rbp+18h] BYREF

  string = 0LL;
  v2 = -1LL;
  do
    ++v2;
  while ( a2[v2] );
  if ( v2 > 0xFFFFFFFF )
  {
    return (unsigned int)-2147024362;
  }
  else
  {
    v4 = WindowsCreateString(a2, v2, &string);
    if ( v4 >= 0 )
    {
      v5 = *this;
      *this = string;
      WindowsDeleteString(v5);
    }
  }
  return (unsigned int)v4;
}
