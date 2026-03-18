/*
 * XREFs of PopPepUpdateIdleState @ 0x140354B48
 * Callers:
 *     PopPepTriggerComponentActivatingActivity @ 0x140354A20 (PopPepTriggerComponentActivatingActivity.c)
 *     PopPepCompleteComponentActiveActivity @ 0x140354A90 (PopPepCompleteComponentActiveActivity.c)
 *     PopPepUpdateConstraints @ 0x1403B17EC (PopPepUpdateConstraints.c)
 *     PopPepCompleteComponentIdleStateChangeActivity @ 0x14045E3C0 (PopPepCompleteComponentIdleStateChangeActivity.c)
 *     PopPepComponentSetLatency @ 0x14045E4C2 (PopPepComponentSetLatency.c)
 *     PopPepComponentSetResidency @ 0x1405D4D6C (PopPepComponentSetResidency.c)
 *     PopPepComponentSetWakeHint @ 0x1405D4E64 (PopPepComponentSetWakeHint.c)
 *     PopPepIdleTimeoutRoutine @ 0x1405D5360 (PopPepIdleTimeoutRoutine.c)
 * Callees:
 *     PopPepTriggerActivity @ 0x140356BCC (PopPepTriggerActivity.c)
 *     PopPepArmIdleTimer @ 0x1405D4A94 (PopPepArmIdleTimer.c)
 */

__int64 __fastcall PopPepUpdateIdleState(__int64 a1, unsigned int *a2, char a3)
{
  __int64 v4; // r9
  __int64 v6; // rdx
  __int64 result; // rax
  unsigned int v9; // edi
  unsigned int *v10; // r8
  __int64 v11; // r10
  unsigned int v12; // ecx
  unsigned int v13; // eax
  unsigned int v14; // eax
  bool v15; // cl
  __int64 v16; // r9

  LODWORD(v4) = 0;
  v6 = a2[47] - 1;
  result = a2[41];
  if ( (unsigned int)v6 >= (unsigned int)result )
    v6 = (unsigned int)result;
  v9 = v6;
  if ( (_DWORD)v6 )
  {
    v10 = a2 + 38;
    v11 = 6LL;
    do
    {
      v12 = *v10;
      v13 = *v10++;
      if ( v12 >= v9 )
        v13 = v9;
      v9 = v13;
      v14 = v4 + 1;
      if ( v12 != (_DWORD)v6 )
        v14 = v4;
      v4 = v14;
      --v11;
    }
    while ( v11 );
    v15 = 0;
    if ( v14 == 5 )
      v15 = a2[40] < (unsigned int)v6;
    result = a2[1];
    if ( (result & 4) != 0 )
    {
      if ( !v15 )
      {
        result = (unsigned int)result & 0xFFFFFFFB;
        a2[1] = result;
        _InterlockedDecrement(&PopPepPoweredIdleComponentCount);
      }
    }
    else if ( v15 )
    {
      a2[1] = result | 4;
      result = (unsigned int)_InterlockedIncrement(&PopPepPoweredIdleComponentCount);
      if ( (_DWORD)result == 1 )
        result = PopPepArmIdleTimer(0LL, v6, v10, v4);
    }
  }
  if ( v9 != a2[44] )
  {
    v16 = v9;
    LODWORD(v16) = v9 | 0x80000000;
    if ( !a3 )
      v16 = v9;
    return PopPepTriggerActivity(a1, a2, 1LL, v16);
  }
  return result;
}
