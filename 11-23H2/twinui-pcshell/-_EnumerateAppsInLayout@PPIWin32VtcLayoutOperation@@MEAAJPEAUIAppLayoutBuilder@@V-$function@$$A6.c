/*
 * XREFs of ?_EnumerateAppsInLayout@PPIWin32VtcLayoutOperation@@MEAAJPEAUIAppLayoutBuilder@@V?$function@$$A6A_NUAPP_LAYOUT_ENUM_ITEM@@@Z@std@@@Z @ 0x1805CE8C0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x1801B3C50 (-InternalRelease@-$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall PPIWin32VtcLayoutOperation::_EnumerateAppsInLayout(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 (__fastcall *v5)(__int64, __int64 *); // rbx
  int v6; // eax
  unsigned int v7; // ebx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14[2]; // [rsp+20h] [rbp-59h] BYREF
  _OWORD v15[4]; // [rsp+30h] [rbp-49h] BYREF
  _OWORD v16[4]; // [rsp+70h] [rbp-9h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+5Fh]

  v14[1] = a3;
  v14[0] = 0LL;
  v5 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)a2 + 128LL);
  Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(v14);
  v6 = v5(a2, v14);
  v7 = v6;
  if ( v6 >= 0 )
  {
    do
    {
      if ( (*(int (__fastcall **)(__int64, __int64, _OWORD *))(*(_QWORD *)v14[0] + 24LL))(v14[0], 1LL, v16) < 0 )
        break;
      v15[0] = v16[0];
      v15[1] = v16[1];
      v15[2] = v16[2];
      v15[3] = v16[3];
      v11 = *(_QWORD *)(a3 + 56);
      if ( !v11 )
      {
        std::_Xbad_function_call();
        return PPIWin32VtcLayoutOperation::_EnumerateAppsInLayout_::_1_::dtor_0();
      }
    }
    while ( (*(unsigned __int8 (__fastcall **)(__int64, _OWORD *))(*(_QWORD *)v11 + 16LL))(v11, v15) );
    Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(v14);
    v13 = *(_QWORD *)(a3 + 56);
    if ( v13 )
    {
      LOBYTE(v12) = v13 != a3;
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v13 + 32LL))(v13, v12);
      *(_QWORD *)(a3 + 56) = 0LL;
    }
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x19C,
      (int)"pcshell\\twinui\\tabletmode\\lib\\ppiwin32vtclayoutoperation.cpp",
      (const char *)(unsigned int)v6);
    Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(v14);
    v9 = *(_QWORD *)(a3 + 56);
    if ( v9 )
    {
      LOBYTE(v8) = v9 != a3;
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v9 + 32LL))(v9, v8);
      *(_QWORD *)(a3 + 56) = 0LL;
    }
    return v7;
  }
}
