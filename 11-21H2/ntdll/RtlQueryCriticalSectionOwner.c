/*
 * XREFs of RtlQueryCriticalSectionOwner @ 0x1800F3A00
 * Callers:
 *     RtlpQueryCriticalSectionOwnerInformation @ 0x1800E42E4 (RtlpQueryCriticalSectionOwnerInformation.c)
 * Callees:
 *     RtlReleaseSRWLockShared @ 0x18003AB90 (RtlReleaseSRWLockShared.c)
 *     ZwReadVirtualMemory @ 0x1800A4850 (ZwReadVirtualMemory.c)
 */

HANDLE __cdecl RtlQueryCriticalSectionOwner(HANDLE EventHandle)
{
  char v1; // dl
  char v2; // r15
  unsigned int v4; // r8d
  unsigned __int64 Value; // rax
  __int64 v6; // r9
  signed __int64 v8; // rcx
  int v9; // r9d
  unsigned __int64 v10; // rax
  unsigned int v11; // eax
  _UNKNOWN **v12; // rbx
  _QWORD *v13; // rdi
  char j; // si
  __int64 v15; // rdx
  void *v16; // rbx
  _BYTE Buffer[16]; // [rsp+38h] [rbp-50h] BYREF
  void *v18; // [rsp+48h] [rbp-40h]
  HANDLE v19; // [rsp+50h] [rbp-38h]
  unsigned int i; // [rsp+90h] [rbp+8h]

  v2 = v1;
  if ( !EventHandle )
    return 0LL;
  v4 = 0;
  Value = _InterlockedCompareExchange64((volatile signed __int64 *)&RtlCriticalSectionLock, 17LL, 0LL);
  if ( Value )
  {
    while ( 1 )
    {
      if ( (Value & 1) != 0 )
      {
        v6 = (Value >> 1) & 1;
        if ( (_DWORD)v6 || (Value & 0xFFFFFFFFFFFFFFF0uLL) == 0 )
          return 0LL;
      }
      else
      {
        v6 = (Value >> 1) & 1;
      }
      v8 = (Value | 1) + 16;
      if ( v6 )
        v8 = Value | 1;
      if ( Value == _InterlockedCompareExchange64((volatile signed __int64 *)&RtlCriticalSectionLock, v8, Value) )
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
      Value = RtlCriticalSectionLock.Value;
    }
  }
  v12 = (_UNKNOWN **)RtlCriticalSectionList;
  v13 = RtlCriticalSectionList;
  for ( j = 0; v12 != &RtlCriticalSectionList; j ^= 1u )
  {
    if ( !*((_WORD *)v12 - 8) )
    {
      v15 = (__int64)*(v12 - 1);
      if ( (!v2 || EventHandle == (HANDLE)(v15 + 8))
        && ZwReadVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID)v15, Buffer, 0x28uLL, 0LL) >= 0
        && (v2 || v19 == EventHandle) )
      {
        v16 = v18;
        goto LABEL_33;
      }
    }
    v12 = (_UNKNOWN **)*v12;
    if ( v12 == v13 )
      break;
    if ( j )
      v13 = (_QWORD *)*v13;
  }
  v16 = 0LL;
LABEL_33:
  RtlReleaseSRWLockShared(&RtlCriticalSectionLock);
  return v16;
}
