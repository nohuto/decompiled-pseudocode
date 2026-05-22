/*
 * XREFs of ??0ISMHeatFrameworkHost@@IEAA@PEAUIInputProcessorHost@@@Z @ 0x180183BB4
 * Callers:
 *     ?Create@ISMHeatFrameworkHost@@SAJPEAUIInputProcessorHost@@PEAPEAV1@@Z @ 0x180184424 (-Create@ISMHeatFrameworkHost@@SAJPEAUIInputProcessorHost@@PEAPEAV1@@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800044C8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??0?$unordered_set@PEAUIHeatSystemContextClient@@U?$hash@PEAUIHeatSystemContextClient@@@std@@U?$equal_to@PEAUIHeatSystemContextClient@@@3@V?$allocator@PEAUIHeatSystemContextClient@@@3@@std@@QEAA@XZ @ 0x180089AE4 (--0-$unordered_set@PEAUIHeatSystemContextClient@@U-$hash@PEAUIHeatSystemContextClient@@@std@@U-$.c)
 */

// Hidden C++ exception states: #wind=7
ISMHeatFrameworkHost *__fastcall ISMHeatFrameworkHost::ISMHeatFrameworkHost(
        ISMHeatFrameworkHost *this,
        struct IInputProcessorHost *a2)
{
  _QWORD *v3; // rax

  *((_QWORD *)this + 2) = &RefCountedObject::`vftable';
  *((_DWORD *)this + 6) = 1;
  *(_QWORD *)this = &ISMHeatFrameworkHost::`vftable'{for `IHeatFrameworkHost'};
  *((_QWORD *)this + 1) = &ISMHeatFrameworkHost::`vftable'{for `ISystemContextObserver'};
  *((_QWORD *)this + 2) = &ISMHeatFrameworkHost::`vftable'{for `RefCountedObject'};
  *((_QWORD *)this + 4) = a2;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  std::unordered_set<IHeatSystemContextClient *>::unordered_set<IHeatSystemContextClient *>((__int64)this + 56);
  *((_QWORD *)this + 15) = 0LL;
  std::unordered_set<IHeatSystemContextClient *>::unordered_set<IHeatSystemContextClient *>((__int64)this + 128);
  *((_QWORD *)this + 24) = 0LL;
  *((_QWORD *)this + 25) = 0LL;
  v3 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x40uLL);
  *v3 = v3;
  v3[1] = v3;
  v3[2] = v3;
  *((_WORD *)v3 + 12) = 257;
  *((_QWORD *)this + 24) = v3;
  *((_QWORD *)this + 26) = 0LL;
  *((_QWORD *)this + 27) = 0LL;
  std::unordered_set<IHeatSystemContextClient *>::unordered_set<IHeatSystemContextClient *>((__int64)this + 224);
  *((_QWORD *)this + 36) = 0LL;
  return this;
}
