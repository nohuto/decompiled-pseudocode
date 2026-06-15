/*
 * XREFs of ??$MakeAndInitialize@VCHybridPropertyStore@@UIPropertyStore@@AEAPEAUIMMDevice@@AEAIAEAPEBU_tagpropertykey@@@Details@WRL@Microsoft@@YAJPEAPEAUIPropertyStore@@AEAPEAUIMMDevice@@AEAIAEAPEBU_tagpropertykey@@@Z @ 0x180155448
 * Callers:
 *     ?RuntimeClassInitialize@CEndpointCharacteristics@@QEAAJPEBGPEBU_tlgProvider_t@@PEAUIEndpointResourceManagerProvider@@@Z @ 0x18002A104 (-RuntimeClassInitialize@CEndpointCharacteristics@@QEAAJPEBGPEBU_tlgProvider_t@@PEAUIEndpointReso.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180067088 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1?$ComPtr@VCAudioStream@@@WRL@Microsoft@@QEAA@XZ @ 0x180082420 (--1-$ComPtr@VCAudioStream@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ??1?$MakeAllocator@VEffectPackConfigurationManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800CF338 (--1-$MakeAllocator@VEffectPackConfigurationManager@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??0CHybridPropertyStore@@QEAA@XZ @ 0x1801556D4 (--0CHybridPropertyStore@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@CHybridPropertyStore@@QEAAJPEAUIMMDevice@@IPEBU_tagpropertykey@@@Z @ 0x180155BC8 (-RuntimeClassInitialize@CHybridPropertyStore@@QEAAJPEAUIMMDevice@@IPEBU_tagpropertykey@@@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CHybridPropertyStore,IPropertyStore,IMMDevice * &,unsigned int &,_tagpropertykey const * &>(
        _QWORD *a1,
        struct IMMDevice **a2,
        unsigned int *a3,
        const struct _tagpropertykey **a4)
{
  void *v8; // rax
  int v9; // ebx
  CHybridPropertyStore *v10; // rdi
  CHybridPropertyStore *v12; // [rsp+20h] [rbp-28h] BYREF
  void *v13; // [rsp+50h] [rbp+8h] BYREF

  *a1 = 0LL;
  v8 = operator new(0x60uLL, (const struct std::nothrow_t *)&std::nothrow);
  v13 = v8;
  if ( v8 )
  {
    v10 = CHybridPropertyStore::CHybridPropertyStore((CHybridPropertyStore *)v8);
    v12 = v10;
    v13 = 0LL;
    v9 = CHybridPropertyStore::RuntimeClassInitialize(v10, *a2, *a3, *a4);
    if ( v9 >= 0 )
    {
      v9 = (**(__int64 (__fastcall ***)(CHybridPropertyStore *, GUID *, _QWORD *))v10)(
             v10,
             &GUID_886d8eeb_8cf2_4446_8d02_cdba1dbdcf99,
             a1);
      (*(void (__fastcall **)(CHybridPropertyStore *))(*(_QWORD *)v10 + 16LL))(v10);
      return (unsigned int)v9;
    }
    Microsoft::WRL::ComPtr<CAudioStream>::~ComPtr<CAudioStream>(&v12);
  }
  else
  {
    v9 = -2147024882;
  }
  Microsoft::WRL::Details::MakeAllocator<EffectPackConfigurationManager>::~MakeAllocator<EffectPackConfigurationManager>(&v13);
  return (unsigned int)v9;
}
