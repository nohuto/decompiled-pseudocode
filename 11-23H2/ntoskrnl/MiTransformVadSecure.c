/*
 * XREFs of MiTransformVadSecure @ 0x140A32204
 * Callers:
 *     MiCheckLockUnlockByVa @ 0x14061CC60 (MiCheckLockUnlockByVa.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiTransformVadSecure(__int64 a1, __int64 a2)
{
  return a2 ^ qword_140C65A40 ^ a1;
}
