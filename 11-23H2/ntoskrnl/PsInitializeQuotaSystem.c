/*
 * XREFs of PsInitializeQuotaSystem @ 0x140B5479C
 * Callers:
 *     MiInitSystem @ 0x140B44518 (MiInitSystem.c)
 *     InitBootProcessor @ 0x140B52774 (InitBootProcessor.c)
 * Callees:
 *     PspRegisterResource @ 0x1403886C4 (PspRegisterResource.c)
 *     PspSanitizeResourceLimits @ 0x1408232C4 (PspSanitizeResourceLimits.c)
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 */

char __fastcall PsInitializeQuotaSystem(int a1)
{
  _QWORD *v1; // rdx
  char *v2; // rcx
  __int64 Pool2; // rax
  _QWORD *v4; // rax
  __int64 v5; // rcx
  char v6; // dl
  int v7; // r8d
  int v8; // edx

  if ( a1 )
  {
    PspRegisterResource(0, 5, -1073741756);
    PspRegisterResource(1, v6, v7);
    PspRegisterResource(2, 0, -1073741524);
    PspRegisterResource(v8 + 3, v8, -1073741663);
    qword_140C381F0 = 0LL;
    dword_140C38218 = 0;
    qword_140C38228 = 0LL;
    qword_140C38210 = (__int64)&qword_140C38208;
    qword_140C38208 = (__int64)&qword_140C38208;
    qword_140C38248 = (__int64)&qword_140C38240;
    qword_140C38240 = (__int64)&qword_140C38240;
    qword_140C381E8[0] = 0x10000LL;
    qword_140C381F8 = (__int64)MmRaisePoolQuota;
    qword_140C38200 = (__int64)MmReturnPoolQuota;
    PspQuotaExpansionDescriptors[0] = 1;
    qword_140C38220 = 0x80000LL;
    qword_140C38230 = (__int64)MmRaisePoolQuota;
    qword_140C38238 = (__int64)MmReturnPoolQuota;
LABEL_9:
    LOBYTE(Pool2) = 1;
    return Pool2;
  }
  dword_140C6B240 = 1;
  v1 = &unk_140C6B080;
  dword_140C6B244 = 1;
  v2 = PspResourceFlags;
  do
  {
    if ( (*v2 & 2) == 0 )
      *v1 = -1LL;
    v2 += 8;
    v1 += 16;
  }
  while ( (__int64)v2 < (__int64)&KiKernelCetLogging );
  KeGetCurrentThread()->ApcState.Process[1].Affinity.StaticBitmap[27] = (unsigned __int64)&PspSystemQuotaBlock;
  PspSanitizeResourceLimits((unsigned int *)PspDefaultResourceLimits, 1);
  Pool2 = ExAllocatePool2(256LL, 0x300uLL, 0x74517350u);
  PspQuotaBlockTable = Pool2;
  if ( Pool2 )
  {
    v4 = (_QWORD *)(Pool2 + 8);
    v5 = 32LL;
    do
    {
      v4[1] = v4;
      *v4 = v4;
      *(v4 - 1) = 0LL;
      v4 += 3;
      --v5;
    }
    while ( v5 );
    goto LABEL_9;
  }
  return Pool2;
}
