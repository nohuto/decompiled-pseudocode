/*
 * XREFs of sub_140270228 @ 0x140270228
 * Callers:
 *     sub_140270274 @ 0x140270274 (sub_140270274.c)
 *     sub_14038868C @ 0x14038868C (sub_14038868C.c)
 * Callees:
 *     sub_140217454 @ 0x140217454 (sub_140217454.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

void __fastcall sub_140270228(__int64 a1, KIRQL a2)
{
  bool v3; // zf
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v7; // r9
  int v8; // eax
  __int64 v9; // [rsp+20h] [rbp-30h] BYREF
  int v10; // [rsp+28h] [rbp-28h]
  int v11; // [rsp+2Ch] [rbp-24h]
  __int16 v12; // [rsp+30h] [rbp-20h] BYREF
  char v13; // [rsp+32h] [rbp-1Eh]
  char v14; // [rsp+33h] [rbp-1Dh]
  int v15; // [rsp+34h] [rbp-1Ch]
  _QWORD v16[3]; // [rsp+38h] [rbp-18h] BYREF

  v11 = 0;
  v3 = *(_DWORD *)(a1 + 76) == 0;
  v14 = 0;
  if ( !v3 )
  {
    do
    {
      v15 = 0;
      v16[1] = v16;
      v10 = 8;
      v16[0] = v16;
      v9 = *(_QWORD *)(a1 + 80);
      *(_QWORD *)(a1 + 80) = &v9;
      v12 = 263;
      v13 = 6;
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 72));
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( CurrentIrql <= 0xFu && a2 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            v7 = *((_QWORD *)CurrentPrcb + 4375);
            v8 = ~(unsigned __int16)(-1LL << (a2 + 1));
            v3 = (v8 & *(_DWORD *)(v7 + 20)) == 0;
            *(_DWORD *)(v7 + 20) &= v8;
            if ( v3 )
              sub_140418E4C(CurrentPrcb);
          }
        }
      }
      __writecr8(a2);
      sub_140217454((__int64)&v12, 0x12u);
      a2 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72));
    }
    while ( *(_DWORD *)(a1 + 76) );
  }
}
