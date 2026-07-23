/*
 * XREFs of sub_14088151A @ 0x14088151A
 * Callers:
 *     sub_1409B35D0 @ 0x1409B35D0 (sub_1409B35D0.c)
 * Callees:
 *     MmUnlockPages @ 0x1402B8AD0 (MmUnlockPages.c)
 *     sub_1402F5FD0 @ 0x1402F5FD0 (sub_1402F5FD0.c)
 *     MmProbeAndLockPages @ 0x140319E90 (MmProbeAndLockPages.c)
 *     sub_140358A20 @ 0x140358A20 (sub_140358A20.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall sub_14088151A(
        __int64 a1,
        int *a2,
        _QWORD *a3,
        int a4,
        _QWORD *a5,
        _QWORD *a6,
        _QWORD *a7,
        _DWORD *a8,
        _BYTE *a9)
{
  __int64 CurrentThread; // rsi
  int v12; // ebx
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 MemoryDescriptorList; // [rsp+40h] [rbp-F8h] BYREF
  __int16 MemoryDescriptorList_8; // [rsp+48h] [rbp-F0h]
  __int16 MemoryDescriptorList_10; // [rsp+4Ah] [rbp-EEh]
  __int128 MemoryDescriptorList_12; // [rsp+4Ch] [rbp-ECh]
  int MemoryDescriptorList_28; // [rsp+5Ch] [rbp-DCh]
  unsigned __int64 MemoryDescriptorList_32; // [rsp+60h] [rbp-D8h]
  int MemoryDescriptorList_40; // [rsp+68h] [rbp-D0h]
  _BYTE MemoryDescriptorList_44[12]; // [rsp+6Ch] [rbp-CCh]
  _QWORD v27[14]; // [rsp+80h] [rbp-B8h] BYREF

  memset(v27, 0, 0x68uLL);
  MemoryDescriptorList_12 = 0LL;
  MemoryDescriptorList_28 = 0;
  *(_DWORD *)&MemoryDescriptorList_44[8] = 0;
  CurrentThread = (__int64)KeGetCurrentThread();
  MemoryDescriptorList = 0LL;
  MemoryDescriptorList_8 = 8 * (((unsigned __int16)((CurrentThread & 0xFFF) + 6383) >> 12) + 6);
  MemoryDescriptorList_10 = 0;
  MemoryDescriptorList_32 = CurrentThread & 0xFFFFFFFFFFFFF000uLL;
  *(_QWORD *)MemoryDescriptorList_44 = CurrentThread & 0xFFF;
  MemoryDescriptorList_40 = 2288;
  MmProbeAndLockPages((PMDL)&MemoryDescriptorList, 0, IoWriteAccess);
  LODWORD(v27[1]) = a4;
  HIDWORD(v27[1]) = *(_DWORD *)(a1 + 40);
  v27[2] = *a3;
  v27[3] = *a5;
  v27[4] = *(_QWORD *)&MemoryDescriptorList_44[4];
  BYTE4(v27[7]) = 0;
  v27[5] = *a6;
  v27[6] = *a7;
  v12 = sub_140358A20(1u, 0, *a2, (__int64)v27);
  if ( v12 < 0 )
  {
    *a9 = 0;
  }
  else
  {
    *a2 = HIDWORD(v27[0]);
    *a3 = v27[2];
    *a5 = v27[3];
    *a8 = v27[7];
    *a6 = v27[5];
    *a7 = v27[6];
    *a9 = BYTE5(v27[7]);
  }
  MmUnlockPages((PMDL)&MemoryDescriptorList);
  if ( BYTE4(v27[7]) )
    sub_1402F5FD0(CurrentThread, v13, v14, v15);
  return (unsigned int)v12;
}
