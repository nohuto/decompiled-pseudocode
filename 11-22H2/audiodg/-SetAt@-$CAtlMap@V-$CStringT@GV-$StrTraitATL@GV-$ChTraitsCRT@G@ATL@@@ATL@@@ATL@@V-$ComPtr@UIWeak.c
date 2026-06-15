/*
 * XREFs of ?SetAt@?$CAtlMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@V?$ComPtr@UIWeakReference@@@WRL@Microsoft@@V?$CElementTraits@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@2@V?$CElementTraits@V?$ComPtr@UIWeakReference@@@WRL@Microsoft@@@2@@ATL@@QEAAPEAU__POSITION@@PEBGAEBV?$ComPtr@UIWeakReference@@@WRL@Microsoft@@@Z @ 0x14001F4C0
 * Callers:
 *     ?SaveObjectCacheForEndpoint@CDeviceGraphObjectCacheManager@@AEAAJPEBGPEAVCDeviceGraphObjectCache@@@Z @ 0x14001F428 (-SaveObjectCacheForEndpoint@CDeviceGraphObjectCacheManager@@AEAAJPEBGPEAVCDeviceGraphObjectCache.c)
 * Callees:
 *     ??4?$ComPtr@UIWeakReference@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x14001F524 (--4-$ComPtr@UIWeakReference@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?GetNode@?$CAtlMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@V?$ComPtr@UIWeakReference@@@WRL@Microsoft@@V?$CElementTraits@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@2@V?$CElementTraits@V?$ComPtr@UIWeakReference@@@WRL@Microsoft@@@2@@ATL@@AEBAPEAVCNode@12@PEBGAEAI1AEAPEAV312@@Z @ 0x14001F574 (-GetNode@-$CAtlMap@V-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@V-$ComPtr@UIWe.c)
 *     ?CreateNode@?$CAtlMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@V?$ComPtr@UIWeakReference@@@WRL@Microsoft@@V?$CElementTraits@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@2@V?$CElementTraits@V?$ComPtr@UIWeakReference@@@WRL@Microsoft@@@2@@ATL@@AEAAPEAVCNode@12@PEBGII@Z @ 0x140070CC8 (-CreateNode@-$CAtlMap@V-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@V-$ComPtr@U.c)
 */

__int64 __fastcall ATL::CAtlMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,Microsoft::WRL::ComPtr<IWeakReference>,ATL::CElementTraits<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>>,ATL::CElementTraits<Microsoft::WRL::ComPtr<IWeakReference>>>::SetAt(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 Node; // rax
  __int64 v7; // rbx
  unsigned int v9; // [rsp+30h] [rbp-28h] BYREF
  __int64 v10; // [rsp+38h] [rbp-20h] BYREF
  __int64 v11; // [rsp+78h] [rbp+20h] BYREF

  Node = ATL::CAtlMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,Microsoft::WRL::ComPtr<IWeakReference>,ATL::CElementTraits<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>>,ATL::CElementTraits<Microsoft::WRL::ComPtr<IWeakReference>>>::GetNode(
           a1,
           a2,
           (unsigned int)&v9,
           (unsigned int)&v11,
           (__int64)&v10);
  v7 = Node;
  if ( Node )
  {
    Microsoft::WRL::ComPtr<IWeakReference>::operator=(Node + 8, a3);
  }
  else
  {
    v7 = ATL::CAtlMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,Microsoft::WRL::ComPtr<IWeakReference>,ATL::CElementTraits<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>>,ATL::CElementTraits<Microsoft::WRL::ComPtr<IWeakReference>>>::CreateNode(
           a1,
           a2,
           v9,
           (unsigned int)v11);
    v11 = v7;
    Microsoft::WRL::ComPtr<IWeakReference>::operator=(v7 + 8, a3);
  }
  return v7;
}
