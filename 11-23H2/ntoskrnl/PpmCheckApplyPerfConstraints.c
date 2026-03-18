/*
 * XREFs of PpmCheckApplyPerfConstraints @ 0x140992E08
 * Callers:
 *     PpmRegisterPerfCap @ 0x14058D410 (PpmRegisterPerfCap.c)
 * Callees:
 *     PpmCheckCustomRun @ 0x14032B63C (PpmCheckCustomRun.c)
 */

void __fastcall PpmCheckApplyPerfConstraints(char a1)
{
  PpmCheckCustomRun((a1 != 0) + 1);
}
