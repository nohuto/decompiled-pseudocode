/*
 * XREFs of PpmCheckApplyPerfConstraints @ 0x140993008
 * Callers:
 *     PpmRegisterPerfCap @ 0x14058D900 (PpmRegisterPerfCap.c)
 * Callees:
 *     PpmCheckCustomRun @ 0x14032B8CC (PpmCheckCustomRun.c)
 */

void __fastcall PpmCheckApplyPerfConstraints(char a1)
{
  PpmCheckCustomRun((a1 != 0) + 1);
}
