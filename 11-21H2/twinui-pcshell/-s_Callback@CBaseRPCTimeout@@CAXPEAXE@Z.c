/*
 * XREFs of ?s_Callback@CBaseRPCTimeout@@CAXPEAXE@Z @ 0x180309970
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CBaseRPCTimeout::s_Callback(_BYTE *a1)
{
  if ( CoCancelCall(*(_DWORD *)a1, 0) >= 0 )
    a1[4] = 1;
}
