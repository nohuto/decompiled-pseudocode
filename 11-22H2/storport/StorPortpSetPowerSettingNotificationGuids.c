/*
 * XREFs of StorPortpSetPowerSettingNotificationGuids @ 0x1C00472A8
 * Callers:
 *     StorPortExtendedFunction @ 0x1C000B040 (StorPortExtendedFunction.c)
 * Callees:
 *     RaidAllocatePool @ 0x1C0007B34 (RaidAllocatePool.c)
 *     RaidpPortGetAdapter @ 0x1C000D95C (RaidpPortGetAdapter.c)
 */

__int64 __fastcall StorPortpSetPowerSettingNotificationGuids(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v4; // rbp
  unsigned int v5; // ebx
  _DWORD *Adapter; // rax
  _DWORD *v7; // rdi
  __int64 v9; // rsi
  __int64 Pool; // rax
  __int64 v11; // rcx

  v4 = a2;
  v5 = 0;
  Adapter = RaidpPortGetAdapter(a1);
  v7 = Adapter;
  if ( !Adapter )
    return 3238002694LL;
  v9 = v4;
  Pool = RaidAllocatePool(64LL, 24 * v4, 1161912658LL, *((_QWORD *)Adapter + 1));
  if ( Pool )
  {
    *((_QWORD *)v7 + 593) = Pool;
    v7[1184] = v4;
    *((_QWORD *)v7 + 594) = Pool + 16 * v4;
    if ( (_DWORD)v4 )
    {
      v11 = 0LL;
      do
      {
        *(_OWORD *)(*((_QWORD *)v7 + 593) + v11) = *(_OWORD *)(v11 + a3);
        v11 += 16LL;
        --v9;
      }
      while ( v9 );
    }
  }
  else
  {
    return (unsigned int)-1056964605;
  }
  return v5;
}
