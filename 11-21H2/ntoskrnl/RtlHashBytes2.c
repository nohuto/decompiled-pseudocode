/*
 * XREFs of RtlHashBytes2 @ 0x1402AC180
 * Callers:
 *     AstGetHashedBitNumbers @ 0x1406CB0F0 (AstGetHashedBitNumbers.c)
 *     AstLogIoctl @ 0x1407305B0 (AstLogIoctl.c)
 *     MiFindUserSidHotPatchContext @ 0x14097339C (MiFindUserSidHotPatchContext.c)
 *     MiLoadHotPatchForUserSid @ 0x1409743A4 (MiLoadHotPatchForUserSid.c)
 * Callees:
 *     ?Hash@MetroHash64@@SAXPEBE_KQEAE1@Z @ 0x1402210C0 (-Hash@MetroHash64@@SAXPEBE_KQEAE1@Z.c)
 */

__int64 __fastcall RtlHashBytes2(const unsigned __int8 *a1, unsigned __int64 a2, __int64 a3)
{
  __int64 v4; // [rsp+48h] [rbp+20h] BYREF

  v4 = 0LL;
  MetroHash64::Hash(a1, a2, (unsigned __int8 *const)&v4, a3);
  return v4;
}
