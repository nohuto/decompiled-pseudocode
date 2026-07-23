/*
 * XREFs of sub_1405A0FD8 @ 0x1405A0FD8
 * Callers:
 *     sub_14027F360 @ 0x14027F360 (sub_14027F360.c)
 *     sub_1405A0774 @ 0x1405A0774 (sub_1405A0774.c)
 *     sub_14096F8CC @ 0x14096F8CC (sub_14096F8CC.c)
 * Callees:
 *     sub_14024B0B4 @ 0x14024B0B4 (sub_14024B0B4.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

__int64 __fastcall sub_1405A0FD8(ULONG_PTR a1, __int64 a2, int a3, int a4)
{
  __int64 v4; // rdi
  unsigned __int64 v9; // rsi
  __int64 *v10; // rcx
  __int64 *v11; // rbx
  int v12; // eax
  int v13; // eax
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v16; // r9
  bool v17; // zf

  v4 = *(_QWORD *)a1;
  sub_1402AFC00(a1);
  v9 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v4 + 72));
  if ( (*(_DWORD *)(v4 + 56) & 0x20) != 0 )
  {
    v10 = *(__int64 **)(v4 + 80);
    *(_QWORD *)(v4 + 80) = 0LL;
  }
  else
  {
    if ( a4 )
    {
      *(_DWORD *)(a1 + 52) |= 0x40000000u;
    }
    else if ( a3 == *(_DWORD *)(a1 + 44) - (*(_DWORD *)(a1 + 52) & 0x3FFFFFFF) )
    {
      *(_DWORD *)(a1 + 52) &= ~0x40000000u;
    }
    v10 = *(__int64 **)(a1 + 24);
    *(_QWORD *)(a1 + 24) = 0LL;
  }
  if ( v10 )
  {
    do
    {
      v11 = (__int64 *)*v10;
      if ( v10 != (__int64 *)a2 )
      {
        v12 = *((_DWORD *)v10 + 2);
        *((_DWORD *)v10 + 3) = 1;
        if ( (v12 & 0x40) == 0 )
        {
          v13 = 1;
          if ( (*(_DWORD *)(a2 + 8) & 0x100) != 0 )
            v13 = 2;
          *((_DWORD *)v10 + 3) = v13;
          sub_14024B0B4((_DWORD *)v10 + 4, 1);
        }
      }
      v10 = v11;
    }
    while ( v11 );
  }
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v4 + 72));
  result = (unsigned int)dword_140D06B08;
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      result = KeGetCurrentIrql();
      if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v9 <= 0xFu && (unsigned __int8)result >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v16 = *((_QWORD *)CurrentPrcb + 4375);
        result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v9 + 1));
        v17 = ((unsigned int)result & *(_DWORD *)(v16 + 20)) == 0;
        *(_DWORD *)(v16 + 20) &= result;
        if ( v17 )
          result = sub_140418E4C((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(v9);
  return result;
}
