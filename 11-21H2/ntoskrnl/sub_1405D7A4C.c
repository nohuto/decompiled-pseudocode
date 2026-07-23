/*
 * XREFs of sub_1405D7A4C @ 0x1405D7A4C
 * Callers:
 *     sub_1402D6094 @ 0x1402D6094 (sub_1402D6094.c)
 *     sub_1405D6AC0 @ 0x1405D6AC0 (sub_1405D6AC0.c)
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeQueryPerformanceCounter @ 0x1403027F0 (KeQueryPerformanceCounter.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

LARGE_INTEGER __fastcall sub_1405D7A4C(unsigned int a1, char a2)
{
  KIRQL v2; // di
  KIRQL v3; // si
  LARGE_INTEGER result; // rax
  LARGE_INTEGER v7; // r8
  bool i; // zf
  int v9; // ecx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v12; // r9
  int v13; // eax
  unsigned __int8 v14; // al
  struct _KPRCB *v15; // r9
  __int64 v16; // r8
  int v17; // eax

  v2 = 0;
  v3 = 0;
  if ( !a2 )
  {
    v2 = KeAcquireSpinLockRaiseToDpc(&qword_140C1FB98);
    v3 = KeAcquireSpinLockRaiseToDpc(&qword_140C22F88);
  }
  result = KeQueryPerformanceCounter(0LL);
  v7 = result;
  dword_140C2251C &= ~a1;
  for ( i = !_BitScanForward((unsigned int *)&v9, a1); !i; i = !_BitScanForward((unsigned int *)&v9, a1) )
  {
    result.QuadPart = a1 - 1;
    a1 &= result.LowPart;
    if ( ((1 << v9) & dword_140C1FB94) != 0 )
    {
      result.QuadPart = v7.QuadPart - *(_QWORD *)&byte_140C22480[8 * v9 + 160];
      *(_QWORD *)&byte_140C22480[8 * v9 + 248] += result.QuadPart;
      *(_QWORD *)&byte_140C22480[8 * v9 + 160] = 0LL;
    }
  }
  if ( !a2 )
  {
    KeReleaseSpinLockFromDpcLevel(&qword_140C22F88);
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && v3 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v12 = *((_QWORD *)CurrentPrcb + 4375);
          v13 = ~(unsigned __int16)(-1LL << (v3 + 1));
          i = (v13 & *(_DWORD *)(v12 + 20)) == 0;
          *(_DWORD *)(v12 + 20) &= v13;
          if ( i )
            sub_140418E4C((__int64)CurrentPrcb);
        }
      }
    }
    __writecr8(v3);
    KeReleaseSpinLockFromDpcLevel(&qword_140C1FB98);
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        v14 = KeGetCurrentIrql();
        if ( v14 <= 0xFu && v2 <= 0xFu && v14 >= 2u )
        {
          v15 = KeGetCurrentPrcb();
          v16 = *((_QWORD *)v15 + 4375);
          v17 = ~(unsigned __int16)(-1LL << (v2 + 1));
          i = (v17 & *(_DWORD *)(v16 + 20)) == 0;
          *(_DWORD *)(v16 + 20) &= v17;
          if ( i )
            sub_140418E4C((__int64)v15);
        }
      }
    }
    result.QuadPart = v2;
    __writecr8(v2);
  }
  return result;
}
