/*
 * XREFs of RtlMapGenericMask @ 0x180012190
 * Callers:
 *     RtlpApplyAclToObject @ 0x18000F1D0 (RtlpApplyAclToObject.c)
 *     RtlpCopyAces @ 0x1800118FC (RtlpCopyAces.c)
 *     RtlpCopyEffectiveAce @ 0x180011D88 (RtlpCopyEffectiveAce.c)
 *     RtlNewSecurityGrantedAccess @ 0x1800E30D0 (RtlNewSecurityGrantedAccess.c)
 *     RtlpConvertAclToAutoInherit @ 0x1800F2438 (RtlpConvertAclToAutoInherit.c)
 * Callees:
 *     <none>
 */

void __cdecl RtlMapGenericMask(PACCESS_MASK AccessMask, PGENERIC_MAPPING GenericMapping)
{
  ACCESS_MASK v2; // r8d

  v2 = *AccessMask;
  if ( (*AccessMask & 0x80000000) != 0 )
  {
    v2 |= GenericMapping->GenericRead;
    *AccessMask = v2;
  }
  if ( (v2 & 0x40000000) != 0 )
  {
    v2 |= GenericMapping->GenericWrite;
    *AccessMask = v2;
  }
  if ( (v2 & 0x20000000) != 0 )
  {
    v2 |= GenericMapping->GenericExecute;
    *AccessMask = v2;
  }
  if ( (v2 & 0x10000000) != 0 )
    v2 |= GenericMapping->GenericAll;
  *AccessMask = v2 & 0xFFFFFFF;
}
