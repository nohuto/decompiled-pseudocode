/*
 * XREFs of EnablePerformanceMonitoringCounters @ 0x1C00424DC
 * Callers:
 *     InitializeEnergyEstimationForEfficiencyClass @ 0x1C0026AB4 (InitializeEnergyEstimationForEfficiencyClass.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0003340 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0003700 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall EnablePerformanceMonitoringCounters(__int64 a1)
{
  __int64 v1; // rax
  __int64 v3; // rax
  unsigned int v4; // edi
  int v5; // ebx
  unsigned int v6; // ecx
  int *v7; // rdx
  int *i; // r8
  int v9; // eax
  __int64 Pool2; // rax
  _QWORD *v11; // rsi
  int v13; // [rsp+40h] [rbp-38h] BYREF
  __int64 v14; // [rsp+48h] [rbp-30h] BYREF
  _BYTE v15[16]; // [rsp+50h] [rbp-28h] BYREF

  v1 = *(unsigned __int8 *)(a1 + 376);
  v14 = 0LL;
  v13 = 0;
  v3 = v1 << 8;
  v4 = *(_DWORD *)((char *)&Globals[219] + v3);
  if ( v4 )
  {
    if ( v4 > 4 )
      return (unsigned int)-1073741670;
    v6 = 0;
    v7 = (int *)v15;
    for ( i = (int *)((char *)&Globals[219] + v3 + 4); ; i += 3 )
    {
      v9 = *i;
      *v7 = *i;
      if ( (unsigned int)(v9 - 2) > 0x15 )
        break;
      ++v6;
      ++v7;
      if ( v6 >= v4 )
      {
        Pool2 = ExAllocatePool2(64LL, 136LL, 1919119952LL);
        v11 = (_QWORD *)Pool2;
        if ( !Pool2 )
          return (unsigned int)-1073741670;
        *(_QWORD *)(a1 + 368) = Pool2;
        v13 = 1953719621;
        v5 = ((__int64 (__fastcall *)(_QWORD, _BYTE *, _QWORD, int *, __int64 *, _QWORD))HalPrivateDispatchTable[150])(
               *(unsigned int *)(a1 + 56),
               v15,
               v4,
               &v13,
               &v14,
               0LL);
        if ( v5 < 0 )
        {
          ExFreePoolWithTag(v11, (ULONG)1919119952);
          *(_QWORD *)(a1 + 368) = 0LL;
        }
        else
        {
          v11[1] = v14;
          *(_DWORD *)v11 = v4;
        }
        return (unsigned int)v5;
      }
    }
  }
  return (unsigned int)-1073741637;
}
