/*
 * XREFs of ?IsShellManaged@CWindowData@@QEBA_NXZ @ 0x180022F34
 * Callers:
 *     ?UpdateProperties@CThumbnailVisual@@QEAAJK@Z @ 0x18001CBFC (-UpdateProperties@CThumbnailVisual@@QEAAJK@Z.c)
 *     ?OnRepresentationUpdated@CSecondaryWindowRepresentation@@QEAAJXZ @ 0x18002130C (-OnRepresentationUpdated@CSecondaryWindowRepresentation@@QEAAJXZ.c)
 *     ?HasNonTrivialRepresentation@CWindowData@@QEBA_NXZ @ 0x1800222C8 (-HasNonTrivialRepresentation@CWindowData@@QEBA_NXZ.c)
 *     ?ClearSnapshot@CWindowData@@QEAAX_N00@Z @ 0x18002254C (-ClearSnapshot@CWindowData@@QEAAX_N00@Z.c)
 *     ?ImmediateDestroyWindow@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x180022660 (-ImmediateDestroyWindow@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CWindowData::IsShellManaged(CWindowData *this)
{
  bool result; // al

  result = *((_BYTE *)this + 668) >> 7;
  if ( *((char *)this + 668) < 0 )
    return GetPropW(*((HWND *)this + 5), L"Microsoft.Windows.ShellManagedWindowAsNormalWindow") == 0LL;
  return result;
}
