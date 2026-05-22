/*
 * XREFs of ?RuntimeClassInitialize@VisualTarget@Composition@UI@Windows@@QEAAJPEAVCompositor@234@PEAX@Z @ 0x18005D944
 * Callers:
 *     ??$MakeAndInitialize2@VVisualTarget@Composition@UI@Windows@@V1234@PEAVCompositor@234@AEAPEAX@Details@WRL2@Microsoft@@YAJPEAPEAVVisualTarget@Composition@UI@Windows@@$$QEAPEAVCompositor@456@AEAPEAX@Z @ 0x18000B520 (--$MakeAndInitialize2@VVisualTarget@Composition@UI@Windows@@V1234@PEAVCompositor@234@AEAPEAX@Det.c)
 *     ??$MakeAndInitialize2@VInteropVisualTarget@Composition@UI@Windows@@V1234@PEAVInteropCompositor@234@AEAPEAX@Details@WRL2@Microsoft@@YAJPEAPEAVInteropVisualTarget@Composition@UI@Windows@@$$QEAPEAVInteropCompositor@456@AEAPEAX@Z @ 0x18005DC8C (--$MakeAndInitialize2@VInteropVisualTarget@Composition@UI@Windows@@V1234@PEAVInteropCompositor@2.c)
 *     ??$MakeAndInitialize2@VInteropVisualTarget@Composition@UI@Windows@@V1234@PEAVInteropCompositor@234@@Details@WRL2@Microsoft@@YAJPEAPEAVInteropVisualTarget@Composition@UI@Windows@@$$QEAPEAVInteropCompositor@456@@Z @ 0x180085A44 (--$MakeAndInitialize2@VInteropVisualTarget@Composition@UI@Windows@@V1234@PEAVIntero_ea_180085A44.c)
 *     ??$MakeAndInitialize2@VVisualTarget@Composition@UI@Windows@@V1234@PEAVCompositor@234@@Details@WRL2@Microsoft@@YAJPEAPEAVVisualTarget@Composition@UI@Windows@@$$QEAPEAVCompositor@456@@Z @ 0x180122228 (--$MakeAndInitialize2@VVisualTarget@Composition@UI@Windows@@V1234@PEAVCompositor@234@@Details@WR.c)
 *     ??$MakeAndInitialize2@VInteropVisualTarget@Composition@UI@Windows@@V1234@PEAVInteropDwmCompositor@234@AEAPEAX@Details@WRL2@Microsoft@@YAJPEAPEAVInteropVisualTarget@Composition@UI@Windows@@$$QEAPEAVInteropDwmCompositor@456@AEAPEAX@Z @ 0x18015B3EC (--$MakeAndInitialize2@VInteropVisualTarget@Composition@UI@Windows@@V1234@PEAVInteropDwmComposito.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?HRESULTFromNTSTATUS@CDevice@DirectComposition@@SAJJ@Z @ 0x1800244CC (-HRESULTFromNTSTATUS@CDevice@DirectComposition@@SAJJ@Z.c)
 *     ?RuntimeClassInitialize@ProxyObject@Composition@UI@Windows@@QEAAJPEAVCompositor@234@IPEAX_N@Z @ 0x18005C110 (-RuntimeClassInitialize@ProxyObject@Composition@UI@Windows@@QEAAJPEAVCompositor@234@IPEAX_N@Z.c)
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x18006A7EC (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     ??$_Emplace_reallocate@AEBQEAVVisualTarget@Composition@UI@Windows@@@?$vector@PEAVVisualTarget@Composition@UI@Windows@@V?$allocator@PEAVVisualTarget@Composition@UI@Windows@@@std@@@std@@QEAAPEAPEAVVisualTarget@Composition@UI@Windows@@QEAPEAV2345@AEBQEAV2345@@Z @ 0x180083CCC (--$_Emplace_reallocate@AEBQEAVVisualTarget@Composition@UI@Windows@@@-$vector@PEAVVisualTarget@Co.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1800E76D8 (--1-$unique_any_t@V-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH.c)
 */

__int64 __fastcall Windows::UI::Composition::VisualTarget::RuntimeClassInitialize(
        Windows::UI::Composition::VisualTarget *this,
        DirectComposition::CDevice **a2,
        HANDLE a3)
{
  int v5; // eax
  unsigned int v6; // ebx
  DirectComposition::CDevice *v7; // rdx
  int v9; // eax
  __int64 v10; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  HANDLE hObject; // [rsp+50h] [rbp+18h] BYREF
  Windows::UI::Composition::VisualTarget *v13; // [rsp+58h] [rbp+20h] BYREF

  hObject = 0LL;
  if ( !a3 )
  {
    wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
      &hObject,
      0LL);
    v9 = NtDCompositionCreateSharedResourceHandle(196LL, &hObject);
    v5 = DirectComposition::CDevice::HRESULTFromNTSTATUS(v9);
    v6 = v5;
    if ( v5 < 0 )
    {
      v10 = 66LL;
LABEL_13:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v10,
        (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtvisualtarget.cpp",
        (const char *)(unsigned int)v5);
      wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>::~unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>(&hObject);
      return v6;
    }
    a3 = hObject;
  }
  v5 = Windows::UI::Composition::ProxyObject::RuntimeClassInitialize(this, a2, 196, a3, 0);
  v6 = v5;
  if ( v5 < 0 )
  {
    v10 = 73LL;
    goto LABEL_13;
  }
  v13 = this;
  v7 = a2[113];
  if ( v7 == a2[114] )
  {
    std::vector<Windows::UI::Composition::VisualTarget *>::_Emplace_reallocate<Windows::UI::Composition::VisualTarget * const &>(
      a2 + 112,
      v7,
      &v13);
  }
  else
  {
    *(_QWORD *)v7 = this;
    a2[113] = (DirectComposition::CDevice *)((char *)a2[113] + 8);
  }
  if ( (char *)hObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
    CloseHandle(hObject);
  return 0LL;
}
