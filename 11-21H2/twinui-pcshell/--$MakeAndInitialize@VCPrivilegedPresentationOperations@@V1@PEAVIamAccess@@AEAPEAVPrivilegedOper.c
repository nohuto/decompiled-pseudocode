/*
 * XREFs of ??$MakeAndInitialize@VCPrivilegedPresentationOperations@@V1@PEAVIamAccess@@AEAPEAVPrivilegedOperationsService@@@Details@WRL@Microsoft@@YAJPEAPEAVCPrivilegedPresentationOperations@@$$QEAPEAVIamAccess@@AEAPEAVPrivilegedOperationsService@@@Z @ 0x1800B18D8
 * Callers:
 *     ?MakeAndRegisterOperations@?$PrivilegedOperationsServiceBase@VCPrivilegedPresentationOperations@@VCPrivilegedNotificationOperations@@VCPrivilegedArrangementOperations@@VCPrivilegedForegroundOperations@@VCPrivilegedTabletModeOperations@@VCPrivilegedSizeConstraintsOperations@@VPrivilegedWindowOwnershipOperations@@VPrivilegedHotkeyOperations@@VPrivilegedWindowingOperations@@@@IEAAJPEAVPrivilegedOperationsService@@@Z @ 0x1800AF868 (-MakeAndRegisterOperations@-$PrivilegedOperationsServiceBase@VCPrivilegedPresentationOperations@.c)
 * Callees:
 *     ??B?$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ @ 0x18006C1F8 (--B-$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$AsWeak@VPrivilegedOperationsService@@@WRL@Microsoft@@YAJPEAVPrivilegedOperationsService@@PEAVWeakRef@01@@Z @ 0x1800B1F2C (--$AsWeak@VPrivilegedOperationsService@@@WRL@Microsoft@@YAJPEAVPrivilegedOperationsService@@PEAV.c)
 *     ??4?$ComPtr@VIamAccess@@@WRL@Microsoft@@QEAAAEAV012@PEAVIamAccess@@@Z @ 0x1800B2028 (--4-$ComPtr@VIamAccess@@@WRL@Microsoft@@QEAAAEAV012@PEAVIamAccess@@@Z.c)
 *     ??0CPrivilegedPresentationOperations@@QEAA@XZ @ 0x1800B24CC (--0CPrivilegedPresentationOperations@@QEAA@XZ.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x180125F20 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ?InternalRelease@?$ComPtr@VCPrivilegedPresentationOperations@@@WRL@Microsoft@@IEAAKXZ @ 0x180143B80 (-InternalRelease@-$ComPtr@VCPrivilegedPresentationOperations@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801883B0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CPrivilegedPresentationOperations,CPrivilegedPresentationOperations,IamAccess *,PrivilegedOperationsService * &>(
        CPrivilegedPresentationOperations **a1,
        __int64 *a2,
        __int64 *a3)
{
  CPrivilegedPresentationOperations *v6; // rax
  CPrivilegedPresentationOperations *v7; // rax
  __int64 v8; // rdx
  CPrivilegedPresentationOperations *v9; // rdi
  __int64 v10; // rbx
  __int64 *v11; // rax
  int v12; // eax
  volatile int *v13; // rdx
  unsigned int v14; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 *v17; // [rsp+40h] [rbp+8h] BYREF
  CPrivilegedPresentationOperations *v18; // [rsp+58h] [rbp+20h] BYREF

  *a1 = 0LL;
  v6 = (CPrivilegedPresentationOperations *)operator new(0x40uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v6 )
  {
    v7 = CPrivilegedPresentationOperations::CPrivilegedPresentationOperations(v6);
    v8 = *a2;
    v9 = v7;
    v10 = *a3;
    v18 = v7;
    Microsoft::WRL::ComPtr<IamAccess>::operator=((char *)v7 + 48, v8);
    v17 = (__int64 *)((char *)v9 + 56);
    v11 = Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::WeakRef>::operator Microsoft::WRL::WeakRef *(&v17);
    v12 = Microsoft::WRL::AsWeak<PrivilegedOperationsService>(v10, v11);
    v14 = v12;
    if ( v12 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x72,
        (__int64)"pcshell\\twinui\\privilegedoperations\\lib\\privilegedoperations.cpp",
        (const char *)(unsigned int)v12);
    }
    else
    {
      if ( v9 )
        Microsoft::WRL::Details::SafeUnknownIncrementReference(
          (CPrivilegedPresentationOperations *)((char *)v9 + 44),
          v13);
      *a1 = v9;
      v14 = 0;
    }
    Microsoft::WRL::ComPtr<CPrivilegedPresentationOperations>::InternalRelease(&v18);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v14;
}
