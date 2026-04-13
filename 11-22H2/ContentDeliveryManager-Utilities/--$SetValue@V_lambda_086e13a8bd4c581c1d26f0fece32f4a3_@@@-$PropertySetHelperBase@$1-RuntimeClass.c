/*
 * XREFs of ??$SetValue@V_lambda_086e13a8bd4c581c1d26f0fece32f4a3_@@@?$PropertySetHelperBase@$1?RuntimeClass_Windows_Foundation_Collections_ValueSet@@3QBGB@Triggers@CreativeFramework@@AEAAJPEBGAEBV_lambda_086e13a8bd4c581c1d26f0fece32f4a3_@@@Z @ 0x18004EC74
 * Callers:
 *     ?SendAppServiceMessage@ContentManagementService@ContentManagement@@AEAAJW4TriggerId@Triggers@CreativeFramework@@V?$function@$$A6AJAEAVValueSetHelper@Triggers@CreativeFramework@@@Z@wistd@@@Z @ 0x18005DB98 (-SendAppServiceMessage@ContentManagementService@ContentManagement@@AEAAJW4TriggerId@Triggers@Cre.c)
 * Callees:
 *     __security_check_cookie @ 0x1800224C0 (__security_check_cookie.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180024270 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180037CF0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003F248 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$As@U?$IMap@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@Windows@@@?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@U?$IMap@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x18004C15C (--$As@U-$IMap@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@Windows@@@-$ComPtr@UIProp.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800D4360 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CreativeFramework::Triggers::PropertySetHelperBase<&unsigned short const near * const RuntimeClass_Windows_Foundation_Collections_ValueSet>::SetValue<_lambda_086e13a8bd4c581c1d26f0fece32f4a3_>(
        __int64 a1,
        const WCHAR *a2,
        const WCHAR **a3)
{
  unsigned int v5; // ebx
  __int64 v6; // rdi
  __int64 (__fastcall *v7)(__int64, PVOID, __int64 *); // rbx
  unsigned int v8; // r8d
  HSTRING_HEADER *v9; // rax
  int v10; // eax
  int v11; // eax
  unsigned int v12; // r8d
  __int64 v13; // rdx
  __int64 v14; // rbx
  __int64 (__fastcall *v15)(__int64, PVOID, __int64, _BYTE *); // rsi
  __int64 v16; // rdi
  HSTRING_HEADER *v17; // rax
  _BYTE v19[8]; // [rsp+30h] [rbp-50h] BYREF
  __int64 v20; // [rsp+38h] [rbp-48h] BYREF
  __int64 v21; // [rsp+40h] [rbp-40h] BYREF
  const WCHAR *v22; // [rsp+48h] [rbp-38h] BYREF
  HSTRING_HEADER v23; // [rsp+50h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+28h]

  v22 = a2;
  v5 = *(_DWORD *)(a1 + 16);
  if ( (v5 & 0x80000000) == 0 )
  {
    v21 = 0LL;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v21);
    v6 = *(_QWORD *)(a1 + 8);
    v7 = *(__int64 (__fastcall **)(__int64, PVOID, __int64 *))(*(_QWORD *)v6 + 144LL);
    v9 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v23, a3, v8);
    v10 = v7(v6, v9[1].Reserved.Reserved1, &v21);
    v5 = v10;
    if ( v10 >= 0 )
    {
      v19[0] = 0;
      v20 = 0LL;
      v11 = Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IPropertySet>::As<Windows::Foundation::Collections::IMap<HSTRING__ *,IInspectable *>>(
              (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))a1,
              &v20);
      v5 = v11;
      if ( v11 >= 0 )
      {
        v14 = v20;
        v15 = *(__int64 (__fastcall **)(__int64, PVOID, __int64, _BYTE *))(*(_QWORD *)v20 + 80LL);
        v16 = v21;
        v17 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v23, &v22, v12);
        v11 = v15(v14, v17[1].Reserved.Reserved1, v16, v19);
        v5 = v11;
        if ( v11 >= 0 )
        {
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v20);
          v5 = 0;
          goto LABEL_11;
        }
        v13 = 353LL;
      }
      else
      {
        v13 = 352LL;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v13,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\PropertySetHelper.h",
        (const char *)(unsigned int)v11);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v20);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x15C,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\PropertySetHelper.h",
        (const char *)(unsigned int)v10);
    }
LABEL_11:
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v21);
    return v5;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x159,
    (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\PropertySetHelper.h",
    (const char *)v5);
  return v5;
}
