/*
 * XREFs of PoVolumeDevice @ 0x1408721CC
 * Callers:
 *     IoCreateDevice @ 0x14076AFD0 (IoCreateDevice.c)
 *     IoVerifyVolume @ 0x1409476B0 (IoVerifyVolume.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x140230720 (ExAcquireFastMutex.c)
 *     ExReleaseFastMutex @ 0x140230860 (ExReleaseFastMutex.c)
 *     PopGetDope @ 0x1403C5248 (PopGetDope.c)
 */

void __fastcall PoVolumeDevice(__int64 a1)
{
  __int64 Dope; // rbx
  _QWORD *v2; // rax
  _QWORD *v3; // rcx

  Dope = PopGetDope(a1);
  if ( Dope )
  {
    ExAcquireFastMutex(&PopVolumeLock);
    v2 = (_QWORD *)(Dope + 72);
    if ( !*(_QWORD *)(Dope + 72) )
    {
      v3 = (_QWORD *)qword_140C3D908;
      if ( *(__int64 **)qword_140C3D908 != &PopVolumeDevices )
        __fastfail(3u);
      *v2 = &PopVolumeDevices;
      *(_QWORD *)(Dope + 80) = v3;
      *v3 = v2;
      qword_140C3D908 = Dope + 72;
    }
    ExReleaseFastMutex(&PopVolumeLock);
  }
}
