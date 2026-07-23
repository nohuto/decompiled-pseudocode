/*
 * XREFs of sub_14027B3C0 @ 0x14027B3C0
 * Callers:
 *     sub_14027B334 @ 0x14027B334 (sub_14027B334.c)
 * Callees:
 *     sub_14022DB00 @ 0x14022DB00 (sub_14022DB00.c)
 *     KeQueryPerformanceCounter @ 0x1403027F0 (KeQueryPerformanceCounter.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 __fastcall sub_14027B3C0(LARGE_INTEGER *a1, unsigned int a2, __int64 a3)
{
  unsigned __int64 v3; // r10
  int v5; // ebx
  _QWORD *v6; // r9
  __int64 v7; // r9
  unsigned int v8; // eax
  bool i; // zf
  unsigned __int64 v10; // rdx
  __int64 v11; // r8
  LARGE_INTEGER PerformanceCounter; // rax
  __int64 result; // rax
  __int64 v14; // [rsp+40h] [rbp+18h] BYREF

  v3 = a2;
  LODWORD(v14) = 0;
  v5 = 0;
  if ( a3 )
    v6 = *(_QWORD **)(a3 + 1464);
  else
    v6 = &unk_140D32580;
  v7 = v6[108];
  if ( v7 )
  {
    v8 = *(_DWORD *)(v7 + 4248);
    for ( i = !_BitScanForward((unsigned int *)&v10, v8); !i; i = !_BitScanForward((unsigned int *)&v10, v8) )
    {
      v8 &= v8 - 1;
      v11 = 32 * v10 + v7 + 4284;
      if ( v11 && ((unsigned int)v3 & *(_DWORD *)(v11 + 4 * (v3 >> 29)) & 0x1FFFFFFF) != 0 )
        v5 |= 1 << *(_BYTE *)(v7 + 2LL * (unsigned int)v10 + 4233);
    }
    if ( (v5 & 2) == 0 )
    {
      PerformanceCounter.QuadPart = 0LL;
      goto LABEL_11;
    }
  }
  else
  {
    LOBYTE(v5) = 30;
  }
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
LABEL_11:
  *a1 = PerformanceCounter;
  if ( (v5 & 4) != 0 )
    result = sub_14022DB00();
  else
    result = 0LL;
  a1[1].QuadPart = result;
  if ( (v5 & 8) != 0 )
  {
    result = __rdtsc();
    v10 = (unsigned __int64)HIDWORD(result) << 32;
    a1[2].QuadPart = result;
  }
  else
  {
    a1[2].QuadPart = 0LL;
  }
  if ( (v5 & 0x10) != 0 )
  {
    v14 = 0LL;
    sub_14042A5E0(&v14, v10);
    result = v14;
    a1[3].QuadPart = v14;
  }
  else
  {
    a1[3].QuadPart = 0LL;
  }
  return result;
}
