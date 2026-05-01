/*
 * XREFs of ??$MakeAndInitialize@VCPrivilegedTabletModeOperations@@V1@PEAVIamAccess@@AEAPEAVPrivilegedOperationsService@@@Details@WRL@Microsoft@@YAJPEAPEAVCPrivilegedTabletModeOperations@@$$QEAPEAVIamAccess@@AEAPEAVPrivilegedOperationsService@@@Z @ 0x18012E9B4
 * Callers:
 *     ?MakeAndRegisterOperations@?$PrivilegedOperationsServiceBase@VCPrivilegedTabletModeOperations@@VCPrivilegedSizeConstraintsOperations@@VPrivilegedWindowOwnershipOperations@@VPrivilegedHotkeyOperations@@VPrivilegedWindowingOperations@@@@IEAAJPEAVPrivilegedOperationsService@@@Z @ 0x18012E034 (-MakeAndRegisterOperations@-$PrivilegedOperationsServiceBase@VCPrivilegedTabletModeOperations@@V.c)
 * Callees:
 *     ??B?$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ @ 0x180097490 (--B-$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ.c)
 *     ??0CPrivilegedTabletModeOperations@@QEAA@XZ @ 0x18012EA68 (--0CPrivilegedTabletModeOperations@@QEAA@XZ.c)
 *     ??4?$ComPtr@VIamAccess@@@WRL@Microsoft@@QEAAAEAV012@PEAVIamAccess@@@Z @ 0x18012EFF4 (--4-$ComPtr@VIamAccess@@@WRL@Microsoft@@QEAAAEAV012@PEAVIamAccess@@@Z.c)
 *     ??$AsWeak@VPrivilegedOperationsService@@@WRL@Microsoft@@YAJPEAVPrivilegedOperationsService@@PEAVWeakRef@01@@Z @ 0x18012FED0 (--$AsWeak@VPrivilegedOperationsService@@@WRL@Microsoft@@YAJPEAVPrivilegedOperationsService@@PEAV.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@VPrivilegedWindowOwnershipOperations@@@WRL@Microsoft@@IEAAKXZ @ 0x180140168 (-InternalRelease@-$ComPtr@VPrivilegedWindowOwnershipOperations@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x1801484A0 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801C6900 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CPrivilegedTabletModeOperations,CPrivilegedTabletModeOperations,IamAccess *,PrivilegedOperationsService * &>(
        CPrivilegedTabletModeOperations **a1,
        __int64 *a2,
        __int64 *a3)
{
  CPrivilegedTabletModeOperations *v6; // rax
  CPrivilegedTabletModeOperations *v7; // rax
  __int64 v8; // rdx
  CPrivilegedTabletModeOperations *v9; // rdi
  __int64 v10; // rbx
  __int64 *v11; // rax
  int v12; // eax
  volatile int *v13; // rdx
  unsigned int v14; // ebx
  int v16; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 *v18; // [rsp+40h] [rbp+8h] BYREF
  CPrivilegedTabletModeOperations *v19; // [rsp+58h] [rbp+20h] BYREF

  *a1 = 0LL;
  v6 = (CPrivilegedTabletModeOperations *)operator new(0x40uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v6 )
  {
    v7 = CPrivilegedTabletModeOperations::CPrivilegedTabletModeOperations(v6);
    v8 = *a2;
    v9 = v7;
    v10 = *a3;
    v19 = v7;
    Microsoft::WRL::ComPtr<IamAccess>::operator=((char *)v7 + 48, v8);
    v18 = (__int64 *)((char *)v9 + 56);
    v11 = Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::WeakRef>::operator Microsoft::WRL::WeakRef *(&v18);
    v12 = Microsoft::WRL::AsWeak<PrivilegedOperationsService>(v10, v11);
    v14 = v12;
    if ( v12 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x73,
        (unsigned int)"pcshell\\twinui\\privilegedoperations\\lib\\privilegedoperations.cpp",
        (const char *)(unsigned int)v12,
        v16);
    }
    else
    {
      if ( v9 )
        Microsoft::WRL::Details::SafeUnknownIncrementReference(
          (CPrivilegedTabletModeOperations *)((char *)v9 + 44),
          v13);
      *a1 = v9;
      v14 = 0;
    }
    Microsoft::WRL::ComPtr<PrivilegedWindowOwnershipOperations>::InternalRelease(&v19);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v14;
}
