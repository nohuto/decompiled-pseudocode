/*
 * XREFs of sub_14032A4B0 @ 0x14032A4B0
 * Callers:
 *     sub_140231A68 @ 0x140231A68 (sub_140231A68.c)
 *     sub_14025AD28 @ 0x14025AD28 (sub_14025AD28.c)
 *     sub_140262F20 @ 0x140262F20 (sub_140262F20.c)
 *     sub_14026A784 @ 0x14026A784 (sub_14026A784.c)
 *     sub_14026D460 @ 0x14026D460 (sub_14026D460.c)
 *     sub_140273AF0 @ 0x140273AF0 (sub_140273AF0.c)
 *     sub_14027D190 @ 0x14027D190 (sub_14027D190.c)
 *     sub_140282160 @ 0x140282160 (sub_140282160.c)
 *     sub_1402BBEE0 @ 0x1402BBEE0 (sub_1402BBEE0.c)
 *     sub_1402C8FD0 @ 0x1402C8FD0 (sub_1402C8FD0.c)
 *     sub_1402D9A54 @ 0x1402D9A54 (sub_1402D9A54.c)
 *     sub_1402E5D90 @ 0x1402E5D90 (sub_1402E5D90.c)
 *     sub_1402F4B70 @ 0x1402F4B70 (sub_1402F4B70.c)
 *     sub_140316400 @ 0x140316400 (sub_140316400.c)
 *     sub_14031BAB0 @ 0x14031BAB0 (sub_14031BAB0.c)
 *     sub_14031EAA0 @ 0x14031EAA0 (sub_14031EAA0.c)
 *     sub_140329630 @ 0x140329630 (sub_140329630.c)
 *     sub_140329730 @ 0x140329730 (sub_140329730.c)
 *     sub_14032D1C0 @ 0x14032D1C0 (sub_14032D1C0.c)
 *     sub_140337B00 @ 0x140337B00 (sub_140337B00.c)
 *     sub_140337F60 @ 0x140337F60 (sub_140337F60.c)
 *     sub_1403523C0 @ 0x1403523C0 (sub_1403523C0.c)
 *     sub_14036C978 @ 0x14036C978 (sub_14036C978.c)
 *     sub_1403CF398 @ 0x1403CF398 (sub_1403CF398.c)
 *     sub_140580DB8 @ 0x140580DB8 (sub_140580DB8.c)
 *     sub_14058D310 @ 0x14058D310 (sub_14058D310.c)
 *     sub_14059B0B0 @ 0x14059B0B0 (sub_14059B0B0.c)
 *     sub_1405A5990 @ 0x1405A5990 (sub_1405A5990.c)
 *     sub_1405B88D8 @ 0x1405B88D8 (sub_1405B88D8.c)
 *     sub_1405BB090 @ 0x1405BB090 (sub_1405BB090.c)
 *     sub_1405BBB54 @ 0x1405BBB54 (sub_1405BBB54.c)
 *     sub_1405C14D4 @ 0x1405C14D4 (sub_1405C14D4.c)
 *     sub_1405C4980 @ 0x1405C4980 (sub_1405C4980.c)
 *     sub_1406A4140 @ 0x1406A4140 (sub_1406A4140.c)
 *     sub_1406DDC90 @ 0x1406DDC90 (sub_1406DDC90.c)
 *     sub_1406F3A44 @ 0x1406F3A44 (sub_1406F3A44.c)
 *     sub_140707E70 @ 0x140707E70 (sub_140707E70.c)
 *     sub_1407BE280 @ 0x1407BE280 (sub_1407BE280.c)
 *     sub_1407F17B4 @ 0x1407F17B4 (sub_1407F17B4.c)
 *     sub_14084AA8C @ 0x14084AA8C (sub_14084AA8C.c)
 *     sub_14096D3A4 @ 0x14096D3A4 (sub_14096D3A4.c)
 *     sub_14097023C @ 0x14097023C (sub_14097023C.c)
 * Callees:
 *     sub_140240348 @ 0x140240348 (sub_140240348.c)
 *     sub_1402878F0 @ 0x1402878F0 (sub_1402878F0.c)
 *     sub_1403CF698 @ 0x1403CF698 (sub_1403CF698.c)
 *     sub_14059C99C @ 0x14059C99C (sub_14059C99C.c)
 *     sub_1405B2E5C @ 0x1405B2E5C (sub_1405B2E5C.c)
 *     sub_1405B301C @ 0x1405B301C (sub_1405B301C.c)
 *     sub_1405B3088 @ 0x1405B3088 (sub_1405B3088.c)
 *     sub_1405B3180 @ 0x1405B3180 (sub_1405B3180.c)
 */

