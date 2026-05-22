/*
 * XREFs of ?Is2DCursorVisible@MPCCursorManager@@AEAA_NXZ @ 0x1800CD7E4
 * Callers:
 *     ?ProcessProviderHitTest@MPCCursorManager@@QEAAJPEAUIMPCInputProviderBase@@AEBUHitTestResult3D@@AEA_N@Z @ 0x1800CDA90 (-ProcessProviderHitTest@MPCCursorManager@@QEAAJPEAUIMPCInputProviderBase@@AEBUHitTestResult3D@@A.c)
 *     ?UpdateCursorVisibility@MPCCursorManager@@AEAAX_N00@Z @ 0x1800CDCCC (-UpdateCursorVisibility@MPCCursorManager@@AEAAX_N00@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall MPCCursorManager::Is2DCursorVisible(MPCCursorManager *this)
{
  int v1; // eax
  char v2; // cl

  v1 = *((_DWORD *)this + 15);
  v2 = 1;
  if ( v1 != 1 )
    return (v1 & 0x1A) != 24;
  return v2;
}
