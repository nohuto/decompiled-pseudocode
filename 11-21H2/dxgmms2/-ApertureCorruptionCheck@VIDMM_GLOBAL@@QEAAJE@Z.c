/*
 * XREFs of ?ApertureCorruptionCheck@VIDMM_GLOBAL@@QEAAJE@Z @ 0x1C002D99C
 * Callers:
 *     VidSchDdiNotifyDpc @ 0x1C00054C0 (VidSchDdiNotifyDpc.c)
 *     VidSchDdiNotifyDpcWorker @ 0x1C0038574 (VidSchDdiNotifyDpcWorker.c)
 *     ?Escape@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_D3DKMT_VIDMM_ESCAPE@@H@Z @ 0x1C00D672C (-Escape@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_D3DKMT_VIDMM_ESCAPE@@H@Z.c)
 * Callees:
 *     ?CheckForApertureGuardPageCorruption@VIDMM_APERTURE_SEGMENT@@QEAAJPEAPEAKE@Z @ 0x1C0032744 (-CheckForApertureGuardPageCorruption@VIDMM_APERTURE_SEGMENT@@QEAAJPEAPEAKE@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::ApertureCorruptionCheck(VIDMM_GLOBAL *this, unsigned __int8 a2)
{
  __int64 v2; // rbx
  VIDMM_APERTURE_SEGMENT *v5; // rcx
  int v6; // esi
  unsigned int *v8; // [rsp+40h] [rbp+8h] BYREF

  v8 = 0LL;
  v2 = 0LL;
  if ( !*((_DWORD *)this + 926) )
    return 0LL;
  while ( 1 )
  {
    v5 = *(VIDMM_APERTURE_SEGMENT **)(*((_QWORD *)this + 464) + 8 * v2);
    if ( (*((_DWORD *)v5 + 20) & 1) != 0 )
    {
      v6 = VIDMM_APERTURE_SEGMENT::CheckForApertureGuardPageCorruption(v5, &v8, a2);
      if ( v6 < 0 )
        break;
    }
    v2 = (unsigned int)(v2 + 1);
    if ( (unsigned int)v2 >= *((_DWORD *)this + 926) )
      return 0LL;
  }
  if ( (VIDMM_GLOBAL::_Config & 0x10) != 0 )
    WdLogSingleEntry5(0LL, 270LL, 37LL, *((_QWORD *)this + 3), (unsigned int)v2, v8);
  return (unsigned int)v6;
}
