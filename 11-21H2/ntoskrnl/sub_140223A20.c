/*
 * XREFs of sub_140223A20 @ 0x140223A20
 * Callers:
 *     sub_140222E70 @ 0x140222E70 (sub_140222E70.c)
 *     KeFlushIoBuffers @ 0x140232370 (KeFlushIoBuffers.c)
 *     sub_1402D40E4 @ 0x1402D40E4 (sub_1402D40E4.c)
 *     sub_1402D43F4 @ 0x1402D43F4 (sub_1402D43F4.c)
 *     sub_1402F2CA0 @ 0x1402F2CA0 (sub_1402F2CA0.c)
 *     sub_1402FFB70 @ 0x1402FFB70 (sub_1402FFB70.c)
 *     HvlInvokeFastExtendedHypercall @ 0x14039DD80 (HvlInvokeFastExtendedHypercall.c)
 *     HvlInvokeHypercall @ 0x14039DF00 (HvlInvokeHypercall.c)
 *     sub_1403A06D0 @ 0x1403A06D0 (sub_1403A06D0.c)
 *     sub_140421050 @ 0x140421050 (sub_140421050.c)
 *     sub_140421230 @ 0x140421230 (sub_140421230.c)
 *     sub_140421380 @ 0x140421380 (sub_140421380.c)
 *     sub_1404270A0 @ 0x1404270A0 (sub_1404270A0.c)
 *     sub_140427200 @ 0x140427200 (sub_140427200.c)
 *     sub_140576200 @ 0x140576200 (sub_140576200.c)
 *     sub_14067DE90 @ 0x14067DE90 (sub_14067DE90.c)
 *     sub_14067F8D0 @ 0x14067F8D0 (sub_14067F8D0.c)
 *     sub_1406A1370 @ 0x1406A1370 (sub_1406A1370.c)
 *     sub_1406A5C00 @ 0x1406A5C00 (sub_1406A5C00.c)
 *     sub_140713980 @ 0x140713980 (sub_140713980.c)
 *     sub_140714980 @ 0x140714980 (sub_140714980.c)
 *     sub_140718E30 @ 0x140718E30 (sub_140718E30.c)
 *     sub_14071FAA0 @ 0x14071FAA0 (sub_14071FAA0.c)
 *     sub_140721010 @ 0x140721010 (sub_140721010.c)
 *     sub_1407333B0 @ 0x1407333B0 (sub_1407333B0.c)
 *     CallbackRoutine @ 0x140741CF0 (CallbackRoutine.c)
 *     sub_1407C0160 @ 0x1407C0160 (sub_1407C0160.c)
 *     sub_1407C1130 @ 0x1407C1130 (sub_1407C1130.c)
 *     sub_1407C9930 @ 0x1407C9930 (sub_1407C9930.c)
 *     sub_1407CABA0 @ 0x1407CABA0 (sub_1407CABA0.c)
 *     sub_1409174A4 @ 0x1409174A4 (sub_1409174A4.c)
 * Callees:
 *     sub_14022DB00 @ 0x14022DB00 (sub_14022DB00.c)
 *     KeQueryPerformanceCounter @ 0x1403027F0 (KeQueryPerformanceCounter.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 __fastcall sub_140223A20(unsigned __int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // r10
  LARGE_INTEGER *v3; // rdi
  char v4; // bl
  unsigned int v5; // eax
  bool i; // zf
  __int64 v7; // r8
  unsigned __int64 v8; // r8
  LARGE_INTEGER PerformanceCounter; // rax
  __int64 result; // rax
  __int64 v11; // [rsp+40h] [rbp+18h] BYREF

  v2 = (unsigned int)a2;
  v3 = (LARGE_INTEGER *)a1;
  LODWORD(v11) = 0;
  v4 = 0;
  if ( qword_140D328E0 )
  {
    v5 = *(_DWORD *)(qword_140D328E0 + 4248);
    for ( i = !_BitScanForward((unsigned int *)&v7, v5); !i; i = !_BitScanForward((unsigned int *)&v7, v5) )
    {
      v5 &= v5 - 1;
      a2 = 32LL * (unsigned int)v7;
      a1 = (unsigned int)v7;
      v8 = a2 + qword_140D328E0 + 4284;
      if ( v8 )
      {
        a2 = v2 >> 29;
        if ( ((unsigned int)v2 & *(_DWORD *)(v8 + 4 * (v2 >> 29)) & 0x1FFFFFFF) != 0 )
        {
          a1 = *(unsigned __int8 *)(qword_140D328E0 + 2 * a1 + 4233);
          a2 = (unsigned int)(1 << a1);
          v4 |= a2;
        }
      }
    }
    if ( (v4 & 2) == 0 )
    {
      PerformanceCounter.QuadPart = 0LL;
      goto LABEL_9;
    }
  }
  else
  {
    v4 = 30;
  }
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
LABEL_9:
  *v3 = PerformanceCounter;
  if ( (v4 & 4) != 0 )
    result = sub_14022DB00(a1, a2, v7);
  else
    result = 0LL;
  v3[1].QuadPart = result;
  if ( (v4 & 8) != 0 )
  {
    result = __rdtsc();
    a2 = (unsigned __int64)HIDWORD(result) << 32;
    v3[2].QuadPart = result;
  }
  else
  {
    v3[2].QuadPart = 0LL;
  }
  if ( (v4 & 0x10) != 0 )
  {
    v11 = 0LL;
    sub_14042A5E0(&v11, a2, v7);
    result = v11;
    v3[3].QuadPart = v11;
  }
  else
  {
    v3[3].QuadPart = 0LL;
  }
  return result;
}
