/*
 * XREFs of PpmTestAndLockProcessor @ 0x1405C8D78
 * Callers:
 *     PpmIdleExecuteTransition @ 0x140306100 (PpmIdleExecuteTransition.c)
 *     PpmIdleCheckCoordinatedDependencies @ 0x1405C7638 (PpmIdleCheckCoordinatedDependencies.c)
 *     PpmIdleCheckCoordinatedDependency @ 0x1405C7798 (PpmIdleCheckCoordinatedDependency.c)
 * Callees:
 *     KeAddProcessorAffinityEx @ 0x140294460 (KeAddProcessorAffinityEx.c)
 *     KeCheckProcessorAffinityEx @ 0x140345D30 (KeCheckProcessorAffinityEx.c)
 *     KeInterlockedClearProcessorAffinityEx @ 0x1403B49A0 (KeInterlockedClearProcessorAffinityEx.c)
 *     KeInterlockedSetProcessorAffinityEx @ 0x1403C1A20 (KeInterlockedSetProcessorAffinityEx.c)
 *     PpmIdleLockProcessor @ 0x1405C81A8 (PpmIdleLockProcessor.c)
 *     PpmIdleTransitionStall @ 0x1405C85B0 (PpmIdleTransitionStall.c)
 */

__int64 __fastcall PpmTestAndLockProcessor(__int64 a1, unsigned __int16 *a2, __int64 a3)
{
  unsigned __int32 *v3; // r13
  unsigned __int32 v4; // eax
  __int64 v8; // rsi
  unsigned int v9; // ebx
  unsigned int v10; // r8d
  __int64 v11; // rdx
  unsigned int Number; // ebp
  __int64 v13; // r15
  _QWORD v15[2]; // [rsp+20h] [rbp-48h] BYREF
  __int128 v16; // [rsp+30h] [rbp-38h]

  v3 = (unsigned __int32 *)(a1 + 33672);
  v4 = *(_DWORD *)(a1 + 33672);
  v16 = 0LL;
  BYTE12(v16) = 1;
  v15[0] = 0LL;
  *(_QWORD *)&v16 = a1;
  v8 = 0LL;
  v15[1] = PopIdleTransitionTimeout;
  while ( (v4 & 0xFF000000) == 0x2000000 )
  {
    PpmIdleTransitionStall((__int64)v15);
    v4 = *v3;
  }
  v9 = -1073741782;
  if ( HIBYTE(v4) - 3 <= 2u )
  {
    if ( a3 )
    {
      v10 = *(_DWORD *)a3;
      v11 = 0LL;
      if ( *(_DWORD *)a3 )
      {
        while ( 1 )
        {
          v8 = *(_QWORD *)(a3 + 8) + 24 * v11;
          if ( *(_DWORD *)(v8 + 4) == *(_DWORD *)(a1 + 33660) )
            break;
          v11 = (unsigned int)(v11 + 1);
          if ( (unsigned int)v11 >= v10 )
            goto LABEL_9;
        }
      }
      else
      {
LABEL_9:
        if ( (_DWORD)v11 == v10 )
          return v9;
      }
      if ( !*(_BYTE *)(v8 + 2) )
        return v9;
      if ( !*(_BYTE *)v8 )
        return 0;
    }
    if ( (unsigned int)KeCheckProcessorAffinityEx(a2, *(_DWORD *)(a1 + 36)) )
      return 0;
    Number = KeGetPcr()->Prcb.Number;
    v13 = *(_QWORD *)(a1 + 33600);
    KeInterlockedSetProcessorAffinityEx(v13 + 72, Number);
    v9 = PpmIdleLockProcessor(v3);
    if ( (v9 & 0x80000000) != 0 )
    {
      KeInterlockedClearProcessorAffinityEx(v13 + 72, Number);
      return v9;
    }
    KeAddProcessorAffinityEx(a2, *(_DWORD *)(a1 + 36));
    if ( !a3 || *(_DWORD *)(v8 + 4) == *(_DWORD *)(a1 + 33660) )
      return 0;
  }
  return v9;
}
