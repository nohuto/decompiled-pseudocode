/*
 * XREFs of ??$InsertHString@PEB_W@PropertySetAssembler@@QEAA_NPEB_WPEAUHSTRING__@@1@Z @ 0x180547C4C
 * Callers:
 *     ?InitProperties@TrayInfoTipDisplayInfo@SystemTray@@AEAAXPEAUHSTRING__@@_N@Z @ 0x180548810 (-InitProperties@TrayInfoTipDisplayInfo@SystemTray@@AEAAXPEAUHSTRING__@@_N@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?EnsureValueFactory@PropertySetAssembler@@AEAAXXZ @ 0x180548124 (-EnsureValueFactory@PropertySetAssembler@@AEAAXXZ.c)
 *     ?Insert@PropertySetAssembler@@QEAA_NPEB_WPEAUIInspectable@@1@Z @ 0x180548A14 (-Insert@PropertySetAssembler@@QEAA_NPEB_WPEAUIInspectable@@1@Z.c)
 */

// Hidden C++ exception states: #wind=1
bool __fastcall PropertySetAssembler::InsertHString<wchar_t const *>(
        PropertySetAssembler *this,
        __int64 a2,
        HSTRING a3,
        __int64 a4)
{
  HRESULT v6; // eax
  const wchar_t *v7; // rdx
  struct IInspectable *v8; // r9
  __int64 v9; // rdi
  __int64 (__fastcall *v10)(__int64, HSTRING, struct IInspectable **); // rbx
  int v11; // eax
  bool v12; // bl
  int v14; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct IInspectable *v16; // [rsp+48h] [rbp+10h] BYREF
  INT32 v17; // [rsp+58h] [rbp+20h] BYREF
  int v18; // [rsp+5Ch] [rbp+24h]

  v18 = HIDWORD(a4);
  v16 = 0LL;
  v17 = 0;
  v6 = WindowsCompareStringOrdinal(a3, 0LL, &v17);
  if ( v6 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x62,
      (int)"shellcommon\\internal\\shell\\inc\\propertysetassembler.h",
      (const char *)(unsigned int)v6,
      v14);
  if ( v17 )
  {
    PropertySetAssembler::EnsureValueFactory(this);
    v9 = *((_QWORD *)this + 1);
    v10 = *(__int64 (__fastcall **)(__int64, HSTRING, struct IInspectable **))(*(_QWORD *)v9 + 144LL);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v16);
    v11 = v10(v9, a3, &v16);
    if ( v11 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x66,
        (int)"shellcommon\\internal\\shell\\inc\\propertysetassembler.h",
        (const char *)(unsigned int)v11,
        v14);
  }
  v12 = PropertySetAssembler::Insert(this, v7, v16, v8);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v16);
  return v12;
}
