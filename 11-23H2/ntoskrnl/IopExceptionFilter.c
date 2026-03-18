/*
 * XREFs of IopExceptionFilter @ 0x1405554E8
 * Callers:
 *     IopValidateAndGetWriteParameters @ 0x140223D30 (IopValidateAndGetWriteParameters.c)
 *     IopCompleteRequest @ 0x1402AB480 (IopCompleteRequest.c)
 *     IopProcessBufferedIoCompletion @ 0x1402AC2A0 (IopProcessBufferedIoCompletion.c)
 *     NtSubmitIoRing @ 0x1405599D0 (NtSubmitIoRing.c)
 *     IopFlushBuffersFile @ 0x140686004 (IopFlushBuffersFile.c)
 *     NtCopyFileChunk @ 0x140749890 (NtCopyFileChunk.c)
 *     IopReadFile @ 0x14074C1C0 (IopReadFile.c)
 *     NtReadFileScatter @ 0x1407E7070 (NtReadFileScatter.c)
 *     NtWriteFileGather @ 0x1407E82F0 (NtWriteFileGather.c)
 *     IopIoRingDispatchRegisterBuffers @ 0x140949590 (IopIoRingDispatchRegisterBuffers.c)
 *     IopIoRingDispatchRegisterFiles @ 0x1409499B0 (IopIoRingDispatchRegisterFiles.c)
 *     IopIoRingGetBuffer @ 0x140949E0C (IopIoRingGetBuffer.c)
 *     NtCreateIoRing @ 0x14094A0B0 (NtCreateIoRing.c)
 *     NtQueryIoRingCapabilities @ 0x14094A890 (NtQueryIoRingCapabilities.c)
 *     NtSetInformationIoRing @ 0x14094A920 (NtSetInformationIoRing.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IopExceptionFilter(int **a1, int *a2)
{
  int v2; // r8d
  int v3; // eax

  v2 = **a1;
  *a2 = v2;
  if ( v2 == -1073741818 )
  {
    if ( (unsigned int)(*a1)[6] < 3 )
      return 1LL;
    v2 = (*a1)[12];
    *a2 = v2;
  }
  v3 = *a2;
  if ( v2 == -2147483646 )
    v3 = -1073741115;
  *a2 = v3;
  return 1LL;
}
