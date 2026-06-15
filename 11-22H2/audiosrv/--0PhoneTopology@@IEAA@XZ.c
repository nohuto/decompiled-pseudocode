/*
 * XREFs of ??0PhoneTopology@@IEAA@XZ @ 0x180026820
 * Callers:
 *     ?CreateInstance@PhoneTopology@@SAJPEAUIMMDevice@@PEAUIEndpointCollection@@1PEAPEAUIPhoneTopology@@@Z @ 0x180026560 (-CreateInstance@PhoneTopology@@SAJPEAUIMMDevice@@PEAUIEndpointCollection@@1PEAPEAUIPhoneTopology.c)
 * Callees:
 *     ??0CComAutoCriticalSection@ATL@@QEAA@XZ @ 0x1800268E8 (--0CComAutoCriticalSection@ATL@@QEAA@XZ.c)
 *     ??0?$CAtlMap@PEAVResourceConsumer@@PEAV?$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@ATL@@VResourceConsumerTraits@@V?$CElementTraits@PEAV?$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@ATL@@@3@@ATL@@QEAA@IMMMI@Z @ 0x180026A68 (--0-$CAtlMap@PEAVResourceConsumer@@PEAV-$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@ATL@@VRe.c)
 *     memset_0 @ 0x180067A54 (memset_0.c)
 */

// Hidden C++ exception states: #wind=4
PhoneTopology *__fastcall PhoneTopology::PhoneTopology(PhoneTopology *this)
{
  int v2; // edx
  int v3; // r8d
  int v4; // r9d

  *((_DWORD *)this + 4) = 1;
  *(_QWORD *)this = &PhoneTopology::`vftable'{for `IPhoneTopology'};
  *((_QWORD *)this + 1) = &PhoneTopology::`vftable'{for `CUnknown'};
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  ATL::CComAutoCriticalSection::CComAutoCriticalSection((PhoneTopology *)((char *)this + 48));
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  *((_DWORD *)this + 32) = 10;
  ATL::CComAutoCriticalSection::CComAutoCriticalSection((PhoneTopology *)((char *)this + 136));
  *((_DWORD *)this + 44) = 0;
  ATL::CAtlMap<ResourceConsumer *,ATL::CAtlList<_ResourceInfo,ResourceInfoTraits> *,ResourceConsumerTraits,ATL::CElementTraits<ATL::CAtlList<_ResourceInfo,ResourceInfoTraits> *>>::CAtlMap<ResourceConsumer *,ATL::CAtlList<_ResourceInfo,ResourceInfoTraits> *,ResourceConsumerTraits,ATL::CElementTraits<ATL::CAtlList<_ResourceInfo,ResourceInfoTraits> *>>(
    (_DWORD)this + 184,
    v2,
    v3,
    v4,
    LODWORD(FLOAT_2_25));
  memset_0((char *)this + 256, 0, 0x418uLL);
  return this;
}
