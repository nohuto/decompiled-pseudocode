/*
 * XREFs of sub_14056F060 @ 0x14056F060
 * Callers:
 *     KeDispatchSecondaryInterrupt @ 0x14056EBB0 (KeDispatchSecondaryInterrupt.c)
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     sub_140345190 @ 0x140345190 (sub_140345190.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_14056EC64 @ 0x14056EC64 (sub_14056EC64.c)
 */

void __fastcall sub_14056F060(_QWORD **a1)
{
  __int64 v2; // rcx
  bool v3; // zf
  unsigned __int8 CurrentIrql; // al
  unsigned __int8 v5; // bl
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v7; // r9
  int v8; // eax
  unsigned __int8 v9; // [rsp+40h] [rbp+8h] BYREF

  v9 = 0;
  if ( *a1 != a1 )
  {
    sub_14056EC64(&v9);
    v2 = qword_140C2B0C8;
    if ( *(__int64 **)(qword_140C2B0C0 + 8) != &qword_140C2B0C0
      || *(__int64 **)qword_140C2B0C8 != &qword_140C2B0C0
      || (_QWORD **)(*a1)[1] != a1
      || (_QWORD **)*a1[1] != a1 )
    {
      __fastfail(3u);
    }
    *(_QWORD *)qword_140C2B0C8 = a1;
    qword_140C2B0C8 = (__int64)a1[1];
    *a1[1] = &qword_140C2B0C0;
    v3 = byte_140C2B0E0 == 0;
    a1[1] = (_QWORD *)v2;
    if ( v3 )
    {
      byte_140C2B0E0 = 1;
      sub_140345190((ULONG_PTR)&stru_140C2B080, 0LL, 0LL, 0LL, 0);
    }
    KeReleaseSpinLockFromDpcLevel(&qword_140C2B0D0);
    if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && (CurrentIrql = KeGetCurrentIrql(), CurrentIrql <= 0xFu) )
    {
      v5 = v9;
      if ( v9 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v7 = *((_QWORD *)CurrentPrcb + 4375);
        v5 = v9;
        v8 = ~(unsigned __int16)(-1LL << (v9 + 1));
        v3 = (v8 & *(_DWORD *)(v7 + 20)) == 0;
        *(_DWORD *)(v7 + 20) &= v8;
        if ( v3 )
          sub_140418E4C((__int64)CurrentPrcb);
      }
    }
    else
    {
      v5 = v9;
    }
    __writecr8(v5);
  }
}
