/*
 * XREFs of ?Execute@AllUpViewUriHandler@@UEAAJXZ @ 0x180549980
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIWICBitmapEncoder@@@WRL@Microsoft@@IEAAKXZ @ 0x18006F258 (-InternalRelease@-$ComPtr@UIWICBitmapEncoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?put@?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAAPEAPEAGXZ @ 0x180163C70 (-put@-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$As@UIShellItem2@@@?$ComPtr@UIShellItem@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIShellItem2@@@WRL@Microsoft@@@Details@12@@Z @ 0x180549498 (--$As@UIShellItem2@@@-$ComPtr@UIShellItem@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UIShellIt.c)
 *     ?ParseFlagsFromUriPath@AllUpViewUriHandler@@AEAAJPEBGPEAW4ALL_UP_VIEW_FLAGS@@@Z @ 0x180549B6C (-ParseFlagsFromUriPath@AllUpViewUriHandler@@AEAAJPEBGPEAW4ALL_UP_VIEW_FLAGS@@@Z.c)
 *     ?ShowAllUpView@AllUpViewUriHandler@@AEAAJW4ALL_UP_VIEW_FLAGS@@@Z @ 0x180549F60 (-ShowAllUpView@AllUpViewUriHandler@@AEAAJW4ALL_UP_VIEW_FLAGS@@@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall AllUpViewUriHandler::Execute(AllUpViewUriHandler *this)
{
  __int64 v1; // rdi
  unsigned int v2; // ebx
  __int64 (__fastcall *v3)(__int64, _QWORD, _QWORD); // rbx
  int v4; // eax
  int v5; // eax
  __int64 v6; // rbx
  __int64 (__fastcall *v7)(__int64, __int64, void **); // rdi
  void **v8; // rax
  int v9; // eax
  AllUpViewUriHandler *v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+18h]
  unsigned int v15; // [rsp+40h] [rbp+20h] BYREF
  __int64 (__fastcall ***v16)(_QWORD, GUID *, __int64 *); // [rsp+48h] [rbp+28h] BYREF
  LPVOID pv; // [rsp+50h] [rbp+30h] BYREF
  __int64 v18; // [rsp+58h] [rbp+38h] BYREF

  v1 = *((_QWORD *)this + 3);
  if ( v1 )
  {
    v16 = 0LL;
    v3 = *(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v1 + 64LL);
    Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)&v16);
    v4 = v3(v1, 0LL, &v16);
    v2 = v4;
    if ( v4 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x30,
        (int)"pcshell\\twinui\\multitaskingview\\lib\\allupviewurihandler.cpp",
        (const char *)(unsigned int)v4);
LABEL_18:
      Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)&v16);
      return v2;
    }
    v18 = 0LL;
    v5 = Microsoft::WRL::ComPtr<IShellItem>::As<IShellItem2>(&v16, &v18);
    v2 = v5;
    if ( v5 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x33,
        (int)"pcshell\\twinui\\multitaskingview\\lib\\allupviewurihandler.cpp",
        (const char *)(unsigned int)v5);
LABEL_17:
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v18);
      goto LABEL_18;
    }
    pv = 0LL;
    v6 = v18;
    v7 = *(__int64 (__fastcall **)(__int64, __int64, void **))(*(_QWORD *)v18 + 40LL);
    v8 = wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::put(&pv);
    v9 = v7(v6, 2147909632LL, v8);
    v2 = v9;
    if ( v9 >= 0 )
    {
      v9 = AllUpViewUriHandler::ParseFlagsFromUriPath(v10, (const unsigned __int16 *)pv, (enum ALL_UP_VIEW_FLAGS *)&v15);
      v2 = v9;
      if ( v9 >= 0 )
      {
        v9 = AllUpViewUriHandler::ShowAllUpView(v12, v15);
        v2 = v9;
        if ( v9 >= 0 )
        {
          v2 = 0;
LABEL_15:
          if ( pv )
            CoTaskMemFree(pv);
          goto LABEL_17;
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
      (int)"pcshell\\twinui\\multitaskingview\\lib\\allupviewurihandler.cpp",
      (const char *)(unsigned int)v9);
    goto LABEL_15;
  }
  v2 = -2147418113;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x2D,
    (int)"pcshell\\twinui\\multitaskingview\\lib\\allupviewurihandler.cpp",
    (const char *)0x8000FFFFLL);
  return v2;
}
