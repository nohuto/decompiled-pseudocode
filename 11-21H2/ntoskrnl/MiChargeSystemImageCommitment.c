/*
 * XREFs of MiChargeSystemImageCommitment @ 0x140761D88
 * Callers:
 *     MiMapSystemImage @ 0x140761714 (MiMapSystemImage.c)
 *     MiMapSystemImageWithLargePage @ 0x14098325C (MiMapSystemImageWithLargePage.c)
 * Callees:
 *     MiAcquireNonPagedResources @ 0x14026A784 (MiAcquireNonPagedResources.c)
 *     MiSectionControlArea @ 0x140287970 (MiSectionControlArea.c)
 *     MiReleaseNonPagedResources @ 0x1405B2DA0 (MiReleaseNonPagedResources.c)
 */

__int64 __fastcall MiChargeSystemImageCommitment(__int64 a1)
{
  unsigned __int64 v1; // rax
  int v2; // r8d
  __int64 v3; // rdx

  v1 = MiSectionControlArea(a1);
  v3 = *(unsigned int *)(*(_QWORD *)v1 + 8LL);
  if ( !*(_DWORD *)(*(_QWORD *)v1 + 8LL) )
    return 0LL;
  if ( v2 != 1 )
  {
    MiReleaseNonPagedResources((__int64)&MiSystemPartition, v3);
    return 0LL;
  }
  if ( (int)MiAcquireNonPagedResources((__int64)&MiSystemPartition, v3, 0LL, 0) >= 0 )
    return 0LL;
  return 3221225626LL;
}
