/*
 * XREFs of sub_14093C268 @ 0x14093C268
 * Callers:
 *     sub_14093AAEC @ 0x14093AAEC (sub_14093AAEC.c)
 *     sub_14093B1CC @ 0x14093B1CC (sub_14093B1CC.c)
 *     sub_14093B5F8 @ 0x14093B5F8 (sub_14093B5F8.c)
 *     sub_14093B898 @ 0x14093B898 (sub_14093B898.c)
 *     sub_14093BF5C @ 0x14093BF5C (sub_14093BF5C.c)
 * Callees:
 *     MmGetPhysicalAddress @ 0x14027B670 (MmGetPhysicalAddress.c)
 *     RtlClearBitsEx @ 0x14030BB30 (RtlClearBitsEx.c)
 *     MmIsAddressValid @ 0x14038DE50 (MmIsAddressValid.c)
 */

void __fastcall sub_14093C268(__int64 a1, char *a2, unsigned __int64 a3)
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
