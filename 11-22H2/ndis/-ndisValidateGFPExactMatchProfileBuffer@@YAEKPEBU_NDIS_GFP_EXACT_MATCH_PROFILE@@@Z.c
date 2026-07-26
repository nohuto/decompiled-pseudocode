/*
 * XREFs of ?ndisValidateGFPExactMatchProfileBuffer@@YAEKPEBU_NDIS_GFP_EXACT_MATCH_PROFILE@@@Z @ 0x1C007C5E8
 * Callers:
 *     ?ndisValidatePDCapsBuffer@@YAEKPEBU_NDIS_PD_CAPABILITIES@@@Z @ 0x1C007C804 (-ndisValidatePDCapsBuffer@@YAEKPEBU_NDIS_PD_CAPABILITIES@@@Z.c)
 * Callees:
 *     ?ndisValidateTrailingElementSpace@@YAEKPEBU_NDIS_OBJECT_HEADER@@KKK@Z @ 0x1C007CA7C (-ndisValidateTrailingElementSpace@@YAEKPEBU_NDIS_OBJECT_HEADER@@KKK@Z.c)
 */

char __fastcall ndisValidateGFPExactMatchProfileBuffer(unsigned int a1, const struct _NDIS_GFP_EXACT_MATCH_PROFILE *a2)
{
  char v3; // bl
  unsigned int HeaderGroupExactMatchProfileArrayNumElements; // esi
  unsigned int HeaderGroupExactMatchProfileArrayOffset; // r14d
  unsigned int HeaderGroupExactMatchProfileArrayElementSize; // ebp
  __int64 v7; // rdx
  int v8; // r9d
  unsigned int v9; // ecx
  __int64 v10; // r8

  if ( a1 < 0x20 || a2->Header.Size < 0x20u || a2->Header.Type != 0x80 || a2->Header.Revision != 1 )
    return 0;
  v3 = 0;
  if ( !a2->Flags && a2->TableType == NdisGfpTableTypePacketDirect )
  {
    if ( a2->NumSupportedEntries )
    {
      HeaderGroupExactMatchProfileArrayNumElements = a2->HeaderGroupExactMatchProfileArrayNumElements;
      HeaderGroupExactMatchProfileArrayOffset = a2->HeaderGroupExactMatchProfileArrayOffset;
      HeaderGroupExactMatchProfileArrayElementSize = a2->HeaderGroupExactMatchProfileArrayElementSize;
      if ( ndisValidateTrailingElementSpace(
             a1,
             &a2->Header,
             HeaderGroupExactMatchProfileArrayOffset,
             HeaderGroupExactMatchProfileArrayNumElements,
             HeaderGroupExactMatchProfileArrayElementSize) )
      {
        v8 = 0;
        if ( HeaderGroupExactMatchProfileArrayNumElements )
        {
          while ( 1 )
          {
            v9 = HeaderGroupExactMatchProfileArrayOffset + v8 * HeaderGroupExactMatchProfileArrayElementSize;
            v10 = v7 + v9;
            if ( a1 - v9 < 0x18
              || *(_WORD *)(v10 + 2) < 0x18u
              || *(_BYTE *)v10 != 0x80
              || *(_BYTE *)(v10 + 1) != 1
              || *(_DWORD *)(v10 + 4)
              || (*(_DWORD *)(v10 + 8) & 0xFFFFF000) != 0
              || (*(_QWORD *)(v10 + 16) & 0xFFFFFFFFFF000000uLL) != 0 )
            {
              break;
            }
            if ( ++v8 >= HeaderGroupExactMatchProfileArrayNumElements )
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
  return v3;
}
