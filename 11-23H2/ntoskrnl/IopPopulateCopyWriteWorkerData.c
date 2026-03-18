/*
 * XREFs of IopPopulateCopyWriteWorkerData @ 0x1402F4E44
 * Callers:
 *     NtCopyFileChunk @ 0x140749890 (NtCopyFileChunk.c)
 * Callees:
 *     IopValidateAndGetWriteParameters @ 0x140223D30 (IopValidateAndGetWriteParameters.c)
 *     IopAllocateAndPopulateWriteIrp @ 0x140224220 (IopAllocateAndPopulateWriteIrp.c)
 *     memset @ 0x140435A00 (memset.c)
 */

__int64 __fastcall IopPopulateCopyWriteWorkerData(
        unsigned __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        int a5,
        int a6,
        __int64 a7,
        void *a8,
        struct _KTHREAD **a9,
        unsigned __int64 a10,
        char a11,
        __int64 a12)
{
  __int64 result; // rax
  _OWORD v17[9]; // [rsp+38h] [rbp-79h] BYREF

  memset(v17, 0, 0x88uLL);
  v17[1] = a1;
  *(_QWORD *)&v17[8] = a7;
  BYTE10(v17[0]) = 1;
  memset(&v17[2], 0, 24);
  *((_QWORD *)&v17[3] + 1) = a2;
  *(_QWORD *)&v17[4] = a3;
  DWORD2(v17[4]) = a4;
  *(_QWORD *)&v17[5] = 0LL;
  DWORD2(v17[5]) = 0;
  v17[6] = 0LL;
  LODWORD(v17[7]) = -1073741824;
  *((_QWORD *)&v17[7] + 1) = 0LL;
  result = IopValidateAndGetWriteParameters((struct _KTHREAD **)v17, a8, a9, a10, a11);
  if ( (int)result >= 0 )
  {
    *(_QWORD *)(a12 + 8) = *((_QWORD *)&v17[1] + 1);
    return IopAllocateAndPopulateWriteIrp((__int64)v17, (IRP **)a12);
  }
  return result;
}
