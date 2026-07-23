/*
 * XREFs of sub_140A54CD8 @ 0x140A54CD8
 * Callers:
 *     sub_1403B8E60 @ 0x1403B8E60 (sub_1403B8E60.c)
 * Callees:
 *     MmGetPhysicalAddress @ 0x14027B670 (MmGetPhysicalAddress.c)
 *     sub_1403B9174 @ 0x1403B9174 (sub_1403B9174.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_140A54D70 @ 0x140A54D70 (sub_140A54D70.c)
 *     sub_140A5A2A4 @ 0x140A5A2A4 (sub_140A5A2A4.c)
 */

__int64 sub_140A54CD8()
{
  PVOID v0; // rdi
  int v1; // ebx

  sub_1403B9174();
  v0 = qword_140C4ACA8;
  if ( !qword_140C4ACA8 )
    return 3221225495LL;
  memset(qword_140C4ACA8, 0, 0x1000uLL);
  v1 = sub_140A54D70(qword_140C4C138);
  if ( v1 >= 0 )
  {
    v1 = sub_140A54D70(qword_14041B0E0);
    if ( v1 >= 0 )
    {
      v1 = 0;
      sub_140A5A2A4(qword_140C4ACA8, 3LL);
      dword_140C4BFDC = MmGetPhysicalAddress(v0).LowPart;
    }
  }
  return (unsigned int)v1;
}
