/*
 * XREFs of ?_NormalizeAndAddPositionerArgs@SearchAppExperienceManager@@AEAAJPEAUHSTRING__@@PEAPEAU2@@Z @ 0x18045F6E0
 * Callers:
 *     ?Show@SearchAppExperienceManager@@UEAAJPEAUHSTRING__@@W4CortanaAppTransitionType@Experience@Shell@Internal@Windows@@@Z @ 0x18045E840 (-Show@SearchAppExperienceManager@@UEAAJPEAUHSTRING__@@W4CortanaAppTransitionType@Experience@Shel.c)
 * Callees:
 *     ?Set@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEAUHSTRING__@@@Z @ 0x18009742C (-Set@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEAUHSTRING__@@@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18009ACBC (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?StringCchCopyNW@@YAJPEAG_KPEBG1@Z @ 0x1801542E4 (-StringCchCopyNW@@YAJPEAG_KPEBG1@Z.c)
 *     ?Set@HString@Wrappers@WRL@Microsoft@@QEAAJPEB_WI@Z @ 0x180192B24 (-Set@HString@Wrappers@WRL@Microsoft@@QEAAJPEB_WI@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     memset_0 @ 0x1801C750C (memset_0.c)
 *     _alloca_probe @ 0x18028E130 (_alloca_probe.c)
 *     ??$?0$0ICE@@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEAY0ICE@G@Z @ 0x1804279F0 (--$-0$0ICE@@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEAY0ICE@G@Z.c)
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
  char *v8; // rbx
  UINT32 v9; // edi
  unsigned int v10; // r8d
  unsigned int v11; // r8d
  HSTRING_HEADER *v12; // rax
  HRESULT v13; // eax
  HSTRING v14; // rcx
  HSTRING v15; // rax
  UINT32 length; // [rsp+20h] [rbp-E0h] BYREF
  HSTRING newString; // [rsp+28h] [rbp-D8h] BYREF
  HSTRING string1; // [rsp+30h] [rbp-D0h] BYREF
  HSTRING Reserved1; // [rsp+38h] [rbp-C8h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+40h] [rbp-C0h] BYREF
  WCHAR sourceString[2088]; // [rsp+60h] [rbp-A0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+10D8h] [rbp+FD8h]

  *a3 = 0LL;
  string1 = 0LL;
  Reserved1 = a2;
  if ( a2 )
  {
    length = 0;
    StringRawBuffer = WindowsGetStringRawBuffer(a2, &length);
    v8 = (char *)StringRawBuffer;
    if ( StringRawBuffer && length )
    {
      v9 = length - 1;
      if ( StringRawBuffer[length - 1] == 47 )
      {
        memset_0(sourceString, 0, 0x1048uLL);
        v4 = StringCchCopyNW((char *)sourceString, 2084LL, v8, v9);
        v5 = v4;
        if ( v4 < 0 )
        {
          v6 = 785LL;
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
          v6 = 786LL;
          goto LABEL_13;
        }
      }
      else
      {
        v4 = Microsoft::WRL::Wrappers::HString::Set(&string1, &Reserved1);
        v5 = v4;
        if ( v4 < 0 )
        {
          v6 = 790LL;
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
      v6 = 773LL;
LABEL_13:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v6,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\searchappexperiencemanager.cpp",
        (const char *)(unsigned int)v4);
      goto LABEL_18;
    }
  }
  Reserved1 = (HSTRING)L"&Positioner=desktop";
  WindowsDeleteString(0LL);
  newString = 0LL;
  v12 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&hstringHeader, (const WCHAR **)&Reserved1, v11);
  v13 = WindowsConcatString(string1, (HSTRING)v12[1].Reserved.Reserved1, &newString);
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
      (void *)0x31E,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\searchappexperiencemanager.cpp",
      (const char *)(unsigned int)v13);
    v14 = newString;
  }
  WindowsDeleteString(v14);
  newString = 0LL;
LABEL_18:
  WindowsDeleteString(string1);
  return v5;
}
