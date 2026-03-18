/*
 * XREFs of ??1CGenericInk@@EEAA@XZ @ 0x18022C7D8
 * Callers:
 *     ??_GCGenericInk@@EEAAPEAXI@Z @ 0x1801C2A90 (--_GCGenericInk@@EEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x18007F480 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x1800DAA70 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ??1?$CDeviceResourceTable@VCD2DGenericInk@@VCGenericInk@@@@QEAA@XZ @ 0x1801C1434 (--1-$CDeviceResourceTable@VCD2DGenericInk@@VCGenericInk@@@@QEAA@XZ.c)
 *     ?RemoveSource@CSuperWetInkManager@@QEAAXPEAVCSuperWetSource@@@Z @ 0x1801CBFCC (-RemoveSource@CSuperWetInkManager@@QEAAXPEAVCSuperWetSource@@@Z.c)
 */

void __fastcall CGenericInk::~CGenericInk(CGenericInk *this)
{
  __int64 v2; // rcx

  *(_QWORD *)this = &CGenericInk::`vftable'{for `CSuperWetSource'};
  *((_QWORD *)this + 18) = &CGenericInk::`vftable'{for `IDirtyRectSource'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 8) + 4LL) + 64) = &CGenericInk::`vftable'{for `IUnknown'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 8) + 8LL) + 64) = &CGenericInk::`vftable'{for `IContent'};
  v2 = *(int *)(*((_QWORD *)this + 8) + 4LL);
  *(_DWORD *)((char *)this + v2 + 60) = v2 - 352;
  *(_DWORD *)((char *)this + *(int *)(*((_QWORD *)this + 8) + 8LL) + 60) = *(_DWORD *)(*((_QWORD *)this + 8) + 8LL)
                                                                         - 368;
  CSuperWetInkManager::RemoveSource(*(CSuperWetInkManager **)(*((_QWORD *)this + 2) + 256LL), this);
  FastRegion::CRegion::FreeMemory((void **)this + 36);
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 240);
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 208);
  CDeviceResourceTable<CD2DGenericInk,CGenericInk>::~CDeviceResourceTable<CD2DGenericInk,CGenericInk>((CGenericInk *)((char *)this + 152));
  CSuperWetSource::~CSuperWetSource(this);
}
