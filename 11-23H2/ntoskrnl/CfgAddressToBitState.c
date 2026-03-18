/*
 * XREFs of CfgAddressToBitState @ 0x14065667C
 * Callers:
 *     MiValidateXfgUserCallTarget @ 0x1406566C0 (MiValidateXfgUserCallTarget.c)
 *     MiCfgMarkValidEntries @ 0x1407A474C (MiCfgMarkValidEntries.c)
 *     MiValidateUserCallTarget @ 0x140A43C88 (MiValidateUserCallTarget.c)
 *     MiCheckVerifierFunctionsCfgState @ 0x140A43EF8 (MiCheckVerifierFunctionsCfgState.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CfgAddressToBitState(unsigned __int64 a1, const signed __int64 *a2)
{
  return _bittest64(a2, 2 * (a1 >> 4)) | (2 * (unsigned int)_bittest64(a2, 2 * (a1 >> 4) + 1));
}
