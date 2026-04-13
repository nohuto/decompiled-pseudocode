/*
 * XREFs of ?Resolve@MRTHelperBase@ShellMRTHelper@@AEAAJW4MRTResolutionType@12@PEBGPEAPEAG@Z @ 0x1800DA118
 * Callers:
 *     ?RuntimeClassInitialize@ContentDeliveryManagerAppDisplayInfo@ApplicationModel@Extensions@Internal@Windows@@QEAAJPEBGPEAUIAppDisplayInfo@25@@Z @ 0x1800DA4C4 (-RuntimeClassInitialize@ContentDeliveryManagerAppDisplayInfo@ApplicationModel@Extensions@Interna.c)
 * Callees:
 *     __security_check_cookie @ 0x180021DB0 (__security_check_cookie.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180023E6C (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044570 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18006940C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Initialize@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_K@Z @ 0x1800842F0 (-_Initialize@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_.c)
 *     ?InitializeMRTObjects@MRTHelperBase@ShellMRTHelper@@AEAAJXZ @ 0x1800D9B84 (-InitializeMRTObjects@MRTHelperBase@ShellMRTHelper@@AEAAJXZ.c)
 *     ?TryRemoveImplicitResourcesPrefixFromShortenedMsResourceUri@Common@ShellMRTHelper@@YAJPEAUHSTRING__@@PEAPEAG@Z @ 0x1800DA6E4 (-TryRemoveImplicitResourcesPrefixFromShortenedMsResourceUri@Common@ShellMRTHelper@@YAJPEAUHSTRIN.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800ED700 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=17
__int64 __fastcall ShellMRTHelper::MRTHelperBase::Resolve(__int64 a1, __int64 a2, unsigned int a3, LPVOID *a4)
{
  __int64 v6; // rdx
  __int64 v7; // r8
  const char *v8; // r9
  int v9; // eax
  int v10; // ebx
  __int64 v11; // rdx
  LPVOID v13; // rax
  void *v14; // rcx
  __int64 v15; // rdx
  const WCHAR *StringRawBuffer; // rax
  __int64 v17; // rbx
  __int64 (__fastcall *v18)(__int64, _QWORD, const WCHAR *, LPVOID *); // r14
  unsigned __int16 **v19; // r8
  int v20; // r14d
  int v21; // eax
  void *v22; // rbx
  __int64 v23; // r14
  __int64 (__fastcall *v24)(__int64, _QWORD, void *, LPVOID *); // r12
  LPVOID pv; // [rsp+30h] [rbp-49h] BYREF
  __int64 v26; // [rsp+38h] [rbp-41h]
  __int64 v27; // [rsp+40h] [rbp-39h]
  UINT32 length[2]; // [rsp+50h] [rbp-29h] BYREF
  PWSTR ppszPathOut; // [rsp+60h] [rbp-19h] BYREF
  __int64 v30; // [rsp+68h] [rbp-11h]
  __int64 v31; // [rsp+70h] [rbp-9h]
  HSTRING_HEADER v32; // [rsp+78h] [rbp-1h] BYREF
  HSTRING string; // [rsp+90h] [rbp+17h]
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+5Fh]

  *(_QWORD *)length = L"ms-resource:ActionCenterGroupName";
  *a4 = 0LL;
  pv = 0LL;
  v26 = 0LL;
  v27 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v32, (const WCHAR **)length, a3);
  v9 = ShellMRTHelper::MRTHelperBase::InitializeMRTObjects((ShellMRTHelper::MRTHelperBase *)a1, v6, v7, v8);
  v10 = v9;
  if ( *(_BYTE *)(a1 + 46) && (unsigned int)(v9 + 2147024894) <= 1 )
  {
    ppszPathOut = 0LL;
    v30 = -1LL;
    v31 = -1LL;
    v10 = PathAllocCombine(*(PCWSTR *)(a1 + 72), L"ms-resource:ActionCenterGroupName", 0, &ppszPathOut);
    if ( v10 < 0 )
    {
      v11 = 313LL;
LABEL_5:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v11,
        (__int64)"internal\\shellcommondesktopbase\\inc\\tiles\\ShellMRTHelper.h",
        (const char *)(unsigned int)v10);
      if ( ppszPathOut )
      {
        LocalFree(ppszPathOut);
        ppszPathOut = 0LL;
      }
      v30 = 0LL;
      v31 = 0LL;
      goto LABEL_8;
    }
    v10 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Initialize(
            &pv,
            (__int64)ppszPathOut,
            0xFFFFFFFFFFFFFFFFuLL);
    if ( v10 < 0 )
    {
      v11 = 314LL;
      goto LABEL_5;
    }
    v13 = pv;
    v14 = 0LL;
    pv = 0LL;
    v27 = 0LL;
    v26 = 0LL;
    *a4 = v13;
    if ( ppszPathOut )
    {
      LocalFree(ppszPathOut);
      ppszPathOut = 0LL;
      v14 = pv;
    }
    v30 = 0LL;
    v31 = 0LL;
    string = 0LL;
    if ( v14 )
      CoTaskMemFree(v14);
    return 0LL;
  }
  if ( v9 >= 0 )
  {
    length[0] = 0;
    StringRawBuffer = WindowsGetStringRawBuffer(string, length);
    if ( length[0] >= 0xC && CompareStringOrdinal(StringRawBuffer, 12, L"ms-resource:", 12, 1) == 2 )
    {
      v17 = *(_QWORD *)(a1 + 8);
      v18 = *(__int64 (__fastcall **)(__int64, _QWORD, const WCHAR *, LPVOID *))(*(_QWORD *)v17 + 48LL);
      v26 = -1LL;
      v27 = -1LL;
      v20 = v18(v17, *(_QWORD *)(a1 + 16), L"ms-resource:ActionCenterGroupName", &pv);
      if ( v20 >= 0 )
        goto LABEL_41;
      *(_QWORD *)length = 0LL;
      v21 = ShellMRTHelper::Common::TryRemoveImplicitResourcesPrefixFromShortenedMsResourceUri(
              (ShellMRTHelper::Common *)string,
              (HSTRING)length,
              v19);
      v22 = *(void **)length;
      if ( v21 >= 0 )
      {
        if ( *(_QWORD *)length && **(_WORD **)length )
        {
          v23 = *(_QWORD *)(a1 + 8);
          v24 = *(__int64 (__fastcall **)(__int64, _QWORD, void *, LPVOID *))(*(_QWORD *)v23 + 48LL);
          if ( pv )
          {
            CoTaskMemFree(pv);
            pv = 0LL;
          }
          v26 = -1LL;
          v27 = -1LL;
          v20 = v24(v23, *(_QWORD *)(a1 + 16), v22, &pv);
        }
      }
      else
      {
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x184,
          (__int64)"internal\\shellcommondesktopbase\\inc\\tiles\\ShellMRTHelper.h",
          (const char *)(unsigned int)v21);
      }
      if ( v20 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x18B,
          (__int64)"internal\\shellcommondesktopbase\\inc\\tiles\\ShellMRTHelper.h",
          (const char *)(unsigned int)v20);
      if ( v22 )
        CoTaskMemFree(v22);
      if ( v20 >= 0 )
        goto LABEL_41;
    }
    if ( pv )
    {
      CoTaskMemFree(pv);
      pv = 0LL;
    }
    v26 = -1LL;
    v27 = -1LL;
    v10 = SHStrDupW(L"ms-resource:ActionCenterGroupName", (LPWSTR *)&pv);
    if ( v10 >= 0 )
    {
LABEL_41:
      *a4 = pv;
      return 0LL;
    }
    v15 = 448LL;
    goto LABEL_21;
  }
  if ( ((v9 + 2147024894) & 0xFFFFFFFC) != 0 || v9 == -2147024892 )
  {
    v15 = 320LL;
LABEL_21:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v15,
      (__int64)"internal\\shellcommondesktopbase\\inc\\tiles\\ShellMRTHelper.h",
      (const char *)(unsigned int)v10);
  }
LABEL_8:
  string = 0LL;
  if ( pv )
    CoTaskMemFree(pv);
  return (unsigned int)v10;
}
