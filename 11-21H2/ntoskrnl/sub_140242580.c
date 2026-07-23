/*
 * XREFs of sub_140242580 @ 0x140242580
 * Callers:
 *     sub_140287660 @ 0x140287660 (sub_140287660.c)
 *     sub_1406FF49C @ 0x1406FF49C (sub_1406FF49C.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

int __fastcall sub_140242580(__int64 a1, int a2, __int64 a3)
{
  __int64 v4; // rax
  KIRQL v6; // di
  unsigned int v7; // ecx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  __int64 v10; // r8
  int v11; // eax
  bool v12; // zf

  *(_QWORD *)(a3 + 8) = 0LL;
  *(_QWORD *)(a3 + 16) = 0LL;
  v4 = *(_QWORD *)(a1 + 96);
  *(_QWORD *)a3 = -1LL;
  if ( *(_QWORD *)(v4 + 32) )
  {
    if ( a2 )
      v6 = 17;
    else
      v6 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72));
    LODWORD(v4) = *(_DWORD *)(a1 + 88);
    if ( (_DWORD)v4 != -1 )
    {
      *(_QWORD *)a3 = (unsigned int)v4;
      v7 = *(_DWORD *)(a1 + 92);
      *(_DWORD *)(a3 + 8) = (unsigned __int16)v7;
      *(_DWORD *)(a3 + 16) = (v7 >> 20) & 3;
      LODWORD(v4) = *(_DWORD *)(a1 + 56);
      if ( (v4 & 0x20000000) != 0 )
      {
        LODWORD(v4) = v4 & 0xDFFFFFFF;
        *(_DWORD *)(a1 + 56) = v4;
        *(_BYTE *)(a3 + 13) = BYTE2(v7) & 1;
        *(_BYTE *)(a3 + 12) = 1;
      }
      *(_DWORD *)(a1 + 88) = -1;
    }
    *(_DWORD *)(a1 + 92) &= ~0x400000u;
    if ( v6 != 17 )
    {
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 72));
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( CurrentIrql <= 0xFu && v6 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            v10 = *((_QWORD *)CurrentPrcb + 4375);
            v11 = ~(unsigned __int16)(-1LL << (v6 + 1));
            v12 = (v11 & *(_DWORD *)(v10 + 20)) == 0;
            *(_DWORD *)(v10 + 20) &= v11;
            if ( v12 )
              sub_140418E4C(CurrentPrcb);
          }
        }
      }
      LODWORD(v4) = v6;
      __writecr8(v6);
    }
  }
  return v4;
}
