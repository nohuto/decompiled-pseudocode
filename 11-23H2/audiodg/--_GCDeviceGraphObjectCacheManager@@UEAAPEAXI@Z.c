/*
 * XREFs of ??_GCDeviceGraphObjectCacheManager@@UEAAPEAXI@Z @ 0x140070C30
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x140028498 (--3@YAXPEAX_K@Z.c)
 *     ?RemoveAll@?$CAtlMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@V?$ComPtr@UIWeakReference@@@WRL@Microsoft@@V?$CElementTraits@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@2@V?$CElementTraits@V?$ComPtr@UIWeakReference@@@WRL@Microsoft@@@2@@ATL@@QEAAXXZ @ 0x140071280 (-RemoveAll@-$CAtlMap@V-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@V-$ComPtr@UI.c)
 */

CDeviceGraphObjectCacheManager *__fastcall CDeviceGraphObjectCacheManager::`scalar deleting destructor'(
        CDeviceGraphObjectCacheManager *this,
        char a2)
{
  ATL::CAtlMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,Microsoft::WRL::ComPtr<IWeakReference>,ATL::CElementTraits<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>>,ATL::CElementTraits<Microsoft::WRL::ComPtr<IWeakReference>>>::RemoveAll((char *)this + 24);
  *((_DWORD *)this + 5) = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
