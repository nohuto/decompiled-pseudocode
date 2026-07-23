/*
 * XREFs of ExTimedWaitForUnblockPushLock @ 0x140348A10
 * Callers:
 *     ExpUnblockPushLock @ 0x140209468 (ExpUnblockPushLock.c)
 *     ExBlockOnAddressPushLock @ 0x140348930 (ExBlockOnAddressPushLock.c)
 *     ExWaitForUnblockPushLock @ 0x14060A060 (ExWaitForUnblockPushLock.c)
 * Callees:
 *     ExpUnblockPushLock @ 0x140209468 (ExpUnblockPushLock.c)
 *     KeWaitForSingleObject @ 0x140243DB0 (KeWaitForSingleObject.c)
 */

__int64 __fastcall ExTimedWaitForUnblockPushLock(volatile __int64 *a1, char *a2, LARGE_INTEGER *a3)
{
  volatile signed __int32 *v3; // r9
  __int64 v4; // rbx
  int v8; // edx
  unsigned int v9; // ebx
  unsigned __int64 v11; // r8
  unsigned __int64 v12; // r10
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // rax

  *(_WORD *)a2 = 0;
  *((_DWORD *)a2 + 1) = 0;
  v3 = (volatile signed __int32 *)(a2 + 52);
  v4 = (unsigned int)ExpSpinCycleCount;
  *((_QWORD *)a2 + 2) = a2 + 8;
  *((_QWORD *)a2 + 1) = a2 + 8;
  a2[2] = 6;
  if ( MEMORY[0xFFFFF7800000036A] <= 1u )
  {
LABEL_8:
    if ( _interlockedbittestandreset(v3, 1u) )
    {
      v9 = KeWaitForSingleObject(a2, WrPushLock, 0, 0, a3);
      if ( v9 )
        ExpUnblockPushLock(a1, a2, 1);
    }
    else
    {
      return 0;
    }
    return v9;
  }
  else
  {
    if ( a2 != (char *)-52LL && MEMORY[0xFFFFF78000000297] )
    {
      v11 = __rdtsc();
      v12 = v11 + v4;
      while ( 1 )
      {
        __asm { monitorx rax, rcx, rdx }
        if ( (*v3 & 2) == 0 )
          break;
        v13 = v11;
        v14 = __rdtsc();
        v11 = v14;
        if ( v14 <= v13 || v14 >= v12 )
          goto LABEL_8;
        __asm { mwaitx  rax, rcx, rbx }
      }
    }
    else
    {
      v8 = 0;
      while ( (*v3 & 2) != 0 )
      {
        if ( v8 == (unsigned int)v4 / MEMORY[0xFFFFF780000002D6] )
          goto LABEL_8;
        _mm_pause();
        ++v8;
      }
    }
    return 0LL;
  }
}
