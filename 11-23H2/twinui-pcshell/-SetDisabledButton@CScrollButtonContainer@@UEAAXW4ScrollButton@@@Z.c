/*
 * XREFs of ?SetDisabledButton@CScrollButtonContainer@@UEAAXW4ScrollButton@@@Z @ 0x18058BAC0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?IsPPIEdition@@YA_NXZ @ 0x18009FF88 (-IsPPIEdition@@YA_NXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$As@UIGlyphButton@@@?$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIGlyphButton@@@WRL@Microsoft@@@Details@12@@Z @ 0x18057236C (--$As@UIGlyphButton@@@-$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$C.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CScrollButtonContainer::SetDisabledButton(__int64 a1, int a2)
{
  char v3; // si
  bool v4; // di
  __int64 **v5; // r14
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 (*v8)(void); // rax
  int v10; // eax
  __int64 v11; // rdx
  int v12; // eax
  __int64 v13; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v15; // [rsp+50h] [rbp+18h] BYREF

  v3 = 1;
  v4 = 1;
  if ( a2 == 1 )
    v3 = 0;
  else
    v4 = a2 != 2;
  v5 = (__int64 **)(a1 + 200);
  if ( IsPPIEdition() )
  {
    v6 = **v5;
    if ( v3 )
      (*(void (**)(void))(v6 + 136))();
    else
      (*(void (**)(void))(v6 + 144))();
    v7 = **(_QWORD **)(a1 + 192);
    if ( v4 )
      v8 = *(__int64 (**)(void))(v7 + 136);
    else
      v8 = *(__int64 (**)(void))(v7 + 144);
    return v8();
  }
  else
  {
    v15 = 0LL;
    v10 = Microsoft::WRL::ComPtr<IMultitaskingViewElement>::As<IGlyphButton>(
            (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))v5,
            &v15);
    if ( v10 >= 0 )
    {
      LOBYTE(v11) = v3;
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v15 + 32LL))(v15, v11);
    }
    else
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x98,
        (int)"pcshell\\twinui\\multitaskingview\\lib\\scrollbuttoncontainerelement.cpp",
        (const char *)(unsigned int)v10);
    }
    v12 = Microsoft::WRL::ComPtr<IMultitaskingViewElement>::As<IGlyphButton>(
            (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(a1 + 192),
            &v15);
    if ( v12 >= 0 )
    {
      LOBYTE(v13) = v4;
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v15 + 32LL))(v15, v13);
    }
    else
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x9D,
        (int)"pcshell\\twinui\\multitaskingview\\lib\\scrollbuttoncontainerelement.cpp",
        (const char *)(unsigned int)v12);
    }
    return Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v15);
  }
}
