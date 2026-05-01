/*
 * XREFs of ??$MakeAndInitialize@VCAllUpViewService@@V1@AEAPEAUIMultitaskingViewTaskScheduler@@@Details@WRL@Microsoft@@YAJPEAPEAVCAllUpViewService@@AEAPEAUIMultitaskingViewTaskScheduler@@@Z @ 0x1800D47B8
 * Callers:
 *     ?CAllUpViewService_CreateInstance@@YAJPEAUIMultitaskingViewTaskScheduler@@AEBU_GUID@@PEAPEAX@Z @ 0x1800D3204 (-CAllUpViewService_CreateInstance@@YAJPEAUIMultitaskingViewTaskScheduler@@AEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ??0CAllUpViewService@@QEAA@XZ @ 0x1800D484C (--0CAllUpViewService@@QEAA@XZ.c)
 *     ??4?$ComPtr@UIMultitaskingViewTaskScheduler@@@WRL@Microsoft@@QEAAAEAV012@PEAUIMultitaskingViewTaskScheduler@@@Z @ 0x1800FE6A0 (--4-$ComPtr@UIMultitaskingViewTaskScheduler@@@WRL@Microsoft@@QEAAAEAV012@PEAUIMultitaskingViewTa.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x180125F20 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ?InternalRelease@?$ComPtr@VCAllUpViewService@@@WRL@Microsoft@@IEAAKXZ @ 0x18017CA70 (-InternalRelease@-$ComPtr@VCAllUpViewService@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801883B0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CAllUpViewService,CAllUpViewService,IMultitaskingViewTaskScheduler * &>(
        CAllUpViewService **a1,
        __int64 *a2)
{
  unsigned int v2; // ebx
  CAllUpViewService *v5; // rax
  CAllUpViewService *v6; // rax
  __int64 v7; // rdx
  CAllUpViewService *v8; // rdi
  volatile int *v9; // rdx
  CAllUpViewService *v11; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0;
  *a1 = 0LL;
  v5 = (CAllUpViewService *)operator new(0x48uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v5 )
  {
    v6 = CAllUpViewService::CAllUpViewService(v5);
    v7 = *a2;
    v8 = v6;
    v11 = v6;
    Microsoft::WRL::ComPtr<IMultitaskingViewTaskScheduler>::operator=((char *)v6 + 56, v7);
    if ( v8 )
      Microsoft::WRL::Details::SafeUnknownIncrementReference((CAllUpViewService *)((char *)v8 + 52), v9);
    *a1 = v8;
    Microsoft::WRL::ComPtr<CAllUpViewService>::InternalRelease(&v11);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v2;
}
