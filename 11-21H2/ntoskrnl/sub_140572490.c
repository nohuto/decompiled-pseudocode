/*
 * XREFs of sub_140572490 @ 0x140572490
 * Callers:
 *     NtQueryInformationProcess @ 0x14073DA00 (NtQueryInformationProcess.c)
 * Callees:
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1403127A0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x1403127E0 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     sub_1403D3254 @ 0x1403D3254 (sub_1403D3254.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

__int64 __fastcall sub_140572490(__int64 a1, _QWORD *a2, __int64 a3, int a4)
{
  unsigned int v6; // ebp
  __int64 v7; // r12
  unsigned __int8 CurrentIrql; // di
  __int64 v9; // r9
  unsigned int v10; // ebx
  __int64 v11; // r12
  __int64 v12; // rdx
  unsigned __int8 v13; // al
  struct _KPRCB *CurrentPrcb; // r9
  __int64 v15; // r8
  int v16; // eax
  bool v17; // zf
  unsigned int v19; // [rsp+60h] [rbp+18h] BYREF

  v19 = 0;
  v6 = 32;
  v7 = sub_1403D3254(a1, a4, &v19);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
  {
    v9 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
    *(_DWORD *)(v9 + 20) |= (-1 << (CurrentIrql + 1)) & 4;
  }
  ExAcquireSpinLockSharedAtDpcLevel((PEX_SPIN_LOCK)(a1 + 64));
  v10 = v19;
  if ( v19 > 0x20 || (v6 = v19) != 0 )
  {
    v11 = v7 - (_QWORD)a2;
    v12 = v6;
    do
    {
      *a2 = *(_QWORD *)((char *)a2 + v11);
      ++a2;
      --v12;
    }
    while ( v12 );
  }
  ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(a1 + 64));
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      v13 = KeGetCurrentIrql();
      if ( v13 <= 0xFu && CurrentIrql <= 0xFu && v13 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v15 = *((_QWORD *)CurrentPrcb + 4375);
        v16 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v17 = (v16 & *(_DWORD *)(v15 + 20)) == 0;
        *(_DWORD *)(v15 + 20) &= v16;
        if ( v17 )
          sub_140418E4C((__int64)CurrentPrcb);
        v10 = v19;
      }
    }
  }
  __writecr8(CurrentIrql);
  return v10;
}
