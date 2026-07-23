/*
 * XREFs of MiLockRetpolineStubs @ 0x140B999F0
 * Callers:
 *     MiInitializeRetpoline @ 0x140B44F88 (MiInitializeRetpoline.c)
 * Callees:
 *     MiProbeAndLockPages @ 0x1402FC500 (MiProbeAndLockPages.c)
 *     MmCreateMdl @ 0x140356C90 (MmCreateMdl.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

__int64 MiLockRetpolineStubs()
{
  PMDL Mdl; // rax
  __int64 v1; // rbx

  Mdl = MmCreateMdl(0LL, Base, (unsigned int)(dword_140C65880 << 12));
  v1 = (__int64)Mdl;
  if ( !Mdl )
    return 3221225626LL;
  MiProbeAndLockPages((__int64)Mdl, 0, 0);
  qword_140C65848 = v1;
  return 0LL;
}
