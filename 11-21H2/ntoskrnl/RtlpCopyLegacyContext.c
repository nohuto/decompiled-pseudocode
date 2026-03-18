/*
 * XREFs of RtlpCopyLegacyContext @ 0x140294EBC
 * Callers:
 *     RtlpCopyExtendedContext @ 0x140294DD8 (RtlpCopyExtendedContext.c)
 *     RtlCopyContext @ 0x140702F70 (RtlCopyContext.c)
 * Callees:
 *     RtlpCopyLegacyContextX86 @ 0x140242C44 (RtlpCopyLegacyContextX86.c)
 *     RtlpCopyLegacyContextAmd64 @ 0x140294EF0 (RtlpCopyLegacyContextAmd64.c)
 *     RtlpCopyLegacyContextArm @ 0x1405E7C9C (RtlpCopyLegacyContextArm.c)
 *     RtlpCopyLegacyContextArm64 @ 0x1405E7DFC (RtlpCopyLegacyContextArm64.c)
 */

void __fastcall RtlpCopyLegacyContext(char a1, __int64 a2, int a3, __int64 a4)
{
  if ( (a3 & 0x10000) != 0 )
  {
    RtlpCopyLegacyContextX86(a1, a2, a3, a4);
  }
  else if ( (a3 & 0x100000) != 0 )
  {
    RtlpCopyLegacyContextAmd64();
  }
  else if ( (a3 & 0x200000) != 0 )
  {
    RtlpCopyLegacyContextArm();
  }
  else if ( (a3 & 0x400000) != 0 )
  {
    RtlpCopyLegacyContextArm64();
  }
}
