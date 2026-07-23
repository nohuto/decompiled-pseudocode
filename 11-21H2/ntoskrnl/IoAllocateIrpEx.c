/*
 * XREFs of IoAllocateIrpEx @ 0x14022CFA0
 * Callers:
 *     sub_140540EA0 @ 0x140540EA0 (sub_140540EA0.c)
 *     FsRtlSetKernelEaFile @ 0x1406A3540 (FsRtlSetKernelEaFile.c)
 *     sub_1406A443C @ 0x1406A443C (sub_1406A443C.c)
 *     FsRtlKernelFsControlFile @ 0x1406A4560 (FsRtlKernelFsControlFile.c)
 *     FsRtlQueryKernelEaFile @ 0x1406A4870 (FsRtlQueryKernelEaFile.c)
 *     FsRtlGetFileSize @ 0x1406FF640 (FsRtlGetFileSize.c)
 *     sub_14092D730 @ 0x14092D730 (sub_14092D730.c)
 *     FsRtlQueryInformationFile @ 0x14092ED30 (FsRtlQueryInformationFile.c)
 *     sub_140A8D17C @ 0x140A8D17C (sub_140A8D17C.c)
 * Callees:
 *     sub_14020B830 @ 0x14020B830 (sub_14020B830.c)
 *     sub_1402AACD0 @ 0x1402AACD0 (sub_1402AACD0.c)
 *     sub_140A7FE00 @ 0x140A7FE00 (sub_140A7FE00.c)
 *     sub_140A8ACE8 @ 0x140A8ACE8 (sub_140A8ACE8.c)
 */

__int64 __fastcall IoAllocateIrpEx(__int64 a1, __int64 a2, __int64 a3)
{
  char v3; // bl
  char v4; // di
  __int64 v5; // rsi
  int v7; // eax
  void *retaddr; // [rsp+28h] [rbp+0h]

  v3 = a3;
  v4 = a2;
  v5 = a1;
  if ( !dword_140D06AD0 )
    return sub_1402AACD0(a1, a2);
  if ( dword_140D06AD0 != 2 )
  {
    if ( dword_140C1AA70 == 1 )
      return sub_140A7FE00(a1, a2, a3, retaddr);
    v7 = sub_140A8ACE8(retaddr);
    LOBYTE(a3) = v3;
    LOBYTE(a2) = v4;
    if ( v7 )
    {
      a1 = v5;
      return sub_140A7FE00(a1, a2, a3, retaddr);
    }
  }
  return sub_14020B830(a1, a2);
}
