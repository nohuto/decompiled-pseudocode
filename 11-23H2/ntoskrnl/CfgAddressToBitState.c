/*
 * XREFs of CfgAddressToBitState @ 0x140656BCC
 * Callers:
 *     MiValidateXfgUserCallTarget @ 0x140656C10 (MiValidateXfgUserCallTarget.c)
 *     MiCfgMarkValidEntries @ 0x1407A493C (MiCfgMarkValidEntries.c)
 *     MiValidateUserCallTarget @ 0x140A43F38 (MiValidateUserCallTarget.c)
 *     MiCheckVerifierFunctionsCfgState @ 0x140A441A8 (MiCheckVerifierFunctionsCfgState.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CfgAddressToBitState(unsigned __int64 a1, const signed __int64 *a2)
{
  return _bittest64(a2, 2 * (a1 >> 4)) | (2 * (unsigned int)_bittest64(a2, 2 * (a1 >> 4) + 1));
}