__int64 __fastcall sub_14032A4B0(__int64 a1, unsigned __int64 a2, unsigned int a3)
{
  struct _KPRCB *CurrentPrcb; // rbx
  unsigned __int64 v7; // rdx
  signed __int32 v8; // eax
  unsigned int v10; // r15d
  __int64 v11; // rcx
  unsigned __int64 v12; // r12
  unsigned __int64 v13; // r14
  unsigned __int64 v14; // r13
  signed __int64 v15; // r14
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // r14
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rdi
  unsigned __int64 v20; // rdx
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // r8
  unsigned __int64 v23; // r14
  unsigned __int64 v24; // rax
  bool v25; // cc
  unsigned __int64 v26; // r10
  unsigned __int64 v27; // r10
  unsigned __int64 v28; // rdx
  __int64 v29; // [rsp+60h] [rbp+8h]
  int v30; // [rsp+70h] [rbp+18h]

LABEL_1:
  CurrentPrcb = KeGetCurrentPrcb();
  if ( (ULONG_PTR *)a1 == &StartContext )
  {
    _m_prefetchw((char *)CurrentPrcb + 34456);
    v7 = *((unsigned int *)CurrentPrcb + 8614);
    if ( a2 <= v7 )
    {
      do
      {
        v8 = _InterlockedCompareExchange((volatile signed __int32 *)CurrentPrcb + 8614, v7 - a2, v7);
        if ( v8 == v7 )
          return 1LL;
        v7 = v8;
      }
      while ( a2 <= v8 );
    }
  }
  v30 = 0;
  v10 = a3 | 2;
  if ( (a3 & 4) == 0 )
    v10 = a3;
  if ( (v10 & 8) == 0 )
  {
    if ( (v10 & 7) != 0 )
      v11 = 0LL;
    else
      v11 = *(_QWORD *)(a1 + 16048);
    goto LABEL_11;
  }
  v10 |= 2u;
  if ( (*((_DWORD *)KeGetCurrentThread() + 345) & 2) != 0 && (KeGetPcr()[36].Unused0[2] & 0x10001) == 0 )
  {
    v10 |= 4u;
    v11 = 0LL;
LABEL_11:
    v29 = v11;
    goto LABEL_12;
  }
  v11 = 64LL;
  v29 = 64LL;
  if ( (ULONG_PTR *)a1 != &StartContext && *(_QWORD *)(a1 + 16720) >> 6 < 0x40uLL )
  {
    v11 = *(_QWORD *)(a1 + 16720) >> 6;
    v29 = v11;
  }
  while ( 1 )
  {
LABEL_12:
    while ( 1 )
    {
      v12 = *(_QWORD *)(a1 + 17256);
      v13 = v12 + a2;
      if ( v12 + a2 > v12 && v11 + v13 >= v13 )
        break;
      if ( (v10 & 4) == 0 )
      {
        if ( (v10 & 2) == 0 )
        {
          ++*(_DWORD *)(a1 + 17572);
          if ( (v10 & 1) == 0 )
            sub_1405B301C(a1);
          sub_1405B3180(a1);
        }
        return 0LL;
      }
      if ( !v11 )
        ++dword_140C52AB4;
LABEL_60:
      if ( a2 )
      {
        if ( (unsigned int)sub_1405B3088(a1, a2, v11) )
          return 1LL;
        goto LABEL_1;
      }
LABEL_18:
      v15 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 17256), v13, v12);
      if ( v12 == v15 )
      {
        v16 = *(_QWORD *)(a1 + 16032);
        v17 = a2 + v15;
        if ( v17 >= v16 && v12 < v16 || (v18 = *(_QWORD *)(a1 + 16024), v17 >= v18) && v12 < v18 )
        {
          sub_1403CF698(a1, 0LL);
          v11 = v29;
        }
        if ( v17 > *(_QWORD *)(a1 + 16000) )
          *(_QWORD *)(a1 + 16000) = v17;
        if ( (v10 & 2) != 0 )
          return 1LL;
        v19 = *(_QWORD *)(a1 + 17496);
        v20 = v19 / 0xA;
        if ( v17 < 9 * (v19 / 0xA) )
          goto LABEL_25;
        v25 = v17 <= v19;
        if ( v17 < v19 )
        {
          if ( v19 - v17 >= 0x400000 )
          {
LABEL_25:
            if ( (ULONG_PTR *)a1 == &StartContext )
            {
              if ( (v10 & 1) == 0 && v17 >= *(_QWORD *)(a1 + 16032) && v19 == *(_QWORD *)(a1 + 16008) )
              {
                sub_1402878F0();
                v11 = v29;
              }
              v21 = *((unsigned int *)CurrentPrcb + 8614);
              if ( v21 < 0x80 )
              {
                v22 = v17;
                v23 = 256 - v21 + v17;
                if ( v23 > v22 && v11 + v23 > v22 && v11 + v23 <= v19 )
                  sub_140240348(a1, (__int64)CurrentPrcb, v22, 256 - v21);
              }
            }
            return 1LL;
          }
          v25 = v17 <= v19;
        }
        if ( v25 )
        {
          v26 = *(_QWORD *)(a1 + 16008);
          if ( v19 < v26 && v17 < v26 )
          {
            if ( v20 > 0x40000 )
              v20 = 0x40000LL;
            v27 = v26 - v19;
            v28 = v20 - v17;
            if ( v28 + v19 <= v27 )
              v27 = v28 + v19;
            sub_14059C99C(a1, v27, 2LL, 0LL);
            v11 = v29;
          }
        }
        goto LABEL_25;
      }
    }
    v14 = *(_QWORD *)(a1 + 17496);
    if ( v11 + v13 <= v14 )
    {
      if ( !v30 && v13 >= 95 * (v14 / 0x64) )
      {
        sub_1405B2E5C(a1, v10, *(_QWORD *)(a1 + 17496));
        v11 = v29;
        v30 = 1;
      }
      goto LABEL_18;
    }
    v24 = *(_QWORD *)(a1 + 16032);
    if ( v13 >= v24 && v12 < v24 )
    {
      sub_1405B3180(a1);
      v11 = v29;
    }
    if ( (v10 & 4) != 0 )
    {
      if ( !v11 )
        ++dword_140C52AB0;
      goto LABEL_60;
    }
    if ( (v10 & 2) != 0 )
      return 0LL;
    if ( v14 == *(_QWORD *)(a1 + 16008) )
    {
      ++*(_DWORD *)(a1 + 17564);
      if ( (ULONG_PTR *)a1 != &StartContext )
        return 0LL;
      if ( (v10 & 1) != 0 )
      {
        sub_14059C99C(a1, a2, 10LL, 0LL);
        return 0LL;
      }
      if ( !(unsigned int)sub_14059C99C(a1, a2, 8LL, 0LL) )
        goto LABEL_64;
      v11 = v29;
      goto LABEL_18;
    }
    if ( (v10 & 1) != 0 )
    {
      ++*(_DWORD *)(a1 + 17568);
      sub_14059C99C(a1, 4096LL, 2LL, 0LL);
      return 0LL;
    }
    if ( !(unsigned int)sub_14059C99C(a1, a2, 0LL, 255LL) )
      break;
    v11 = v29;
  }
  ++*(_DWORD *)(a1 + 17560);
LABEL_64:
  sub_1405B301C(a1);
  return 0LL;
}
