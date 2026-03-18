/*
 * XREFs of RtlpCopyLegacyContext @ 0x14030DB3C
 * Callers:
 *     RtlpCopyExtendedContext @ 0x14030D4A0 (RtlpCopyExtendedContext.c)
 *     RtlCopyContext @ 0x1407704D0 (RtlCopyContext.c)
 * Callees:
 *     RtlpCopyLegacyContextAmd64 @ 0x14030DB6C (RtlpCopyLegacyContextAmd64.c)
 *     RtlpCopyLegacyContextX86 @ 0x140363834 (RtlpCopyLegacyContextX86.c)
 *     RtlpCopyLegacyContextArm @ 0x1405AAE34 (RtlpCopyLegacyContextArm.c)
 *     RtlpCopyLegacyContextArm64 @ 0x1405AAF94 (RtlpCopyLegacyContextArm64.c)
 */

__int64 __fastcall RtlpCopyLegacyContext(__int64 a1, __int64 a2, int a3)
{
  __int64 result; // rax

  if ( (a3 & 0x10000) != 0 )
    return RtlpCopyLegacyContextX86();
  if ( (a3 & 0x100000) != 0 )
    return RtlpCopyLegacyContextAmd64();
  if ( (a3 & 0x200000) != 0 )
    return RtlpCopyLegacyContextArm();
  if ( (a3 & 0x400000) != 0 )
    return RtlpCopyLegacyContextArm64();
  return result;
}
