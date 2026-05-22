/*
 * XREFs of ?OnDeviceInput@GameControllerRawInputProvider@@UEAAXI_K0MW4GameInputKind@@PEBUGameInputRoutedInputBuffer@@PEBUGameInputGamepadState@@PEBUGameInputUiNavigationState@@@Z @ 0x1800CCF00
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180056D54 (--3@YAXPEAX@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800581C4 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180096C94 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetTimestampsFromInput@GameControllerRawInputProvider@@AEAAX_KPEAUInputInfo@@@Z @ 0x1800CD7F4 (-SetTimestampsFromInput@GameControllerRawInputProvider@@AEAAX_KPEAUInputInfo@@@Z.c)
 */

void __fastcall GameControllerRawInputProvider::OnDeviceInput(
        __int64 a1,
        int a2,
        __int64 a3,
        const char *a4,
        int a5,
        int a6,
        __int64 a7,
        __int64 a8,
        _DWORD *a9)
{
  __int64 v10; // rbx
  int v11; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v10 = a7 - 88;
  if ( *(_DWORD *)(a7 - 88 + 4) != a2 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x19C,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\gamecontroller\\lib\\gamecontrollerrawinputprovider.cpp",
      a4);
  *(_DWORD *)v10 = 64;
  *(_QWORD *)(v10 + 32) = a3;
  *(_DWORD *)(v10 + 40) = a5;
  *(_DWORD *)(v10 + 44) = a6;
  GameControllerRawInputProvider::SetTimestampsFromInput(
    (GameControllerRawInputProvider *)(a1 - 16),
    (unsigned __int64)a4,
    (struct InputInfo *)v10);
  if ( a8 )
  {
    *(_OWORD *)(v10 + 48) = *(_OWORD *)a8;
    *(_QWORD *)(v10 + 64) = *(_QWORD *)(a8 + 16);
    *(_DWORD *)(v10 + 72) = *(_DWORD *)(a8 + 24);
  }
  if ( a9 )
    *(_DWORD *)(v10 + 76) = *a9;
  *(_BYTE *)(v10 + 80) = (a6 & 0x10F0000) == 0x1000000;
  v11 = (*(__int64 (__fastcall **)(_QWORD, __int64 (__fastcall *)(void *), __int64, __int64))(**(_QWORD **)(a1 + 32)
                                                                                            + 152LL))(
          *(_QWORD *)(a1 + 32),
          GameControllerRawInputProvider::InputReportCallback,
          v10,
          4LL);
  if ( v11 < 0 )
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      438LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\gamecontroller\\lib\\gamecontrollerrawinputprovider.cpp",
      (const char *)(unsigned int)v11);
    operator delete((void *)v10);
  }
}
