/*
 * XREFs of sub_140259E60 @ 0x140259E60
 * Callers:
 *     FsRtlLookupPerFileObjectContext @ 0x14021C390 (FsRtlLookupPerFileObjectContext.c)
 *     FsRtlLookupPerStreamContextInternal @ 0x1402AE630 (FsRtlLookupPerStreamContextInternal.c)
 *     ExReleaseAutoExpandPushLockShared @ 0x1402AFA70 (ExReleaseAutoExpandPushLockShared.c)
 * Callees:
 *     sub_140259EC4 @ 0x140259EC4 (sub_140259EC4.c)
 */

void __fastcall sub_140259E60(__int64 a1)
{
  signed __int32 v2; // ebx
  __int64 v3; // rax

  _m_prefetchw((const void *)(a1 + 8));
  v2 = *(_DWORD *)(a1 + 8);
  if ( (v2 & 3) == 0 && v2 == _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 8), v2 | 2, v2) )
  {
    v3 = sub_140259EC4(a1, (v2 & 4) == 0);
    if ( v3 == -1 )
    {
      *(_DWORD *)(a1 + 12) = (*(_DWORD *)(a1 + 12) >> 2) & 0x3FF33FFF;
      *(_DWORD *)(a1 + 8) = v2 & 0xFFFFFFFD;
    }
    else
    {
      *(_DWORD *)(a1 + 8) = v3 ^ ((unsigned __int8)v2 ^ (unsigned __int8)v3) & 4 | 1;
    }
  }
}
