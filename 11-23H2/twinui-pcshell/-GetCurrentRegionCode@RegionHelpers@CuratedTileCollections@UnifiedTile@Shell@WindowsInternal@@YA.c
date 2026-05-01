/*
 * XREFs of ?GetCurrentRegionCode@RegionHelpers@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@YAJAEAV?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@W4RegionLookupFallbackOptions@2345@@Z @ 0x18073991C
 * Callers:
 *     ?CalculateSelectionAttributes@TaskbarLayoutParser@@AEAAJXZ @ 0x1803E9B60 (-CalculateSelectionAttributes@TaskbarLayoutParser@@AEAAJXZ.c)
 *     ?CalculateSelectionAttributes@PWSLayoutParser@@AEAAJXZ @ 0x1804965BC (-CalculateSelectionAttributes@PWSLayoutParser@@AEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18009D65C (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Initialize@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_K@Z @ 0x18015423C (-_Initialize@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$ActivateInstance@UIGeographicRegion@Globalization@Windows@@@Foundation@Windows@@YAJPEAUHSTRING__@@PEAPEAUIGeographicRegion@Globalization@1@@Z @ 0x180739870 (--$ActivateInstance@UIGeographicRegion@Globalization@Windows@@@Foundation@Windows@@YAJPEAUHSTRIN.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::RegionHelpers::GetCurrentRegionCode(
        __int64 a1)
{
  __int64 v2; // rbx
  int v3; // eax
  unsigned int v4; // ebx
  __int64 v5; // rbx
  __int64 (__fastcall *v6)(__int64, HSTRING *); // rdi
  int v7; // eax
  __int64 v8; // rdx
  const WCHAR *StringRawBuffer; // rax
  __int64 v10; // r9
  const unsigned __int16 *v11; // rax
  HSTRING string; // [rsp+30h] [rbp-40h] BYREF
  __int64 v14; // [rsp+38h] [rbp-38h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+40h] [rbp-30h] BYREF
  __int64 v16; // [rsp+58h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+8h]

  v14 = 0LL;
  v16 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"Windows.Globalization.GeographicRegion",
    0x27u,
    0x26u);
  v2 = v16;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v14);
  v3 = Windows::Foundation::ActivateInstance<Windows::Globalization::IGeographicRegion>(v2, &v14);
  v4 = v3;
  if ( v3 >= 0 )
  {
    string = 0LL;
    v5 = v14;
    v6 = *(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v14 + 56LL);
    WindowsDeleteString(0LL);
    string = 0LL;
    v7 = v6(v5, &string);
    v4 = v7;
    if ( v7 >= 0 )
    {
      StringRawBuffer = WindowsGetStringRawBuffer(string, 0LL);
      if ( CompareStringOrdinal(StringRawBuffer, -1, L"ZZ", -1, 0) == 2 )
      {
        v4 = -2147467259;
        v10 = 2147500037LL;
        v8 = 26LL;
LABEL_10:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v8,
          (int)"shellcommon\\shell\\tiles\\curatedtilecollections\\collectioninitialization\\helpers\\regionhelpers.cpp",
          (const char *)v10);
LABEL_12:
        WindowsDeleteString(string);
        string = 0LL;
        goto LABEL_13;
      }
      v11 = WindowsGetStringRawBuffer(string, 0LL);
      v7 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Initialize(
             a1,
             v11,
             0xFFFFFFFFFFFFFFFFuLL);
      v4 = v7;
      if ( v7 >= 0 )
      {
        v4 = 0;
        goto LABEL_12;
      }
      v8 = 33LL;
    }
    else
    {
      v8 = 22LL;
    }
    v10 = (unsigned int)v7;
    goto LABEL_10;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x13,
    (int)"shellcommon\\shell\\tiles\\curatedtilecollections\\collectioninitialization\\helpers\\regionhelpers.cpp",
    (const char *)(unsigned int)v3);
LABEL_13:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v14);
  return v4;
}
