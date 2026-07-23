/*
 * XREFs of sub_14052B218 @ 0x14052B218
 * Callers:
 *     sub_14052B860 @ 0x14052B860 (sub_14052B860.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x1403027F0 (KeQueryPerformanceCounter.c)
 *     sub_140505964 @ 0x140505964 (sub_140505964.c)
 *     sub_14052B4F0 @ 0x14052B4F0 (sub_14052B4F0.c)
 */

__int64 __fastcall sub_14052B218(signed __int32 a1, __int64 a2, unsigned int *a3, _BYTE *a4)
{
  unsigned int v7; // ebp
  int v8; // edx
  int v9; // ecx
  int v10; // ecx
  int LockArray_high; // ecx
  __int64 v12; // rdi
  unsigned int v13; // r15d
  unsigned int v14; // esi
  unsigned int v15; // edx
  __int64 v16; // r8
  __int64 v17; // r8
  signed __int64 v18; // rax
  unsigned __int64 i; // rcx
  signed __int64 v20; // rtt
  __int64 v22; // rcx
  __int64 v23; // rbx
  _BYTE v24[56]; // [rsp+20h] [rbp-38h] BYREF

  v24[0] = 0;
  v7 = 0;
  *a4 = 0;
  if ( (int)sub_140505964() < 0 )
    return 2147483665LL;
  if ( a2 )
  {
    v9 = *(_DWORD *)(a2 + 312);
    if ( v9 )
    {
      v10 = v9 - 1;
      if ( v10 )
      {
        if ( v10 == 1 )
        {
          v7 = dword_140C49EA4 + dword_140C49FE4;
          v8 = dword_140C49EA0;
        }
      }
      else
      {
        v7 = dword_140C49EA4;
        v8 = dword_140C49FE4;
      }
    }
    else
    {
      v8 = dword_140C49EA4;
    }
  }
  LockArray_high = HIDWORD(KeGetPcr()[1].LockArray);
  if ( off_140C02520 == &off_1400032A0 )
    v12 = qword_140C4D0A8;
  else
    v12 = qword_140C4D0A8 + 8LL * (unsigned int)(dword_140C4D044 * LockArray_high);
  v13 = v8 + v7;
  v14 = v7;
  if ( v7 >= v8 + v7 )
  {
LABEL_34:
    _InterlockedExchangeAdd((volatile signed __int32 *)KeGetCurrentPrcb() + 22, 0xFFFFFFFE);
    return 2147483665LL;
  }
  while ( 1 )
  {
    if ( a2 && v14 >= dword_140C49EA4 )
    {
      if ( a1 != 1 )
        return 3221225659LL;
      v15 = v7;
      while ( 1 )
      {
        v16 = *(_QWORD *)(v12 + 8LL * v15);
        if ( *(_DWORD *)a2 == *(_DWORD *)(v16 + 32) )
          break;
        if ( ++v15 >= v13 )
          goto LABEL_26;
      }
      v17 = *(_QWORD *)(v16 + 16);
      _m_prefetchw((const void *)(v17 + 16));
      v18 = *(_QWORD *)(v17 + 16);
      for ( i = v18 + 1; i > 1; i = v18 + 1 )
      {
        v20 = v18;
        v18 = _InterlockedCompareExchange64((volatile signed __int64 *)(v17 + 16), i, v18);
        if ( v20 == v18 )
        {
          *a3 = v15;
          *a4 = 1;
          return 0LL;
        }
      }
      if ( i != 1 )
        __fastfail(0xEu);
    }
LABEL_26:
    if ( *(_DWORD *)(*(_QWORD *)(v12 + 8LL * v14) + 24LL) == 3
      && (__readmsr(*((_DWORD *)&xmmword_140C49FA0 + v14)) & 0xF004000FFLL) == 0 )
    {
      if ( !a2 )
        break;
      if ( v14 >= dword_140C49EA4 )
        goto LABEL_32;
      if ( (unsigned __int8)sub_14052B4F0(v14, *(_QWORD *)(a2 + 304), v24) )
        break;
    }
LABEL_33:
    if ( ++v14 >= v13 )
      goto LABEL_34;
  }
  if ( v14 < dword_140C49EA4 )
    goto LABEL_39;
LABEL_32:
  if ( _InterlockedCompareExchange((volatile signed __int32 *)(*(_QWORD *)(v12 + 8LL * v14) + 24LL), a1, 3) != 3 )
    goto LABEL_33;
LABEL_39:
  *(_BYTE *)(*(_QWORD *)(v12 + 8LL * v14) + 36LL) = 0;
  *(LARGE_INTEGER *)(*(_QWORD *)(v12 + 8LL * v14) + 8LL) = KeQueryPerformanceCounter(0LL);
  *(_DWORD *)(*(_QWORD *)(v12 + 8LL * v14) + 24LL) = a1;
  v22 = *(_QWORD *)(v12 + 8LL * v14);
  if ( a1 == 2 )
  {
    *(_DWORD *)(v22 + 32) = 24;
    **(_QWORD **)(v12 + 8LL * v14) = 0LL;
    **(_QWORD **)(*(_QWORD *)(v12 + 8LL * v14) + 16LL) = 0LL;
  }
  else
  {
    *(_DWORD *)(v22 + 32) = *(_DWORD *)a2;
    **(_QWORD **)(v12 + 8LL * v14) = *(unsigned int *)(a2 + 24);
    **(_QWORD **)(*(_QWORD *)(v12 + 8LL * v14) + 16LL) = *(_QWORD *)(a2 + 304);
    if ( v14 >= dword_140C49EA4 )
      *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v12 + 8LL * v14) + 16LL) + 16LL) = 1LL;
    if ( v24[0] )
    {
      v23 = v14 + 1;
      *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v12 + 8LL * v14) + 16LL) + 8LL) = 1;
      *(_BYTE *)(*(_QWORD *)(v12 + 8 * v23) + 36LL) = 0;
      *(LARGE_INTEGER *)(*(_QWORD *)(v12 + 8 * v23) + 8LL) = KeQueryPerformanceCounter(0LL);
      *(_DWORD *)(*(_QWORD *)(v12 + 8 * v23) + 24LL) = a1;
      *(_DWORD *)(*(_QWORD *)(v12 + 8 * v23) + 32LL) = 33;
      **(_QWORD **)(*(_QWORD *)(v12 + 8 * v23) + 16LL) = 0xF000000FFLL;
    }
  }
  *a3 = v14;
  return 0LL;
}
