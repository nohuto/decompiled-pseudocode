/*
 * XREFs of sub_14021C64C @ 0x14021C64C
 * Callers:
 *     FsRtlLookupPerFileObjectContext @ 0x14021C390 (FsRtlLookupPerFileObjectContext.c)
 *     FsRtlLookupPerStreamContextInternal @ 0x1402AE630 (FsRtlLookupPerStreamContextInternal.c)
 *     ExReleaseAutoExpandPushLockShared @ 0x1402AFA70 (ExReleaseAutoExpandPushLockShared.c)
 * Callees:
 *     sub_14021C718 @ 0x14021C718 (sub_14021C718.c)
 *     sub_140359F70 @ 0x140359F70 (sub_140359F70.c)
 */

signed __int64 __fastcall sub_14021C64C(signed __int64 *a1, _QWORD *a2)
{
  signed __int64 result; // rax
  signed __int64 v5; // r8
  signed __int64 v6; // rtt
  __int64 v7; // r8
  __int64 v8; // rdx
  signed __int64 v9; // rcx
  signed __int64 v10; // rdx
  signed __int64 v11; // rtt
  unsigned __int64 i; // rcx
  __int64 v13; // rdx
  __int128 v14; // [rsp+20h] [rbp-28h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+30h] [rbp-18h]

  CurrentThread = 0LL;
  v14 = 0LL;
  if ( a2 )
  {
    CurrentThread = KeGetCurrentThread();
    DWORD2(v14) = *((_DWORD *)CurrentThread + 85);
    *a2 = 0LL;
    *(_QWORD *)&v14 = __rdtsc();
  }
  _m_prefetchw(a1);
  result = *a1;
  while ( (result & 2) == 0 )
  {
    v5 = 0LL;
    if ( (result & 0xFFFFFFFFFFFFFFF0uLL) != 0x10 )
      v5 = result - 16;
    v6 = result;
    result = _InterlockedCompareExchange64(a1, v5, result);
    if ( v6 == result )
    {
      if ( a2 )
        return sub_14021C718(&v14, a2);
      return result;
    }
  }
  if ( (result & 8) != 0 )
  {
    for ( i = result & 0xFFFFFFFFFFFFFFF0uLL; ; i = *(_QWORD *)(i + 24) )
    {
      v13 = *(_QWORD *)(i + 32);
      if ( v13 )
        break;
    }
    if ( _InterlockedDecrement((volatile signed __int32 *)(v13 + 48)) > 0 )
      return result;
    v7 = -9LL;
  }
  else
  {
    v7 = -1LL;
  }
  do
  {
    v8 = v7 + 4;
    v9 = result & 6;
    if ( v9 != 2 )
      v8 = v7;
    v10 = result + v8;
    v11 = result;
    result = _InterlockedCompareExchange64(a1, v10, result);
  }
  while ( v11 != result );
  if ( v9 == 2 )
    return sub_140359F70(a1, v10, v7, a2, v14, *((_QWORD *)&v14 + 1), CurrentThread);
  return result;
}
