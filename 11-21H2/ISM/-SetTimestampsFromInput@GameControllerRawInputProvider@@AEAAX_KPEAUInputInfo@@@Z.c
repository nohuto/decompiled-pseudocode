/*
 * XREFs of ?SetTimestampsFromInput@GameControllerRawInputProvider@@AEAAX_KPEAUInputInfo@@@Z @ 0x1800B47AC
 * Callers:
 *     ?OnDeviceInput@GameControllerRawInputProvider@@UEAAXI_K0MW4GameInputKind@@PEBUGameInputRoutedInputBuffer@@PEBUGameInputGamepadState@@PEBUGameInputUiNavigationState@@@Z @ 0x1800B3F10 (-OnDeviceInput@GameControllerRawInputProvider@@UEAAXI_K0MW4GameInputKind@@PEBUGameInputRoutedInp.c)
 *     ?OnIrButton@GameControllerRawInputProvider@@UEAAXI_K0W4GipIrCode@@W4GipIrStatus@@@Z @ 0x1800B4030 (-OnIrButton@GameControllerRawInputProvider@@UEAAXI_K0W4GipIrCode@@W4GipIrStatus@@@Z.c)
 *     ?OnSystemCommand@GameControllerRawInputProvider@@UEAAXI_K0E_N@Z @ 0x1800B42A0 (-OnSystemCommand@GameControllerRawInputProvider@@UEAAXI_K0E_N@Z.c)
 *     ?OnVirtualKey@GameControllerRawInputProvider@@UEAAXI_K0E_N@Z @ 0x1800B45A0 (-OnVirtualKey@GameControllerRawInputProvider@@UEAAXI_K0E_N@Z.c)
 * Callees:
 *     ?GetCurrentMicroSecTime@QpcTimeConverter@@QEBA_KXZ @ 0x1800B3C3C (-GetCurrentMicroSecTime@QpcTimeConverter@@QEBA_KXZ.c)
 */

void __fastcall GameControllerRawInputProvider::SetTimestampsFromInput(
        GameControllerRawInputProvider *this,
        unsigned __int64 a2,
        struct InputInfo *a3)
{
  unsigned __int64 v6; // rbx
  DWORD TickCount; // r9d
  unsigned int v8; // eax
  unsigned int v9; // r9d
  unsigned __int64 v10; // rax

  v6 = QpcTimeConverter::GetCurrentMicroSecTime(this) - a2;
  TickCount = GetTickCount();
  v8 = *((_DWORD *)this + 36);
  v9 = TickCount - v6 / 0x3E8;
  if ( v9 >= v8 )
    v8 = v9;
  *((_DWORD *)this + 36) = v8;
  *((_DWORD *)a3 + 2) = v8;
  v10 = 0LL;
  if ( GameControllerRawInputProvider::s_qpcTime )
    v10 = GameControllerRawInputProvider::s_qpcTime * (a2 / qword_180242C08)
        + GameControllerRawInputProvider::s_qpcTime * (a2 % qword_180242C08) / qword_180242C08;
  *((_QWORD *)a3 + 2) = v10;
}
