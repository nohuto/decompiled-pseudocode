/*
 * XREFs of AmdPctDiscoverCounters @ 0x1C00205D4
 * Callers:
 *     AmdPctDiscoverPlatformCtrs @ 0x1C0020710 (AmdPctDiscoverPlatformCtrs.c)
 * Callees:
 *     AmdPctPlatformCounterState @ 0x1C0002E70 (AmdPctPlatformCounterState.c)
 *     _guard_dispatch_icall_nop @ 0x1C000C510 (_guard_dispatch_icall_nop.c)
 *     AmdPctProbePlatformCtr @ 0x1C00208D8 (AmdPctProbePlatformCtr.c)
 */

__int64 __fastcall AmdPctDiscoverCounters(__int64 a1, volatile signed __int64 *a2, unsigned int a3, unsigned int a4)
{
  __int64 v6; // rdi
  __int64 v7; // r15
  void *Pool2; // rcx
  _QWORD *v10; // rbx
  __int64 v11; // r14
  char v12; // al
  void (__fastcall *v13)(__int64, _QWORD, __int64); // rax
  __int64 v15; // [rsp+20h] [rbp-28h] BYREF
  _QWORD v16[4]; // [rsp+28h] [rbp-20h] BYREF

  v15 = 0LL;
  v16[0] = 0LL;
  v6 = a3;
  v7 = 0LL;
  Pool2 = (void *)ExAllocatePool2(64LL, 40 * (a4 - a3), 1919119952LL);
  if ( _InterlockedCompareExchange64(a2, (signed __int64)Pool2, 0LL) )
  {
    ExFreePoolWithTag(Pool2, (ULONG)0);
  }
  else
  {
    *(_DWORD *)(a1 + 1256) = v6;
    *(_DWORD *)(a1 + 1260) = a4;
    if ( (unsigned int)v6 < a4 )
    {
      v10 = (_QWORD *)((char *)&unk_1C0012008 + 48 * v6);
      do
      {
        v11 = AmdPctPlatformCounterState(a1, v6);
        v12 = AmdPctProbePlatformCtr(a1, v10 + 1, &v15);
        *(_BYTE *)v11 = v12;
        if ( v12 )
        {
          if ( *v10 )
          {
            v7 |= *v10;
          }
          else
          {
            *(_QWORD *)(v11 + 8) = KeQueryInterruptTimePrecise(v16);
            *(_QWORD *)(v11 + 24) = v15;
            v13 = (void (__fastcall *)(__int64, _QWORD, __int64))v10[3];
            if ( v13 )
              v13(a1, (unsigned int)v6, v15);
            else
              *(_QWORD *)(v11 + 32) = v15;
          }
        }
        LODWORD(v6) = v6 + 1;
        v10 += 6;
      }
      while ( (unsigned int)v6 < a4 );
    }
  }
  return v7;
}
