/*
 * XREFs of sub_14056F330 @ 0x14056F330
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_14045B728 @ 0x14045B728 (sub_14045B728.c)
 *     sub_14056EC64 @ 0x14056EC64 (sub_14056EC64.c)
 */

void __fastcall sub_14056F330(struct _KDPC *Dpc, PVOID DeferredContext, PVOID SystemArgument1, PVOID SystemArgument2)
{
  __int64 **v4; // rcx
  __int64 v5; // rax
  unsigned __int8 CurrentIrql; // al
  unsigned __int8 v7; // bl
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v9; // r9
  int v10; // eax
  bool v11; // zf
  unsigned __int8 v12[8]; // [rsp+20h] [rbp-20h] BYREF
  __int64 v13; // [rsp+28h] [rbp-18h] BYREF
  __int64 **v14; // [rsp+30h] [rbp-10h]

  v12[0] = 0;
  v14 = (__int64 **)&v13;
  v13 = (__int64)&v13;
  sub_14056EC64(v12);
  if ( (__int64 *)qword_140C2B0C0 != &qword_140C2B0C0 )
  {
    v4 = v14;
    if ( *(__int64 **)(v13 + 8) != &v13
      || *v14 != &v13
      || *(__int64 **)(qword_140C2B0C0 + 8) != &qword_140C2B0C0
      || *(__int64 **)qword_140C2B0C8 != &qword_140C2B0C0
      || (*v14 = &qword_140C2B0C0,
          v14 = (__int64 **)qword_140C2B0C8,
          *(_QWORD *)qword_140C2B0C8 = &v13,
          v5 = qword_140C2B0C0,
          qword_140C2B0C8 = (__int64)v4,
          *(__int64 **)(qword_140C2B0C0 + 8) != &qword_140C2B0C0)
      || *v4 != &qword_140C2B0C0 )
    {
      __fastfail(3u);
    }
    *v4 = (__int64 *)qword_140C2B0C0;
    *(_QWORD *)(v5 + 8) = v4;
    qword_140C2B0C8 = (__int64)&qword_140C2B0C0;
    qword_140C2B0C0 = (__int64)&qword_140C2B0C0;
  }
  byte_140C2B0E0 = 0;
  KeReleaseSpinLockFromDpcLevel(&qword_140C2B0D0);
  if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && (CurrentIrql = KeGetCurrentIrql(), CurrentIrql <= 0xFu) )
  {
    v7 = v12[0];
    if ( v12[0] <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v9 = *((_QWORD *)CurrentPrcb + 4375);
      v7 = v12[0];
      v10 = ~(unsigned __int16)(-1LL << (v12[0] + 1));
      v11 = (v10 & *(_DWORD *)(v9 + 20)) == 0;
      *(_DWORD *)(v9 + 20) &= v10;
      if ( v11 )
        sub_140418E4C((__int64)CurrentPrcb);
    }
  }
  else
  {
    v7 = v12[0];
  }
  __writecr8(v7);
  sub_14045B728(&v13);
}
