/*
 * XREFs of ?ProcessCreativeEventUriAsync@ContentManagementService@ContentManagement@@UEAAJW4CreativeEventType@2@PEAUHSTRING__@@PEAU?$ITypedEventHandler@PEAUIInspectable@@PEAUHSTRING__@@@Foundation@Windows@@PEAUICreativeEventReportedCache@2@PEAPEAUIAsyncAction@67@@Z @ 0x1800625A0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x180021DB0 (__security_check_cookie.c)
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x180021FCC (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ??_L@YAXPEAX_K1P6AX0@Z2@Z @ 0x180022218 (--_L@YAXPEAX_K1P6AX0@Z2@Z.c)
 *     ??$?0PEBG@StringReference@Internal@Windows@@QEAA@AEBQEBGUdummy_t@_StringDetail@12@@Z @ 0x180023EEC (--$-0PEBG@StringReference@Internal@Windows@@QEAA@AEBQEBGUdummy_t@_StringDetail@12@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044570 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ProcessCreativeEventAsync@ContentManagementService@ContentManagement@@UEAAJW4CreativeEventType@2@PEAUHSTRING__@@111PEAU?$ITypedEventHandler@PEAUIInspectable@@PEAUHSTRING__@@@Foundation@Windows@@PEAUICreativeEventReportedCache@2@PEAPEAUIAsyncAction@67@@Z @ 0x1800620C0 (-ProcessCreativeEventAsync@ContentManagementService@ContentManagement@@UEAAJW4CreativeEventType@.c)
 *     ?Parse@CreativeEventUriParser@LaunchCreativeHelpers@CreativeFramework@@QEAAJPEBG@Z @ 0x1800838B4 (-Parse@CreativeEventUriParser@LaunchCreativeHelpers@CreativeFramework@@QEAAJPEBG@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall ContentManagement::ContentManagementService::ProcessCreativeEventUriAsync(
        __int64 a1,
        int a2,
        HSTRING a3,
        __int64 a4,
        __int64 a5,
        _QWORD *a6)
{
  const unsigned __int16 *StringRawBuffer; // rax
  int v11; // eax
  unsigned int v12; // ebx
  const WCHAR *v14; // rbx
  const char *v15; // rax
  HSTRING v16; // rsi
  HSTRING v17; // rdi
  HSTRING v18; // rbx
  HSTRING *v19; // rax
  int v20; // eax
  const WCHAR *v21; // [rsp+50h] [rbp-B0h] BYREF
  const WCHAR *v22; // [rsp+58h] [rbp-A8h] BYREF
  _QWORD *v23; // [rsp+60h] [rbp-A0h]
  _BYTE v24[32]; // [rsp+68h] [rbp-98h] BYREF
  _BYTE v25[32]; // [rsp+88h] [rbp-78h] BYREF
  _BYTE v26[32]; // [rsp+A8h] [rbp-58h] BYREF
  _BYTE v27[40]; // [rsp+C8h] [rbp-38h] BYREF
  _QWORD v28[6]; // [rsp+F0h] [rbp-10h] BYREF
  const WCHAR *v29; // [rsp+120h] [rbp+20h]
  wil::details::in1diag3 *retaddr; // [rsp+2E8h] [rbp+1E8h]

  v23 = a6;
  `eh vector constructor iterator'(
    v28,
    0x18uLL,
    17,
    (void (*)(void *))Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>,
    (void (*)(void *))Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<wchar_t>>::~NativeString<Windows::Internal::CoTaskMemPolicy<wchar_t>>);
  StringRawBuffer = WindowsGetStringRawBuffer(a3, 0LL);
  v11 = CreativeFramework::LaunchCreativeHelpers::CreativeEventUriParser::Parse(
          (CreativeFramework::LaunchCreativeHelpers::CreativeEventUriParser *)v28,
          StringRawBuffer);
  v12 = v11;
  if ( v11 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x180,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
      (const char *)(unsigned int)v11);
    `eh vector destructor iterator'(
      v28,
      0x18uLL,
      17,
      (void (*)(void *))Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<wchar_t>>::~NativeString<Windows::Internal::CoTaskMemPolicy<wchar_t>>);
    return v12;
  }
  v14 = v29;
  v21 = v29;
  v15 = (const char *)&`CreativeFramework::LaunchCreativeHelpers::MapCreativeEventTypeToUriParamType'::`2'::c_mapCreativeEventTypeToUriParamType;
  while ( *(_DWORD *)v15 != a2 )
  {
    v15 += 8;
    if ( v15 == "onecore\\shell\\lib\\calleridentity\\calleridentity_capability.cpp" )
      goto LABEL_7;
  }
  if ( *((_DWORD *)v15 + 1) == -1 || (v22 = (const WCHAR *)v28[3 * *((int *)v15 + 1)]) == 0LL )
  {
LABEL_7:
    v16 = 0LL;
    goto LABEL_8;
  }
  v16 = *(HSTRING *)Windows::Internal::StringReference::StringReference((__int64)v24, &v22);
LABEL_8:
  if ( v14 )
    v17 = *(HSTRING *)Windows::Internal::StringReference::StringReference((__int64)v25, &v21);
  else
    v17 = 0LL;
  v21 = (const WCHAR *)v28[3];
  v18 = *(HSTRING *)Windows::Internal::StringReference::StringReference((__int64)v26, &v21);
  v21 = (const WCHAR *)v28[0];
  v19 = (HSTRING *)Windows::Internal::StringReference::StringReference((__int64)v27, &v21);
  v20 = ContentManagement::ContentManagementService::ProcessCreativeEventAsync(a1, a2, *v19, v18, v17, v16, a4, a5, v23);
  v12 = v20;
  if ( v20 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x18B,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
      (const char *)(unsigned int)v20);
    `eh vector destructor iterator'(
      v28,
      0x18uLL,
      17,
      (void (*)(void *))Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<wchar_t>>::~NativeString<Windows::Internal::CoTaskMemPolicy<wchar_t>>);
    return v12;
  }
  `eh vector destructor iterator'(
    v28,
    0x18uLL,
    17,
    (void (*)(void *))Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<wchar_t>>::~NativeString<Windows::Internal::CoTaskMemPolicy<wchar_t>>);
  return 0LL;
}
