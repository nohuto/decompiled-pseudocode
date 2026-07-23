/*
 * XREFs of RtlQueryCriticalSectionOwner @ 0x1800F4B30
 * Callers:
 *     RtlpQueryCriticalSectionOwnerInformation @ 0x1800E4540 (RtlpQueryCriticalSectionOwnerInformation.c)
 * Callees:
 *     RtlReleaseSRWLockShared @ 0x180026CF0 (RtlReleaseSRWLockShared.c)
 *     ZwReadVirtualMemory @ 0x1800A1690 (ZwReadVirtualMemory.c)
 */

HANDLE __cdecl RtlQueryCriticalSectionOwner(HANDLE EventHandle)
{
  char v1; // dl
  char v2; // r15
  unsigned int v4; // r8d
  char v5; // r10
  unsigned __int64 Value; // rax
  __int64 v7; // r9
  signed __int64 v8; // rcx
  int v9; // r9d
  unsigned __int64 v10; // rax
  unsigned int v11; // r9d
  _UNKNOWN **v12; // rbx
  _QWORD *v13; // rdi
  char i; // si
  __int64 v15; // rdx
  void *v16; // rbx
  _BYTE Buffer[16]; // [rsp+38h] [rbp-50h] BYREF
  void *v19; // [rsp+48h] [rbp-40h]
  HANDLE v20; // [rsp+50h] [rbp-38h]
  unsigned int j; // [rsp+90h] [rbp+8h]

  v2 = v1;
  if ( !EventHandle )
    return 0LL;
  v4 = 0;
  v5 = 0;
  Value = _InterlockedCompareExchange64((volatile signed __int64 *)&RtlCriticalSectionLock, 17LL, 0LL);
  if ( !Value )
  {
LABEL_19:
    v12 = (_UNKNOWN **)RtlCriticalSectionList;
    v13 = RtlCriticalSectionList;
    for ( i = 0; v12 != &RtlCriticalSectionList; i ^= 1u )
    {
      if ( !*((_WORD *)v12 - 8) )
      {
        v15 = (__int64)*(v12 - 1);
        if ( (!v2 || EventHandle == (HANDLE)(v15 + 8))
          && ZwReadVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID)v15, Buffer, 0x28uLL, 0LL) >= 0
          && (v2 || v20 == EventHandle) )
        {
          v16 = v19;
          goto LABEL_33;
        }
      }
      v12 = (_UNKNOWN **)*v12;
      if ( v12 == v13 )
        break;
      if ( i )
        v13 = (_QWORD *)*v13;
    }
    v16 = 0LL;
LABEL_33:
    RtlReleaseSRWLockShared(&RtlCriticalSectionLock);
    return v16;
  }
  while ( 1 )
  {
    v7 = (Value >> 1) & 1;
    if ( (Value & 1) != 0 && (v7 || (Value & 0xFFFFFFFFFFFFFFF0uLL) == 0) )
      break;
    v8 = (Value | 1) + 16;
    if ( v7 )
      v8 = Value | 1;
    if ( Value == _InterlockedCompareExchange64((volatile signed __int64 *)&RtlCriticalSectionLock, v8, Value) )
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
    Value = RtlCriticalSectionLock.Value;
  }
  if ( v5 )
    goto LABEL_19;
  return 0LL;
}
