/*
 * XREFs of ??$LookupHString@U?$IMapView@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@Windows@@PEBG@PropertySetHelper@@SA_NPEAU?$IMapView@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@Windows@@PEBGPEAPEAUHSTRING__@@@Z @ 0x1800C301C
 * Callers:
 *     ??$LookupWString@U?$IMapView@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@Windows@@PEBG@PropertySetHelper@@SA_NPEAU?$IMapView@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@Windows@@PEBGAEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x1800C30FC (--$LookupWString@U-$IMapView@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@Windows@@P.c)
 * Callees:
 *     __security_check_cookie @ 0x1800224C0 (__security_check_cookie.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180024270 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180037CF0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180043350 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$Lookup@U?$IMapView@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@Windows@@@PropertySetHelper@@SA_NPEAU?$IMapView@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@Windows@@PEAUHSTRING__@@PEAPEAUIPropertyValue@34@@Z @ 0x1800C2EF8 (--$Lookup@U-$IMapView@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@Windows@@@Propert.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800D4360 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
char __fastcall PropertySetHelper::LookupHString<Windows::Foundation::Collections::IMapView<HSTRING__ *,IInspectable *>,unsigned short const *>(
        __int64 a1,
        __int64 a2,
        _QWORD *a3)
{
  char v5; // di
  unsigned int v6; // r8d
  HSTRING_HEADER *v7; // rax
  int v8; // eax
  __int64 v10; // [rsp+20h] [rbp-48h] BYREF
  const WCHAR *v11; // [rsp+28h] [rbp-40h] BYREF
  HSTRING_HEADER v12; // [rsp+30h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v5 = 0;
  *a3 = 0LL;
  v10 = 0LL;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v10);
  v11 = L"PackageFullName";
  v7 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v12, &v11, v6);
  if ( PropertySetHelper::Lookup<Windows::Foundation::Collections::IMapView<HSTRING__ *,IInspectable *>>(
         a1,
         (__int64)v7[1].Reserved.Reserved1,
         &v10) )
  {
    v8 = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v10 + 152LL))(v10, a3);
    if ( v8 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x62,
        (__int64)"shellcommon\\shell\\inc\\PropertySetHelper.h",
        (const char *)(unsigned int)v8,
        v10);
    v5 = 1;
  }
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v10);
  return v5;
}
