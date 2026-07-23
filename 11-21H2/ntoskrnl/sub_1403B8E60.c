/*
 * XREFs of sub_1403B8E60 @ 0x1403B8E60
 * Callers:
 *     sub_140A54BA0 @ 0x140A54BA0 (sub_140A54BA0.c)
 * Callees:
 *     MmAllocateContiguousNodeMemory @ 0x140214190 (MmAllocateContiguousNodeMemory.c)
 *     MmGetPhysicalAddress @ 0x14027B670 (MmGetPhysicalAddress.c)
 *     sub_1403B32E8 @ 0x1403B32E8 (sub_1403B32E8.c)
 *     sub_1403B8EAC @ 0x1403B8EAC (sub_1403B8EAC.c)
 *     sub_140A54CD8 @ 0x140A54CD8 (sub_140A54CD8.c)
 */

__int64 __fastcall sub_1403B8E60(__int64 a1, __int64 a2)
{
  int v2; // edi
  void *ContiguousNodeMemory; // rax

  v2 = 0;
  if ( sub_1403B32E8(a1, a2) && byte_140C4C449 )
  {
    if ( !qword_140C4C140 )
    {
      if ( !byte_140C4C678 && dword_140C4ADAC )
        return (unsigned int)-1073741801;
      ContiguousNodeMemory = (void *)MmAllocateContiguousNodeMemory(4096LL, 0, -1, 0, 4, 0x80000000);
      if ( (qword_140C4C140 = (__int64)ContiguousNodeMemory) == 0 )
        return (unsigned int)-1073741801;
      qword_140C4C138 = (PVOID)MmGetPhysicalAddress(ContiguousNodeMemory).QuadPart;
    }
    goto LABEL_4;
  }
  v2 = sub_140A54CD8();
  if ( v2 >= 0 )
  {
    byte_140C4E20A = 1;
LABEL_4:
    BaseAddress = (PVOID)qword_140C4C140;
    sub_1403B8EAC();
  }
  return (unsigned int)v2;
}
