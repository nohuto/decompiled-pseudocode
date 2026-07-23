/*
 * XREFs of PoInitiateProcessorWake @ 0x1405C6DD0
 * Callers:
 *     <none>
 * Callees:
 *     HalRequestIpi @ 0x14023DD20 (HalRequestIpi.c)
 *     KeIsEmptyAffinityEx @ 0x140292F90 (KeIsEmptyAffinityEx.c)
 *     sub_140300030 @ 0x140300030 (sub_140300030.c)
 *     KeQueryPerformanceCounter @ 0x1403027F0 (KeQueryPerformanceCounter.c)
 *     sub_140348800 @ 0x140348800 (sub_140348800.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1405C85B0 @ 0x1405C85B0 (sub_1405C85B0.c)
 *     sub_1405C86A4 @ 0x1405C86A4 (sub_1405C86A4.c)
 */

char __fastcall PoInitiateProcessorWake(unsigned int a1)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r14
  __int64 v5; // rdi
  _DWORD *v6; // rsi
  int v7; // r11d
  char v8; // bl
  __int64 v9; // r15
  char v10; // al
  char v11; // r11
  __int64 v12; // rdx
  _QWORD v14[2]; // [rsp+20h] [rbp-E0h] BYREF
  __int128 v15; // [rsp+30h] [rbp-D0h]
  _DWORD v16[68]; // [rsp+40h] [rbp-C0h] BYREF

  memset(v16, 0, 0x108uLL);
  v4 = sub_140348800(a1);
  v5 = *(_QWORD *)(v4 + 33600);
  v6 = (_DWORD *)(v4 + 33672);
  v7 = HIBYTE(*(_DWORD *)(v4 + 33672));
  v8 = 0;
  v9 = *(_QWORD *)(v5 + 680);
  while ( (_BYTE)v7 != 1 && ((unsigned __int8)(v7 - 1) <= 5u || (unsigned __int8)v7 >= 9u) )
  {
    if ( (_BYTE)v7 == 2 )
    {
      v7 = HIBYTE(*v6);
    }
    else if ( (((_BYTE)v7 - 4) & 0xFD) != 0 )
    {
      if ( (_BYTE)v7 == 5 )
      {
        LOBYTE(v3) = 5;
        LOBYTE(v2) = 7;
        LOBYTE(v7) = sub_1405C86A4(v6, v2, v3);
        if ( (_BYTE)v7 == 5 )
        {
          v16[0] = 2097153;
          memset(&v16[1], 0, 0x104uLL);
          sub_140300030((__int64)v16, 0x20u, (unsigned __int16 *)(v5 + 72));
          if ( !(unsigned int)KeIsEmptyAffinityEx(v16) )
            HalRequestIpi(0, (__int64)v16);
          return v8;
        }
      }
    }
    else
    {
      LOBYTE(v3) = v7;
      LOBYTE(v2) = 8;
      v10 = sub_1405C86A4(v6, v2, v3);
      if ( v10 == v11 )
      {
        if ( !*(_BYTE *)(v4 + 33657) )
          return 1;
        v14[0] = 0LL;
        v14[1] = qword_140D06C58;
        v15 = (unsigned __int64)v4;
        while ( !(unsigned __int8)sub_14042A5E0(v9, v2) )
        {
          if ( HIBYTE(*v6) != 8 )
            return v8;
          sub_1405C85B0(v14);
        }
        if ( *(_QWORD *)(v5 + 56) == -1LL )
          _InterlockedExchange64((volatile __int64 *)(v5 + 56), KeQueryPerformanceCounter(0LL).QuadPart);
        return sub_14042A5E0(v9, v12);
      }
      LOBYTE(v7) = v10;
    }
    _mm_pause();
  }
  return v8;
}
