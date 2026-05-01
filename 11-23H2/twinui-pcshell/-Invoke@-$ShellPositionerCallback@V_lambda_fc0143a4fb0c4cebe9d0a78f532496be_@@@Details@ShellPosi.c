/*
 * XREFs of ?Invoke@?$ShellPositionerCallback@V_lambda_fc0143a4fb0c4cebe9d0a78f532496be_@@@Details@ShellPositionerHelpers@@UEAAJPEAUIBasicPositioner@@@Z @ 0x18006CB10
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall ShellPositionerHelpers::Details::ShellPositionerCallback<_lambda_fc0143a4fb0c4cebe9d0a78f532496be_>::Invoke(
        __int64 a1,
        __int64 a2)
{
  __int64 v2; // rbx
  __int64 (__fastcall *v5)(__int64, _QWORD, int *, __int64); // rdi
  int v6; // eax
  unsigned int v7; // ebx
  int v9; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  int v11; // [rsp+40h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(a1 + 48);
  v5 = *(__int64 (__fastcall **)(__int64, _QWORD, int *, __int64))(*(_QWORD *)a2 + 40LL);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)(v2 + 32));
  v6 = v5(a2, *(_QWORD *)(a1 + 56), &v11, v2 + 32);
  v7 = v6;
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x82,
      (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\windowsizeconverter.cpp",
      (const char *)(unsigned int)v6,
      v9);
  }
  else
  {
    if ( v11 )
      *(_DWORD *)(*(_QWORD *)(a1 + 48) + 24LL) |= 1u;
    return 0;
  }
  return v7;
}
