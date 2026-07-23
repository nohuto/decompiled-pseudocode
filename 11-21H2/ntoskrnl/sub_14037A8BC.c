/*
 * XREFs of sub_14037A8BC @ 0x14037A8BC
 * Callers:
 *     sub_14037A5F0 @ 0x14037A5F0 (sub_14037A5F0.c)
 * Callees:
 *     IoBuildPartialMdl @ 0x14021A4E0 (IoBuildPartialMdl.c)
 *     sub_1402210C0 @ 0x1402210C0 (sub_1402210C0.c)
 *     RtlCompressBuffer @ 0x140244760 (RtlCompressBuffer.c)
 *     MmBuildMdlForNonPagedPool @ 0x14027C410 (MmBuildMdlForNonPagedPool.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     sub_14037C6BC @ 0x14037C6BC (sub_14037C6BC.c)
 *     memmove @ 0x140435B40 (memmove.c)
 */

__int64 __fastcall sub_14037A8BC(__int64 a1, __int64 a2, void *a3, void *a4, PMDL MemoryDescriptorList)
{
  PMDL v6; // rsi
  unsigned __int64 StartVa; // r12
  struct _MDL *v9; // r14
  PVOID MappedSystemVa; // r13
  PVOID *p_MappedSystemVa; // r15
  __int16 v12; // bp
  __int64 v13; // rdx
  __int64 v14; // r8
  ULONG FinalCompressedSize[18]; // [rsp+40h] [rbp-48h] BYREF

  FinalCompressedSize[0] = 0;
  v6 = MemoryDescriptorList;
  StartVa = (unsigned __int64)MemoryDescriptorList[1].StartVa;
  v9 = *(struct _MDL **)(StartVa + 16);
  MappedSystemVa = v9->MappedSystemVa;
  memmove(a4, MappedSystemVa, 0x1000uLL);
  p_MappedSystemVa = &v6[1].MappedSystemVa;
  v12 = (_WORD)v6 + 72;
  if ( RtlCompressBuffer(
         *((_WORD *)v6[1].Process + 2016),
         (PUCHAR)a4,
         0x1000u,
         (PUCHAR)&v6[1].MappedSystemVa,
         StartVa - ((_DWORD)v6 + 72) + 4096,
         0x1000u,
         FinalCompressedSize,
         a3) < 0 )
  {
    FinalCompressedSize[0] = 4096;
    p_MappedSystemVa = (PVOID *)MappedSystemVa;
    IoBuildPartialMdl(v9, v6, (char *)v9->StartVa + v9->ByteOffset, 0);
  }
  else
  {
    v13 = FinalCompressedSize[0];
    v6->Next = 0LL;
    v6->MdlFlags = 0;
    v6->ByteCount = v13;
    v6->ByteOffset = v12 & 0xFFF;
    v6->StartVa = (PVOID)((unsigned __int64)p_MappedSystemVa & 0xFFFFFFFFFFFFF000uLL);
    v6->Size = 8 * ((((unsigned __int64)(v12 & 0xFFF) + v13 + 4095) >> 12) + 6);
    MmBuildMdlForNonPagedPool(v6);
  }
  MemoryDescriptorList = 0LL;
  sub_1402210C0(p_MappedSystemVa, FinalCompressedSize[0], (__int64 *)&MemoryDescriptorList, 0LL);
  *(_QWORD *)&v6[1].Size = MemoryDescriptorList;
  v6->Next = v9;
  *(_DWORD *)(StartVa + 8) |= 0x80000000;
  *(_QWORD *)(StartVa + 16) = v6;
  LOBYTE(v14) = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 112));
  *(_QWORD *)StartVa = *(_DWORD *)StartVa & 7 | ((**(_QWORD **)(a1 + 104) & 0xFFFFFFFFFFFFFFF8uLL) + 8);
  **(_QWORD **)(a1 + 104) = StartVa | **(_DWORD **)(a1 + 104) & 7;
  *(_QWORD *)(a1 + 104) = StartVa;
  return sub_14037C6BC(a1, a2, v14, 0LL);
}
