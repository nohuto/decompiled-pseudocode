/*
 * XREFs of ??R_lambda_bf9d513e4c6136759dbf9bac0840c80c_@@QEBAJAEA_N@Z @ 0x1800FD914
 * Callers:
 *     ?IsShellLauncherEnabledForCurrentUser@@YA_NXZ @ 0x1800FD8E0 (-IsShellLauncherEnabledForCurrentUser@@YA_NXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x180040860 (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x1802E6814 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall _lambda_bf9d513e4c6136759dbf9bac0840c80c_::operator()(__int64 a1, _BYTE *a2)
{
  HRESULT v3; // eax
  int v4; // edx
  unsigned int v5; // r8d
  HSTRING v6; // rbx
  int v7; // ebx
  __int64 v8; // rcx
  __int64 v10; // rax
  int v11; // eax
  __int64 v12; // rbx
  __int64 (__fastcall *v13)(__int64, _QWORD, _QWORD); // rdi
  int v14; // eax
  void (__fastcall ***v15)(_QWORD, _QWORD, _QWORD); // rbx
  void (__fastcall *v16)(_QWORD, GUID *, __int64 *); // rdi
  int v17; // eax
  char v18; // [rsp+20h] [rbp-50h] BYREF
  _BYTE v19[7]; // [rsp+21h] [rbp-4Fh] BYREF
  __int64 v20; // [rsp+28h] [rbp-48h] BYREF
  __int64 v21; // [rsp+30h] [rbp-40h] BYREF
  void (__fastcall ***v22)(_QWORD, GUID *, __int64 *); // [rsp+38h] [rbp-38h] BYREF
  __int64 v23; // [rsp+40h] [rbp-30h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+48h] [rbp-28h] BYREF
  HSTRING string; // [rsp+60h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+8h]

  v20 = 0LL;
  string = 0LL;
  v3 = WindowsCreateStringReference(
         L"Windows.Internal.Shell.ShellLauncher.ShellLauncherManager",
         0x39u,
         &hstringHeader,
         &string);
  if ( v3 < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v3, v4, v5);
    JUMPOUT(0x1800FD9DBLL);
  }
  v6 = string;
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v20);
  v20 = 0LL;
  v7 = RoActivateInstance(v6, &v23);
  if ( v7 < 0 )
    goto LABEL_3;
  v10 = *(_QWORD *)&GUID_aefd68fb_80b4_4031_ba93_14b27c7fdab2.Data1
      - *(_QWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data1;
  if ( *(_QWORD *)&GUID_aefd68fb_80b4_4031_ba93_14b27c7fdab2.Data1 == *(_QWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data1 )
    v10 = *(_QWORD *)GUID_aefd68fb_80b4_4031_ba93_14b27c7fdab2.Data4
        - *(_QWORD *)GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4;
  v8 = v23;
  if ( v10 )
  {
    v7 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))v23)(
           v23,
           &GUID_aefd68fb_80b4_4031_ba93_14b27c7fdab2,
           &v20);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
LABEL_3:
    v8 = v20;
    goto LABEL_4;
  }
  v20 = v23;
LABEL_4:
  if ( v7 >= 0 )
  {
    v18 = 0;
    v11 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v8 + 56LL))(v8, &v18);
    v7 = v11;
    if ( v11 >= 0 )
    {
      if ( v18 )
      {
        v22 = 0LL;
        v12 = v20;
        v13 = *(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v20 + 48LL);
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v22);
        v14 = v13(v12, 0LL, &v22);
        v7 = v14;
        if ( v14 >= 0 )
        {
          v15 = (void (__fastcall ***)(_QWORD, _QWORD, _QWORD))v22;
          if ( v22 )
          {
            v21 = 0LL;
            v16 = **v22;
            Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v21);
            v16(v15, &GUID_6ac643cc_a2fb_4acd_af83_309fba378992, &v21);
            if ( v21 )
            {
              v17 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v21 + 48LL))(v21, v19);
              v7 = v17;
              if ( v17 >= 0 )
              {
                if ( !v19[0] )
                  *a2 = 1;
                v7 = 0;
              }
              else
              {
                wil::details::in1diag3::Return_Hr(
                  retaddr,
                  (void *)0x29,
                  (__int64)"internal\\shellcommondesktopbase\\inc\\devicelockdownhelpers.h",
                  (const char *)(unsigned int)v17);
              }
            }
            else
            {
              v7 = -2147024882;
            }
            Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v21);
          }
          else
          {
            v7 = -2147024882;
          }
        }
        else
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x23,
            (__int64)"internal\\shellcommondesktopbase\\inc\\devicelockdownhelpers.h",
            (const char *)(unsigned int)v14);
        }
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v22);
      }
      else
      {
        *a2 = 0;
        v7 = 0;
      }
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1C,
        (__int64)"internal\\shellcommondesktopbase\\inc\\devicelockdownhelpers.h",
        (const char *)(unsigned int)v11);
    }
  }
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v20);
  return (unsigned int)v7;
}
