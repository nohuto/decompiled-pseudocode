/*
 * XREFs of ?AddDataSourcePropertyId@DataSourceReader@Private@Composition@UI@Windows@@QEAAJPEAUHSTRING__@@IW4AnimationPropertyKind@2345@@Z @ 0x18018473C
 * Callers:
 *     ?AddDataSourcePropertyId@Partner@DataSourceReader@Private@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@IW4AnimationPropertyKind@3456@@Z @ 0x1801848C0 (-AddDataSourcePropertyId@Partner@DataSourceReader@Private@Composition@UI@Windows@@UEAAJPEAUHSTRI.c)
 * Callees:
 *     ?Set@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEAUHSTRING__@@@Z @ 0x18004434C (-Set@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEAUHSTRING__@@@Z.c)
 *     ?CompareAnimationNames@@YAHPEAUHSTRING__@@0@Z @ 0x18006F204 (-CompareAnimationNames@@YAHPEAUHSTRING__@@0@Z.c)
 *     ?ToInternalType@AnimationHelper@Composition@UI@Windows@@YA?AW4DCOMPOSITION_EXPRESSION_TYPE@@W4AnimationPropertyKind@Private@234@@Z @ 0x180089074 (-ToInternalType@AnimationHelper@Composition@UI@Windows@@YA-AW4DCOMPOSITION_EXPRESSION_TYPE@@W4An.c)
 *     __security_check_cookie @ 0x180095B40 (__security_check_cookie.c)
 *     ?Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ @ 0x1801097EC (-Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ.c)
 *     ??$_Emplace_reallocate@UDataSourcePropertyInfo@DataSourceReader@Private@Composition@UI@Windows@@@?$vector@UDataSourcePropertyInfo@DataSourceReader@Private@Composition@UI@Windows@@V?$allocator@UDataSourcePropertyInfo@DataSourceReader@Private@Composition@UI@Windows@@@std@@@std@@QEAAPEAUDataSourcePropertyInfo@DataSourceReader@Private@Composition@UI@Windows@@QEAU234567@$$QEAU234567@@Z @ 0x180184590 (--$_Emplace_reallocate@UDataSourcePropertyInfo@DataSourceReader@Private@Composition@UI@Windows@@.c)
 *     ??$sprintf_s@$0CAA@@@YAHAEAY0CAA@DPEBDZZ @ 0x18018470C (--$sprintf_s@$0CAA@@@YAHAEAY0CAA@DPEBDZZ.c)
 */

__int64 __fastcall Windows::UI::Composition::Private::DataSourceReader::AddDataSourcePropertyId(
        __int64 a1,
        HSTRING a2,
        int a3,
        int a4)
{
  unsigned int v5; // ebx
  __int64 v8; // r15
  __int64 i; // rdi
  const wchar_t *StringRawBuffer; // rax
  HSTRING *v11; // rdx
  const char *v13; // [rsp+28h] [rbp-D8h]
  HSTRING string; // [rsp+30h] [rbp-D0h] BYREF
  HSTRING v15; // [rsp+38h] [rbp-C8h]
  HSTRING v16; // [rsp+40h] [rbp-C0h] BYREF
  char v17[512]; // [rsp+50h] [rbp-B0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+298h] [rbp+198h]

  v16 = a2;
  v5 = 0;
  LODWORD(v15) = a3;
  string = 0LL;
  HIDWORD(v15) = Windows::UI::Composition::AnimationHelper::ToInternalType(a4);
  Microsoft::WRL::Wrappers::HString::Set(&string, &v16);
  v8 = *(_QWORD *)(a1 + 160);
  for ( i = *(_QWORD *)(a1 + 152);
        i != v8 && (unsigned int)CompareAnimationNames(*(HSTRING *)i, string) && *(_DWORD *)(i + 8) != (_DWORD)v15;
        i += 16LL )
  {
    ;
  }
  if ( i == *(_QWORD *)(a1 + 160) )
  {
    v11 = *(HSTRING **)(a1 + 160);
    if ( v11 == *(HSTRING **)(a1 + 168) )
    {
      std::vector<Windows::UI::Composition::Private::DataSourceReader::DataSourcePropertyInfo>::_Emplace_reallocate<Windows::UI::Composition::Private::DataSourceReader::DataSourcePropertyInfo>(
        (const char *)(a1 + 152),
        (__int64)v11,
        (__int64)&string);
    }
    else
    {
      *v11 = string;
      string = 0LL;
      v11[1] = v15;
      *(_QWORD *)(a1 + 160) += 16LL;
      v15 = 0LL;
    }
  }
  else
  {
    StringRawBuffer = WindowsGetStringRawBuffer(a2, 0LL);
    sprintf_s<512>(v17, "Property with name %S or id %d already exists", StringRawBuffer, a3);
    v5 = -2147024809;
    wil::details::in1diag3::Return_HrMsg(
      retaddr,
      (void *)0x5C,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtdatasourcereader.cpp",
      (const char *)0x80070057LL,
      (int)v17,
      v13);
  }
  WindowsDeleteString(string);
  return v5;
}
