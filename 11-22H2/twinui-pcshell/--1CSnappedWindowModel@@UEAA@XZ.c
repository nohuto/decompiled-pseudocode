/*
 * XREFs of ??1CSnappedWindowModel@@UEAA@XZ @ 0x1802E9196
 * Callers:
 *     ??_GCSnappedWindowModel@@UEAAPEAXI@Z @ 0x180666FE0 (--_GCSnappedWindowModel@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x180148460 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?RemoveAll@?$CTSimpleArray@V?$ComPtr@UIMultitaskingViewGridElement@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIMultitaskingViewGridElement@@@WRL@Microsoft@@@@VComPtrCompareHelper@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIMultitaskingViewGridElement@@@WRL@Microsoft@@@@@@QEAAXXZ @ 0x1802D2574 (-RemoveAll@-$CTSimpleArray@V-$ComPtr@UIMultitaskingViewGridElement@@@WRL@Microsoft@@$0PPPPPPPO@V.c)
 */

void __fastcall CSnappedWindowModel::~CSnappedWindowModel(CSnappedWindowModel *this)
{
  CTSimpleArray<Microsoft::WRL::ComPtr<IMultitaskingViewGridElement>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IMultitaskingViewGridElement>>,ComPtrCompareHelper,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IMultitaskingViewGridElement>>>::RemoveAll((__int64)this + 40);
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)this + 4);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 3);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 2);
  *((_DWORD *)this + 3) = -1073741823;
}
