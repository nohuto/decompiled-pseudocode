/*
 * XREFs of ?_NormalizeAndAddPositionerArgs@CortanaSharedExperienceManager@@AEAAJPEAUHSTRING__@@PEAUIShellExperiencePositioner@Experience@Shell@Internal@Windows@@PEAPEAU2@@Z @ 0x18035DB30
 * Callers:
 *     ?Show@CortanaSharedExperienceManager@@UEAAJPEAUHSTRING__@@W4CortanaAppTransitionType@Experience@Shell@Internal@Windows@@@Z @ 0x18035B6A0 (-Show@CortanaSharedExperienceManager@@UEAAJPEAUHSTRING__@@W4CortanaAppTransitionType@Experience@.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180095DF0 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?Set@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEAUHSTRING__@@@Z @ 0x1800A3750 (-Set@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEAUHSTRING__@@@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     memset_0 @ 0x180188F60 (memset_0.c)
 *     _alloca_probe @ 0x1801EAC80 (_alloca_probe.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Set@HString@Wrappers@WRL@Microsoft@@QEAAJPEB_WI@Z @ 0x1802E77C4 (-Set@HString@Wrappers@WRL@Microsoft@@QEAAJPEB_WI@Z.c)
 *     ?StringCchCopyNW@@YAJPEA_W_KPEB_W1@Z @ 0x1802F0D60 (-StringCchCopyNW@@YAJPEA_W_KPEB_W1@Z.c)
 *     ??$?0$0ICE@@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEAY0ICE@G@Z @ 0x1803557D8 (--$-0$0ICE@@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEAY0ICE@G@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CortanaSharedExperienceManager::_NormalizeAndAddPositionerArgs(
        CortanaSharedExperienceManager *this,
        HSTRING a2,
        struct Windows::Internal::Shell::Experience::IShellExperiencePositioner *a3,
        HSTRING *a4)
{
  int v6; // eax
  unsigned int v7; // ebx
  __int64 v8; // rdx
  PCWSTR StringRawBuffer; // rax
  const wchar_t *v10; // rbx
  UINT32 v11; // edi
  unsigned int v12; // r8d
  unsigned int v13; // r8d
  __int64 v14; // rax
  HRESULT v15; // eax
  HSTRING v16; // rcx
  HSTRING v17; // rax
  UINT32 length[2]; // [rsp+20h] [rbp-E0h] BYREF
  int v20; // [rsp+28h] [rbp-D8h] BYREF
  HSTRING newString; // [rsp+30h] [rbp-D0h] BYREF
  HSTRING string1; // [rsp+38h] [rbp-C8h] BYREF
  HSTRING Reserved1; // [rsp+40h] [rbp-C0h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+48h] [rbp-B8h] BYREF
  wchar_t sourceString[2088]; // [rsp+70h] [rbp-90h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+10F8h] [rbp+FF8h]

  Reserved1 = a2;
  *a4 = 0LL;
  string1 = 0LL;
  if ( a2 )
  {
    length[0] = 0;
    StringRawBuffer = WindowsGetStringRawBuffer(a2, length);
    v10 = StringRawBuffer;
    if ( StringRawBuffer && length[0] )
    {
      v11 = length[0] - 1;
      if ( StringRawBuffer[length[0] - 1] == 47 )
      {
        memset_0(sourceString, 0, 0x1048uLL);
        v6 = StringCchCopyNW(sourceString, 2084LL, v10, v11);
        v7 = v6;
        if ( v6 < 0 )
        {
          v8 = 854LL;
          goto LABEL_15;
        }
        Reserved1 = (HSTRING)Microsoft::WRL::Wrappers::HStringReference::HStringReference(
                               &hstringHeader,
                               sourceString,
                               v12)[1].Reserved.Reserved1;
        v6 = Microsoft::WRL::Wrappers::HString::Set(&string1, &Reserved1);
        v7 = v6;
        if ( v6 < 0 )
        {
          v8 = 855LL;
          goto LABEL_15;
        }
      }
      else
      {
        v6 = Microsoft::WRL::Wrappers::HString::Set(&string1, &Reserved1);
        v7 = v6;
        if ( v6 < 0 )
        {
          v8 = 859LL;
          goto LABEL_15;
        }
      }
    }
  }
  else
  {
    v6 = Microsoft::WRL::Wrappers::HString::Set(&string1, L"StartMode=Proactive", 0x13u);
    v7 = v6;
    if ( v6 < 0 )
    {
      v8 = 842LL;
LABEL_15:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v8,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanasharedexperiencemanager.cpp",
        (const char *)(unsigned int)v6);
      goto LABEL_22;
    }
  }
  v20 = 0;
  v6 = (*(__int64 (__fastcall **)(struct Windows::Internal::Shell::Experience::IShellExperiencePositioner *, int *))(*(_QWORD *)a3 + 48LL))(
         a3,
         &v20);
  v7 = v6;
  if ( v6 < 0 )
  {
    v8 = 866LL;
    goto LABEL_15;
  }
  *(_QWORD *)length = 0LL;
  if ( v20 == 1 )
    *(_QWORD *)length = L"&Positioner=desktop";
  WindowsDeleteString(0LL);
  newString = 0LL;
  v14 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
          (__int64)&hstringHeader,
          (const WCHAR **)length,
          v13);
  v15 = WindowsConcatString(string1, *(HSTRING *)(v14 + 24), &newString);
  v7 = v15;
  if ( v15 >= 0 )
  {
    v17 = newString;
    v16 = 0LL;
    newString = 0LL;
    *a4 = v17;
    v7 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x36B,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanasharedexperiencemanager.cpp",
      (const char *)(unsigned int)v15);
    v16 = newString;
  }
  WindowsDeleteString(v16);
  newString = 0LL;
LABEL_22:
  WindowsDeleteString(string1);
  return v7;
}
