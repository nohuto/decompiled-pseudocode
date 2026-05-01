/*
 * XREFs of ?_NormalizeAndAddPositionerArgs@SearchAppExperienceManager@@AEAAJPEAUHSTRING__@@PEAPEAU2@@Z @ 0x18038B7A8
 * Callers:
 *     ?Show@SearchAppExperienceManager@@UEAAJPEAUHSTRING__@@W4CortanaAppTransitionType@Experience@Shell@Internal@Windows@@@Z @ 0x18038A920 (-Show@SearchAppExperienceManager@@UEAAJPEAUHSTRING__@@W4CortanaAppTransitionType@Experience@Shel.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180095DF0 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?Set@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEAUHSTRING__@@@Z @ 0x1800A3750 (-Set@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEAUHSTRING__@@@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     memset_0 @ 0x180188F60 (memset_0.c)
 *     _alloca_probe @ 0x1801EAC80 (_alloca_probe.c)
 *     ?Set@HString@Wrappers@WRL@Microsoft@@QEAAJPEB_WI@Z @ 0x1802E77C4 (-Set@HString@Wrappers@WRL@Microsoft@@QEAAJPEB_WI@Z.c)
 *     ?StringCchCopyNW@@YAJPEA_W_KPEB_W1@Z @ 0x1802F0D60 (-StringCchCopyNW@@YAJPEA_W_KPEB_W1@Z.c)
 *     ??$?0$0ICE@@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEAY0ICE@G@Z @ 0x1803557D8 (--$-0$0ICE@@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEAY0ICE@G@Z.c)
 */

__int64 __fastcall SearchAppExperienceManager::_NormalizeAndAddPositionerArgs(
        SearchAppExperienceManager *this,
        HSTRING a2,
        HSTRING *a3)
{
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v6; // rdx
  PCWSTR StringRawBuffer; // rax
  const wchar_t *v8; // rbx
  UINT32 v9; // edi
  unsigned int v10; // r8d
  unsigned int v11; // r8d
  __int64 v12; // rax
  HRESULT v13; // eax
  HSTRING v14; // rcx
  HSTRING v15; // rax
  UINT32 length; // [rsp+20h] [rbp-E0h] BYREF
  HSTRING newString; // [rsp+28h] [rbp-D8h] BYREF
  HSTRING string1; // [rsp+30h] [rbp-D0h] BYREF
  HSTRING Reserved1; // [rsp+38h] [rbp-C8h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+40h] [rbp-C0h] BYREF
  wchar_t sourceString[2088]; // [rsp+60h] [rbp-A0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+10D8h] [rbp+FD8h]

  *a3 = 0LL;
  string1 = 0LL;
  Reserved1 = a2;
  if ( a2 )
  {
    length = 0;
    StringRawBuffer = WindowsGetStringRawBuffer(a2, &length);
    v8 = StringRawBuffer;
    if ( StringRawBuffer && length )
    {
      v9 = length - 1;
      if ( StringRawBuffer[length - 1] == 47 )
      {
        memset_0(sourceString, 0, 0x1048uLL);
        v4 = StringCchCopyNW(sourceString, 2084LL, v8, v9);
        v5 = v4;
        if ( v4 < 0 )
        {
          v6 = 767LL;
          goto LABEL_13;
        }
        Reserved1 = (HSTRING)Microsoft::WRL::Wrappers::HStringReference::HStringReference(
                               &hstringHeader,
                               sourceString,
                               v10)[1].Reserved.Reserved1;
        v4 = Microsoft::WRL::Wrappers::HString::Set(&string1, &Reserved1);
        v5 = v4;
        if ( v4 < 0 )
        {
          v6 = 768LL;
          goto LABEL_13;
        }
      }
      else
      {
        v4 = Microsoft::WRL::Wrappers::HString::Set(&string1, &Reserved1);
        v5 = v4;
        if ( v4 < 0 )
        {
          v6 = 772LL;
          goto LABEL_13;
        }
      }
    }
  }
  else
  {
    v4 = Microsoft::WRL::Wrappers::HString::Set(&string1, L"StartMode=MergedHome", 0x14u);
    v5 = v4;
    if ( v4 < 0 )
    {
      v6 = 755LL;
LABEL_13:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v6,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\searchappexperiencemanager.cpp",
        (const char *)(unsigned int)v4);
      goto LABEL_18;
    }
  }
  Reserved1 = (HSTRING)L"&Positioner=desktop";
  WindowsDeleteString(0LL);
  newString = 0LL;
  v12 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
          (__int64)&hstringHeader,
          (const WCHAR **)&Reserved1,
          v11);
  v13 = WindowsConcatString(string1, *(HSTRING *)(v12 + 24), &newString);
  v5 = v13;
  if ( v13 >= 0 )
  {
    v15 = newString;
    v14 = 0LL;
    newString = 0LL;
    v5 = 0;
    *a3 = v15;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x30C,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\searchappexperiencemanager.cpp",
      (const char *)(unsigned int)v13);
    v14 = newString;
  }
  WindowsDeleteString(v14);
  newString = 0LL;
LABEL_18:
  WindowsDeleteString(string1);
  return v5;
}
