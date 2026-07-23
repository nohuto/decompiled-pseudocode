/*
 * XREFs of sub_1402D6094 @ 0x1402D6094
 * Callers:
 *     sub_1402D5F7C @ 0x1402D5F7C (sub_1402D5F7C.c)
 *     sub_1402D6004 @ 0x1402D6004 (sub_1402D6004.c)
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeQueryPerformanceCounter @ 0x1403027F0 (KeQueryPerformanceCounter.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_1405D7930 @ 0x1405D7930 (sub_1405D7930.c)
 *     sub_1405D7A4C @ 0x1405D7A4C (sub_1405D7A4C.c)
 */

__int64 __fastcall sub_1402D6094(int a1, char a2)
{
  __int64 v2; // r15
  unsigned int v3; // edi
  unsigned int v5; // ebx
  int v6; // esi
  KIRQL v7; // al
  __int16 v8; // bp
  unsigned __int64 v9; // r14
  __int64 result; // rax
  LARGE_INTEGER PerformanceCounter; // rax
  __int64 v12; // rdx
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v14; // r9
  bool v15; // zf

  v2 = a1;
  v3 = 0;
  v5 = 0;
  v6 = 1 << a1;
  v7 = KeAcquireSpinLockRaiseToDpc(&qword_140C22F88);
  v8 = dword_140C2251C;
  v9 = v7;
  if ( (v6 & dword_140C2251C) != 0 )
  {
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
    v12 = v6 & 3;
    if ( a2 )
    {
      *(LARGE_INTEGER *)&byte_140C22480[8 * v2 + 160] = PerformanceCounter;
      if ( (v6 & 3) != 0 )
      {
        if ( (v8 & 0x40) != 0 )
          v5 = 64;
        if ( (v8 & 0x7BC) != 0 )
          v5 |= 0x7BCu;
      }
      else if ( (v6 & 0x40) != 0 && (v8 & 0x7BC) != 0 )
      {
        v5 = 1980;
      }
      LOBYTE(v12) = 1;
      sub_1405D7A4C(v5, v12, byte_140C22480);
    }
    else
    {
      *(_QWORD *)&byte_140C22480[8 * v2 + 248] += PerformanceCounter.QuadPart - *(_QWORD *)&byte_140C22480[8 * v2 + 160];
      *(_QWORD *)&byte_140C22480[8 * v2 + 160] = 0LL;
      if ( (v6 & 3) != 0 )
      {
        if ( (dword_140C1FB94 & 3) == 0 )
        {
          v3 = 64;
          if ( (dword_140C1FB94 & 0x40) == 0 )
            v3 = 2044;
        }
      }
      else if ( (v6 & 0x40) != 0 && (dword_140C1FB94 & 0x40) == 0 )
      {
        v3 = 1980;
      }
      LOBYTE(v12) = 1;
      sub_1405D7930(v3, v12, byte_140C22480);
    }
  }
  KeReleaseSpinLockFromDpcLevel(&qword_140C22F88);
  result = (unsigned int)dword_140D06B08;
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      result = KeGetCurrentIrql();
      if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v9 <= 0xFu && (unsigned __int8)result >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v14 = *((_QWORD *)CurrentPrcb + 4375);
        result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v9 + 1));
        v15 = ((unsigned int)result & *(_DWORD *)(v14 + 20)) == 0;
        *(_DWORD *)(v14 + 20) &= result;
        if ( v15 )
          result = sub_140418E4C(CurrentPrcb);
      }
    }
  }
  __writecr8(v9);
  return result;
}
