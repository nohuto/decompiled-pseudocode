/*
 * XREFs of ?ConvertMsAppXUriToMsResourceUri@Common@ShellMRTHelper@@YAJPEAUIUriRuntimeClass@Foundation@Windows@@PEAPEAG@Z @ 0x1805EAE90
 * Callers:
 *     ?ConvertMsAppXUriToMsResourceUri@Common@ShellMRTHelper@@YAJPEAUHSTRING__@@PEAPEAG@Z @ 0x1805EAD48 (-ConvertMsAppXUriToMsResourceUri@Common@ShellMRTHelper@@YAJPEAUHSTRING__@@PEAPEAG@Z.c)
 * Callees:
 *     ?_EnsureCapacity@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJ_K@Z @ 0x18008D0C0 (-_EnsureCapacity@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJ_.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18010FD6C (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_Concat@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_K@Z @ 0x1802FB4F4 (-_Concat@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_K@Z.c)
 */

__int64 __fastcall ShellMRTHelper::Common::ConvertMsAppXUriToMsResourceUri(
        ShellMRTHelper::Common *this,
        struct Windows::Foundation::IUriRuntimeClass *a2,
        unsigned __int16 **a3)
{
  __int64 (__fastcall *v5)(ShellMRTHelper::Common *, HSTRING *); // rbx
  int v6; // eax
  unsigned int v7; // ebx
  const wchar_t *StringRawBuffer; // r12
  __int64 (__fastcall *v9)(ShellMRTHelper::Common *, HSTRING *); // rbx
  int v10; // eax
  const wchar_t *v11; // r13
  __int64 (__fastcall *v12)(ShellMRTHelper::Common *, HSTRING *); // rbx
  int v13; // eax
  __int64 v14; // rdi
  const wchar_t *v15; // r15
  unsigned __int64 v16; // rsi
  int v17; // eax
  unsigned __int64 v18; // rdx
  _WORD *v19; // rax
  _WORD *v20; // rcx
  signed __int64 v21; // r9
  unsigned __int64 v22; // r8
  __int16 v23; // ax
  int v24; // eax
  __int64 v25; // rdx
  HSTRING v27; // [rsp+20h] [rbp-38h] BYREF
  HSTRING v28; // [rsp+28h] [rbp-30h] BYREF
  HSTRING string; // [rsp+30h] [rbp-28h] BYREF
  _BYTE *v30; // [rsp+38h] [rbp-20h] BYREF
  __int64 v31; // [rsp+40h] [rbp-18h]
  __int64 v32; // [rsp+48h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+40h]
  int v34; // [rsp+A0h] [rbp+48h] BYREF
  UINT32 v35; // [rsp+A8h] [rbp+50h] BYREF
  UINT32 length; // [rsp+B0h] [rbp+58h] BYREF
  UINT32 v37; // [rsp+B8h] [rbp+60h] BYREF

  *(_QWORD *)a2 = 0LL;
  v5 = *(__int64 (__fastcall **)(ShellMRTHelper::Common *, HSTRING *))(*(_QWORD *)this + 104LL);
  WindowsDeleteString(0LL);
  string = 0LL;
  v6 = v5(this, &string);
  v7 = v6;
  if ( v6 >= 0 )
  {
    StringRawBuffer = WindowsGetStringRawBuffer(string, &length);
    v9 = *(__int64 (__fastcall **)(ShellMRTHelper::Common *, HSTRING *))(*(_QWORD *)this + 112LL);
    WindowsDeleteString(0LL);
    v28 = 0LL;
    v10 = v9(this, &v28);
    v7 = v10;
    if ( v10 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x6E,
        (__int64)"internal\\shellcommondesktopbase\\inc\\tiles\\ShellMRTHelper.Common.h",
        (const char *)(unsigned int)v10);
LABEL_39:
      WindowsDeleteString(v28);
      v28 = 0LL;
      goto LABEL_40;
    }
    v11 = WindowsGetStringRawBuffer(v28, &v37);
    v12 = *(__int64 (__fastcall **)(ShellMRTHelper::Common *, HSTRING *))(*(_QWORD *)this + 88LL);
    WindowsDeleteString(0LL);
    v27 = 0LL;
    v13 = v12(this, &v27);
    v7 = v13;
    if ( v13 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x74,
        (__int64)"internal\\shellcommondesktopbase\\inc\\tiles\\ShellMRTHelper.Common.h",
        (const char *)(unsigned int)v13);
LABEL_38:
      WindowsDeleteString(v27);
      v27 = 0LL;
      goto LABEL_39;
    }
    v14 = 12LL;
    v15 = WindowsGetStringRawBuffer(v27, &v35);
    v30 = 0LL;
    v31 = 0LL;
    v32 = 0LL;
    v16 = v37 + v35 + length + 20;
    if ( v16 < 0xC )
      v14 = (unsigned int)v16;
    v17 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_EnsureCapacity(
            (LPVOID *)&v30,
            v37 + v35 + length + 20);
    v7 = v17;
    if ( v17 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x7D,
        (__int64)"internal\\shellcommondesktopbase\\inc\\tiles\\ShellMRTHelper.Common.h",
        (const char *)(unsigned int)v17);
      goto LABEL_37;
    }
    v18 = v16 + 1;
    if ( v16 + 1 <= 0x7FFFFFFF )
    {
      v20 = v30;
      v21 = (char *)L"ms-resource:" - v30;
      v22 = v14 - v18;
      do
      {
        if ( !(v22 + v18) )
          break;
        v23 = *(_WORD *)((char *)v20 + v21);
        if ( !v23 )
          break;
        *v20++ = v23;
        --v18;
      }
      while ( v18 );
      v19 = v20 - 1;
      if ( v18 )
        v19 = v20;
    }
    else
    {
      v19 = v30;
    }
    *v19 = 0;
    v31 = v14;
    v34 = 47;
    v24 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Concat(
            &v30,
            (const wchar_t *)&v34,
            1uLL);
    v7 = v24;
    if ( v24 >= 0 )
    {
      v34 = 47;
      v24 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Concat(
              &v30,
              (const wchar_t *)&v34,
              1uLL);
      v7 = v24;
      if ( v24 >= 0 )
      {
        if ( v35
          && (v24 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Concat(
                      &v30,
                      v15,
                      v35),
              v7 = v24,
              v24 < 0) )
        {
          v25 = 131LL;
        }
        else
        {
          v34 = 47;
          v24 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Concat(
                  &v30,
                  (const wchar_t *)&v34,
                  1uLL);
          v7 = v24;
          if ( v24 >= 0 )
          {
            v24 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Concat(
                    &v30,
                    L"files",
                    5uLL);
            v7 = v24;
            if ( v24 >= 0 )
            {
              v24 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Concat(
                      &v30,
                      StringRawBuffer,
                      length);
              v7 = v24;
              if ( v24 >= 0 )
              {
                if ( !v37
                  || (v24 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Concat(
                              &v30,
                              v11,
                              v37),
                      v7 = v24,
                      v24 >= 0) )
                {
                  v7 = 0;
                  *(_QWORD *)a2 = v30;
                  v30 = 0LL;
                  v32 = 0LL;
                  v31 = 0LL;
                  goto LABEL_37;
                }
                v25 = 143LL;
              }
              else
              {
                v25 = 138LL;
              }
            }
            else
            {
              v25 = 135LL;
            }
          }
          else
          {
            v25 = 134LL;
          }
        }
      }
      else
      {
        v25 = 127LL;
      }
    }
    else
    {
      v25 = 126LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v25,
      (__int64)"internal\\shellcommondesktopbase\\inc\\tiles\\ShellMRTHelper.Common.h",
      (const char *)(unsigned int)v24);
LABEL_37:
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v30);
    goto LABEL_38;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x68,
    (__int64)"internal\\shellcommondesktopbase\\inc\\tiles\\ShellMRTHelper.Common.h",
    (const char *)(unsigned int)v6);
LABEL_40:
  WindowsDeleteString(string);
  return v7;
}
