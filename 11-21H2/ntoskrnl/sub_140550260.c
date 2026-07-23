/*
 * XREFs of sub_140550260 @ 0x140550260
 * Callers:
 *     <none>
 * Callees:
 *     sub_14029C5B0 @ 0x14029C5B0 (sub_14029C5B0.c)
 *     MmUnlockPages @ 0x1402B8AD0 (MmUnlockPages.c)
 *     sub_140358A20 @ 0x140358A20 (sub_140358A20.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall sub_140550260(__int64 a1, __int64 a2)
{
  _BYTE MemoryDescriptorList[64]; // [rsp+20h] [rbp-C8h] BYREF
  _QWORD v6[14]; // [rsp+60h] [rbp-88h] BYREF

  memset(v6, 0, 0x68uLL);
  memset(MemoryDescriptorList, 0, sizeof(MemoryDescriptorList));
  *(_WORD *)&MemoryDescriptorList[8] = 8 * (((unsigned __int16)((a2 & 0xFFF) + 4167) >> 12) + 6);
  *(_WORD *)&MemoryDescriptorList[10] = 0;
  *(_QWORD *)&MemoryDescriptorList[32] = a2 & 0xFFFFFFFFFFFFF000uLL;
  *(_DWORD *)&MemoryDescriptorList[44] = a2 & 0xFFF;
  *(_DWORD *)&MemoryDescriptorList[40] = 72;
  sub_14029C5B0(MemoryDescriptorList, 0, 1);
  v6[1] = a1;
  v6[2] = a2;
  *(_OWORD *)&v6[3] = *(_OWORD *)&MemoryDescriptorList[48];
  LODWORD(a2) = sub_140358A20(2u, 26, 0, (__int64)v6);
  MmUnlockPages((PMDL)MemoryDescriptorList);
  return (unsigned int)a2;
}
