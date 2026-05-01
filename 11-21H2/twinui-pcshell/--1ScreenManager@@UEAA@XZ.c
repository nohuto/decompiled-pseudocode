/*
 * XREFs of ??1ScreenManager@@UEAA@XZ @ 0x1800AA3A8
 * Callers:
 *     ??_EScreenManager@@UEAAPEAXI@Z @ 0x1800A9960 (--_EScreenManager@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1?$function@$$A6AXAEAY0CA@$$CBE@Z@wistd@@QEAA@XZ @ 0x1800AA928 (--1-$function@$$A6AXAEAY0CA@$$CBE@Z@wistd@@QEAA@XZ.c)
 *     ?Unregister@SmartCookie@@QEAAJXZ @ 0x1800AA9A4 (-Unregister@SmartCookie@@QEAAJXZ.c)
 *     ?RemoveAll@?$CTSimpleArray@UCacheEntry@ScreenManager@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@UCacheEntry@ScreenManager@@@@V?$CSimpleArrayStandardCompareHelper@UCacheEntry@ScreenManager@@@@V?$CSimpleArrayStandardMergeHelper@UCacheEntry@ScreenManager@@@@@@QEAAXXZ @ 0x1800AABF8 (-RemoveAll@-$CTSimpleArray@UCacheEntry@ScreenManager@@$0PPPPPPPO@V-$CTPolicyCoTaskMem@UCacheEntr.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall ScreenManager::~ScreenManager(ScreenManager *this)
{
  CTSimpleArray<ScreenManager::CacheEntry,4294967294,CTPolicyCoTaskMem<ScreenManager::CacheEntry>,CSimpleArrayStandardCompareHelper<ScreenManager::CacheEntry>,CSimpleArrayStandardMergeHelper<ScreenManager::CacheEntry>>::RemoveAll((char *)this + 312);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 38);
  SmartCookie::Unregister((ScreenManager *)((char *)this + 176));
  wistd::function<void (unsigned char const (&)[32])>::~function<void (unsigned char const (&)[32])>((char *)this + 176);
  SmartCookie::Unregister((ScreenManager *)((char *)this + 48));
  wistd::function<void (unsigned char const (&)[32])>::~function<void (unsigned char const (&)[32])>((char *)this + 48);
  *((_DWORD *)this + 11) = -1073741823;
}
