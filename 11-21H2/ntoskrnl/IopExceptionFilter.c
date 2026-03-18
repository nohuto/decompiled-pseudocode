/*
 * XREFs of IopExceptionFilter @ 0x14025E7A8
 * Callers:
 *     IopCompleteRequest @ 0x140347E10 (IopCompleteRequest.c)
 *     IopProcessBufferedIoCompletion @ 0x140417AE0 (IopProcessBufferedIoCompletion.c)
 *     IopValidateAndGetWriteParameters @ 0x1404186A0 (IopValidateAndGetWriteParameters.c)
 *     NtSubmitIoRing @ 0x14055A160 (NtSubmitIoRing.c)
 *     NtCopyFileChunk @ 0x1406588A0 (NtCopyFileChunk.c)
 *     NtReadFileScatter @ 0x1406C6AF0 (NtReadFileScatter.c)
 *     NtWriteFileGather @ 0x1406E3F70 (NtWriteFileGather.c)
 *     NtWriteFile @ 0x14071D850 (NtWriteFile.c)
 *     IopReadFile @ 0x14073A450 (IopReadFile.c)
 *     IopIoRingDispatchRegisterBuffers @ 0x140938314 (IopIoRingDispatchRegisterBuffers.c)
 *     IopIoRingDispatchRegisterFiles @ 0x1409386B8 (IopIoRingDispatchRegisterFiles.c)
 *     IopIoRingGetBuffer @ 0x14093895C (IopIoRingGetBuffer.c)
 *     NtCreateIoRing @ 0x140938B40 (NtCreateIoRing.c)
 *     NtQueryIoRingCapabilities @ 0x140939090 (NtQueryIoRingCapabilities.c)
 *     NtSetInformationIoRing @ 0x140939130 (NtSetInformationIoRing.c)
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
