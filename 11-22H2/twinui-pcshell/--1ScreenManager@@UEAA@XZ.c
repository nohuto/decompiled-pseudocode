/*
 * XREFs of ??1ScreenManager@@UEAA@XZ @ 0x180142F68
 * Callers:
 *     ??_EScreenManager@@UEAAPEAXI@Z @ 0x1801BE370 (--_EScreenManager@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Unregister@SmartCookie@@QEAAJXZ @ 0x180143754 (-Unregister@SmartCookie@@QEAAJXZ.c)
 *     ??1?$function@$$A6AJK@Z@wistd@@QEAA@XZ @ 0x1801437F0 (--1-$function@$$A6AJK@Z@wistd@@QEAA@XZ.c)
 *     ?RemoveAll@?$CTSimpleArray@UCacheEntry@ScreenManager@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@UCacheEntry@ScreenManager@@@@V?$CSimpleArrayStandardCompareHelper@UCacheEntry@ScreenManager@@@@V?$CSimpleArrayStandardMergeHelper@UCacheEntry@ScreenManager@@@@@@QEAAXXZ @ 0x1801BD1A0 (-RemoveAll@-$CTSimpleArray@UCacheEntry@ScreenManager@@$0PPPPPPPO@V-$CTPolicyCoTaskMem@UCacheEntr.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall ScreenManager::~ScreenManager(ScreenManager *this)
{
  CTSimpleArray<ScreenManager::CacheEntry,4294967294,CTPolicyCoTaskMem<ScreenManager::CacheEntry>,CSimpleArrayStandardCompareHelper<ScreenManager::CacheEntry>,CSimpleArrayStandardMergeHelper<ScreenManager::CacheEntry>>::RemoveAll((char *)this + 312);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 38);
  SmartCookie::Unregister((ScreenManager *)((char *)this + 176));
  wistd::function<long (unsigned long)>::~function<long (unsigned long)>((char *)this + 176);
  SmartCookie::Unregister((ScreenManager *)((char *)this + 48));
  wistd::function<long (unsigned long)>::~function<long (unsigned long)>((char *)this + 48);
  *((_DWORD *)this + 11) = -1073741823;
}
