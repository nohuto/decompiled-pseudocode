/*
 * XREFs of ?GetEntitlementForRecord@Actions@CreativeFramework@@YAXV?$com_ptr_t@UIAppManager@ContentManagement@@Uerr_exception_policy@wil@@@wil@@AEBQEB_W111_N@Z @ 0x1800BA16C
 * Callers:
 *     ?InstallAppByProductAndSku@Actions@CreativeFramework@@YAXPEB_W00_N11100@Z @ 0x1800BA53C (-InstallAppByProductAndSku@Actions@CreativeFramework@@YAXPEB_W00_N11100@Z.c)
 *     ?InstallAppByStoreId@Actions@CreativeFramework@@YAXPEB_W0_N1110000@Z @ 0x1800BA720 (-InstallAppByStoreId@Actions@CreativeFramework@@YAXPEB_W0_N1110000@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x180021DB0 (__security_check_cookie.c)
 *     _Init_thread_footer @ 0x180023894 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x180023904 (_Init_thread_header.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180023E6C (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18003F5AC (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048430 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_InstallAttribution@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18008F9A4 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_InstallAttribution@@@details@wil@@QEAAX_N.c)
 *     ??$ReportEntitlementAcquisitionState@AEBQEB_WAEBQEB_WAEA_NIAEBQEB_W@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@SAXAEBQEB_W0AEA_N$$QEAI0@Z @ 0x1800B91E0 (--$ReportEntitlementAcquisitionState@AEBQEB_WAEBQEB_WAEA_NIAEBQEB_W@ContentDeliveryManagerTeleme.c)
 *     ?IsMsaConnected@Actions@CreativeFramework@@YA_NXZ @ 0x1800BACDC (-IsMsaConnected@Actions@CreativeFramework@@YA_NXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800ED700 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=13 #try_helpers=2
int __fastcall CreativeFramework::Actions::GetEntitlementForRecord(
        _QWORD *a1,
        WCHAR *a2,
        WCHAR *a3,
        const WCHAR **a4,
        const WCHAR **a5,
        char a6)
{
  char v10; // r14
  unsigned int v11; // r8d
  unsigned int v12; // r8d
  HRESULT v13; // eax
  unsigned int v14; // r8d
  HSTRING v15; // rdi
  PVOID v16; // rbx
  unsigned int v17; // r8d
  HSTRING_HEADER *v18; // rax
  int v19; // eax
  wil::details::in1diag3 *v20; // rcx
  unsigned int v21; // r8d
  HRESULT v22; // eax
  unsigned int v23; // r8d
  HSTRING v24; // rdi
  PVOID v25; // rbx
  unsigned int v26; // r8d
  HSTRING_HEADER *v27; // rax
  int v28; // eax
  wil::details::in1diag3 *v29; // rcx
  int result; // eax
  CreativeFramework::Actions *v31; // rcx
  int v32; // [rsp+20h] [rbp-158h]
  char v33[8]; // [rsp+40h] [rbp-138h] BYREF
  PVOID v34; // [rsp+48h] [rbp-130h] BYREF
  const WCHAR *v35[3]; // [rsp+50h] [rbp-128h] BYREF
  __int64 (__fastcall *v36)(_QWORD, PVOID, PVOID, HSTRING); // [rsp+68h] [rbp-110h]
  __int64 (__fastcall *v37)(_QWORD, PVOID, PVOID, HSTRING); // [rsp+70h] [rbp-108h]
  const WCHAR **v38; // [rsp+78h] [rbp-100h]
  const WCHAR **Reserved1; // [rsp+80h] [rbp-F8h]
  PVOID v40; // [rsp+88h] [rbp-F0h]
  _QWORD *v41; // [rsp+90h] [rbp-E8h]
  HSTRING_HEADER hstringHeader; // [rsp+98h] [rbp-E0h] BYREF
  HSTRING string; // [rsp+B0h] [rbp-C8h] BYREF
  HSTRING_HEADER v44; // [rsp+B8h] [rbp-C0h] BYREF
  HSTRING_HEADER v45; // [rsp+D8h] [rbp-A0h] BYREF
  HSTRING_HEADER v46; // [rsp+F8h] [rbp-80h] BYREF
  HSTRING_HEADER v47; // [rsp+118h] [rbp-60h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+178h] [rbp+0h]

  v41 = a1;
  v35[2] = a2;
  v35[1] = a3;
  v38 = a5;
  Reserved1 = a5;
  if ( a6 )
    goto LABEL_5;
  if ( dword_1801AF538 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index)
                                   + 4LL) )
  {
    Init_thread_header(&dword_1801AF538);
    if ( dword_1801AF538 == -1 )
    {
      byte_1801AF53C = CreativeFramework::Actions::IsMsaConnected(v31);
      Init_thread_footer(&dword_1801AF538);
    }
  }
  if ( !byte_1801AF53C )
LABEL_5:
    v10 = 1;
  else
    v10 = 0;
  v33[0] = v10;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_InstallAttribution>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_InstallAttribution>::GetImpl'::`2'::impl,
    1u,
    0,
    (__int64)a4);
  v35[0] = *a4;
  if ( v10 )
  {
    v37 = (__int64 (__fastcall *)(_QWORD, PVOID, PVOID, HSTRING))*a1;
    v36 = *(__int64 (__fastcall **)(_QWORD, PVOID, PVOID, HSTRING))(*(_QWORD *)v37 + 80LL);
    Reserved1 = (const WCHAR **)Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v47, v35, v11)[1].Reserved.Reserved1;
    v38 = (const WCHAR **)Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v46, a5, v21)[1].Reserved.Reserved1;
    string = 0LL;
    v22 = WindowsCreateStringReference(&Src, 0, &hstringHeader, &string);
    if ( v22 < 0 )
    {
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v22);
    }
    else
    {
      v24 = string;
      v25 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v45, (const WCHAR **)a3, v23)[1].Reserved.Reserved1;
      v27 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v44, (const WCHAR **)a2, v26);
      v32 = (int)v38;
      v28 = v36(v37, v27[1].Reserved.Reserved1, v25, v24);
      v29 = retaddr;
      if ( v28 >= 0 )
        goto LABEL_12;
    }
    wil::details::in1diag3::Throw_Hr(
      v29,
      138LL,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\appinstaller.cpp",
      (const char *)(unsigned int)v28,
      v32);
  }
  v36 = (__int64 (__fastcall *)(_QWORD, PVOID, PVOID, HSTRING))*a1;
  v37 = *(__int64 (__fastcall **)(_QWORD, PVOID, PVOID, HSTRING))(*(_QWORD *)v36 + 80LL);
  v34 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v44, v35, v11)[1].Reserved.Reserved1;
  v40 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v45, a5, v12)[1].Reserved.Reserved1;
  string = 0LL;
  v13 = WindowsCreateStringReference(&Src, 0, &hstringHeader, &string);
  if ( v13 < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v13);
LABEL_18:
    wil::details::in1diag3::Throw_Hr(
      v20,
      116LL,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\appinstaller.cpp",
      (const char *)(unsigned int)v19,
      v32);
  }
  v15 = string;
  v16 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v46, (const WCHAR **)a3, v14)[1].Reserved.Reserved1;
  v18 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v47, (const WCHAR **)a2, v17);
  v32 = (int)v40;
  v19 = v37(v36, v18[1].Reserved.Reserved1, v16, v15);
  v20 = retaddr;
  if ( v19 < 0 )
    goto LABEL_18;
LABEL_12:
  LODWORD(v34) = 0;
  result = ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::ReportEntitlementAcquisitionState<wchar_t const * const &,wchar_t const * const &,bool &,unsigned int,wchar_t const * const &>(
             (const WCHAR **)a2,
             (const WCHAR **)a3,
             v33,
             (int *)&v34,
             v35);
  if ( *a1 )
    return (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 16LL))(*a1);
  return result;
}
