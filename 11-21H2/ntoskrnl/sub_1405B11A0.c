/*
 * XREFs of sub_1405B11A0 @ 0x1405B11A0
 * Callers:
 *     <none>
 * Callees:
 *     sub_140248F48 @ 0x140248F48 (sub_140248F48.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1403127A0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockShared @ 0x140366580 (ExAcquireSpinLockShared.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_1405B0AC0 @ 0x1405B0AC0 (sub_1405B0AC0.c)
 */

__int64 __fastcall sub_1405B11A0(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 v4; // rax
  unsigned __int64 v6; // rbp
  KIRQL v7; // al
  __int64 v8; // rbx
  unsigned __int64 v9; // r15
  int v10; // esi
  int v11; // eax
  __int64 v12; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v15; // r9
  int v16; // eax
  bool v17; // zf
  __int64 result; // rax

  v4 = *(_QWORD *)a2;
  if ( (*(_BYTE *)(a2 + 8) & 1) != 0 )
  {
    if ( !v4 )
      return 0LL;
    v4 ^= a2;
  }
  if ( v4 )
  {
    v6 = 0LL;
    v7 = ExAcquireSpinLockShared((PEX_SPIN_LOCK)(a2 + 16));
    v8 = *(_QWORD *)a2;
    v9 = v7;
    if ( (*(_BYTE *)(a2 + 8) & 1) != 0 && v8 )
      v8 ^= a2;
    v10 = *(_BYTE *)(a2 + 8) & 1;
    if ( v8 )
    {
      do
      {
        v11 = sub_140248F48(a3 + 1, v8);
        if ( v11 >= 0 )
        {
          if ( v11 <= 0 )
            break;
          v12 = *(_QWORD *)(v8 + 8);
        }
        else
        {
          v12 = *(_QWORD *)v8;
        }
        if ( v10 && v12 )
          v8 ^= v12;
        else
          v8 = v12;
      }
      while ( v8 );
      if ( v8 )
      {
        v6 = v8;
        _InterlockedIncrement((volatile signed __int32 *)(v8 + 136));
        if ( (unsigned int)(*(_DWORD *)(v8 + 136) + *(_DWORD *)(v8 + 132)) >= 0x200 )
          _InterlockedOr((volatile signed __int32 *)(a2 + 56), 1u);
      }
    }
    ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(a2 + 16));
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v9 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v15 = *((_QWORD *)CurrentPrcb + 4375);
          v16 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v9 + 1));
          v17 = (v16 & *(_DWORD *)(v15 + 20)) == 0;
          *(_DWORD *)(v15 + 20) &= v16;
          if ( v17 )
            sub_140418E4C((__int64)CurrentPrcb);
        }
      }
    }
    __writecr8(v9);
    if ( v6 )
    {
      sub_1405B0AC0(*a3, v6);
      result = 1LL;
      a3[2] = a2 + 64;
      return result;
    }
  }
  return 0LL;
}
