/*
 * XREFs of sub_1403C2B24 @ 0x1403C2B24
 * Callers:
 *     sub_1405B1974 @ 0x1405B1974 (sub_1405B1974.c)
 *     sub_140B04E44 @ 0x140B04E44 (sub_140B04E44.c)
 *     sub_140B52548 @ 0x140B52548 (sub_140B52548.c)
 * Callees:
 *     sub_140248F48 @ 0x140248F48 (sub_140248F48.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     RtlRbInsertNodeEx @ 0x14034E6B0 (RtlRbInsertNodeEx.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_1404192EC @ 0x1404192EC (sub_1404192EC.c)
 */

__int64 __fastcall sub_1403C2B24(__int64 a1, __int64 a2, __int64 a3)
{
  KIRQL v6; // al
  signed __int64 v7; // rdi
  unsigned __int64 v8; // r14
  BOOLEAN v9; // r8
  int v10; // ebp
  unsigned __int64 v11; // rax
  __int64 v12; // rdx
  unsigned int v13; // eax
  unsigned int v14; // ecx
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v17; // r9
  bool v18; // zf

  v6 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a2 + 16));
  v7 = *(_QWORD *)a2;
  v8 = v6;
  if ( (*(_BYTE *)(a2 + 8) & 1) != 0 && v7 )
    v7 ^= a2;
  v9 = 0;
  v10 = *(_BYTE *)(a2 + 8) & 1;
  if ( v7 )
  {
    while ( 1 )
    {
      if ( (int)sub_140248F48((_QWORD *)(a3 + 24), v7) < 0 )
      {
        v11 = *(_QWORD *)v7;
        if ( v10 )
        {
          if ( !v11 )
            goto LABEL_15;
          v11 ^= v7;
        }
        if ( !v11 )
        {
LABEL_15:
          v9 = 0;
          break;
        }
      }
      else
      {
        v11 = *(_QWORD *)(v7 + 8);
        if ( v10 )
        {
          if ( !v11 )
            goto LABEL_16;
          v11 ^= v7;
        }
        if ( !v11 )
        {
LABEL_16:
          v9 = 1;
          break;
        }
      }
      v7 = v11;
    }
  }
  RtlRbInsertNodeEx((PRTL_RB_TREE)a2, (PRTL_BALANCED_NODE)v7, v9, (PRTL_BALANCED_NODE)a3);
  v12 = *(_QWORD *)(a2 + 24);
  if ( !v12 || (v13 = *(_DWORD *)(a3 + 132), v14 = v13, *(_DWORD *)(v12 + 132) > v13) && v13 )
  {
    *(_QWORD *)(a2 + 24) = a3;
    v14 = *(_DWORD *)(a3 + 132);
  }
  *(_QWORD *)(a2 + 32) += v14;
  ++*(_QWORD *)(a2 + 40);
  _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 17536), 0x200uLL);
  if ( *(_DWORD *)(a3 + 132) == 512 )
  {
    *(_QWORD *)(a2 + 152) = sub_1404192EC();
    *(_DWORD *)(a2 + 56) |= 1u;
  }
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a2 + 16));
  result = (unsigned int)dword_140D06B08;
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      result = KeGetCurrentIrql();
      if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v8 <= 0xFu && (unsigned __int8)result >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v17 = *((_QWORD *)CurrentPrcb + 4375);
        result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v8 + 1));
        v18 = ((unsigned int)result & *(_DWORD *)(v17 + 20)) == 0;
        *(_DWORD *)(v17 + 20) &= result;
        if ( v18 )
          result = sub_140418E4C(CurrentPrcb);
      }
    }
  }
  __writecr8(v8);
  return result;
}
