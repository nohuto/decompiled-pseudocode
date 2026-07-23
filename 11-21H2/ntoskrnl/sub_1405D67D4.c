/*
 * XREFs of sub_1405D67D4 @ 0x1405D67D4
 * Callers:
 *     sub_14098E120 @ 0x14098E120 (sub_14098E120.c)
 * Callees:
 *     KeAcquireSpinLockAtDpcLevel @ 0x140211E00 (KeAcquireSpinLockAtDpcLevel.c)
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     sub_1403B92D0 @ 0x1403B92D0 (sub_1403B92D0.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_1405C75AC @ 0x1405C75AC (sub_1405C75AC.c)
 *     sub_1405D5234 @ 0x1405D5234 (sub_1405D5234.c)
 */

__int64 __fastcall sub_1405D67D4(__int64 a1, unsigned int a2)
{
  __int64 v2; // rsi
  KIRQL v4; // al
  int v5; // r12d
  unsigned __int64 v6; // rbp
  char v7; // al
  int *v8; // r9
  char v9; // r14
  __int64 v10; // r11
  int *v11; // rdx
  int v12; // edi
  __int64 v13; // rbx
  unsigned __int64 v14; // rdi
  int v15; // eax
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rdi
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v20; // r9
  bool v21; // zf
  int v22; // [rsp+68h] [rbp+10h] BYREF

  v2 = *(_QWORD *)(a1 + 56);
  v22 = 0;
  v4 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v2 + 64));
  v5 = *(_DWORD *)(v2 + 144);
  *(_DWORD *)(v2 + 144) = *(_DWORD *)(v2 + 156);
  *(_DWORD *)(v2 + 148) = *(_DWORD *)(v2 + 160);
  *(_DWORD *)(v2 + 152) = *(_DWORD *)(v2 + 164);
  v6 = v4;
  v7 = sub_1405C75AC();
  v9 = v7;
  if ( a2 >= 2 )
  {
    v10 = a2 - 1;
    v11 = v8;
    do
    {
      *v11++ |= 1 << v7;
      --v10;
    }
    while ( v10 );
  }
  v12 = *v8;
  sub_1403B92D0(v5, *v8, 1, (volatile signed __int32 *)(v2 + 184));
  sub_1403B92D0(v5, v12, 0, (volatile signed __int32 *)(v2 + 184));
  sub_1405D5234(v2, v9, 0, &v22, 0LL);
  v13 = *(_QWORD *)(v2 + 32) + 600LL;
  v14 = MEMORY[0xFFFFF78000000008];
  KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)v13);
  v15 = v22;
  if ( v22 == 1 )
  {
    v16 = *(_QWORD *)(v13 + 24);
    if ( *(_BYTE *)(v13 + 8) && v14 > v16 )
    {
      v17 = v14 - v16;
      *(_QWORD *)(v13 + 128) += v17;
      *(_QWORD *)(v13 + 136) += v17;
    }
    *(_DWORD *)(v13 + 12) = 5;
    *(_BYTE *)(v13 + 8) = 0;
    _InterlockedAnd((volatile signed __int32 *)(*(_QWORD *)(v2 + 32) + 824LL), 0xFFFFF7FF);
  }
  else
  {
    if ( !*(_BYTE *)(v13 + 8) )
      *(_QWORD *)(v13 + 24) = v14;
    *(_DWORD *)(v13 + 12) = v15;
    *(_BYTE *)(v13 + 8) = 1;
    _InterlockedOr((volatile signed __int32 *)(*(_QWORD *)(v2 + 32) + 824LL), 0x800u);
  }
  KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)v13);
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v2 + 64));
  result = (unsigned int)dword_140D06B08;
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      result = KeGetCurrentIrql();
      if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v6 <= 0xFu && (unsigned __int8)result >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v20 = *((_QWORD *)CurrentPrcb + 4375);
        result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v6 + 1));
        v21 = ((unsigned int)result & *(_DWORD *)(v20 + 20)) == 0;
        *(_DWORD *)(v20 + 20) &= result;
        if ( v21 )
          result = sub_140418E4C((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(v6);
  return result;
}
