/*
 * XREFs of ?CloneTitleBarConfiguration@@YA?AV?$com_ptr_t@UIApplicationViewTitlebarConfiguration@@Uerr_exception_policy@wil@@@wil@@PEAUIApplicationViewTitlebarConfiguration@@@Z @ 0x180026040
 * Callers:
 *     ?ReconcileTitleBarconfiguration@@YA?AV?$com_ptr_t@UIApplicationViewTitlebarConfiguration@@Uerr_exception_policy@wil@@@wil@@AEBUAppTitlebarConfiguration@@PEAUIApplicationViewTitlebarConfiguration@@W4APP_CHROME_CONFIGURATION_POLICY@@@Z @ 0x180025FE4 (-ReconcileTitleBarconfiguration@@YA-AV-$com_ptr_t@UIApplicationViewTitlebarConfiguration@@Uerr_e.c)
 * Callees:
 *     ??$MakeAndInitializeOrThrow@VApplicationViewTitlebarConfiguration@@$$V@wil@@YA?AV?$ComPtr@VApplicationViewTitlebarConfiguration@@@WRL@Microsoft@@XZ @ 0x180026200 (--$MakeAndInitializeOrThrow@VApplicationViewTitlebarConfiguration@@$$V@wil@@YA-AV-$ComPtr@VAppli.c)
 *     ?InternalRelease@?$ComPtr@VApplicationViewTitlebarConfiguration@@@WRL@Microsoft@@IEAAKXZ @ 0x18004D7B0 (-InternalRelease@-$ComPtr@VApplicationViewTitlebarConfiguration@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall CloneTitleBarConfiguration(_QWORD *a1, __int64 a2)
{
  __int64 v4; // rax
  int v5; // edx
  __int64 v6; // rcx
  int v7; // eax
  __int64 v8; // rax
  int v9; // edx
  __int64 v10; // rcx
  __int64 v11; // rax
  int v12; // edx
  __int64 v13; // rax
  int v15; // [rsp+20h] [rbp-30h] BYREF
  int v16; // [rsp+24h] [rbp-2Ch] BYREF
  int v17; // [rsp+28h] [rbp-28h] BYREF
  int v18; // [rsp+2Ch] [rbp-24h] BYREF
  int v19; // [rsp+30h] [rbp-20h] BYREF
  _DWORD v20[3]; // [rsp+34h] [rbp-1Ch] BYREF
  _QWORD v21[2]; // [rsp+40h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]
  _QWORD *v23; // [rsp+70h] [rbp+20h] BYREF
  int v24; // [rsp+78h] [rbp+28h] BYREF
  int v25; // [rsp+80h] [rbp+30h] BYREF
  int v26; // [rsp+88h] [rbp+38h] BYREF

  v23 = a1;
  wil::MakeAndInitializeOrThrow<ApplicationViewTitlebarConfiguration,>(v21);
  if ( (*(int (__fastcall **)(__int64, int *, _QWORD **))(*(_QWORD *)a2 + 48LL))(a2, &v24, &v23) >= 0 )
  {
    v4 = v21[0];
    v5 = (int)v23;
    if ( v24 )
    {
      *(_DWORD *)(v21[0] + 52LL) = v24;
      *(_DWORD *)(v4 + 56) = v5;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x18D,
        (unsigned int)"onecoreuap\\internal\\shell\\inc\\private\\applicationviewoperationhelpers.h",
        (const char *)0x80070057LL,
        v15);
    }
  }
  if ( (*(int (__fastcall **)(__int64, int *))(*(_QWORD *)a2 + 112LL))(a2, &v25) >= 0 )
    *(_DWORD *)(v21[0] + 88LL) = v25;
  if ( (*(int (__fastcall **)(__int64, int *))(*(_QWORD *)a2 + 32LL))(a2, &v26) >= 0 )
  {
    v6 = v21[0];
    v7 = v26;
    *(_BYTE *)(v21[0] + 48LL) = 1;
    *(_BYTE *)(v6 + 49) = v7 != 0;
  }
  if ( (*(int (__fastcall **)(__int64, int *, int *))(*(_QWORD *)a2 + 64LL))(a2, &v16, &v15) >= 0 )
  {
    v8 = v21[0];
    v9 = v15;
    if ( v16 )
    {
      *(_DWORD *)(v21[0] + 60LL) = v16;
      *(_DWORD *)(v8 + 64) = v9;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x19E,
        (unsigned int)"onecoreuap\\internal\\shell\\inc\\private\\applicationviewoperationhelpers.h",
        (const char *)0x80070057LL,
        v15);
    }
  }
  if ( (*(int (__fastcall **)(__int64, int *))(*(_QWORD *)a2 + 80LL))(a2, &v17) >= 0 )
    *(_DWORD *)(v21[0] + 76LL) = v17;
  if ( (*(int (__fastcall **)(__int64, int *))(*(_QWORD *)a2 + 96LL))(a2, &v18) >= 0 )
  {
    v10 = v21[0];
    *(_DWORD *)(v21[0] + 80LL) = v18;
    *(_BYTE *)(v10 + 84) = 1;
  }
  if ( (*(int (__fastcall **)(__int64, _DWORD *, int *))(*(_QWORD *)a2 + 128LL))(a2, v20, &v19) >= 0 )
  {
    v11 = v21[0];
    v12 = v19;
    if ( v20[0] )
    {
      *(_DWORD *)(v21[0] + 68LL) = v20[0];
      *(_DWORD *)(v11 + 72) = v12;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1D4,
        (unsigned int)"onecoreuap\\internal\\shell\\inc\\private\\applicationviewoperationhelpers.h",
        (const char *)0x80070057LL,
        v15);
    }
  }
  v13 = v21[0];
  v21[0] = 0LL;
  *a1 = v13;
  Microsoft::WRL::ComPtr<ApplicationViewTitlebarConfiguration>::InternalRelease(v21);
  return a1;
}
