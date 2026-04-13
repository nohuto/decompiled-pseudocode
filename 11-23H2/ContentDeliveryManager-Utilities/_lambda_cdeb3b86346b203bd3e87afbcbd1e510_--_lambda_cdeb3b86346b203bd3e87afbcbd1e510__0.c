/*
 * XREFs of _lambda_cdeb3b86346b203bd3e87afbcbd1e510_::_lambda_cdeb3b86346b203bd3e87afbcbd1e510__0 @ 0x180050254
 * Callers:
 *     ?ProcessCreativeEventAsync@ContentManagementService@ContentManagement@@UEAAJW4CreativeEventType@2@PEAUHSTRING__@@111PEAU?$ITypedEventHandler@PEAUIInspectable@@PEAUHSTRING__@@@Foundation@Windows@@PEAUICreativeEventReportedCache@2@PEAPEAUIAsyncAction@67@@Z @ 0x18005BBA0 (-ProcessCreativeEventAsync@ContentManagementService@ContentManagement@@UEAAJW4CreativeEventType@.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180037C98 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalAddRef@?$ComPtr@VContentManagementService@ContentManagement@@@WRL@Microsoft@@IEBAXXZ @ 0x180059D24 (-InternalAddRef@-$ComPtr@VContentManagementService@ContentManagement@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800D4310 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_cdeb3b86346b203bd3e87afbcbd1e510_::_lambda_cdeb3b86346b203bd3e87afbcbd1e510__0(
        __int64 a1,
        __int64 a2,
        _QWORD *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        _QWORD *a9,
        __int64 *a10)
{
  _DWORD *v11; // r10
  __int64 v12; // rcx

  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = *a3;
  Microsoft::WRL::ComPtr<ContentManagement::ContentManagementService>::InternalAddRef();
  *(_DWORD *)(a1 + 16) = *v11;
  *(_QWORD *)(a1 + 24) = *(_QWORD *)a5;
  *(_QWORD *)a5 = 0LL;
  *(_BYTE *)(a1 + 32) = 0;
  *(_BYTE *)(a5 + 8) = 1;
  *(_QWORD *)(a1 + 40) = *(_QWORD *)a6;
  *(_QWORD *)a6 = 0LL;
  *(_BYTE *)(a1 + 48) = 0;
  *(_BYTE *)(a6 + 8) = 1;
  *(_QWORD *)(a1 + 56) = *(_QWORD *)a7;
  *(_QWORD *)a7 = 0LL;
  *(_BYTE *)(a1 + 64) = 0;
  *(_BYTE *)(a7 + 8) = 1;
  *(_QWORD *)(a1 + 72) = *(_QWORD *)a8;
  *(_QWORD *)a8 = 0LL;
  *(_BYTE *)(a1 + 80) = 0;
  *(_BYTE *)(a8 + 8) = 1;
  *(_QWORD *)(a1 + 88) = *a9;
  Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef((__int64 *)(a1 + 88));
  v12 = *a10;
  *(_QWORD *)(a1 + 96) = *a10;
  if ( v12 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 8LL))(v12);
  return a1;
}
