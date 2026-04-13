/*
 * XREFs of ??$Lookup@U?$IMapView@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@Windows@@@PropertySetHelper@@SA_NPEAU?$IMapView@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@Windows@@PEAUHSTRING__@@PEAPEAUIPropertyValue@34@@Z @ 0x1800C2EF8
 * Callers:
 *     ??$LookupHString@U?$IMapView@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@Windows@@PEBG@PropertySetHelper@@SA_NPEAU?$IMapView@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@Windows@@PEBGPEAPEAUHSTRING__@@@Z @ 0x1800C301C (--$LookupHString@U-$IMapView@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@Windows@@P.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180037CF0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180043350 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800D4360 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
char __fastcall PropertySetHelper::Lookup<Windows::Foundation::Collections::IMapView<HSTRING__ *,IInspectable *>>(
        __int64 a1,
        __int64 a2,
        __int64 *a3)
{
  char v6; // di
  int v7; // eax
  __int64 (__fastcall *v8)(__int64, __int64, __int64 *); // rbx
  int v9; // eax
  __int64 v10; // rax
  int v12; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  char v14; // [rsp+40h] [rbp+8h] BYREF
  __int64 v15; // [rsp+50h] [rbp+18h] BYREF

  v6 = 0;
  *a3 = 0LL;
  v14 = 0;
  if ( a1 )
  {
    v7 = (*(__int64 (__fastcall **)(__int64, __int64, char *))(*(_QWORD *)a1 + 64LL))(a1, a2, &v14);
    if ( v7 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x26,
        (__int64)"shellcommon\\shell\\inc\\PropertySetHelper.h",
        (const char *)(unsigned int)v7,
        v12);
    if ( v14 )
    {
      v15 = 0LL;
      v8 = *(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)a1 + 48LL);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v15);
      v9 = v8(a1, a2, &v15);
      if ( v9 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x2A,
          (__int64)"shellcommon\\shell\\inc\\PropertySetHelper.h",
          (const char *)(unsigned int)v9,
          v12);
      v10 = v15;
      if ( v15 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 8LL))(v15);
        v10 = v15;
      }
      *a3 = v10;
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v15);
      if ( v14 )
        return 1;
    }
  }
  return v6;
}
