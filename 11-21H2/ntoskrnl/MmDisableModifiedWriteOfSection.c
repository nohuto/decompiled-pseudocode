/*
 * XREFs of MmDisableModifiedWriteOfSection @ 0x140248110
 * Callers:
 *     CcInitializeCacheMapEx @ 0x140310F10 (CcInitializeCacheMapEx.c)
 * Callees:
 *     sub_14028494C @ 0x14028494C (sub_14028494C.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

char __fastcall MmDisableModifiedWriteOfSection(__int64 a1)
{
  bool v1; // bl
  __int64 v2; // rax
  unsigned __int8 v3; // di
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v6; // r9
  int v7; // eax
  bool v8; // zf
  unsigned __int8 v10; // [rsp+38h] [rbp+10h] BYREF

  v10 = 0;
  v1 = 1;
  v2 = sub_14028494C(a1, 1LL, &v10);
  if ( v2 )
  {
    if ( *(_QWORD *)(v2 + 40) )
      v1 = (*(_DWORD *)(v2 + 56) & 8) != 0;
    else
      *(_DWORD *)(v2 + 56) |= 8u;
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v2 + 72));
    if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && (CurrentIrql = KeGetCurrentIrql(), CurrentIrql <= 0xFu) )
    {
      v3 = v10;
      if ( v10 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v6 = *((_QWORD *)CurrentPrcb + 4375);
        v3 = v10;
        v7 = ~(unsigned __int16)(-1LL << (v10 + 1));
        v8 = (v7 & *(_DWORD *)(v6 + 20)) == 0;
        *(_DWORD *)(v6 + 20) &= v7;
        if ( v8 )
          sub_140418E4C(CurrentPrcb);
      }
    }
    else
    {
      v3 = v10;
    }
    __writecr8(v3);
    LOBYTE(v2) = v1;
  }
  return v2;
}
