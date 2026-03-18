/*
 * XREFs of MiLockRetpolineStubs @ 0x140B9A9F0
 * Callers:
 *     MiInitializeRetpoline @ 0x140B48688 (MiInitializeRetpoline.c)
 * Callees:
 *     MiProbeAndLockPages @ 0x1402FC270 (MiProbeAndLockPages.c)
 *     MmCreateMdl @ 0x1403564F0 (MmCreateMdl.c)
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
 */

__int64 MiLockRetpolineStubs()
{
  PMDL Mdl; // rax
  __int64 v1; // rbx

  Mdl = MmCreateMdl(0LL, Base, (unsigned int)(dword_140C65980 << 12));
  v1 = (__int64)Mdl;
  if ( !Mdl )
    return 3221225626LL;
  MiProbeAndLockPages((__int64)Mdl, 0, 0);
  qword_140C65948 = v1;
  return 0LL;
}
