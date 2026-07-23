/*
 * XREFs of PopIdleAoAcDozeToS4 @ 0x14099BE00
 * Callers:
 *     <none>
 * Callees:
 *     PopDeepSleepClearDisengageReason @ 0x14028E63C (PopDeepSleepClearDisengageReason.c)
 *     PopExecutePowerAction @ 0x1409898A4 (PopExecutePowerAction.c)
 *     PopTraceSystemIdleS0LowPowerDoze @ 0x140992CD8 (PopTraceSystemIdleS0LowPowerDoze.c)
 *     PopReleasePolicyLock @ 0x140A87BA4 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140A87BE4 (PopAcquirePolicyLock.c)
 */

__int64 __fastcall PopIdleAoAcDozeToS4(int a1)
{
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v6; // [rsp+20h] [rbp-40h]
  __int64 v7; // [rsp+28h] [rbp-38h]
  _DWORD v8[4]; // [rsp+30h] [rbp-30h] BYREF
  unsigned int v9[2]; // [rsp+40h] [rbp-20h] BYREF
  __int128 v10; // [rsp+48h] [rbp-18h]

  PopAcquirePolicyLock(a1);
  PopTraceSystemIdleS0LowPowerDoze();
  dword_140C3CD70 = 0;
  v10 = 0LL;
  if ( dword_140C3CD88 == 1 )
    goto LABEL_10;
  if ( dword_140C3CD88 != 2 )
  {
    if ( dword_140C3CD88 == 3 )
    {
      v9[0] = 13;
      goto LABEL_11;
    }
    if ( dword_140C3CD88 == 4 )
    {
      v9[0] = 14;
      goto LABEL_11;
    }
LABEL_10:
    v9[0] = 6;
    goto LABEL_11;
  }
  v9[0] = 11;
  if ( qword_140C3CE78
    && MEMORY[0xFFFFF78000000008] - qword_140C3CE78 > 10000000
                                                    * (unsigned __int64)(unsigned int)PopSmartUserPresenceCheckTimeout )
  {
    v9[0] = 12;
  }
LABEL_11:
  v8[2] = 0;
  v9[1] = 128;
  v8[0] = 3;
  v8[1] = -2147483612;
  PopExecutePowerAction(v9, 0, v8, 5, 1u);
  PopReleasePolicyLock(v2, v1, v3, v4, v6, v7);
  _InterlockedAnd(&dword_140C3CD8C, 0);
  return PopDeepSleepClearDisengageReason(4u);
}
