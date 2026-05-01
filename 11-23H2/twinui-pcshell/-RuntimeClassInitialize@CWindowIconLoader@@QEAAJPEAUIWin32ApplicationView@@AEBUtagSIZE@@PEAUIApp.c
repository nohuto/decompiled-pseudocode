/*
 * XREFs of ?RuntimeClassInitialize@CWindowIconLoader@@QEAAJPEAUIWin32ApplicationView@@AEBUtagSIZE@@PEAUIApplicationViewIconLoaderNotifications@@PEAUIIconLoadingFunctions@@@Z @ 0x18055DE1C
 * Callers:
 *     ??$MakeAndInitialize@VCWindowIconLoader@@V1@AEAPEAUIWin32ApplicationView@@AEBUtagSIZE@@AEAPEAUIApplicationViewIconLoaderNotifications@@AEAPEAUIIconLoadingFunctions@@@Details@WRL@Microsoft@@YAJPEAPEAVCWindowIconLoader@@AEAPEAUIWin32ApplicationView@@AEBUtagSIZE@@AEAPEAUIApplicationViewIconLoaderNotifications@@AEAPEAUIIconLoadingFunctions@@@Z @ 0x18055DCA0 (--$MakeAndInitialize@VCWindowIconLoader@@V1@AEAPEAUIWin32ApplicationView@@AEBUtagSIZE@@AEAPEAUIA.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_LoadAsyncIcon@CWindowIconLoader@@IEAAXH@Z @ 0x18055E0D8 (-_LoadAsyncIcon@CWindowIconLoader@@IEAAXH@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWindowIconLoader::RuntimeClassInitialize(
        CWindowIconLoader *this,
        struct IWin32ApplicationView *a2,
        const struct tagSIZE *a3,
        struct IApplicationViewIconLoaderNotifications *a4,
        struct IIconLoadingFunctions *a5)
{
  struct IIconLoadingFunctions *v9; // rdi
  _QWORD *v10; // r14
  int v11; // eax
  unsigned int v12; // edi
  __int64 v14; // r11
  int v15; // edi
  int v16; // eax
  __int64 v17; // r11
  int v18; // eax
  __int64 v19; // r11
  int v20; // eax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v22; // [rsp+50h] [rbp+8h] BYREF
  __int64 v23; // [rsp+58h] [rbp+10h] BYREF

  if ( *((struct IApplicationViewIconLoaderNotifications **)this + 3) != a4 )
  {
    if ( a4 )
      (*(void (__fastcall **)(struct IApplicationViewIconLoaderNotifications *))(*(_QWORD *)a4 + 8LL))(a4);
    v23 = *((_QWORD *)this + 3);
    *((_QWORD *)this + 3) = a4;
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v23);
  }
  v9 = a5;
  if ( *((struct IIconLoadingFunctions **)this + 4) != a5 )
  {
    if ( a5 )
      (*(void (__fastcall **)(struct IIconLoadingFunctions *))(*(_QWORD *)a5 + 8LL))(a5);
    a5 = (struct IIconLoadingFunctions *)*((_QWORD *)this + 4);
    *((_QWORD *)this + 4) = v9;
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&a5);
  }
  *(struct tagSIZE *)((char *)this + 44) = *a3;
  v10 = (_QWORD *)((char *)this + 16);
  v11 = (*(__int64 (__fastcall **)(struct IWin32ApplicationView *, char *))(*(_QWORD *)a2 + 24LL))(
          a2,
          (char *)this + 16);
  v12 = v11;
  if ( v11 >= 0 )
  {
    v14 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(**((_QWORD **)this + 4) + 32LL))(
            *((_QWORD *)this + 4),
            *v10,
            4294967282LL);
    v22 = 0LL;
    v15 = 0;
    if ( v14 )
    {
      v16 = (*(__int64 (__fastcall **)(_QWORD, __int64, char *, __int64 *))(**((_QWORD **)this + 4) + 48LL))(
              *((_QWORD *)this + 4),
              v14,
              (char *)this + 44,
              &v22);
      if ( v16 >= 0 )
        v15 = 3;
      else
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x43,
          (int)"pcshell\\twinui\\multitaskingview\\lib\\windowiconloader.cpp",
          (const char *)(unsigned int)v16);
      if ( v22 )
        goto LABEL_26;
    }
    v17 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(**((_QWORD **)this + 4) + 32LL))(
            *((_QWORD *)this + 4),
            *v10,
            4294967262LL);
    if ( v17 )
    {
      v18 = (*(__int64 (__fastcall **)(_QWORD, __int64, char *, __int64 *))(**((_QWORD **)this + 4) + 48LL))(
              *((_QWORD *)this + 4),
              v17,
              (char *)this + 44,
              &v22);
      if ( v18 >= 0 )
        v15 = 2;
      else
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x4F,
          (int)"pcshell\\twinui\\multitaskingview\\lib\\windowiconloader.cpp",
          (const char *)(unsigned int)v18);
    }
    if ( v22 )
      goto LABEL_26;
    v19 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(**((_QWORD **)this + 4) + 40LL))(
            *((_QWORD *)this + 4),
            0LL,
            32517LL);
    if ( v19 )
    {
      v20 = (*(__int64 (__fastcall **)(_QWORD, __int64, char *, __int64 *))(**((_QWORD **)this + 4) + 48LL))(
              *((_QWORD *)this + 4),
              v19,
              (char *)this + 44,
              &v22);
      if ( v20 >= 0 )
        v15 = 1;
      else
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x5C,
          (int)"pcshell\\twinui\\multitaskingview\\lib\\windowiconloader.cpp",
          (const char *)(unsigned int)v20);
    }
    if ( v22 )
    {
LABEL_26:
      (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 3) + 24LL))(*((_QWORD *)this + 3));
      *((_DWORD *)this + 10) = v15;
    }
    CWindowIconLoader::_LoadAsyncIcon(this, 1);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x39,
      (int)"pcshell\\twinui\\multitaskingview\\lib\\windowiconloader.cpp",
      (const char *)(unsigned int)v11);
    return v12;
  }
}
