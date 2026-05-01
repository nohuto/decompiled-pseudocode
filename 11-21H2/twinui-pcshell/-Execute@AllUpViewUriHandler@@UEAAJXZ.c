/*
 * XREFs of ?Execute@AllUpViewUriHandler@@UEAAJXZ @ 0x180493D80
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIWICBitmapEncoder@@@WRL@Microsoft@@IEAAKXZ @ 0x1800406B0 (-InternalRelease@-$ComPtr@UIWICBitmapEncoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1?$unique_storage@U?$resource_policy@PEA_WP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEA_WPEA_W$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x180064078 (--1-$unique_storage@U-$resource_policy@PEA_WP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_consta.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x180178FD0 (-InternalRelease@-$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?ParseFlagsFromUriPath@AllUpViewUriHandler@@AEAAJPEBGPEAW4ALL_UP_VIEW_FLAGS@@@Z @ 0x180493F7C (-ParseFlagsFromUriPath@AllUpViewUriHandler@@AEAAJPEBGPEAW4ALL_UP_VIEW_FLAGS@@@Z.c)
 *     ?ShowAllUpView@AllUpViewUriHandler@@AEAAJW4ALL_UP_VIEW_FLAGS@@@Z @ 0x180494474 (-ShowAllUpView@AllUpViewUriHandler@@AEAAJW4ALL_UP_VIEW_FLAGS@@@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall AllUpViewUriHandler::Execute(AllUpViewUriHandler *this)
{
  __int64 v1; // rdi
  unsigned int v2; // ebx
  __int64 (__fastcall *v3)(__int64, _QWORD, _QWORD); // rbx
  int v4; // eax
  __int64 (__fastcall ***v5)(_QWORD, _QWORD, _QWORD); // rbx
  __int64 (__fastcall *v6)(_QWORD, GUID *, __int64 **); // rdi
  int v7; // eax
  __int64 v8; // rax
  int v9; // eax
  AllUpViewUriHandler *v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+18h]
  unsigned int v15; // [rsp+40h] [rbp+20h] BYREF
  unsigned __int16 *v16; // [rsp+48h] [rbp+28h] BYREF
  __int64 *v17; // [rsp+50h] [rbp+30h] BYREF
  __int64 (__fastcall ***v18)(_QWORD, GUID *, __int64 **); // [rsp+58h] [rbp+38h] BYREF

  v1 = *((_QWORD *)this + 3);
  if ( v1 )
  {
    v18 = 0LL;
    v3 = *(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v1 + 64LL);
    Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)&v18);
    v4 = v3(v1, 0LL, &v18);
    v2 = v4;
    if ( v4 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x30,
        (__int64)"pcshell\\twinui\\multitaskingview\\lib\\allupviewurihandler.cpp",
        (const char *)(unsigned int)v4);
LABEL_17:
      Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)&v18);
      return v2;
    }
    v17 = 0LL;
    v5 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v18;
    v6 = **v18;
    Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&v17);
    v7 = v6(v5, &GUID_7e9fb0d3_919f_4307_ab2e_9b1860310c93, &v17);
    v2 = v7;
    if ( v7 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x33,
        (__int64)"pcshell\\twinui\\multitaskingview\\lib\\allupviewurihandler.cpp",
        (const char *)(unsigned int)v7);
LABEL_16:
      Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&v17);
      goto LABEL_17;
    }
    v16 = 0LL;
    v8 = *v17;
    v16 = 0LL;
    v9 = (*(__int64 (__fastcall **)(__int64 *, __int64, unsigned __int16 **))(v8 + 40))(v17, 2147909632LL, &v16);
    v2 = v9;
    if ( v9 >= 0 )
    {
      v9 = AllUpViewUriHandler::ParseFlagsFromUriPath(v10, v16, (enum ALL_UP_VIEW_FLAGS *)&v15);
      v2 = v9;
      if ( v9 >= 0 )
      {
        v9 = AllUpViewUriHandler::ShowAllUpView(v12, v15);
        v2 = v9;
        if ( v9 >= 0 )
        {
          v2 = 0;
          goto LABEL_15;
        }
        v11 = 58LL;
      }
      else
      {
        v11 = 57LL;
      }
    }
    else
    {
      v11 = 54LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\allupviewurihandler.cpp",
      (const char *)(unsigned int)v9);
LABEL_15:
    wil::details::unique_storage<wil::details::resource_policy<wchar_t *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,wchar_t *,wchar_t *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<wchar_t *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,wchar_t *,wchar_t *,0,std::nullptr_t>>((void **)&v16);
    goto LABEL_16;
  }
  v2 = -2147418113;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x2D,
    (__int64)"pcshell\\twinui\\multitaskingview\\lib\\allupviewurihandler.cpp",
    (const char *)0x8000FFFFLL);
  return v2;
}
