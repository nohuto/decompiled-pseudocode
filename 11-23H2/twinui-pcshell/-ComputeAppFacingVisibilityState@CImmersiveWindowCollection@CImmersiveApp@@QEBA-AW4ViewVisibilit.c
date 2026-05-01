/*
 * XREFs of ?ComputeAppFacingVisibilityState@CImmersiveWindowCollection@CImmersiveApp@@QEBA?AW4ViewVisibilityState@@XZ @ 0x180020FC4
 * Callers:
 *     ?ReconcileVisibility@CImmersiveWindowCollection@CImmersiveApp@@QEAAJXZ @ 0x180020F10 (-ReconcileVisibility@CImmersiveWindowCollection@CImmersiveApp@@QEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CImmersiveApp::CImmersiveWindowCollection::ComputeAppFacingVisibilityState(_BYTE *a1)
{
  _BYTE *v1; // rdx
  _BYTE *v2; // r8
  _BYTE *v3; // rax
  __int64 result; // rax

  v1 = a1 + 216;
  v2 = a1 + 248;
  v3 = a1 + 216;
  if ( a1 + 216 == a1 + 248 )
    return a1[200] != 0 ? 2 : 0;
  while ( !*v3 )
  {
    v3 += 8;
    if ( v3 == v2 )
      return a1[200] != 0 ? 2 : 0;
  }
  result = 2LL;
  while ( !*v1 )
  {
LABEL_11:
    v1 += 8;
    if ( v1 == v2 )
      return result;
  }
  if ( *((_DWORD *)v1 + 1) )
  {
    if ( *((_DWORD *)v1 + 1) == 1 )
      result = 1LL;
    goto LABEL_11;
  }
  return 0LL;
}
