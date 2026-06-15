/*
 * XREFs of ?GetObjectCacheForEndpoint_UnderLock@CDeviceGraphObjectCacheManager@@AEAAPEAUIDeviceGraphObjectCache@@PEBG@Z @ 0x140007248
 * Callers:
 *     ?GetObjectCacheForEndpoint@CDeviceGraphObjectCacheManager@@UEAAJPEBGPEAUOBJECTCACHE_INITIALIZATION_PARAMS@@PEAPEAUIDeviceGraphObjectCache@@@Z @ 0x140006FC0 (-GetObjectCacheForEndpoint@CDeviceGraphObjectCacheManager@@UEAAJPEBGPEAUOBJECTCACHE_INITIALIZATI.c)
 * Callees:
 *     ?GetNode@?$CAtlMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@V?$ComPtr@UIWeakReference@@@WRL@Microsoft@@V?$CElementTraits@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@2@V?$CElementTraits@V?$ComPtr@UIWeakReference@@@WRL@Microsoft@@@2@@ATL@@AEBAPEAVCNode@12@PEBGAEAI1AEAPEAV312@@Z @ 0x140006DCC (-GetNode@-$CAtlMap@V-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@V-$ComPtr@UIWe.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x1400295BC (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAgileReference@@@WRL@Microsoft@@IEAAKXZ @ 0x14002AF68 (-InternalRelease@-$ComPtr@UIAgileReference@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDeviceGraphObjectCache@@@WRL@Microsoft@@IEAAKXZ @ 0x14002C880 (-InternalRelease@-$ComPtr@UIDeviceGraphObjectCache@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
struct IDeviceGraphObjectCache *__fastcall CDeviceGraphObjectCacheManager::GetObjectCacheForEndpoint_UnderLock(
        CDeviceGraphObjectCacheManager *this,
        unsigned __int16 *a2)
{
  unsigned __int16 *Node; // rax
  unsigned __int16 *v3; // rbx
  int (__fastcall ***v4)(_QWORD, _QWORD, _QWORD); // rbx
  int (__fastcall *v5)(_QWORD, GUID *, __int64 *); // rdi
  __int64 v6; // rbx
  __int64 v8; // [rsp+50h] [rbp+20h] BYREF
  int (__fastcall ***v9)(_QWORD, GUID *, __int64 *); // [rsp+60h] [rbp+30h] BYREF
  unsigned __int16 *v10; // [rsp+68h] [rbp+38h] BYREF

  Node = ATL::CAtlMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,Microsoft::WRL::ComPtr<IWeakReference>,ATL::CElementTraits<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>>,ATL::CElementTraits<Microsoft::WRL::ComPtr<IWeakReference>>>::GetNode(
           (__int64)this + 24,
           a2,
           (unsigned int *)&v9,
           (unsigned int *)&v8,
           &v10);
  if ( Node )
  {
    v3 = (unsigned __int16 *)*((_QWORD *)Node + 1);
    v10 = v3;
    if ( v3 )
    {
      (*(void (__fastcall **)(unsigned __int16 *))(*(_QWORD *)v3 + 8LL))(v3);
      v9 = 0LL;
      Microsoft::WRL::ComPtr<IAgileReference>::InternalRelease(&v9);
      if ( (*(int (__fastcall **)(unsigned __int16 *, GUID *, _QWORD))(*(_QWORD *)v3 + 24LL))(
             v3,
             &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90,
             &v9) >= 0 )
      {
        v4 = (int (__fastcall ***)(_QWORD, _QWORD, _QWORD))v9;
        if ( v9 )
        {
          v8 = 0LL;
          v5 = **v9;
          Microsoft::WRL::ComPtr<IDeviceGraphObjectCache>::InternalRelease(&v8);
          if ( v5(v4, &GUID_f1be3847_41e2_49da_9192_78fbf3cb400d, &v8) >= 0 )
          {
            v6 = v8;
            v8 = 0LL;
            Microsoft::WRL::ComPtr<IDeviceGraphObjectCache>::InternalRelease(&v8);
            Microsoft::WRL::ComPtr<IAgileReference>::InternalRelease(&v9);
            Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v10);
            return (struct IDeviceGraphObjectCache *)v6;
          }
          Microsoft::WRL::ComPtr<IDeviceGraphObjectCache>::InternalRelease(&v8);
        }
      }
      Microsoft::WRL::ComPtr<IAgileReference>::InternalRelease(&v9);
    }
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v10);
  }
  return 0LL;
}
