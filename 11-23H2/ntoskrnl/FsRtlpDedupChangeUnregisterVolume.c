/*
 * XREFs of FsRtlpDedupChangeUnregisterVolume @ 0x14093ECBC
 * Callers:
 *     FsRtlDedupChangeUninit @ 0x14093E980 (FsRtlDedupChangeUninit.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x1402391B0 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x14023D4E0 (ExReleaseResourceLite.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

void __fastcall FsRtlpDedupChangeUnregisterVolume(_QWORD *a1)
{
  __int64 *i; // rcx
  __int64 v3; // rdx
  __int64 *v5; // rdx
  __int64 **v6; // rax

  ExAcquireResourceExclusiveLite(&Resource, 1u);
  for ( i = (__int64 *)FsRtlDedupChangeData; i != &FsRtlDedupChangeData; i = (__int64 *)*i )
  {
    v3 = *(__int64 *)((char *)i + 20) - *a1;
    if ( !v3 )
      v3 = *(__int64 *)((char *)i + 28) - a1[1];
    if ( !v3 )
    {
      if ( (*((_DWORD *)i + 4))-- == 1 )
      {
        v5 = (__int64 *)*i;
        if ( *(__int64 **)(*i + 8) != i || (v6 = (__int64 **)i[1], *v6 != i) )
          __fastfail(3u);
        *v6 = v5;
        v5[1] = (__int64)v6;
        ExFreePoolWithTag(i, 0x68436544u);
      }
      break;
    }
  }
  ExReleaseResourceLite(&Resource);
}
