/*
 * XREFs of RtlpStdLogCapturedStackTrace @ 0x18010E734
 * Callers:
 *     RtlStdLogStackTrace @ 0x18010E140 (RtlStdLogStackTrace.c)
 * Callees:
 *     RtlCompareMemory @ 0x1800A3970 (RtlCompareMemory.c)
 *     memmove @ 0x1800A5980 (memmove.c)
 *     RtlpStdGetSpaceForTrace @ 0x18010E634 (RtlpStdGetSpaceForTrace.c)
 *     RtlpStdLockAcquire @ 0x18010E6F4 (RtlpStdLockAcquire.c)
 *     RtlpStdLockRelease @ 0x18010E714 (RtlpStdLockRelease.c)
 */

PSLIST_ENTRY __fastcall RtlpStdLogCapturedStackTrace(__int64 a1, __int64 a2, unsigned int a3)
{
  SIZE_T v4; // rbp
  __int64 v7; // rbx
  _RTL_SRWLOCK *v8; // r14
  PSLIST_ENTRY i; // rbx
  PSLIST_ENTRY SpaceForTrace; // rax
  __int16 v11; // cx
  __int64 v12; // rcx
  __int16 v13; // cx

  v4 = 8LL * *(unsigned __int16 *)(a2 + 14);
  v7 = 2LL * (a3 % *(_DWORD *)(a1 + 720));
  _InterlockedAdd((volatile signed __int32 *)(a1 + 176), 1u);
  v8 = (_RTL_SRWLOCK *)(a1 + 8 * v7);
  RtlpStdLockAcquire(v8 + 92);
  for ( i = *(PSLIST_ENTRY *)(a1 + 8 * v7 + 728); i; i = i->Next )
  {
    if ( *((_WORD *)&i->Next + 7) == *(_WORD *)(a2 + 14) && RtlCompareMemory(&i[1], (const void *)(a2 + 16), v4) == v4 )
      goto LABEL_8;
  }
  SpaceForTrace = RtlpStdGetSpaceForTrace(a1, *(_WORD *)(a2 + 14));
  i = SpaceForTrace;
  if ( !SpaceForTrace )
  {
    _InterlockedAdd((volatile signed __int32 *)(a1 + 200), 1u);
    goto LABEL_11;
  }
  memmove(&SpaceForTrace[1], (const void *)(a2 + 16), v4);
  v11 = *(_WORD *)(a2 + 14);
  *((_WORD *)&i->Next + 4) &= 0xF800u;
  *((_WORD *)&i->Next + 7) = v11;
  v12 = 2LL * (a3 % *(_DWORD *)(a1 + 720));
  i->Next = *(_SLIST_ENTRY **)(a1 + 16LL * (a3 % *(_DWORD *)(a1 + 720)) + 728);
  *(_QWORD *)(a1 + 8 * v12 + 728) = i;
LABEL_8:
  v13 = *((_WORD *)&i->Next + 4);
  if ( (v13 & 0x7FF) != 0x7FF )
    *((_WORD *)&i->Next + 4) = v13 ^ (v13 ^ (v13 + 1)) & 0x7FF;
LABEL_11:
  RtlpStdLockRelease(v8 + 92);
  return i;
}
