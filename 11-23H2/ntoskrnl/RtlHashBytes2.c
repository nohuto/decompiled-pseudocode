/*
 * XREFs of RtlHashBytes2 @ 0x14041A7F4
 * Callers:
 *     MiFindUserSidHotPatchContext @ 0x140A3717C (MiFindUserSidHotPatchContext.c)
 *     MiLoadHotPatchForUserSid @ 0x140A385A8 (MiLoadHotPatchForUserSid.c)
 * Callees:
 *     ?Hash@MetroHash64@@SAXPEBE_KQEAE1@Z @ 0x14067C2E0 (-Hash@MetroHash64@@SAXPEBE_KQEAE1@Z.c)
 */

__int64 __fastcall RtlHashBytes2(const unsigned __int8 *a1, unsigned __int64 a2, __int64 a3, unsigned __int64 a4)
{
  __int64 v5; // [rsp+40h] [rbp+18h] BYREF

  v5 = 0LL;
  MetroHash64::Hash(a1, a2, (unsigned __int8 *const)&v5, a4);
  return v5;
}
