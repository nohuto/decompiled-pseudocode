/*
 * XREFs of ?s_GetStateFromShowCommand@CCommonApplicationViewOcclusionPositionImpl@@KA?AW4ARRANGEMENT_BASED_VIEW_STATE@@I@Z @ 0x18007557C
 * Callers:
 *     ?RuntimeClassInitialize@CCommonApplicationViewOcclusionPositionSnapshot@@QEAAJPEAUHWND__@@@Z @ 0x1800753C4 (-RuntimeClassInitialize@CCommonApplicationViewOcclusionPositionSnapshot@@QEAAJPEAUHWND__@@@Z.c)
 *     ?RuntimeClassInitialize@CCommonApplicationViewOcclusionPosition@@QEAAJUtagWINDOWPLACEMENT@@@Z @ 0x1800754C8 (-RuntimeClassInitialize@CCommonApplicationViewOcclusionPosition@@QEAAJUtagWINDOWPLACEMENT@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CCommonApplicationViewOcclusionPositionImpl::s_GetStateFromShowCommand(int a1)
{
  int v1; // ecx
  int v3; // ecx
  int v4; // ecx
  int v5; // ecx

  v1 = a1 - 1;
  if ( !v1 )
    return 2LL;
  v3 = v1 - 1;
  if ( !v3 )
    return 1LL;
  v4 = v3 - 1;
  if ( !v4 )
    return 3LL;
  v5 = v4 - 1;
  if ( !v5 )
    return 2LL;
  return v5 == 2;
}
