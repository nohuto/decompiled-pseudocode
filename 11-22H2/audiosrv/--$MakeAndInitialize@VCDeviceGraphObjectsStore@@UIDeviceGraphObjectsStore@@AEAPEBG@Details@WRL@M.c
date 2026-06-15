/*
 * XREFs of ??$MakeAndInitialize@VCDeviceGraphObjectsStore@@UIDeviceGraphObjectsStore@@AEAPEBG@Details@WRL@Microsoft@@YAJPEAPEAUIDeviceGraphObjectsStore@@AEAPEBG@Z @ 0x18002E680
 * Callers:
 *     ?RuntimeClassInitialize@CEndpointStore@@QEAAJPEBG@Z @ 0x180027660 (-RuntimeClassInitialize@CEndpointStore@@QEAAJPEBG@Z.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIDeviceGraphObjectsStore@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180012ED0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIDeviceGraphObje.c)
 *     ?RuntimeClassInitialize@CDeviceGraphObjectsStore@@QEAAJPEBG@Z @ 0x18002D328 (-RuntimeClassInitialize@CDeviceGraphObjectsStore@@QEAAJPEBG@Z.c)
 *     ??0CDeviceGraphObjectsStore@@QEAA@XZ @ 0x18002D4B4 (--0CDeviceGraphObjectsStore@@QEAA@XZ.c)
 *     ?InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z @ 0x18002DDCC (-InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180067078 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1?$MakeAllocator@VEffectPackConfigurationManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800CF388 (--1-$MakeAllocator@VEffectPackConfigurationManager@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??1?$ComPtr@VCDeviceGraphObjectsStore@@@WRL@Microsoft@@QEAA@XZ @ 0x18010EEE8 (--1-$ComPtr@VCDeviceGraphObjectsStore@@@WRL@Microsoft@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CDeviceGraphObjectsStore,IDeviceGraphObjectsStore,unsigned short const * &>(
        CDeviceGraphObjectsStore **a1,
        const unsigned __int16 **a2)
{
  CDeviceGraphObjectsStore *v4; // rax
  CDeviceGraphObjectsStore *v5; // rbx
  int v6; // edi
  const struct _GUID *v7; // rcx
  volatile int *v8; // rdx
  CDeviceGraphObjectsStore *v10; // [rsp+40h] [rbp+8h] BYREF
  CDeviceGraphObjectsStore *v11; // [rsp+50h] [rbp+18h] BYREF
  CDeviceGraphObjectsStore *v12; // [rsp+58h] [rbp+20h]

  *a1 = 0LL;
  v4 = (CDeviceGraphObjectsStore *)operator new(0xE0uLL, (const struct std::nothrow_t *)&std::nothrow);
  v10 = v4;
  v11 = v4;
  if ( !v4 )
  {
    v6 = -2147024882;
LABEL_12:
    Microsoft::WRL::Details::MakeAllocator<EffectPackConfigurationManager>::~MakeAllocator<EffectPackConfigurationManager>(&v10);
    return (unsigned int)v6;
  }
  v12 = v4;
  v5 = CDeviceGraphObjectsStore::CDeviceGraphObjectsStore(v4);
  v11 = v5;
  v10 = 0LL;
  v6 = CDeviceGraphObjectsStore::RuntimeClassInitialize(v5, *a2);
  if ( v6 < 0 )
  {
    Microsoft::WRL::ComPtr<CDeviceGraphObjectsStore>::~ComPtr<CDeviceGraphObjectsStore>(&v11);
    goto LABEL_12;
  }
  *a1 = 0LL;
  if ( InlineIsEqualGUID(&GUID_a6230ea0_59ef_4951_b0df_1392376fc1c5, &GUID_00000000_0000_0000_c000_000000000046) )
  {
    *a1 = v5;
    (*(void (__fastcall **)(CDeviceGraphObjectsStore *))(*(_QWORD *)v5 + 8LL))(v5);
    v6 = 0;
  }
  else if ( InlineIsEqualGUID(v7, v7) )
  {
    *a1 = v5;
    v6 = 0;
    (*(void (__fastcall **)(CDeviceGraphObjectsStore *))(*(_QWORD *)v5 + 8LL))(v5);
  }
  else
  {
    v6 = -2147467262;
  }
  if ( v5 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IDeviceGraphObjectsStore>::Release(
      (__int64)v5,
      v8);
  return (unsigned int)v6;
}
