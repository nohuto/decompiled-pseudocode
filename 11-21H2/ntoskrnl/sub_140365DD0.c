/*
 * XREFs of sub_140365DD0 @ 0x140365DD0
 * Callers:
 *     sub_1403639F0 @ 0x1403639F0 (sub_1403639F0.c)
 *     IoRecordIoAttribution @ 0x140365D40 (IoRecordIoAttribution.c)
 * Callees:
 *     sub_140244090 @ 0x140244090 (sub_140244090.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1403127A0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockShared @ 0x140366580 (ExAcquireSpinLockShared.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

__int64 __fastcall sub_140365DD0(unsigned __int64 a1)
{
  __int64 v1; // rbp
  KIRQL v2; // al
  __int64 Root; // rbx
  unsigned __int64 v4; // rsi
  int v5; // edi
  int v6; // eax
  __int64 v7; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v11; // r9
  int v12; // edx
  bool v13; // zf
  unsigned __int64 v14; // [rsp+30h] [rbp+8h] BYREF

  v14 = a1;
  v1 = 0LL;
  v2 = ExAcquireSpinLockShared(&dword_140C46D6C);
  Root = (__int64)Parent.Root;
  v4 = v2;
  if ( ((__int64)Parent.Min & 1) != 0 && Parent.Root )
    Root = (unsigned __int64)&Parent ^ (unsigned __int64)Parent.Root;
  v5 = (__int64)Parent.Min & 1;
  if ( Root )
  {
    do
    {
      v6 = sub_140244090(&v14, Root);
      if ( v6 >= 0 )
      {
        if ( v6 <= 0 )
          break;
        v7 = *(_QWORD *)(Root + 8);
      }
      else
      {
        v7 = *(_QWORD *)Root;
      }
      if ( v5 && v7 )
        Root ^= v7;
      else
        Root = v7;
    }
    while ( Root );
    if ( Root )
    {
      v1 = Root;
      if ( _InterlockedIncrement64((volatile signed __int64 *)(Root + 32)) <= 1 )
        __fastfail(0xEu);
    }
  }
  ExReleaseSpinLockSharedFromDpcLevel(&dword_140C46D6C);
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v4 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v11 = *((_QWORD *)CurrentPrcb + 4375);
        v12 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v4 + 1));
        v13 = (v12 & *(_DWORD *)(v11 + 20)) == 0;
        *(_DWORD *)(v11 + 20) &= v12;
        if ( v13 )
          sub_140418E4C(CurrentPrcb);
      }
    }
  }
  __writecr8(v4);
  return v1;
}
