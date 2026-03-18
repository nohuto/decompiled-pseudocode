/*
 * XREFs of IopLiveDumpDiscardVirtualAddressRange @ 0x14094DF14
 * Callers:
 *     IopLiveDumpAddProcessFilter @ 0x14094C45C (IopLiveDumpAddProcessFilter.c)
 *     IopLiveDumpAllocAndInitResources @ 0x14094C56C (IopLiveDumpAllocAndInitResources.c)
 *     IopLiveDumpAllocateDumpBuffers @ 0x14094CBF4 (IopLiveDumpAllocateDumpBuffers.c)
 *     IopLiveDumpAllocateExtraBuffers @ 0x14094D1A0 (IopLiveDumpAllocateExtraBuffers.c)
 *     IopLiveDumpAllocateFromIOSpace @ 0x14094D4E4 (IopLiveDumpAllocateFromIOSpace.c)
 *     IopLiveDumpAllocateIptBuffers @ 0x14094DBA8 (IopLiveDumpAllocateIptBuffers.c)
 * Callees:
 *     RtlClearBitsEx @ 0x14028BB20 (RtlClearBitsEx.c)
 *     MmGetPhysicalAddress @ 0x14028BEE0 (MmGetPhysicalAddress.c)
 *     MmIsAddressValid @ 0x1403AEE00 (MmIsAddressValid.c)
 */

void __fastcall IopLiveDumpDiscardVirtualAddressRange(__int64 a1, char *a2, unsigned __int64 a3)
{
  char *v3; // rbx
  unsigned __int64 i; // rdi
  PHYSICAL_ADDRESS v6; // rax

  if ( a3 )
  {
    v3 = a2;
    if ( a2 )
    {
      for ( i = (a3 >> 12) + ((a3 & 0xFFF) != 0); i; --i )
      {
        if ( MmIsAddressValid(v3) )
        {
          v6.QuadPart = (unsigned __int64)MmGetPhysicalAddress(v3).QuadPart >> 12;
          if ( v6.QuadPart < *(_QWORD *)(a1 + 576) )
            RtlClearBitsEx(a1 + 576, v6.QuadPart, 1uLL);
        }
        v3 += 4096;
      }
    }
  }
}
