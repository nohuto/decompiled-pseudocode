/*
 * XREFs of sub_140B24E48 @ 0x140B24E48
 * Callers:
 *     sub_140B03800 @ 0x140B03800 (sub_140B03800.c)
 * Callees:
 *     KeWaitForMultipleObjects @ 0x1402F13C0 (KeWaitForMultipleObjects.c)
 *     KeQueryPerformanceCounter @ 0x1403027F0 (KeQueryPerformanceCounter.c)
 *     sub_140345190 @ 0x140345190 (sub_140345190.c)
 *     HviGetHypervisorFeatures @ 0x1403BF8B0 (HviGetHypervisorFeatures.c)
 *     sub_1403C02DC @ 0x1403C02DC (sub_1403C02DC.c)
 *     HviIsAnyHypervisorPresent @ 0x1403C03A0 (HviIsAnyHypervisorPresent.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

__int64 sub_140B24E48()
{
  struct _KWAIT_BLOCK *WaitBlockArray; // r14
  unsigned int v1; // ebx
  char *PoolWithTag; // rax
  _QWORD *v3; // r13
  char *v4; // rcx
  __int64 v5; // rdx
  char *v6; // rax
  PVOID *v7; // r15
  __int64 v8; // rbp
  ULONG v9; // esi
  unsigned int v10; // edi
  bool v11; // r12
  char *v12; // rbp
  ULONG v13; // r9d
  __int64 v14; // r8
  _QWORD *v15; // rdx
  __int64 v16; // rcx
  unsigned int v17; // ebx
  ULONG v19; // [rsp+40h] [rbp-68h]
  LARGE_INTEGER PerformanceFrequency; // [rsp+48h] [rbp-60h] BYREF
  __int128 v21; // [rsp+50h] [rbp-58h] BYREF
  __int128 v22; // [rsp+60h] [rbp-48h] BYREF
  int v23; // [rsp+A0h] [rbp-8h]

  PerformanceFrequency.QuadPart = 0LL;
  WaitBlockArray = 0LL;
  v21 = 0LL;
  if ( (_DWORD)dword_140D06884 == 1 )
    return 0;
  if ( HviIsAnyHypervisorPresent()
    && ((v22 = 0LL, HviGetHypervisorFeatures(&v22), (v22 & 0x100000000000LL) == 0)
     || (sub_1403C02DC(&v21), (v21 & 0x1000) != 0)) )
  {
    return 0;
  }
  else
  {
    v1 = 16;
    if ( (unsigned int)dword_140D06884 < 0x10 )
      v1 = dword_140D06884;
    PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 104LL * v1, 0x6369644Bu);
    v3 = PoolWithTag;
    if ( PoolWithTag )
    {
      if ( v1 )
      {
        v4 = PoolWithTag + 81;
        v5 = v1;
        do
        {
          *(_WORD *)(v4 - 1) = 1;
          *(_QWORD *)(v4 + 15) = v4 + 7;
          *(_QWORD *)(v4 + 7) = v4 + 7;
          v6 = v4 - 81;
          v4[1] = 6;
          *(_DWORD *)(v4 + 3) = 0;
          *(_QWORD *)(v4 - 49) = v4 - 81;
          *(_WORD *)(v4 - 79) = 0;
          *(_QWORD *)(v4 - 57) = sub_1403DB6F0;
          *(_QWORD *)(v4 - 25) = 0LL;
          *(_QWORD *)(v4 - 65) = 0LL;
          *(v4 - 80) = 2;
          v4 += 104;
          *v6 = 19;
          --v5;
        }
        while ( v5 );
      }
      v7 = (PVOID *)ExAllocatePoolWithTag(NonPagedPoolNx, 8LL * v1, 0x6369644Bu);
      if ( v7
        && (WaitBlockArray = (struct _KWAIT_BLOCK *)ExAllocatePoolWithTag(NonPagedPoolNx, 48LL * v1, 0x6369644Bu)) != 0LL )
      {
        *(_QWORD *)&v21 = 0LL;
        v8 = 0LL;
        v19 = 0;
        KeQueryPerformanceCounter(&PerformanceFrequency);
        *(_QWORD *)&v22 = 5LL;
        do
        {
          v9 = 0;
          _disable();
          v10 = 0;
          v11 = (v23 & 0x200) != 0;
          if ( v1 )
          {
            do
            {
              if ( v10 != HIDWORD(KeGetPcr()[1].LockArray) )
              {
                v12 = (char *)&v3[13 * v9];
                v7[v9] = v12 + 80;
                if ( !*((_QWORD *)v12 + 7) )
                  *((_WORD *)v12 + 1) = v10 + 2048;
                *((LARGE_INTEGER *)v12 + 8) = KeQueryPerformanceCounter(0LL);
                sub_140345190((ULONG_PTR)&v3[13 * v9++], 0LL, 0LL, 0LL, 0);
              }
              ++v10;
            }
            while ( v10 < v1 );
            v8 = v21;
          }
          if ( v11 )
            _enable();
          KeWaitForMultipleObjects(v9, v7, WaitAll, Executive, 0, 0, 0LL, WaitBlockArray);
          v13 = v19;
          if ( v9 )
          {
            v13 = v9 + v19;
            v14 = v9;
            v19 += v9;
            v15 = v3 + 8;
            do
            {
              v16 = v15[1] - *v15;
              v15 += 13;
              v8 += v16;
              --v14;
            }
            while ( v14 );
            *(_QWORD *)&v21 = v8;
          }
          *(_QWORD *)&v22 = v22 - 1;
        }
        while ( (_QWORD)v22 );
        v17 = 0;
        qword_140D053D0 = 1000000
                        * v8
                        * (unsigned __int64)*((unsigned int *)KeGetCurrentPrcb() + 17)
                        / PerformanceFrequency.QuadPart
                        / v13;
      }
      else
      {
        v17 = -1073741801;
      }
      ExFreePoolWithTag(v3, 0);
      if ( v7 )
        ExFreePoolWithTag(v7, 0);
      if ( WaitBlockArray )
        ExFreePoolWithTag(WaitBlockArray, 0);
    }
    else
    {
      return (unsigned int)-1073741801;
    }
  }
  return v17;
}
