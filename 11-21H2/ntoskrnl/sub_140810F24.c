/*
 * XREFs of sub_140810F24 @ 0x140810F24
 * Callers:
 *     IoCreateDevice @ 0x14074ED50 (IoCreateDevice.c)
 *     IoVerifyVolume @ 0x1409367E0 (IoVerifyVolume.c)
 * Callees:
 *     sub_14025A904 @ 0x14025A904 (sub_14025A904.c)
 *     ExAcquireFastMutex @ 0x14028A160 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x1402AF9B0 (KeReleaseGuardedMutex.c)
 */

void __fastcall sub_140810F24(__int64 a1)
{
  __int64 v1; // rbx
  _QWORD *v2; // rax
  _QWORD *v3; // rcx

  v1 = sub_14025A904(a1);
  if ( v1 )
  {
    ExAcquireFastMutex(&stru_140C23160);
    v2 = (_QWORD *)(v1 + 72);
    if ( !*(_QWORD *)(v1 + 72) )
    {
      v3 = (_QWORD *)qword_140C231A8;
      if ( *(__int64 **)qword_140C231A8 != &qword_140C231A0 )
        __fastfail(3u);
      *v2 = &qword_140C231A0;
      *(_QWORD *)(v1 + 80) = v3;
      *v3 = v2;
      qword_140C231A8 = v1 + 72;
    }
    KeReleaseGuardedMutex(&stru_140C23160);
  }
}
