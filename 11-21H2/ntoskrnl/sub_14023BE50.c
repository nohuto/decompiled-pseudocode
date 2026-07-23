/*
 * XREFs of sub_14023BE50 @ 0x14023BE50
 * Callers:
 *     <none>
 * Callees:
 *     sub_14023BF90 @ 0x14023BF90 (sub_14023BF90.c)
 *     sub_14023C030 @ 0x14023C030 (sub_14023C030.c)
 *     sub_140248F48 @ 0x140248F48 (sub_140248F48.c)
 *     sub_1402EB8BC @ 0x1402EB8BC (sub_1402EB8BC.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1403127A0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockShared @ 0x140366580 (ExAcquireSpinLockShared.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

__int64 __fastcall sub_14023BE50(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // rax
  unsigned int v4; // edi
  KIRQL v8; // al
  unsigned __int64 v9; // rbx
  unsigned __int64 v10; // r14
  int v11; // ebp
  int v12; // eax
  unsigned __int64 v13; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v16; // r9
  int v17; // edx
  bool v18; // zf
  unsigned __int64 v19; // [rsp+58h] [rbp+10h] BYREF

  v3 = *(_QWORD *)a2;
  v4 = 0;
  if ( (*(_BYTE *)(a2 + 8) & 1) != 0 )
  {
    if ( !v3 )
      return 0LL;
    v3 ^= a2;
  }
  if ( !v3 )
    return 0LL;
  v19 = 0xAAAAAAAAAAAAAAABuLL * ((a3 + 0x220000000000LL) >> 4);
  v8 = ExAcquireSpinLockShared((PEX_SPIN_LOCK)(a2 + 16));
  v9 = *(_QWORD *)a2;
  v10 = v8;
  if ( (*(_BYTE *)(a2 + 8) & 1) != 0 )
  {
    if ( v9 )
      v9 ^= a2;
    else
      v9 = 0LL;
  }
  v11 = *(_BYTE *)(a2 + 8) & 1;
  if ( v9 )
  {
    do
    {
      v12 = sub_140248F48(&v19, v9);
      if ( v12 >= 0 )
      {
        if ( v12 <= 0 )
          break;
        v13 = *(_QWORD *)(v9 + 8);
      }
      else
      {
        v13 = *(_QWORD *)v9;
      }
      if ( v11 && v13 )
        v9 ^= v13;
      else
        v9 = v13;
    }
    while ( v9 );
    if ( v9 )
    {
      sub_14023C030(a3, a2);
      sub_1402EB8BC(a2, v19, 1LL);
      sub_14023BF90(a3, v9, a2);
    }
  }
  ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(a2 + 16));
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v10 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v16 = *((_QWORD *)CurrentPrcb + 4375);
        v17 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v10 + 1));
        v18 = (v17 & *(_DWORD *)(v16 + 20)) == 0;
        *(_DWORD *)(v16 + 20) &= v17;
        if ( v18 )
          sub_140418E4C(CurrentPrcb);
      }
    }
  }
  __writecr8(v10);
  LOBYTE(v4) = v9 != 0;
  return v4;
}
