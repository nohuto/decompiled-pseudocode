/*
 * XREFs of RtlQueryCriticalSectionOwner @ 0x1800F3A00
 * Callers:
 *     RtlpQueryCriticalSectionOwnerInformation @ 0x1800E42E4 (RtlpQueryCriticalSectionOwnerInformation.c)
 * Callees:
 *     RtlReleaseSRWLockShared @ 0x18003AB90 (RtlReleaseSRWLockShared.c)
 *     ZwReadVirtualMemory @ 0x1800A4850 (ZwReadVirtualMemory.c)
 */

__int64 __fastcall RtlQueryCriticalSectionOwner(char *a1, char a2)
{
  unsigned int v4; // r8d
  unsigned __int64 v5; // rax
  __int64 v6; // r9
  signed __int64 v8; // rcx
  int v9; // r9d
  unsigned __int64 v10; // rax
  unsigned int v11; // eax
  _UNKNOWN **v12; // rbx
  _QWORD *v13; // rdi
  char j; // si
  __int64 v15; // rbx
  __int64 v16; // [rsp+48h] [rbp-40h]
  char *v17; // [rsp+50h] [rbp-38h]
  unsigned int i; // [rsp+90h] [rbp+8h]

  if ( !a1 )
    return 0LL;
  v4 = 0;
  v5 = _InterlockedCompareExchange64(&RtlCriticalSectionLock, 17LL, 0LL);
  if ( v5 )
  {
    while ( 1 )
    {
      if ( (v5 & 1) != 0 )
      {
        v6 = (v5 >> 1) & 1;
        if ( (_DWORD)v6 || (v5 & 0xFFFFFFFFFFFFFFF0uLL) == 0 )
          return 0LL;
      }
      else
      {
        v6 = (v5 >> 1) & 1;
      }
      v8 = (v5 | 1) + 16;
      if ( v6 )
        v8 = v5 | 1;
      if ( v5 == _InterlockedCompareExchange64(&RtlCriticalSectionLock, v8, v5) )
        break;
      v9 = v4;
      if ( v4 )
      {
        if ( v4 < 0x1FFF )
          v9 = 2 * v4;
      }
      else
      {
        if ( NtCurrentTeb()->ProcessEnvironmentBlock->NumberOfProcessors == 1 )
          goto LABEL_18;
        v9 = 64;
      }
      v4 = v9;
      v10 = __rdtsc();
      v11 = 10 * (((v9 - 1) & (unsigned int)v10) + v9) / MEMORY[0x7FFE02D6];
      for ( i = 0; i < v11; ++i )
        _mm_pause();
LABEL_18:
      _m_prefetchw(&RtlCriticalSectionLock);
      v5 = RtlCriticalSectionLock;
    }
  }
  v12 = (_UNKNOWN **)RtlCriticalSectionList;
  v13 = RtlCriticalSectionList;
  for ( j = 0; v12 != &RtlCriticalSectionList; j ^= 1u )
  {
    if ( !*((_WORD *)v12 - 8)
      && (!a2 || a1 == (char *)*(v12 - 1) + 8)
      && (int)ZwReadVirtualMemory() >= 0
      && (a2 || v17 == a1) )
    {
      v15 = v16;
      goto LABEL_33;
    }
    v12 = (_UNKNOWN **)*v12;
    if ( v12 == v13 )
      break;
    if ( j )
      v13 = (_QWORD *)*v13;
  }
  v15 = 0LL;
LABEL_33:
  RtlReleaseSRWLockShared(&RtlCriticalSectionLock);
  return v15;
}
