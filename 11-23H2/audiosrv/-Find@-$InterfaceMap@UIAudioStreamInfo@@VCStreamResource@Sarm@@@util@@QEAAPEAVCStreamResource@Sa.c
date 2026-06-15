/*
 * XREFs of ?Find@?$InterfaceMap@UIAudioStreamInfo@@VCStreamResource@Sarm@@@util@@QEAAPEAVCStreamResource@Sarm@@PEAUIAudioStreamInfo@@@Z @ 0x180046A68
 * Callers:
 *     ?OnStreamConnectedToSaDevice@CSpatialAudioResourceManager@Sarm@@UEAAJPEAUIAudioStreamInfo@@KPEBU_GUID@@PEBUSPATIAL_STREAM_PROPERTIES@@@Z @ 0x1800441C0 (-OnStreamConnectedToSaDevice@CSpatialAudioResourceManager@Sarm@@UEAAJPEAUIAudioStreamInfo@@KPEBU.c)
 *     ?OnStreamDisconnectedFromSaDevice@CSpatialAudioResourceManager@Sarm@@UEAAXPEAUIAudioStreamInfo@@@Z @ 0x180048A50 (-OnStreamDisconnectedFromSaDevice@CSpatialAudioResourceManager@Sarm@@UEAAXPEAUIAudioStreamInfo@@.c)
 * Callees:
 *     ?GetKey@?$InterfaceMap@UIAudioStreamInfo@@VCStreamResource@Sarm@@@util@@AEAAPEAUIAudioStreamInfo@@PEAU3@@Z @ 0x180046B0C (-GetKey@-$InterfaceMap@UIAudioStreamInfo@@VCStreamResource@Sarm@@@util@@AEAAPEAUIAudioStreamInfo.c)
 *     ?Attach@?$ComPtr@UIAudioStreamInfo@@@WRL@Microsoft@@QEAAXPEAUIAudioStreamInfo@@@Z @ 0x180046B5C (-Attach@-$ComPtr@UIAudioStreamInfo@@@WRL@Microsoft@@QEAAXPEAUIAudioStreamInfo@@@Z.c)
 *     ?GetNode@?$CAtlMap@PEAUIAudioStreamInfo@@VCStreamResource@Sarm@@V?$CElementTraits@PEAUIAudioStreamInfo@@@ATL@@V?$CElementTraits@VCStreamResource@Sarm@@@5@@ATL@@AEBAPEAVCNode@12@AEBQEAUIAudioStreamInfo@@AEAI1AEAPEAV312@@Z @ 0x180049E64 (-GetNode@-$CAtlMap@PEAUIAudioStreamInfo@@VCStreamResource@Sarm@@V-$CElementTraits@PEAUIAudioStre.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall util::InterfaceMap<IAudioStreamInfo,Sarm::CStreamResource>::Find(int a1)
{
  __int64 v2; // rdi
  __int64 Key; // rax
  __int64 v4; // rbx
  __int64 Node; // rax
  __int64 v7; // [rsp+30h] [rbp-18h] BYREF
  char v8[16]; // [rsp+38h] [rbp-10h] BYREF
  __int64 v9; // [rsp+60h] [rbp+18h] BYREF
  char v10; // [rsp+68h] [rbp+20h] BYREF

  v2 = 0LL;
  v9 = 0LL;
  Key = util::InterfaceMap<IAudioStreamInfo,Sarm::CStreamResource>::GetKey();
  Microsoft::WRL::ComPtr<IAudioStreamInfo>::Attach(&v9, Key);
  v4 = v9;
  if ( v9 )
  {
    v7 = v9;
    Node = ATL::CAtlMap<IAudioStreamInfo *,Sarm::CStreamResource,ATL::CElementTraits<IAudioStreamInfo *>,ATL::CElementTraits<Sarm::CStreamResource>>::GetNode(
             a1,
             (unsigned int)&v7,
             (unsigned int)&v10,
             (unsigned int)&v9,
             (__int64)v8);
    if ( Node )
      v2 = Node + 8;
  }
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  return v2;
}
