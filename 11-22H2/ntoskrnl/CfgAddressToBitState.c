/*
 * XREFs of CfgAddressToBitState @ 0x1406566EC
 * Callers:
 *     MiValidateXfgUserCallTarget @ 0x140656730 (MiValidateXfgUserCallTarget.c)
 *     MiCfgMarkValidEntries @ 0x1407A4C5C (MiCfgMarkValidEntries.c)
 *     MiValidateUserCallTarget @ 0x140A43CF8 (MiValidateUserCallTarget.c)
 *     MiCheckVerifierFunctionsCfgState @ 0x140A43F68 (MiCheckVerifierFunctionsCfgState.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CfgAddressToBitState(unsigned __int64 a1, const signed __int64 *a2)
{
  return _bittest64(a2, 2 * (a1 >> 4)) | (2 * (unsigned int)_bittest64(a2, 2 * (a1 >> 4) + 1));
}
