/*
 * XREFs of IoIs32bitProcess @ 0x14022BA20
 * Callers:
 *     IoIsInitiator32bitProcess @ 0x1403B67F0 (IoIsInitiator32bitProcess.c)
 *     FsRtlGetMarkHandleInfo @ 0x14053DC2C (FsRtlGetMarkHandleInfo.c)
 *     EtwpGetScsiPassThroughCdb @ 0x1405FDD60 (EtwpGetScsiPassThroughCdb.c)
 *     PiCMFastIoDeviceDispatch @ 0x1406D06F0 (PiCMFastIoDeviceDispatch.c)
 *     NtCopyFileChunk @ 0x140749890 (NtCopyFileChunk.c)
 *     WmipIoControl @ 0x1407D6170 (WmipIoControl.c)
 *     WmipProbeWmiOpenGuidBlock @ 0x1407D64C8 (WmipProbeWmiOpenGuidBlock.c)
 *     WmipProbeAndCaptureGuidObjectAttributes @ 0x1407D656C (WmipProbeAndCaptureGuidObjectAttributes.c)
 *     PiDqDispatch @ 0x1407F8E60 (PiDqDispatch.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall IoIs32bitProcess(PIRP Irp)
{
  PETHREAD Thread; // rdx
  unsigned __int64 v2; // rax
  _KPROCESS *Process; // rcx
  __int16 v5; // dx
  CCHAR ApcEnvironment; // al
  __int16 v7; // cx

  if ( !Irp )
  {
    if ( KeGetCurrentThread()->PreviousMode != 1 )
      return 0;
    Process = KeGetCurrentThread()->ApcState.Process;
    if ( !Process[1].Affinity.StaticBitmap[30] )
      return 0;
    v5 = WORD2(Process[2].Affinity.StaticBitmap[20]);
    return v5 == 332 || v5 == 452;
  }
  if ( Irp->RequestorMode != 1 )
    return 0;
  Thread = Irp->Tail.Overlay.Thread;
  if ( (Irp->Flags & 0x2000) == 0 )
  {
    if ( Thread )
    {
      ApcEnvironment = Irp->ApcEnvironment;
      if ( !ApcEnvironment )
      {
        v2 = (unsigned __int64)Thread->Process;
        goto LABEL_5;
      }
      if ( ApcEnvironment == 1 )
      {
        v2 = (unsigned __int64)Thread->ApcState.Process;
        goto LABEL_5;
      }
    }
    return 0;
  }
  v2 = Irp->Overlay.AllocationSize.QuadPart & 0xFFFFFFFFFFFFFFF9uLL;
LABEL_5:
  if ( !v2 )
    return 0;
  if ( !*(_QWORD *)(v2 + 1408) )
    return 0;
  v7 = *(_WORD *)(v2 + 2412);
  return v7 == 332 || v7 == 452;
}
