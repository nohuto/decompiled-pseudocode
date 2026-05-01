/*
 * XREFs of ?Insert@PropertySetAssembler@@QEAA_NPEB_WPEAUIInspectable@@1@Z @ 0x180548A14
 * Callers:
 *     ??$InsertHString@PEB_W@PropertySetAssembler@@QEAA_NPEB_WPEAUHSTRING__@@1@Z @ 0x180547C4C (--$InsertHString@PEB_W@PropertySetAssembler@@QEAA_NPEB_WPEAUHSTRING__@@1@Z.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Set@HString@Wrappers@WRL@Microsoft@@QEAAJPEB_WI@Z @ 0x180192B24 (-Set@HString@Wrappers@WRL@Microsoft@@QEAAJPEB_WI@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?EnsurePropertySet@PropertySetAssembler@@AEAAXXZ @ 0x18054807C (-EnsurePropertySet@PropertySetAssembler@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
bool __fastcall PropertySetAssembler::Insert(
        PropertySetAssembler *this,
        const wchar_t *a2,
        struct IInspectable *a3,
        struct IInspectable *a4)
{
  bool v6; // bl
  HRESULT v7; // eax
  HSTRING v8; // rdi
  int v9; // eax
  int v11; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  HSTRING string; // [rsp+58h] [rbp+10h] BYREF
  struct IInspectable *v14; // [rsp+68h] [rbp+20h] BYREF

  v14 = a4;
  v6 = 0;
  string = 0LL;
  v7 = Microsoft::WRL::Wrappers::HString::Set(&string, L"LogoPath", 8u);
  if ( v7 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x55,
      (int)"shellcommon\\internal\\shell\\inc\\propertysetassembler.h",
      (const char *)(unsigned int)v7,
      v11);
  v8 = string;
  if ( a3 )
  {
    PropertySetAssembler::EnsurePropertySet(this);
    LOBYTE(v14) = 0;
    v9 = (*(__int64 (__fastcall **)(_QWORD, HSTRING, struct IInspectable *, struct IInspectable **))(**(_QWORD **)this + 80LL))(
           *(_QWORD *)this,
           v8,
           a3,
           &v14);
    if ( v9 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x48,
        (int)"shellcommon\\internal\\shell\\inc\\propertysetassembler.h",
        (const char *)(unsigned int)v9,
        v11);
    v6 = (_BYTE)v14 != 0;
    v8 = string;
  }
  WindowsDeleteString(v8);
  return v6;
}
