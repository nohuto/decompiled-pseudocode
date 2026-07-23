/*
 * XREFs of sub_1407A7EB0 @ 0x1407A7EB0
 * Callers:
 *     sub_14066C3C0 @ 0x14066C3C0 (sub_14066C3C0.c)
 *     sub_1406BE210 @ 0x1406BE210 (sub_1406BE210.c)
 *     sub_1407A4638 @ 0x1407A4638 (sub_1407A4638.c)
 *     sub_1407A58E0 @ 0x1407A58E0 (sub_1407A58E0.c)
 *     sub_1407A817C @ 0x1407A817C (sub_1407A817C.c)
 *     sub_1407ABD80 @ 0x1407ABD80 (sub_1407ABD80.c)
 *     sub_140881980 @ 0x140881980 (sub_140881980.c)
 *     sub_140966620 @ 0x140966620 (sub_140966620.c)
 * Callees:
 *     sub_14024BA7C @ 0x14024BA7C (sub_14024BA7C.c)
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 *     sub_1407A7F84 @ 0x1407A7F84 (sub_1407A7F84.c)
 */

ULONG_PTR __fastcall sub_1407A7EB0(_QWORD *a1, int a2, _DWORD *a3)
{
  signed __int64 *v6; // rdi
  ULONG_PTR v7; // rbx
  signed __int32 v9[10]; // [rsp+0h] [rbp-28h] BYREF

  if ( !a1 )
    return 0LL;
  v6 = a1 + 1;
  ExAcquirePushLockSharedEx((ULONG_PTR)(a1 + 1), 0LL);
  if ( (unsigned __int64)(unsigned int)(a2 - 16) < a1[2]
    && (v7 = *(_QWORD *)(*a1 + 8LL * (unsigned int)(a2 - 16))) != 0
    && *(unsigned __int8 *)(v7 - 31) == *a3
    && sub_1407A7F84(v7) )
  {
    if ( _InterlockedCompareExchange64(v6, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v6);
    sub_1402AFC00((ULONG_PTR)v6);
    if ( (*(_BYTE *)(v7 - 32) & 4) != 0 )
    {
      _InterlockedOr(v9, 0);
      if ( (*(_QWORD *)(v7 - 16) & 1) != 0 )
        sub_14024BA7C(v7 - 16);
    }
    return v7;
  }
  else
  {
    if ( _InterlockedCompareExchange64(v6, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v6);
    sub_1402AFC00((ULONG_PTR)v6);
    return 0LL;
  }
}
