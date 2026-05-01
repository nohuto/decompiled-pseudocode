/*
 * XREFs of ??$MakeAndInitialize@VCPPIAllUpViewService@@V1@AEAPEAUIMultitaskingViewTaskScheduler@@@Details@WRL@Microsoft@@YAJPEAPEAVCPPIAllUpViewService@@AEAPEAUIMultitaskingViewTaskScheduler@@@Z @ 0x1801036C0
 * Callers:
 *     ?CPPIAllUpViewService_CreateInstance@@YAJPEAUIMultitaskingViewTaskScheduler@@AEBU_GUID@@PEAPEAX@Z @ 0x180104AD8 (-CPPIAllUpViewService_CreateInstance@@YAJPEAUIMultitaskingViewTaskScheduler@@AEBU_GUID@@PEAPEAX@.c)
 * Callees:
 *     ??0CPPIAllUpViewService@@QEAA@XZ @ 0x180102BD8 (--0CPPIAllUpViewService@@QEAA@XZ.c)
 *     ??4?$ComPtr@UIMultitaskingViewTaskScheduler@@@WRL@Microsoft@@QEAAAEAV012@PEAUIMultitaskingViewTaskScheduler@@@Z @ 0x18013AEF0 (--4-$ComPtr@UIMultitaskingViewTaskScheduler@@@WRL@Microsoft@@QEAAAEAV012@PEAUIMultitaskingViewTa.c)
 *     ?InternalRelease@?$ComPtr@VCPPIAllUpViewService@@@WRL@Microsoft@@IEAAKXZ @ 0x18014020C (-InternalRelease@-$ComPtr@VCPPIAllUpViewService@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x1801484A0 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801C6900 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CPPIAllUpViewService,CPPIAllUpViewService,IMultitaskingViewTaskScheduler * &>(
        CPPIAllUpViewService **a1,
        __int64 *a2)
{
  unsigned int v2; // ebx
  CPPIAllUpViewService *v5; // rax
  CPPIAllUpViewService *v6; // rax
  __int64 v7; // rdx
  CPPIAllUpViewService *v8; // rdi
  volatile int *v9; // rdx
  CPPIAllUpViewService *v11; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0;
  *a1 = 0LL;
  v5 = (CPPIAllUpViewService *)operator new(0x40uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v5 )
  {
    v6 = CPPIAllUpViewService::CPPIAllUpViewService(v5);
    v7 = *a2;
    v8 = v6;
    v11 = v6;
    Microsoft::WRL::ComPtr<IMultitaskingViewTaskScheduler>::operator=((char *)v6 + 48, v7);
    if ( v8 )
      Microsoft::WRL::Details::SafeUnknownIncrementReference((CPPIAllUpViewService *)((char *)v8 + 44), v9);
    *a1 = v8;
    Microsoft::WRL::ComPtr<CPPIAllUpViewService>::InternalRelease(&v11);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v2;
}
