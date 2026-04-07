/*
 * XREFs of ?_FindClone@CTransitionVisualController@@IEAAIPEAVCWindowData@@_N@Z @ 0x18000C58C
 * Callers:
 *     ?EnsureSnapshot@CTransitionVisualController@@QEAAJPEAVCWindowData@@@Z @ 0x18000B844 (-EnsureSnapshot@CTransitionVisualController@@QEAAJPEAVCWindowData@@@Z.c)
 *     ?_SetupHighZOrderStaticWindows@CTransitionVisualController@@IEAAJXZ @ 0x18000EF34 (-_SetupHighZOrderStaticWindows@CTransitionVisualController@@IEAAJXZ.c)
 *     ?RestoreWindow@CTransitionVisualController@@QEAAXPEAVCWindowData@@_N@Z @ 0x1800EC040 (-RestoreWindow@CTransitionVisualController@@QEAAXPEAVCWindowData@@_N@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CTransitionVisualController::_FindClone(
        CTransitionVisualController *this,
        struct CWindowData *a2,
        char a3)
{
  unsigned int v3; // r11d
  __int64 v4; // r9
  __int64 v6; // r10

  v3 = *((_DWORD *)this + 12);
  v4 = 0LL;
  if ( v3 )
  {
    v6 = *((_QWORD *)this + 3);
    do
    {
      if ( *(_QWORD *)(*(_QWORD *)(v6 + 24 * v4 + 8) + 24LL)
        && *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v6 + 24 * v4) + 752LL) + 40LL) == *((_QWORD *)a2 + 5)
        && (!a3 || *(_BYTE *)(v6 + 24 * v4 + 16)) )
      {
        break;
      }
      v4 = (unsigned int)(v4 + 1);
    }
    while ( (unsigned int)v4 < v3 );
  }
  return (unsigned int)v4;
}
