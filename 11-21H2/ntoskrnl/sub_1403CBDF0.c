/*
 * XREFs of sub_1403CBDF0 @ 0x1403CBDF0
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     sub_1402554D8 @ 0x1402554D8 (sub_1402554D8.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     sub_140347770 @ 0x140347770 (sub_140347770.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_14091D63C @ 0x14091D63C (sub_14091D63C.c)
 */

void __fastcall __noreturn sub_1403CBDF0(PKTIMER Timer)
{
  unsigned __int64 v2; // rsi
  char v3; // bl
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v6; // r9
  int v7; // eax
  bool v8; // zf
  __int128 v9; // [rsp+30h] [rbp-18h] BYREF
  char v10; // [rsp+58h] [rbp+10h] BYREF
  __int64 v11; // [rsp+60h] [rbp+18h] BYREF

  v11 = 0LL;
  v9 = 0LL;
  v10 = 0;
  while ( 1 )
  {
    sub_140347770((__int64)&v9);
    KeWaitForSingleObject(&Timer[2], Executive, 1, 0, 0LL);
    v2 = KeAcquireSpinLockRaiseToDpc(&Timer[2].DueTime.QuadPart);
    Timer[2].TimerListEntry.Blink = (struct _LIST_ENTRY *)2;
    KeReleaseSpinLockFromDpcLevel(&Timer[2].DueTime.QuadPart);
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
    v3 = sub_14042A5E0(&v10, &v11);
    if ( byte_140D3CA03 && Timer == &stru_140C019A0 )
    {
      if ( v10 )
        sub_14091D63C();
      else
        byte_140D3CA03 = 0;
    }
    sub_1402554D8(Timer, (__int64 *)((unsigned __int64)&v11 & -(__int64)(v3 != 0)));
    *((_QWORD *)KeGetCurrentThread() + 284) = v9;
  }
}
