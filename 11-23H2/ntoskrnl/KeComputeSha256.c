/*
 * XREFs of KeComputeSha256 @ 0x1403C4A30
 * Callers:
 *     ExpKdPullRemoteFileForUser @ 0x14084EE40 (ExpKdPullRemoteFileForUser.c)
 * Callees:
 *     SymCryptSha256 @ 0x1403F347C (SymCryptSha256.c)
 */

__int64 __fastcall KeComputeSha256(__int64 a1, __int64 a2, __int64 a3)
{
  return SymCryptSha256(a1, a2, a3);
}
