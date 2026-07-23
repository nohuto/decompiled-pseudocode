/*
 * XREFs of sub_14038B9A0 @ 0x14038B9A0
 * Callers:
 *     sub_1407FF888 @ 0x1407FF888 (sub_1407FF888.c)
 *     sub_140A494E8 @ 0x140A494E8 (sub_140A494E8.c)
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     sub_1402E2D20 @ 0x1402E2D20 (sub_1402E2D20.c)
 *     KeCancelTimer @ 0x140356EB0 (KeCancelTimer.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_1405D01F0 @ 0x1405D01F0 (sub_1405D01F0.c)
 *     sub_1407FF3B4 @ 0x1407FF3B4 (sub_1407FF3B4.c)
 */

void __fastcall sub_14038B9A0(unsigned int a1)
{
  unsigned __int64 v2; // rdi
  int v3; // ecx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v6; // r9
  int v7; // eax
  bool v8; // zf

  if ( a1 <= 2 )
  {
    if ( a1 == 1 )
      sub_1407FF3B4();
    v2 = KeAcquireSpinLockRaiseToDpc(&qword_140C228D8);
    if ( dword_140C22964 != a1 )
    {
      if ( dword_140C22964 )
      {
        if ( !KeCancelTimer(&stru_140C22920) )
          sub_1405D01F0(0LL, 0LL, 0LL, 0LL);
        qword_140C22968 = 0LL;
        dword_140C22964 = 0;
      }
      if ( a1 )
      {
        v3 = a1 == 1 ? dword_140D06BFC : dword_140D06C00;
        if ( v3 )
        {
          qword_140C22968 = MEMORY[0xFFFFF78000000008];
          dword_140C22964 = a1;
          sub_1402E2D20((unsigned __int64)&stru_140C22920, -10000000LL * v3, 0, 0, (__int64)&dword_140C228E0);
        }
      }
    }
    KeReleaseSpinLockFromDpcLevel(&qword_140C228D8);
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v2 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v6 = *((_QWORD *)CurrentPrcb + 4375);
          v7 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v2 + 1));
          v8 = (v7 & *(_DWORD *)(v6 + 20)) == 0;
          *(_DWORD *)(v6 + 20) &= v7;
          if ( v8 )
            sub_140418E4C(CurrentPrcb);
        }
      }
    }
    __writecr8(v2);
  }
}
