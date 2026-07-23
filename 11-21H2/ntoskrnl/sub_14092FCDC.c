/*
 * XREFs of sub_14092FCDC @ 0x14092FCDC
 * Callers:
 *     FsRtlHeatUninit @ 0x14092FB20 (FsRtlHeatUninit.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x1402AE340 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_14092FCDC(_QWORD *a1)
{
  __int64 *i; // rcx
  __int64 v3; // rdx
  __int64 *v5; // rax
  __int64 **v6; // rdx

  ExAcquireResourceExclusiveLite(&stru_140C48A90, 1u);
  for ( i = (__int64 *)qword_140C48A80; i != &qword_140C48A80; i = (__int64 *)*i )
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
        ExFreePoolWithTag(i, 0x68745346u);
      }
      break;
    }
  }
  ExReleaseResourceLite(&stru_140C48A90);
}
