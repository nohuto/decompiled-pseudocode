/*
 * XREFs of ?ndisValidateGFPWildcardMatchProfileBuffer@@YAEKPEBU_NDIS_GFP_WILDCARD_MATCH_PROFILE@@@Z @ 0x1C0077278
 * Callers:
 *     ?ndisValidatePDCapsBuffer@@YAEKPEBU_NDIS_PD_CAPABILITIES@@@Z @ 0x1C0077334 (-ndisValidatePDCapsBuffer@@YAEKPEBU_NDIS_PD_CAPABILITIES@@@Z.c)
 * Callees:
 *     ?ndisValidateGFPWildcardMatchHGProfileBuffer@@YAEKPEBU_NDIS_GFP_HEADER_GROUP_WILDCARD_MATCH_PROFILE@@@Z @ 0x1C0077218 (-ndisValidateGFPWildcardMatchHGProfileBuffer@@YAEKPEBU_NDIS_GFP_HEADER_GROUP_WILDCARD_MATCH_PROF.c)
 *     ?ndisValidateTrailingElementSpace@@YAEKPEBU_NDIS_OBJECT_HEADER@@KKK@Z @ 0x1C00775AC (-ndisValidateTrailingElementSpace@@YAEKPEBU_NDIS_OBJECT_HEADER@@KKK@Z.c)
 */

char __fastcall ndisValidateGFPWildcardMatchProfileBuffer(
        unsigned int a1,
        const struct _NDIS_GFP_WILDCARD_MATCH_PROFILE *a2)
{
  char v4; // bl
  unsigned int HeaderGroupWildcardMatchProfileArrayOffset; // r14d
  unsigned int HeaderGroupWildcardMatchProfileArrayElementSize; // ebp
  int v7; // r9d
  unsigned int v8; // r8d
  int v9; // r8d
  unsigned int v10; // r9d

  if ( a1 < 0x20 || a2->Header.Size < 0x20u || a2->Header.Type != 0x80 || a2->Header.Revision != 1 )
    return 0;
  v4 = 0;
  if ( !a2->Flags && a2->TableType == NdisGfpTableTypePacketDirect )
  {
    if ( a2->NumSupportedEntries )
    {
      HeaderGroupWildcardMatchProfileArrayOffset = a2->HeaderGroupWildcardMatchProfileArrayOffset;
      HeaderGroupWildcardMatchProfileArrayElementSize = a2->HeaderGroupWildcardMatchProfileArrayElementSize;
      if ( ndisValidateTrailingElementSpace(
             a1,
             &a2->Header,
             HeaderGroupWildcardMatchProfileArrayOffset,
             a2->HeaderGroupWildcardMatchProfileArrayNumElements,
             HeaderGroupWildcardMatchProfileArrayElementSize) )
      {
        v8 = 0;
        if ( v7 )
        {
          while ( ndisValidateGFPWildcardMatchHGProfileBuffer(
                    a1
                  - (HeaderGroupWildcardMatchProfileArrayOffset
                   + v8 * HeaderGroupWildcardMatchProfileArrayElementSize),
                    (const struct _NDIS_GFP_HEADER_GROUP_WILDCARD_MATCH_PROFILE *)(&a2->Header.Type
                                                                                 + HeaderGroupWildcardMatchProfileArrayOffset
                                                                                 + v8
                                                                                 * HeaderGroupWildcardMatchProfileArrayElementSize)) )
          {
            v8 = v9 + 1;
            if ( v8 >= v10 )
              return 1;
          }
        }
        else
        {
          return 1;
        }
      }
    }
  }
  return v4;
}
