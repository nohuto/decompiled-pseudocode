/*
 * XREFs of DifGetPluginPerDriverData @ 0x140604400
 * Callers:
 *     <none>
 * Callees:
 *     VfTargetDriversGetVerifierData @ 0x140A8ABF8 (VfTargetDriversGetVerifierData.c)
 */

__int64 __fastcall DifGetPluginPerDriverData(int a1, __int64 a2)
{
  _DWORD *v3; // r8
  __int64 VerifierData; // rax
  _QWORD *v5; // rax
  _QWORD *v6; // rcx

  v3 = (_DWORD *)DifPluginSettings[a1];
  if ( !v3 )
    return 0LL;
  if ( !*v3 )
    return 0LL;
  VerifierData = VfTargetDriversGetVerifierData(a2);
  if ( !VerifierData )
    return 0LL;
  v5 = (_QWORD *)(VerifierData + 96);
  v6 = (_QWORD *)*v5;
  if ( (_QWORD *)*v5 == v5 )
    return 0LL;
  while ( *((_DWORD *)v6 - 4) != a1 )
    ;
  return *(v6 - 1);
}
