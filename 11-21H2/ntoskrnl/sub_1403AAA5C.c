/*
 * XREFs of sub_1403AAA5C @ 0x1403AAA5C
 * Callers:
 *     sub_1403AAA10 @ 0x1403AAA10 (sub_1403AAA10.c)
 *     sub_140908680 @ 0x140908680 (sub_140908680.c)
 * Callees:
 *     KeQueryDpcWatchdogInformation @ 0x14021ACE0 (KeQueryDpcWatchdogInformation.c)
 *     sub_1403AACB4 @ 0x1403AACB4 (sub_1403AACB4.c)
 *     sub_1403AAE50 @ 0x1403AAE50 (sub_1403AAE50.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_1405062F4 @ 0x1405062F4 (sub_1405062F4.c)
 *     sub_14050634C @ 0x14050634C (sub_14050634C.c)
 *     sub_140506CA4 @ 0x140506CA4 (sub_140506CA4.c)
 *     sub_1405071C4 @ 0x1405071C4 (sub_1405071C4.c)
 *     sub_14050745C @ 0x14050745C (sub_14050745C.c)
 */

__int64 __fastcall sub_1403AAA5C(__int64 a1, char a2, __int64 a3, __int64 a4)
{
  unsigned int v6; // esi
  unsigned int v7; // r12d
  unsigned __int8 CurrentIrql; // di
  __int64 v9; // rcx
  __int64 result; // rax
  char v11; // r14
  char v12; // r15
  __int64 v13; // r9
  unsigned __int8 v14; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v16; // r9
  int v17; // eax
  bool v18; // zf
  __int64 v19; // rcx
  __int64 v20; // rax
  unsigned int v21; // ebp
  __int64 v22; // rsi
  unsigned __int8 v23; // al
  struct _KPRCB *v24; // r10
  __int64 v25; // r9
  int v26; // eax
  unsigned __int8 v27; // al
  struct _KPRCB *v28; // r9
  __int64 v29; // r8
  int v30; // eax
  char v32; // [rsp+31h] [rbp-57h]
  int v33; // [rsp+34h] [rbp-54h] BYREF
  __int64 v34; // [rsp+38h] [rbp-50h]
  _KDPC_WATCHDOG_INFORMATION WatchdogInformation; // [rsp+40h] [rbp-48h] BYREF

  v33 = 0;
  v34 = a1;
  memset(&WatchdogInformation, 0, sizeof(WatchdogInformation));
  v6 = 0;
  v7 = 0;
  CurrentIrql = 0;
  v32 = sub_1403AAE50();
  while ( 1 )
  {
    result = sub_1403AACB4(v9, a3);
    if ( (int)result < 0 )
      break;
    v11 = 0;
    v12 = 0;
    if ( !a2 )
      goto LABEL_22;
    v11 = 1;
    if ( KeGetCurrentIrql() < 2u )
    {
      v12 = 1;
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
        {
          v13 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
          *(_DWORD *)(v13 + 20) |= (-1 << (CurrentIrql + 1)) & 4;
        }
      }
    }
    if ( _InterlockedCompareExchange(&dword_140D01588, 1, 0) )
    {
      if ( v12 )
      {
        if ( dword_140D06B08 )
        {
          if ( (dword_140D06B08 & 1) != 0 )
          {
            v14 = KeGetCurrentIrql();
            if ( v14 <= 0xFu && CurrentIrql <= 0xFu && v14 >= 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              v16 = *((_QWORD *)CurrentPrcb + 4375);
              v17 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
              v18 = (v17 & *(_DWORD *)(v16 + 20)) == 0;
              *(_DWORD *)(v16 + 20) &= v17;
              if ( v18 )
                sub_140418E4C(CurrentPrcb);
            }
          }
        }
        __writecr8(CurrentIrql);
      }
    }
    else
    {
LABEL_22:
      result = sub_1405071C4(1, (int)v34 + 80, (unsigned int)&v33, 0, a3);
      if ( (int)result < 0 )
      {
        if ( a2 )
        {
          if ( v11 )
            result = (unsigned int)_InterlockedExchange(&dword_140D01588, 0);
          if ( v12 )
          {
            if ( dword_140D06B08 )
            {
              if ( (dword_140D06B08 & 1) != 0 )
              {
                v27 = KeGetCurrentIrql();
                if ( v27 <= 0xFu && CurrentIrql <= 0xFu && v27 >= 2u )
                {
                  v28 = KeGetCurrentPrcb();
                  v29 = *((_QWORD *)v28 + 4375);
                  v30 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
                  v18 = (v30 & *(_DWORD *)(v29 + 20)) == 0;
                  *(_DWORD *)(v29 + 20) &= v30;
                  if ( v18 )
                    sub_140418E4C(v28);
                }
              }
            }
            result = CurrentIrql;
            __writecr8(CurrentIrql);
          }
        }
        break;
      }
      v19 = v34;
      if ( v32 == 2 )
        v20 = (*(_QWORD *)(v34 + 120) >> 38) & 0x7FFFLL;
      else
        LODWORD(v20) = 1;
      *(_DWORD *)(v34 + 12) = 0;
      v21 = v6 + v20;
      v22 = v19 + 80;
      *(_DWORD *)(v19 + 20) = v33;
      sub_14050745C(v19, v19 + 80, a3);
      sub_140506CA4(v22, a3);
      if ( a2 )
      {
        if ( v11 )
          _InterlockedExchange(&dword_140D01588, 0);
        if ( v12 )
        {
          if ( dword_140D06B08 )
          {
            if ( (dword_140D06B08 & 1) != 0 )
            {
              v23 = KeGetCurrentIrql();
              if ( v23 <= 0xFu && CurrentIrql <= 0xFu && v23 >= 2u )
              {
                v24 = KeGetCurrentPrcb();
                v25 = *((_QWORD *)v24 + 4375);
                v26 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
                v18 = (v26 & *(_DWORD *)(v25 + 20)) == 0;
                *(_DWORD *)(v25 + 20) &= v26;
                if ( v18 )
                  sub_140418E4C(v24);
              }
            }
          }
          __writecr8(CurrentIrql);
        }
      }
      ++v7;
      v6 = v21;
      if ( dword_140C09784 != -1 )
      {
        if ( dword_140C09784 )
        {
          result = (unsigned int)dword_140C09784;
          if ( v7 >= dword_140C09784 )
            break;
        }
      }
    }
    v9 = 2LL;
    if ( KeGetCurrentIrql() >= 2u )
    {
      memset(&WatchdogInformation, 0, sizeof(WatchdogInformation));
      if ( !KeQueryDpcWatchdogInformation(&WatchdogInformation) )
      {
        if ( (unsigned __int8)sub_1405062F4(&WatchdogInformation) )
        {
          result = sub_14050634C(&WatchdogInformation, v7);
          break;
        }
      }
    }
  }
  *(_DWORD *)(a4 + 164) = v6;
  if ( v6 > *(_DWORD *)(a4 + 168) )
    *(_DWORD *)(a4 + 168) = v6;
  return result;
}
