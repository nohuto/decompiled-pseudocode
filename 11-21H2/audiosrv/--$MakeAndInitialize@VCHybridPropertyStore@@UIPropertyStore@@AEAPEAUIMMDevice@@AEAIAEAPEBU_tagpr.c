/*
 * XREFs of ??$MakeAndInitialize@VCHybridPropertyStore@@UIPropertyStore@@AEAPEAUIMMDevice@@AEAIAEAPEBU_tagpropertykey@@@Details@WRL@Microsoft@@YAJPEAPEAUIPropertyStore@@AEAPEAUIMMDevice@@AEAIAEAPEBU_tagpropertykey@@@Z @ 0x18014E10C
 * Callers:
 *     ?RuntimeClassInitialize@CEndpointCharacteristics@@QEAAJPEBGPEBU_tlgProvider_t@@@Z @ 0x180045CF8 (-RuntimeClassInitialize@CEndpointCharacteristics@@QEAAJPEBGPEBU_tlgProvider_t@@@Z.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18005EFB8 (--3@YAXPEAX_K@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18005EFFC (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0CHybridPropertyStore@@QEAA@XZ @ 0x18014E3A0 (--0CHybridPropertyStore@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@CHybridPropertyStore@@QEAAJPEAUIMMDevice@@IPEBU_tagpropertykey@@@Z @ 0x18014E868 (-RuntimeClassInitialize@CHybridPropertyStore@@QEAAJPEAUIMMDevice@@IPEBU_tagpropertykey@@@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CHybridPropertyStore,IPropertyStore,IMMDevice * &,unsigned int &,_tagpropertykey const * &>(
        _QWORD *a1,
        struct IMMDevice **a2,
        unsigned int *a3,
        const struct _tagpropertykey **a4)
{
  CHybridPropertyStore *v8; // rax
  int v9; // esi
  CHybridPropertyStore *v10; // rbx

  *a1 = 0LL;
  v8 = (CHybridPropertyStore *)operator new(0x60uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v8 )
  {
    v10 = CHybridPropertyStore::CHybridPropertyStore(v8);
    v9 = CHybridPropertyStore::RuntimeClassInitialize(v10, *a2, *a3, *a4);
    if ( v9 >= 0 )
      v9 = (**(__int64 (__fastcall ***)(CHybridPropertyStore *, GUID *, _QWORD *))v10)(
             v10,
             &GUID_886d8eeb_8cf2_4446_8d02_cdba1dbdcf99,
             a1);
    if ( v10 )
      (*(void (__fastcall **)(CHybridPropertyStore *))(*(_QWORD *)v10 + 16LL))(v10);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v9;
}
