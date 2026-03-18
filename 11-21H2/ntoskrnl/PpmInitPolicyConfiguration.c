/*
 * XREFs of PpmInitPolicyConfiguration @ 0x140B151EC
 * Callers:
 *     PoInitSystem @ 0x140B026CC (PoInitSystem.c)
 * Callees:
 *     PpmReleaseLock @ 0x140224C00 (PpmReleaseLock.c)
 *     PpmAcquireLock @ 0x140224E90 (PpmAcquireLock.c)
 *     qsort @ 0x1403E1E70 (qsort.c)
 *     PpmBeginProfileAccumulation @ 0x1406EBC90 (PpmBeginProfileAccumulation.c)
 *     PpmEnableProfile @ 0x14083113C (PpmEnableProfile.c)
 */

void PpmInitPolicyConfiguration()
{
  char *v0; // rdx
  __int64 v1; // r8
  __int64 v2; // rax
  _QWORD *v3; // rcx

  PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock);
  v0 = (char *)&unk_140D05FE0;
  v1 = 54LL;
  do
  {
    v2 = 1LL << v0[4];
    if ( (v0[5] & 4) != 0 )
      *(_DWORD *)v0 >>= 1;
    v3 = &unk_140C1D088;
    do
    {
      *v3 |= v2;
      v3 += 534;
    }
    while ( (__int64)v3 < (__int64)qword_140C1F1E8 );
    v0 += 40;
    --v1;
  }
  while ( v1 );
  qword_140C1F200 = -1LL;
  PpmDefaultProfile[0] = (__int64)PpmInfoDefaultProfileName;
  xmmword_140C1D06C = (__int128)NullGuid;
  dword_140C1D07C = 2;
  PpmEnableProfile((__int64)PpmDefaultProfile, (__int64)v0);
  PpmBeginProfileAccumulation((__int64)PpmDefaultProfile, MEMORY[0xFFFFF78000000008]);
  qsort(&PpmPolicyConfigTable, 0x36uLL, 0x28uLL, PpmInfoConfigComparer);
  PpmReleaseLock(&PpmPerfPolicyLock);
}
