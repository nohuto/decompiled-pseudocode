/*
 * XREFs of MiMarkKernelImageRetpolineBits @ 0x140A344A4
 * Callers:
 *     MiUnloadSystemImage @ 0x1406962FC (MiUnloadSystemImage.c)
 *     MmLoadSystemImageEx @ 0x140703E70 (MmLoadSystemImageEx.c)
 * Callees:
 *     MiIsRetpolineEnabled @ 0x14020EBC0 (MiIsRetpolineEnabled.c)
 *     MiIsImageFullyRetpolined @ 0x140A342F8 (MiIsImageFullyRetpolined.c)
 *     MiMarkRetpolineBits @ 0x140A344F0 (MiMarkRetpolineBits.c)
 */

__int64 __fastcall MiMarkKernelImageRetpolineBits(__int64 a1, unsigned int a2)
{
  int v4; // edx
  __int64 v5; // rcx

  if ( MiIsRetpolineEnabled() && (!v4 || (unsigned int)MiIsImageFullyRetpolined(v5)) )
    return MiMarkRetpolineBits(*(_QWORD *)(a1 + 48), *(unsigned int *)(a1 + 64), a2);
  else
    return 0LL;
}
