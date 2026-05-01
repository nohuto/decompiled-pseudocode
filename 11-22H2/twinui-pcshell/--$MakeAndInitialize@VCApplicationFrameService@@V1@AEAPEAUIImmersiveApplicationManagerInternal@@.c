/*
 * XREFs of ??$MakeAndInitialize@VCApplicationFrameService@@V1@AEAPEAUIImmersiveApplicationManagerInternal@@@Details@WRL@Microsoft@@YAJPEAPEAVCApplicationFrameService@@AEAPEAUIImmersiveApplicationManagerInternal@@@Z @ 0x18019AE70
 * Callers:
 *     ?CApplicationFrameService_CreateInstance@@YAJPEAUIImmersiveApplicationManagerInternal@@AEBU_GUID@@PEAPEAX@Z @ 0x18019ADC8 (-CApplicationFrameService_CreateInstance@@YAJPEAUIImmersiveApplicationManagerInternal@@AEBU_GUID.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VTabletModeCoverWindow@@@WRL@Microsoft@@IEAAKXZ @ 0x1801401BC (-InternalRelease@-$ComPtr@VTabletModeCoverWindow@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x1801484A0 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ??4?$ComPtr@UIImmersiveApplicationManagerInternal@@@WRL@Microsoft@@QEAAAEAV012@PEAUIImmersiveApplicationManagerInternal@@@Z @ 0x180169F40 (--4-$ComPtr@UIImmersiveApplicationManagerInternal@@@WRL@Microsoft@@QEAAAEAV012@PEAUIImmersiveApp.c)
 *     ??0CApplicationFrameService@@QEAA@XZ @ 0x18019AF08 (--0CApplicationFrameService@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801C6900 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CApplicationFrameService,CApplicationFrameService,IImmersiveApplicationManagerInternal * &>(
        CApplicationFrameService **a1,
        __int64 *a2)
{
  unsigned int v4; // ebx
  CApplicationFrameService *v5; // rax
  CApplicationFrameService *v6; // rax
  __int64 v7; // rdx
  CApplicationFrameService *v8; // rdi
  volatile int *v9; // rdx
  CApplicationFrameService *v11; // [rsp+30h] [rbp+8h] BYREF

  v4 = 0;
  *a1 = 0LL;
  v5 = (CApplicationFrameService *)operator new(0xE8uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v5 )
  {
    v6 = CApplicationFrameService::CApplicationFrameService(v5);
    v7 = *a2;
    v8 = v6;
    v11 = v6;
    Microsoft::WRL::ComPtr<IImmersiveApplicationManagerInternal>::operator=((__int64 *)v6 + 21, v7);
    if ( v8 )
      Microsoft::WRL::Details::SafeUnknownIncrementReference((CApplicationFrameService *)((char *)v8 + 92), v9);
    *a1 = v8;
    Microsoft::WRL::ComPtr<TabletModeCoverWindow>::InternalRelease((__int64 *)&v11);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v4;
}
