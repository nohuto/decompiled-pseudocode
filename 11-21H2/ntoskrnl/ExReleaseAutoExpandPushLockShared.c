/*
 * XREFs of ExReleaseAutoExpandPushLockShared @ 0x1402AFA70
 * Callers:
 *     FsRtlLookupPerFileContext @ 0x140258F50 (FsRtlLookupPerFileContext.c)
 *     sub_1405AC910 @ 0x1405AC910 (sub_1405AC910.c)
 * Callees:
 *     sub_14021C64C @ 0x14021C64C (sub_14021C64C.c)
 *     sub_140259E60 @ 0x140259E60 (sub_140259E60.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

__int64 __fastcall ExReleaseAutoExpandPushLockShared(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter1)
{
  char v2; // bl
  ULONG_PTR v3; // rdi
  unsigned int v4; // esi
  __int64 result; // rax
  unsigned int v6; // esi
  unsigned __int64 v7; // [rsp+60h] [rbp+18h] BYREF

  v2 = BugCheckParameter1;
  v7 = 0LL;
  if ( (BugCheckParameter1 & 0xFFFFFFF8) != 0 || (BugCheckParameter2 & 2) != 0 && (BugCheckParameter1 & 2) != 0 )
    KeBugCheckEx(0x152u, (unsigned int)BugCheckParameter1, BugCheckParameter2, 0LL, 0LL);
  v3 = BugCheckParameter2 & 0xFFFFFFFFFFFFFFFCuLL;
  if ( (BugCheckParameter2 & 1) != 0 )
  {
    _m_prefetchw((const void *)(v3 + 12));
    v4 = *(_DWORD *)(v3 + 12);
    if ( v4 >= 0x80000000 && (*(_DWORD *)(v3 + 8) & 3) == 0 )
    {
      if ( (unsigned __int16)v4 < (unsigned int)dword_140D05104 || (v4 & 0xF0000) >= 0xF0000 || KeGetCurrentIrql() >= 2u )
      {
        v4 = (v4 >> 2) & 0x3FF33FFF;
        *(_DWORD *)(v3 + 12) = v4;
      }
      else
      {
        sub_140259E60(BugCheckParameter2 & 0xFFFFFFFFFFFFFFFCuLL);
      }
    }
    result = _InterlockedCompareExchange64((volatile signed __int64 *)v3, 0LL, 17LL);
    if ( result == 17 )
    {
LABEL_6:
      if ( v4 < 0x80000000 )
        *(_DWORD *)(v3 + 12) = v4 + 0x100000;
      goto LABEL_8;
    }
    if ( (v4 & dword_140D0519C) == 0 )
    {
      result = sub_14021C64C((signed __int64 *)v3, &v7);
      if ( !v7 )
        goto LABEL_8;
      v6 = *(_DWORD *)(v3 + 12);
      if ( v6 >= 0x80000000 )
        goto LABEL_8;
      result = v7 >> byte_140D05017;
      if ( v7 >> byte_140D05017 > 0x1FF )
        result = 511LL;
      v4 = result + v6;
      goto LABEL_6;
    }
    sub_14021C64C((signed __int64 *)v3, 0LL);
    result = *(unsigned int *)(v3 + 12);
    if ( (unsigned int)result < 0x80000000 )
    {
      result = (unsigned int)(result + 0x100000);
      *(_DWORD *)(v3 + 12) = result;
    }
  }
  else
  {
    result = _InterlockedCompareExchange64((volatile signed __int64 *)v3, 0LL, 17LL);
    if ( result != 17 )
      result = ExfReleasePushLockShared(BugCheckParameter2 & 0xFFFFFFFFFFFFFFFCuLL);
    v3 = *(_QWORD *)(v3 + 8);
  }
LABEL_8:
  if ( (v2 & 2) == 0 )
    return sub_1402AFC00(v3);
  return result;
}
