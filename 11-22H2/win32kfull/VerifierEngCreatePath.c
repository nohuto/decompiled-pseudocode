/*
 * XREFs of VerifierEngCreatePath @ 0x1C02A7060
 * Callers:
 *     <none>
 * Callees:
 *     EngCreatePath @ 0x1C0287170 (EngCreatePath.c)
 *     ?VerifierRandomFailure@@YAHK@Z @ 0x1C02A6B60 (-VerifierRandomFailure@@YAHK@Z.c)
 */

PATHOBJ *__fastcall VerifierEngCreatePath(__int64 a1)
{
  if ( (unsigned int)VerifierRandomFailure(a1) )
    return 0LL;
  else
    return EngCreatePath();
}
