/*
 * XREFs of RtlQueryCriticalSectionOwner @ 0x1800F3720
 * Callers:
 *     RtlpQueryCriticalSectionOwnerInformation @ 0x1800E3210 (RtlpQueryCriticalSectionOwnerInformation.c)
 * Callees:
 *     RtlReleaseSRWLockShared @ 0x180026E40 (RtlReleaseSRWLockShared.c)
 *     ZwReadVirtualMemory @ 0x18009F5D0 (ZwReadVirtualMemory.c)
 */

__int64 __fastcall RtlQueryCriticalSectionOwner(char *a1, char a2)
{
  unsigned int v4; // r8d
  char v5; // r10
  unsigned __int64 v6; // rax
  __int64 v7; // r9
  signed __int64 v8; // rcx
  int v9; // r9d
  unsigned __int64 v10; // rax
  unsigned int v11; // r9d
  _UNKNOWN **v12; // rbx
  _QWORD *v13; // rdi
  char i; // si
  __int64 v15; // rbx
  __int64 v17; // [rsp+48h] [rbp-40h]
  char *v18; // [rsp+50h] [rbp-38h]
  unsigned int j; // [rsp+90h] [rbp+8h]

  if ( !a1 )
    return 0LL;
  v4 = 0;
  v5 = 0;
  v6 = _InterlockedCompareExchange64(&RtlCriticalSectionLock, 17LL, 0LL);
  if ( !v6 )
  {
LABEL_19:
    v12 = (_UNKNOWN **)RtlCriticalSectionList;
    v13 = RtlCriticalSectionList;
    for ( i = 0; v12 != &RtlCriticalSectionList; i ^= 1u )
    {
      if ( !*((_WORD *)v12 - 8)
        && (!a2 || a1 == (char *)*(v12 - 1) + 8)
        && (int)ZwReadVirtualMemory() >= 0
        && (a2 || v18 == a1) )
      {
        v15 = v17;
        goto LABEL_33;
      }
      v12 = (_UNKNOWN **)*v12;
      if ( v12 == v13 )
        break;
      if ( i )
        v13 = (_QWORD *)*v13;
    }
    v15 = 0LL;
LABEL_33:
    RtlReleaseSRWLockShared(&RtlCriticalSectionLock);
    return v15;
  }
  while ( 1 )
  {
    v7 = (v6 >> 1) & 1;
    if ( (v6 & 1) != 0 && (v7 || (v6 & 0xFFFFFFFFFFFFFFF0uLL) == 0) )
      break;
    v8 = (v6 | 1) + 16;
    if ( v7 )
      v8 = v6 | 1;
    if ( v6 == _InterlockedCompareExchange64(&RtlCriticalSectionLock, v8, v6) )
    {
      v5 = 1;
      break;
    }
    v9 = v4;
    if ( v4 )
    {
      if ( v4 < 0x1FFF )
        v9 = 2 * v4;
    }
    else
    {
      if ( NtCurrentTeb()->ProcessEnvironmentBlock->NumberOfProcessors == 1 )
        goto LABEL_16;
      v9 = 64;
    }
    v4 = v9;
    v10 = __rdtsc();
    v11 = 10 * (((v9 - 1) & (unsigned int)v10) + v9) / MEMORY[0x7FFE02D6];
    for ( j = 0; j < v11; ++j )
      _mm_pause();
LABEL_16:
    _m_prefetchw(&RtlCriticalSectionLock);
    v6 = RtlCriticalSectionLock;
  }
  if ( v5 )
    goto LABEL_19;
  return 0LL;
}
