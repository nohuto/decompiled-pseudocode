/*
 * XREFs of InitializeEnergyEstimationForEfficiencyClass @ 0x1C0026AB4
 * Callers:
 *     InitializeEnergyEstimation @ 0x1C00247D0 (InitializeEnergyEstimation.c)
 * Callees:
 *     InitializeEnumerationContext @ 0x1C0001BA0 (InitializeEnumerationContext.c)
 *     EnumerateNextDevice @ 0x1C000248C (EnumerateNextDevice.c)
 *     ResetEnumerationContext @ 0x1C0002528 (ResetEnumerationContext.c)
 *     _guard_dispatch_icall_nop @ 0x1C0003700 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0003A00 (memset.c)
 *     EnableEnergyEstimation @ 0x1C0028200 (EnableEnergyEstimation.c)
 *     DisableEnergyEstimation @ 0x1C0042414 (DisableEnergyEstimation.c)
 *     EnablePerformanceMonitoringCounters @ 0x1C00424DC (EnablePerformanceMonitoringCounters.c)
 */

__int64 __fastcall InitializeEnergyEstimationForEfficiencyClass(unsigned int a1)
{
  unsigned __int64 v1; // rbx
  __int64 result; // rax
  int v4; // r11d
  __int64 v5; // rdi
  __int64 v6; // r9
  char *v7; // r8
  __int64 v8; // rcx
  int v9; // r11d
  __int64 v10; // rdi
  _QWORD *v11; // rsi
  _OWORD v12[2]; // [rsp+20h] [rbp-20h] BYREF
  __int64 v13; // [rsp+78h] [rbp+38h] BYREF

  v13 = 0LL;
  v1 = (unsigned __int64)a1 << 8;
  memset(v12, 0, sizeof(v12));
  InitializeEnumerationContext((__int64)&qword_1C001DD38, 32, (__int64)v12);
  ResetEnumerationContext((__int64 *)v12);
  result = EnumerateNextDevice((__int64 *)v12, &v13);
  if ( !(_DWORD)result )
  {
    while ( !_bittest64((const signed __int64 *)(v13 + 280), 0x25u)
         || *(unsigned __int8 *)(v13 + 376) != a1
         || (int)EnableEnergyEstimation() >= 0 )
    {
      result = EnumerateNextDevice((__int64 *)v12, &v13);
      if ( (_DWORD)result )
      {
        if ( v4 >= 0 )
          goto LABEL_7;
        break;
      }
    }
    InitializeEnumerationContext((__int64)&qword_1C001DD38, 32, (__int64)v12);
    ResetEnumerationContext((__int64 *)v12);
    while ( !(unsigned int)EnumerateNextDevice((__int64 *)v12, &v13) )
    {
      if ( _bittest64((const signed __int64 *)(v13 + 280), 0x25u) && *(unsigned __int8 *)(v13 + 376) == a1 )
        DisableEnergyEstimation();
    }
    *(__int64 *)((char *)&Globals[245] + v1) = 0LL;
    v5 = 0LL;
    *(__int64 *)((char *)&Globals[244] + v1) = 0LL;
    v6 = 0LL;
    result = *(unsigned int *)((char *)&Globals[219] + v1);
    if ( (_DWORD)result )
    {
      do
      {
        if ( (*(_DWORD *)((_BYTE *)&Globals[220] + 12 * v6 + v1) & 1) == 0 )
        {
          if ( (_DWORD)v6 != (_DWORD)v5 )
          {
            v7 = (char *)Globals + v1;
            v8 = 3 * v5;
            *(_QWORD *)&v7[4 * v8 + 1756] = *(__int64 *)((char *)&Globals[219] + 12 * v6 + v1 + 4);
            *(_DWORD *)&v7[4 * v8 + 1764] = *(_DWORD *)((char *)&Globals[220] + 12 * v6 + v1 + 4);
          }
          v5 = (unsigned int)(v5 + 1);
        }
        result = *(unsigned int *)((char *)&Globals[219] + v1);
        v6 = (unsigned int)(v6 + 1);
      }
      while ( (unsigned int)v6 < (unsigned int)result );
    }
    if ( (_DWORD)result != (_DWORD)v5 )
    {
      result = (__int64)memset((char *)&unk_1C001E3BC + 12 * v5 + v1, 0, 12LL * (unsigned int)(result - v5));
      *(_DWORD *)((char *)&Globals[219] + v1) = v5;
    }
    if ( (_DWORD)v5 )
    {
      ResetEnumerationContext((__int64 *)v12);
      result = EnumerateNextDevice((__int64 *)v12, &v13);
      if ( (_DWORD)result )
      {
LABEL_30:
        if ( *(__int64 *)((char *)&Globals[244] + v1) )
          return result;
      }
      else
      {
        while ( !_bittest64((const signed __int64 *)(v13 + 280), 0x25u)
             || *(unsigned __int8 *)(v13 + 376) != a1
             || (int)EnablePerformanceMonitoringCounters() >= 0 )
        {
          result = EnumerateNextDevice((__int64 *)v12, &v13);
          if ( (_DWORD)result )
          {
            if ( v9 < 0 )
              break;
            goto LABEL_30;
          }
        }
      }
      InitializeEnumerationContext((__int64)&qword_1C001DD38, 32, (__int64)v12);
      ResetEnumerationContext((__int64 *)v12);
      while ( 1 )
      {
        result = EnumerateNextDevice((__int64 *)v12, &v13);
        if ( (_DWORD)result )
          break;
        v10 = v13;
        if ( _bittest64((const signed __int64 *)(v13 + 280), 0x25u) )
        {
          if ( *(unsigned __int8 *)(v13 + 376) == a1 )
          {
            v11 = *(_QWORD **)(v13 + 368);
            if ( v11 )
            {
              if ( v11[1] )
              {
                ((void (*)(void))HalPrivateDispatchTable[74])();
                v11[1] = 0LL;
              }
              ExFreePoolWithTag(v11, (ULONG)1919119952);
              *(_QWORD *)(v10 + 368) = 0LL;
            }
          }
        }
      }
      *(__int64 *)((char *)&Globals[245] + v1) = 0LL;
      *(__int64 *)((char *)&Globals[244] + v1) = 0LL;
    }
  }
LABEL_7:
  if ( !*(__int64 *)((char *)&Globals[244] + v1) )
  {
    result = (__int64)ComputeProcessorEnergy;
    *(__int64 *)((char *)&Globals[244] + v1) = (__int64)ComputeProcessorEnergy;
  }
  return result;
}
