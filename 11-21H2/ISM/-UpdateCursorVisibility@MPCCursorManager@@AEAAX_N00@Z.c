/*
 * XREFs of ?UpdateCursorVisibility@MPCCursorManager@@AEAAX_N00@Z @ 0x1800A5560
 * Callers:
 *     ??1MPCCursorManager@@QEAA@XZ @ 0x1800A4F5C (--1MPCCursorManager@@QEAA@XZ.c)
 *     _lambda_2c96748461f4900de3746577f815c647_::operator() @ 0x1800A4FBC (_lambda_2c96748461f4900de3746577f815c647_--operator().c)
 *     ?ProcessProviderDemoted@MPCCursorManager@@QEAAJPEAUIMPCInputProviderBase@@@Z @ 0x1800A52AC (-ProcessProviderDemoted@MPCCursorManager@@QEAAJPEAUIMPCInputProviderBase@@@Z.c)
 *     ?UpdateMouseBinding@MPCCursorManager@@AEAAXXZ @ 0x1800A55F4 (-UpdateMouseBinding@MPCCursorManager@@AEAAXXZ.c)
 * Callees:
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x180029D70 (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 *     ?Is2DCursorVisible@MPCCursorManager@@AEAA_NXZ @ 0x1800A503C (-Is2DCursorVisible@MPCCursorManager@@AEAA_NXZ.c)
 *     ?Update2DCursor@MPCCursorManager@@AEAAX_N@Z @ 0x1800A54D4 (-Update2DCursor@MPCCursorManager@@AEAAX_N@Z.c)
 */

void __fastcall MPCCursorManager::UpdateCursorVisibility(
        MPCCursorManager *this,
        unsigned __int8 a2,
        unsigned __int8 a3,
        char a4)
{
  int v6; // ecx
  char v7; // al

  v6 = (4 * a3) | ((a2 | *((_BYTE *)MPCHolographicInputManager::GetInstance() + 3366)) != 0 ? 2 : 0) | (*((_BYTE *)this + 56) != 0 ? 8 : 0) | (*((_BYTE *)this + 65) != 0 ? 0x10 : 0);
  if ( *((_DWORD *)this + 15) != v6 || a4 )
  {
    *((_DWORD *)this + 15) = v6;
    v7 = MPCCursorManager::Is2DCursorVisible(this);
    MPCCursorManager::Update2DCursor(this, v7);
  }
}
