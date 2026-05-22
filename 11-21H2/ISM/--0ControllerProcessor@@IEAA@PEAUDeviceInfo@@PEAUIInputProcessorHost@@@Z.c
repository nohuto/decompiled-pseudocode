/*
 * XREFs of ??0ControllerProcessor@@IEAA@PEAUDeviceInfo@@PEAUIInputProcessorHost@@@Z @ 0x180175704
 * Callers:
 *     ?Create@ControllerProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z @ 0x180176D90 (-Create@ControllerProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z.c)
 * Callees:
 *     ??0NonPointerProcessor@@IEAA@PEAUDeviceInfo@@PEAUIInputProcessorHost@@@Z @ 0x18003C200 (--0NonPointerProcessor@@IEAA@PEAUDeviceInfo@@PEAUIInputProcessorHost@@@Z.c)
 *     memset_0 @ 0x18004A918 (memset_0.c)
 *     ??0ManipulationInjector@@QEAA@XZ @ 0x1800FF8F8 (--0ManipulationInjector@@QEAA@XZ.c)
 *     ??0?$_Hash@V?$_Umap_traits@GUActiveKeyProperties@ControllerProcessor@@V?$_Uhash_compare@GU?$hash@G@std@@U?$equal_to@G@2@@std@@V?$allocator@U?$pair@$$CBGUActiveKeyProperties@ControllerProcessor@@@std@@@4@$0A@@std@@@std@@IEAA@AEBV?$_Uhash_compare@GU?$hash@G@std@@U?$equal_to@G@2@@1@AEBV?$allocator@U?$pair@$$CBGUActiveKeyProperties@ControllerProcessor@@@std@@@1@@Z @ 0x180175664 (--0-$_Hash@V-$_Umap_traits@GUActiveKeyProperties@ControllerProcessor@@V-$_Uhash_compare@GU-$hash.c)
 *     ??0InjectionDevice@@QEAA@PEAUIInputProcessorHost@@W4InputType@@@Z @ 0x1801759F0 (--0InjectionDevice@@QEAA@PEAUIInputProcessorHost@@W4InputType@@@Z.c)
 */

// Hidden C++ exception states: #wind=8
ControllerProcessor *__fastcall ControllerProcessor::ControllerProcessor(
        ControllerProcessor *this,
        struct DeviceInfo *a2,
        struct IInputProcessorHost *a3)
{
  _QWORD *v5; // rcx
  unsigned int v7; // [rsp+20h] [rbp-18h]
  int v8; // [rsp+58h] [rbp+20h] BYREF
  int v9; // [rsp+5Ch] [rbp+24h]

  NonPointerProcessor::NonPointerProcessor(this, a2, a3);
  *v5 = &ControllerProcessor::`vftable'{for `IInputProcessor'};
  v5[1] = &ControllerProcessor::`vftable'{for `IInputFocusListener'};
  v5[2] = &ControllerProcessor::`vftable'{for `RefCountedObject'};
  v5[9] = &ControllerProcessor::`vftable'{for `IRawInputProvider'};
  v5[10] = &ControllerProcessor::`vftable'{for `IManipulationInjectorClient'};
  v5 += 11;
  v9 = HIDWORD(v5);
  v8 = 0;
  std::_Hash<std::_Umap_traits<unsigned short,ControllerProcessor::ActiveKeyProperties,std::_Uhash_compare<unsigned short,std::hash<unsigned short>,std::equal_to<unsigned short>>,std::allocator<std::pair<unsigned short const,ControllerProcessor::ActiveKeyProperties>>,0>>::_Hash<std::_Umap_traits<unsigned short,ControllerProcessor::ActiveKeyProperties,std::_Uhash_compare<unsigned short,std::hash<unsigned short>,std::equal_to<unsigned short>>,std::allocator<std::pair<unsigned short const,ControllerProcessor::ActiveKeyProperties>>,0>>(
    (__int64)v5,
    &v8);
  *((_DWORD *)this + 70) = 2;
  *((_QWORD *)this + 36) = 0LL;
  *((_QWORD *)this + 37) = 0LL;
  *((_QWORD *)this + 38) = 0LL;
  *(_OWORD *)((char *)this + 312) = 0LL;
  *((_QWORD *)this + 46) = 0LL;
  *((_QWORD *)this + 47) = 0LL;
  *((_BYTE *)this + 400) = 0;
  *((_BYTE *)this + 420) = 0;
  *((_DWORD *)this + 106) = 0;
  *(_QWORD *)((char *)this + 436) = 0LL;
  ManipulationInjector::ManipulationInjector((ControllerProcessor *)((char *)this + 448));
  *((_BYTE *)this + 1256) = 0;
  *((_DWORD *)this + 315) = 0;
  *((_WORD *)this + 632) = 0;
  InjectionDevice::InjectionDevice((char *)this + 1272, a3, 128LL);
  InjectionDevice::InjectionDevice((char *)this + 2832, a3, 66LL);
  InjectionDevice::InjectionDevice((char *)this + 4392, a3, 8LL);
  InjectionDevice::InjectionDevice((char *)this + 5952, a3, 4LL);
  *((_QWORD *)this + 939) = 0LL;
  *((_WORD *)this + 3760) = 0;
  LOBYTE(v7) = 0;
  *((_QWORD *)this + 943) = v7;
  *((_QWORD *)this + 944) = 0LL;
  *((_QWORD *)this + 945) = 0LL;
  *((_DWORD *)this + 1892) = 0;
  *(_QWORD *)((char *)this + 7572) = 0LL;
  *(_QWORD *)((char *)this + 7580) = 0LL;
  *((_BYTE *)this + 7588) = 0;
  *((_DWORD *)this + 1898) = 1077936128;
  *((_DWORD *)this + 1899) = 1109393408;
  *((_QWORD *)this + 950) = 5LL;
  memset_0((char *)this + 7608, 0, 0x50uLL);
  *((_QWORD *)this + 961) = 0LL;
  *((_QWORD *)this + 962) = 0LL;
  *((_QWORD *)this + 963) = 500000LL;
  *((_QWORD *)this + 964) = 160000LL;
  *((_QWORD *)this + 965) = 1000000LL;
  *((_DWORD *)this + 1934) = 100;
  *((_DWORD *)this + 1935) = 100;
  *((_BYTE *)this + 7744) = 0;
  *((_QWORD *)this + 969) = 0LL;
  *((_QWORD *)this + 970) = 0LL;
  *((_QWORD *)this + 971) = 0LL;
  *((_QWORD *)this + 972) = 0LL;
  *((_QWORD *)this + 973) = 0LL;
  *((_BYTE *)this + 7808) = 1;
  memset_0((char *)this + 152, 0, 0x80uLL);
  return this;
}
