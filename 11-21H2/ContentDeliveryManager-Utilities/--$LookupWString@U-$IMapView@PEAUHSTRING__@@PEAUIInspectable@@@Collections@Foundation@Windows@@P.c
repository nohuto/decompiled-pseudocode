/*
 * XREFs of ??$LookupWString@U?$IMapView@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@Windows@@PEBG@PropertySetHelper@@SA_NPEAU?$IMapView@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@Windows@@PEBGAEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x1800D8D70
 * Callers:
 *     ?PrefetchDisplayInfo@ContentDeliveryManagerAppInfo@ApplicationModel@Extensions@Internal@Windows@@AEAAXXZ @ 0x1800D9220 (-PrefetchDisplayInfo@ContentDeliveryManagerAppInfo@ApplicationModel@Extensions@Internal@Windows@.c)
 * Callees:
 *     __security_check_cookie @ 0x180021DB0 (__security_check_cookie.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180023E6C (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048430 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@PEBG_K@Z @ 0x180069F34 (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@PEBG_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800ED700 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=8
char __fastcall PropertySetHelper::LookupWString<Windows::Foundation::Collections::IMapView<HSTRING__ *,IInspectable *>,unsigned short const *>(
        __int64 a1,
        __int64 a2,
        unsigned __int64 *a3)
{
  _WORD *v5; // rax
  unsigned __int64 v6; // rbx
  char v7; // r14
  unsigned int v8; // r8d
  PVOID Reserved1; // r15
  const WCHAR *v10; // rcx
  int v11; // eax
  int v12; // eax
  char v13; // al
  int v14; // eax
  char *StringRawBuffer; // rdx
  __int64 v16; // rax
  int v18; // [rsp+20h] [rbp-50h] BYREF
  const WCHAR *v19; // [rsp+28h] [rbp-48h]
  const WCHAR *v20; // [rsp+30h] [rbp-40h] BYREF
  HSTRING string; // [rsp+38h] [rbp-38h] BYREF
  HSTRING_HEADER v22; // [rsp+40h] [rbp-30h] BYREF
  __int64 v23; // [rsp+58h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+28h]

  if ( a3[3] < 8 )
    v5 = a3;
  else
    v5 = (_WORD *)*a3;
  v6 = 0LL;
  a3[2] = 0LL;
  *v5 = 0;
  WindowsDeleteString(0LL);
  string = 0LL;
  v7 = 0;
  v19 = 0LL;
  v20 = L"PackageFullName";
  Reserved1 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v22, &v20, v8)[1].Reserved.Reserved1;
  v10 = 0LL;
  v19 = 0LL;
  LOBYTE(v18) = 0;
  if ( a1 )
  {
    v11 = (*(__int64 (__fastcall **)(__int64, PVOID, int *))(*(_QWORD *)a1 + 64LL))(a1, Reserved1, &v18);
    if ( v11 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        38LL,
        (__int64)"shellcommon\\Shell\\inc\\PropertySetHelper.h",
        (const char *)(unsigned int)v11,
        v18);
    if ( (_BYTE)v18 )
    {
      v20 = 0LL;
      v12 = (*(__int64 (__fastcall **)(__int64, PVOID, const WCHAR **))(*(_QWORD *)a1 + 48LL))(a1, Reserved1, &v20);
      if ( v12 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          42LL,
          (__int64)"shellcommon\\Shell\\inc\\PropertySetHelper.h",
          (const char *)(unsigned int)v12,
          v18);
      v10 = v20;
      if ( v20 )
      {
        (*(void (__fastcall **)(const WCHAR *))(*(_QWORD *)v20 + 8LL))(v20);
        v10 = v20;
      }
      v19 = v10;
      if ( v10 )
      {
        v20 = 0LL;
        (*(void (__fastcall **)(const WCHAR *))(*(_QWORD *)v10 + 16LL))(v10);
        v10 = v19;
      }
      if ( (_BYTE)v18 )
      {
        v13 = 1;
        goto LABEL_16;
      }
    }
    else
    {
      v10 = v19;
    }
  }
  v13 = 0;
LABEL_16:
  v23 = 0LL;
  if ( v13 )
  {
    v14 = (*(__int64 (__fastcall **)(const WCHAR *, HSTRING *))(*(_QWORD *)v10 + 152LL))(v10, &string);
    if ( v14 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        98LL,
        (__int64)"shellcommon\\Shell\\inc\\PropertySetHelper.h",
        (const char *)(unsigned int)v14,
        v18);
    v7 = 1;
    v10 = v19;
  }
  if ( v10 )
  {
    v19 = 0LL;
    (*(void (__fastcall **)(const WCHAR *))(*(_QWORD *)v10 + 16LL))(v10);
  }
  if ( v7 )
  {
    StringRawBuffer = (char *)WindowsGetStringRawBuffer(string, 0LL);
    if ( *(_WORD *)StringRawBuffer )
    {
      v16 = -1LL;
      do
        ++v16;
      while ( *(_WORD *)&StringRawBuffer[2 * v16] );
      v6 = v16;
    }
    std::wstring::assign(a3, StringRawBuffer, v6);
    LOBYTE(v6) = 1;
  }
  WindowsDeleteString(string);
  return v6;
}
