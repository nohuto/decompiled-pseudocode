/*
 * XREFs of sub_14024E01C @ 0x14024E01C
 * Callers:
 *     sub_1402E1140 @ 0x1402E1140 (sub_1402E1140.c)
 *     sub_1406D1CF4 @ 0x1406D1CF4 (sub_1406D1CF4.c)
 *     sub_1409EC988 @ 0x1409EC988 (sub_1409EC988.c)
 *     sub_1409ECCCC @ 0x1409ECCCC (sub_1409ECCCC.c)
 * Callees:
 *     sub_140221A30 @ 0x140221A30 (sub_140221A30.c)
 *     MmGetPhysicalAddress @ 0x14027B670 (MmGetPhysicalAddress.c)
 *     sub_140633468 @ 0x140633468 (sub_140633468.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_14024E01C(__int64 a1, char *a2)
{
  char *v2; // rbx
  ULONG_PTR v3; // rdi
  unsigned __int64 *v4; // rsi
  unsigned int v5; // eax
  __int64 v6; // rbp
  PHYSICAL_ADDRESS PhysicalAddress; // rax

  v2 = a2;
  if ( *(_QWORD *)(a1 + 1320) )
  {
    sub_140633468();
  }
  else if ( (*(_DWORD *)(a1 + 816) & 0x20000000) != 0 )
  {
    v3 = *(_QWORD *)(a1 + 1328);
    *(_WORD *)(v3 + 10) |= 3u;
    v4 = (unsigned __int64 *)(v3 + 48);
    *(_QWORD *)(v3 + 24) = a2;
    v5 = *(_DWORD *)(a1 + 4) >> 12;
    if ( v5 )
    {
      v6 = v5;
      do
      {
        PhysicalAddress = MmGetPhysicalAddress(v2);
        v2 += 4096;
        *v4++ = (unsigned __int64)PhysicalAddress.QuadPart >> 12;
        --v6;
      }
      while ( v6 );
    }
    sub_140221A30(v3, 0);
  }
  else
  {
    ExFreePoolWithTag(a2, 0);
  }
}
