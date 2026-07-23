/*
 * XREFs of sub_14054E830 @ 0x14054E830
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403105C0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     sub_140358A20 @ 0x140358A20 (sub_140358A20.c)
 *     sub_1403A0EB4 @ 0x1403A0EB4 (sub_1403A0EB4.c)
 *     sub_1403A0F08 @ 0x1403A0F08 (sub_1403A0F08.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     memset @ 0x140435E00 (memset.c)
 */

unsigned __int64 __fastcall sub_14054E830(unsigned int a1, struct _MDL *a2, ULONG a3, _OWORD *a4)
{
  __int64 v5; // rsi
  unsigned __int64 result; // rax
  __int128 v9; // xmm1
  unsigned __int8 CurrentIrql; // di
  __int64 v11; // r9
  int v12; // esi
  unsigned __int8 v13; // al
  struct _KPRCB *CurrentPrcb; // r9
  __int64 v15; // r8
  int v16; // eax
  bool v17; // zf
  __int128 v18; // xmm1
  unsigned __int64 v19; // rbx
  __int64 *v20[10]; // [rsp+30h] [rbp-99h] BYREF
  _QWORD v21[14]; // [rsp+80h] [rbp-49h] BYREF

  v5 = a1;
  memset(v21, 0, 0x68uLL);
  memset(v20, 0, 0x48uLL);
  if ( a2 )
  {
    LODWORD(result) = sub_1403A0F08((__int64)v20, a2, a3, 2, 1u);
    if ( (result & 0x80000000) != 0LL )
      return (int)result;
  }
  v21[2] = v20[0];
  v21[3] = v20[7];
  v21[1] = v5;
  if ( a4 )
  {
    v9 = a4[1];
    *(_OWORD *)&v21[5] = *a4;
    *(_OWORD *)&v21[7] = v9;
  }
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
  {
    v11 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
    *(_DWORD *)(v11 + 20) |= (-1 << (CurrentIrql + 1)) & 0xFFFC;
  }
  ExAcquireSpinLockExclusiveAtDpcLevel(&dword_140C48790);
  v12 = sub_140358A20(2u, 250, 0, (__int64)v21);
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C48790);
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
      }
    }
  }
  __writecr8(CurrentIrql);
  if ( a4 )
  {
    v18 = *(_OWORD *)&v21[7];
    *a4 = *(_OWORD *)&v21[5];
    a4[1] = v18;
  }
  if ( v12 == -1073741811 )
  {
    v19 = 0x8000000000000002uLL;
  }
  else if ( v12 == -1073741801 )
  {
    v19 = 0x8000000000000009uLL;
  }
  else
  {
    v19 = v21[4];
    if ( v12 )
      v19 = 0x8000000000000003uLL;
  }
  if ( v20[0] )
    sub_1403A0EB4(v20);
  return v19;
}
