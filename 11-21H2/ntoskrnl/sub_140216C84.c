/*
 * XREFs of sub_140216C84 @ 0x140216C84
 * Callers:
 *     sub_140693C24 @ 0x140693C24 (sub_140693C24.c)
 * Callees:
 *     sub_140216D20 @ 0x140216D20 (sub_140216D20.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_14059CE7C @ 0x14059CE7C (sub_14059CE7C.c)
 */

__int64 __fastcall sub_140216C84(__int64 a1)
{
  __int64 result; // rax
  unsigned int v3; // r8d
  unsigned int v4; // ecx
  __int64 v5; // r9
  _QWORD *v6; // rdx
  KIRQL v7; // al
  __int64 v8; // r8
  unsigned __int64 v9; // rsi
  struct _KPRCB *CurrentPrcb; // r9
  __int64 v11; // r8
  bool v12; // zf

  result = sub_140216D20(*(_QWORD *)(a1 + 17256), *(_QWORD *)(a1 + 17496));
  if ( (_DWORD)result )
  {
    v3 = *(_DWORD *)(a1 + 16728);
    v4 = 0;
    if ( v3 )
    {
      v5 = a1 + 16736;
      while ( 1 )
      {
        v6 = *(_QWORD **)v5;
        result = *(unsigned __int16 *)(*(_QWORD *)v5 + 204LL);
        if ( (result & 0x50) == 0 )
        {
          result = v6[2];
          if ( *v6 != result && v6[3] > 0x4000uLL )
            break;
        }
        ++v4;
        v5 += 8LL;
        if ( v4 >= v3 )
          goto LABEL_7;
      }
    }
    else
    {
LABEL_7:
      if ( v4 == v3 )
        return result;
    }
    v7 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 1344));
    v9 = v7;
    if ( *(_QWORD *)(a1 + 584) == -1LL )
    {
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 1344));
      result = (unsigned int)dword_140D06B08;
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 )
        {
          result = KeGetCurrentIrql();
          if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v9 <= 0xFu && (unsigned __int8)result >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v9 + 1));
            v11 = *((_QWORD *)CurrentPrcb + 4375);
            v12 = ((unsigned int)result & *(_DWORD *)(v11 + 20)) == 0;
            *(_DWORD *)(v11 + 20) &= result;
            if ( v12 )
              result = sub_140418E4C(CurrentPrcb);
          }
        }
      }
      __writecr8(v9);
    }
    else
    {
      *(_QWORD *)(a1 + 552) = 0LL;
      LOBYTE(v8) = v7;
      *(_BYTE *)(a1 + 631) |= 0x10u;
      *(_QWORD *)(a1 + 576) = a1;
      *(_QWORD *)(a1 + 584) = -1LL;
      return sub_14059CE7C(a1 + 552, 0LL, v8);
    }
  }
  return result;
}
