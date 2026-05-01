/*
 * XREFs of ?ConvertMsAppXUriToMsResourceUri@Common@ShellMRTHelper@@YAJPEAUIUriRuntimeClass@Foundation@Windows@@PEAPEAG@Z @ 0x180741E8C
 * Callers:
 *     ?ConvertMsAppXUriToMsResourceUri@Common@ShellMRTHelper@@YAJPEAUHSTRING__@@PEAPEAG@Z @ 0x180741D44 (-ConvertMsAppXUriToMsResourceUri@Common@ShellMRTHelper@@YAJPEAUHSTRING__@@PEAPEAG@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Initialize@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_K@Z @ 0x18015423C (-_Initialize@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18016270C (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_Concat@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_K@Z @ 0x1802D0A2E (-_Concat@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_K@Z.c)
 */

__int64 __fastcall ShellMRTHelper::Common::ConvertMsAppXUriToMsResourceUri(
        ShellMRTHelper::Common *this,
        struct Windows::Foundation::IUriRuntimeClass *a2,
        unsigned __int16 **a3)
{
  __int64 (__fastcall *v5)(ShellMRTHelper::Common *, HSTRING *); // rbx
  int v6; // eax
  unsigned int v7; // ebx
  char *StringRawBuffer; // r14
  __int64 (__fastcall *v9)(ShellMRTHelper::Common *, HSTRING *); // rbx
  int v10; // eax
  char *v11; // r15
  __int64 (__fastcall *v12)(ShellMRTHelper::Common *, HSTRING *); // rbx
  int v13; // eax
  char *v14; // rdi
  int v15; // eax
  __int64 v16; // rdx
  HSTRING v18; // [rsp+20h] [rbp-38h] BYREF
  HSTRING v19; // [rsp+28h] [rbp-30h] BYREF
  HSTRING string; // [rsp+30h] [rbp-28h] BYREF
  __int64 v21; // [rsp+38h] [rbp-20h] BYREF
  __int64 v22; // [rsp+40h] [rbp-18h]
  __int64 v23; // [rsp+48h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+40h]
  int v25; // [rsp+A0h] [rbp+48h] BYREF
  UINT32 v26; // [rsp+A8h] [rbp+50h] BYREF
  UINT32 length; // [rsp+B0h] [rbp+58h] BYREF
  UINT32 v28; // [rsp+B8h] [rbp+60h] BYREF

  *(_QWORD *)a2 = 0LL;
  v5 = *(__int64 (__fastcall **)(ShellMRTHelper::Common *, HSTRING *))(*(_QWORD *)this + 104LL);
  WindowsDeleteString(0LL);
  string = 0LL;
  v6 = v5(this, &string);
  v7 = v6;
  if ( v6 >= 0 )
  {
    StringRawBuffer = (char *)WindowsGetStringRawBuffer(string, &length);
    v9 = *(__int64 (__fastcall **)(ShellMRTHelper::Common *, HSTRING *))(*(_QWORD *)this + 112LL);
    WindowsDeleteString(0LL);
    v19 = 0LL;
    v10 = v9(this, &v19);
    v7 = v10;
    if ( v10 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x6E,
        (int)"ShellCommonDesktopBase\\Internal\\ShellCommonDesktopBase\\Inc\\tiles\\ShellMRTHelper.Common.h",
        (const char *)(unsigned int)v10);
LABEL_29:
      WindowsDeleteString(v19);
      v19 = 0LL;
      goto LABEL_30;
    }
    v11 = (char *)WindowsGetStringRawBuffer(v19, &v28);
    v12 = *(__int64 (__fastcall **)(ShellMRTHelper::Common *, HSTRING *))(*(_QWORD *)this + 88LL);
    WindowsDeleteString(0LL);
    v18 = 0LL;
    v13 = v12(this, &v18);
    v7 = v13;
    if ( v13 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x74,
        (int)"ShellCommonDesktopBase\\Internal\\ShellCommonDesktopBase\\Inc\\tiles\\ShellMRTHelper.Common.h",
        (const char *)(unsigned int)v13);
LABEL_28:
      WindowsDeleteString(v18);
      v18 = 0LL;
      goto LABEL_29;
    }
    v14 = (char *)WindowsGetStringRawBuffer(v18, &v26);
    v21 = 0LL;
    v22 = 0LL;
    v23 = 0LL;
    v15 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Initialize(
            (__int64)&v21,
            L"ms-resource:",
            length + 20 + v28 + v26);
    v7 = v15;
    if ( v15 >= 0 )
    {
      v25 = 47;
      v15 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Concat(
              &v21,
              (char *)&v25,
              1uLL);
      v7 = v15;
      if ( v15 >= 0 )
      {
        v25 = 47;
        v15 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Concat(
                &v21,
                (char *)&v25,
                1uLL);
        v7 = v15;
        if ( v15 >= 0 )
        {
          if ( v26
            && (v15 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Concat(
                        &v21,
                        v14,
                        v26),
                v7 = v15,
                v15 < 0) )
          {
            v16 = 131LL;
          }
          else
          {
            v25 = 47;
            v15 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Concat(
                    &v21,
                    (char *)&v25,
                    1uLL);
            v7 = v15;
            if ( v15 >= 0 )
            {
              v15 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Concat(
                      &v21,
                      (char *)L"files",
                      5uLL);
              v7 = v15;
              if ( v15 >= 0 )
              {
                v15 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Concat(
                        &v21,
                        StringRawBuffer,
                        length);
                v7 = v15;
                if ( v15 >= 0 )
                {
                  if ( !v28
                    || (v15 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Concat(
                                &v21,
                                v11,
                                v28),
                        v7 = v15,
                        v15 >= 0) )
                  {
                    v7 = 0;
                    *(_QWORD *)a2 = v21;
                    v21 = 0LL;
                    v23 = 0LL;
                    v22 = 0LL;
                    goto LABEL_27;
                  }
                  v16 = 143LL;
                }
                else
                {
                  v16 = 138LL;
                }
              }
              else
              {
                v16 = 135LL;
              }
            }
            else
            {
              v16 = 134LL;
            }
          }
        }
        else
        {
          v16 = 127LL;
        }
      }
      else
      {
        v16 = 126LL;
      }
    }
    else
    {
      v16 = 125LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v16,
      (int)"ShellCommonDesktopBase\\Internal\\ShellCommonDesktopBase\\Inc\\tiles\\ShellMRTHelper.Common.h",
      (const char *)(unsigned int)v15);
LABEL_27:
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v21);
    goto LABEL_28;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x68,
    (int)"ShellCommonDesktopBase\\Internal\\ShellCommonDesktopBase\\Inc\\tiles\\ShellMRTHelper.Common.h",
    (const char *)(unsigned int)v6);
LABEL_30:
  WindowsDeleteString(string);
  return v7;
}
