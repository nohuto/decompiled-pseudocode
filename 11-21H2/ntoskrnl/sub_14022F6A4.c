/*
 * XREFs of sub_14022F6A4 @ 0x14022F6A4
 * Callers:
 *     sub_14022F4BC @ 0x14022F4BC (sub_14022F4BC.c)
 *     sub_14056D050 @ 0x14056D050 (sub_14056D050.c)
 * Callees:
 *     sub_14022F96C @ 0x14022F96C (sub_14022F96C.c)
 *     sub_14022F99C @ 0x14022F99C (sub_14022F99C.c)
 *     sub_14022FA04 @ 0x14022FA04 (sub_14022FA04.c)
 *     KeQueryPerformanceCounter @ 0x1403027F0 (KeQueryPerformanceCounter.c)
 *     KeQueryInterruptTimePrecise @ 0x140303490 (KeQueryInterruptTimePrecise.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 __fastcall sub_14022F6A4(unsigned int a1, char a2)
{
  struct _KPRCB *CurrentPrcb; // rsi
  unsigned __int32 v4; // ebx
  __int64 v6; // rcx
  int v7; // eax
  __int64 InterruptTimePrecise; // r14
  LARGE_INTEGER *v9; // rbx
  int v10; // eax
  _BYTE v12[16]; // [rsp+30h] [rbp-10h] BYREF
  __int64 v13; // [rsp+80h] [rbp+40h] BYREF
  __int64 v14; // [rsp+88h] [rbp+48h] BYREF

  v13 = 0LL;
  CurrentPrcb = KeGetCurrentPrcb();
  v4 = dword_140D31000;
  v14 = a1;
  if ( a2 )
  {
    sub_14042A5E0(1LL, a1, &v13);
    v7 = 1;
  }
  else
  {
    sub_14042A5E0(0LL, a1, &v13);
    v7 = 0;
  }
  LOBYTE(v6) = 1;
  *((_DWORD *)CurrentPrcb + 9252) = v7;
  sub_14022F96C(v6);
  if ( *((_BYTE *)CurrentPrcb + 33) )
  {
    dword_140D06938 = v13;
    dword_140C2B1C8 = a1;
    InterruptTimePrecise = MEMORY[0xFFFFF78000000008];
    qword_140C2B1A0 = MEMORY[0xFFFFF78000000008] + (unsigned int)v13;
    dword_140C2B7E4 = a2 != 0;
    if ( v4 == 2 )
      v4 = _InterlockedExchange(&dword_140D31000, 0);
    sub_14022FA04(0LL, v4, &v13, &v14);
  }
  else
  {
    InterruptTimePrecise = KeQueryInterruptTimePrecise(v12);
  }
  *((_DWORD *)CurrentPrcb + 9250) = v13;
  *((_DWORD *)CurrentPrcb + 9251) = a1;
  *((_QWORD *)CurrentPrcb + 4624) = InterruptTimePrecise + v13;
  if ( dword_140D06938 < (unsigned int)dword_140C2B174 )
    dword_140C2B174 = dword_140D06938;
  if ( dword_140D06938 > (unsigned int)dword_140C2B170 )
    dword_140C2B170 = dword_140D06938;
  if ( a1 < dword_140C2B17C )
    dword_140C2B17C = a1;
  if ( a1 > dword_140C2B178 )
    dword_140C2B178 = a1;
  if ( *((_BYTE *)CurrentPrcb + 33) )
  {
    v9 = (LARGE_INTEGER *)((char *)&unk_140C2B5E0 + 32 * (unsigned int)dword_140C2B5C8);
    dword_140C2B5C8 = ((_BYTE)dword_140C2B5C8 + 1) & 0xF;
    v10 = dword_140C2B1C8;
    v9->LowPart = dword_140D06938;
    v9->HighPart = v10;
    v9[1].QuadPart = InterruptTimePrecise;
    v9[2] = KeQueryPerformanceCounter(0LL);
    LOBYTE(v9[3].LowPart) = a2;
  }
  sub_14022F99C((_DWORD)CurrentPrcb, InterruptTimePrecise, a1, v13, a2);
  return (unsigned int)v13;
}
