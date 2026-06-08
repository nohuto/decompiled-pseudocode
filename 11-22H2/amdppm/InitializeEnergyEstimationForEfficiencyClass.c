/*
 * XREFs of InitializeEnergyEstimationForEfficiencyClass @ 0x1C003A168
 * Callers:
 *     InitializeEnergyEstimation @ 0x1C003A02C (InitializeEnergyEstimation.c)
 * Callees:
 *     EnumerateNextDevice @ 0x1C0001850 (EnumerateNextDevice.c)
 *     ResetEnumerationContext @ 0x1C0002394 (ResetEnumerationContext.c)
 *     InitializeEnumerationContext @ 0x1C0002440 (InitializeEnumerationContext.c)
 *     _guard_dispatch_icall_nop @ 0x1C000C450 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C000C7C0 (memset.c)
 *     DisableEnergyEstimation @ 0x1C0039C4C (DisableEnergyEstimation.c)
 *     EnableEnergyEstimation @ 0x1C0039D14 (EnableEnergyEstimation.c)
 *     EnablePerformanceMonitoringCounters @ 0x1C0039E1C (EnablePerformanceMonitoringCounters.c)
 */

__int64 __fastcall InitializeEnergyEstimationForEfficiencyClass(unsigned int a1)
{
  unsigned __int64 v1; // rbx
  __int64 result; // rax
  int v4; // r10d
  __int64 v5; // rdi
  __int64 v6; // r9
  unsigned int v7; // edx
  unsigned int v8; // r8d
  unsigned __int64 v9; // r8
  unsigned __int64 v10; // rdx
  int v11; // r10d
  __int64 v12; // rdi
  _QWORD *v13; // rsi
  _OWORD v14[2]; // [rsp+20h] [rbp-20h] BYREF
  __int64 v15; // [rsp+78h] [rbp+38h] BYREF

  v15 = 0LL;
  v1 = (unsigned __int64)a1 << 8;
  memset(v14, 0, sizeof(v14));
  InitializeEnumerationContext((__int64)&qword_1C0012518, 32, (__int64)v14);
  ResetEnumerationContext((__int64 *)v14);
  while ( 1 )
  {
    result = EnumerateNextDevice((__int64 *)v14, &v15);
    if ( (_DWORD)result )
      break;
    if ( _bittest64((const signed __int64 *)(v15 + 280), 0x25u) )
    {
      if ( *(unsigned __int8 *)(v15 + 376) == a1 )
      {
        result = EnableEnergyEstimation(v15);
        v4 = result;
        if ( (int)result < 0 )
          break;
      }
    }
  }
  if ( v4 >= 0 )
    goto LABEL_38;
  InitializeEnumerationContext((__int64)&qword_1C0012518, 32, (__int64)v14);
  ResetEnumerationContext((__int64 *)v14);
  while ( 1 )
  {
    result = EnumerateNextDevice((__int64 *)v14, &v15);
    if ( (_DWORD)result )
      break;
    if ( _bittest64((const signed __int64 *)(v15 + 280), 0x25u) && *(unsigned __int8 *)(v15 + 376) == a1 )
      DisableEnergyEstimation(v15);
  }
  *(__int64 *)((char *)&Globals[250] + v1) = 0LL;
  v5 = 0LL;
  *(__int64 *)((char *)&Globals[249] + v1) = 0LL;
  v6 = 0LL;
  v7 = *(_DWORD *)((char *)&Globals[224] + v1);
  if ( v7 )
  {
    v8 = *(_DWORD *)((char *)&Globals[224] + v1);
    do
    {
      result = 3 * v6;
      v7 = v8;
      if ( (*(_DWORD *)((_BYTE *)&Globals[225] + 12 * v6 + v1) & 1) == 0 )
      {
        if ( (_DWORD)v6 != (_DWORD)v5 )
        {
          v9 = v1 + 12 * v6;
          v10 = v1 + 12 * v5;
          *(__int64 *)((char *)&Globals[224] + v10 + 4) = *(__int64 *)((char *)&Globals[224] + v9 + 4);
          result = *(unsigned int *)((char *)&Globals[225] + v9 + 4);
          *(_DWORD *)((char *)&Globals[225] + v10 + 4) = result;
          v7 = *(_DWORD *)((char *)&Globals[224] + v1);
        }
        v5 = (unsigned int)(v5 + 1);
      }
      v6 = (unsigned int)(v6 + 1);
      v8 = v7;
    }
    while ( (unsigned int)v6 < v7 );
  }
  if ( v7 != (_DWORD)v5 )
  {
    result = (__int64)memset((char *)&unk_1C0012BC4 + 12 * v5 + v1, 0, 12LL * (v7 - (unsigned int)v5));
    *(_DWORD *)((char *)&Globals[224] + v1) = v5;
  }
  if ( !(_DWORD)v5 )
    goto LABEL_38;
  ResetEnumerationContext((__int64 *)v14);
  while ( 1 )
  {
    result = EnumerateNextDevice((__int64 *)v14, &v15);
    if ( (_DWORD)result )
      break;
    if ( _bittest64((const signed __int64 *)(v15 + 280), 0x25u) )
    {
      if ( *(unsigned __int8 *)(v15 + 376) == a1 )
      {
        result = EnablePerformanceMonitoringCounters(v15);
        v11 = result;
        if ( (int)result < 0 )
          break;
      }
    }
  }
  if ( v11 < 0 || !*(__int64 *)((char *)&Globals[249] + v1) )
  {
    InitializeEnumerationContext((__int64)&qword_1C0012518, 32, (__int64)v14);
    ResetEnumerationContext((__int64 *)v14);
    while ( 1 )
    {
      result = EnumerateNextDevice((__int64 *)v14, &v15);
      if ( (_DWORD)result )
        break;
      v12 = v15;
      if ( _bittest64((const signed __int64 *)(v15 + 280), 0x25u) )
      {
        if ( *(unsigned __int8 *)(v15 + 376) == a1 )
        {
          v13 = *(_QWORD **)(v15 + 368);
          if ( v13 )
          {
            if ( v13[1] )
            {
              ((void (*)(void))HalPrivateDispatchTable[74])();
              v13[1] = 0LL;
            }
            ExFreePoolWithTag(v13, (ULONG)1919119952);
            *(_QWORD *)(v12 + 368) = 0LL;
          }
        }
      }
    }
    *(__int64 *)((char *)&Globals[250] + v1) = 0LL;
    *(__int64 *)((char *)&Globals[249] + v1) = 0LL;
LABEL_38:
    if ( !*(__int64 *)((char *)&Globals[249] + v1) )
    {
      result = (__int64)ComputeProcessorEnergy;
      *(__int64 *)((char *)&Globals[249] + v1) = (__int64)ComputeProcessorEnergy;
    }
  }
  return result;
}
