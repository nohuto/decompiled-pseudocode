/*
 * XREFs of sub_140213FA8 @ 0x140213FA8
 * Callers:
 *     MmFreeContiguousMemory @ 0x140213DA0 (MmFreeContiguousMemory.c)
 *     sub_140214244 @ 0x140214244 (sub_140214244.c)
 *     sub_140277D10 @ 0x140277D10 (sub_140277D10.c)
 *     MmMarkPhysicalMemoryAsBad @ 0x14058F250 (MmMarkPhysicalMemoryAsBad.c)
 *     MmRemovePhysicalMemory @ 0x140969D90 (MmRemovePhysicalMemory.c)
 *     sub_14096AF9C @ 0x14096AF9C (sub_14096AF9C.c)
 *     sub_14096E06C @ 0x14096E06C (sub_14096E06C.c)
 *     sub_14096E3A4 @ 0x14096E3A4 (sub_14096E3A4.c)
 *     sub_14098325C @ 0x14098325C (sub_14098325C.c)
 *     sub_1409835EC @ 0x1409835EC (sub_1409835EC.c)
 * Callees:
 *     sub_140232AD0 @ 0x140232AD0 (sub_140232AD0.c)
 *     sub_140273FD0 @ 0x140273FD0 (sub_140273FD0.c)
 *     sub_14028CA70 @ 0x14028CA70 (sub_14028CA70.c)
 *     sub_14028CE10 @ 0x14028CE10 (sub_14028CE10.c)
 *     sub_1402C38D0 @ 0x1402C38D0 (sub_1402C38D0.c)
 *     sub_1402F2700 @ 0x1402F2700 (sub_1402F2700.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

__int64 __fastcall sub_140213FA8(__int64 a1, unsigned __int64 a2)
{
  __int64 v3; // r14
  unsigned __int64 v4; // rbx
  __int64 v5; // rsi
  unsigned __int64 v6; // r12
  __int64 v7; // rdi
  unsigned __int64 v8; // r15
  __int64 result; // rax
  struct _KPRCB *v10; // r8
  __int64 v11; // rdx
  bool v12; // zf
  __int64 v13; // rdx
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v15; // r9

  v3 = a1;
  v4 = 0LL;
  v5 = 0LL;
  v6 = -1LL;
  v7 = 48 * a1 - 0x220000000000LL;
  do
  {
    if ( (v3 & 0x1FF) != 0 || a2 < 0x200 || !(unsigned int)sub_140232AD0(v3, 1LL) )
    {
      if ( !v5 )
        v5 = *(_QWORD *)(qword_140C51F48 + 8 * ((*(_QWORD *)(v7 + 40) >> 43) & 0x3FFLL));
      if ( v6 != (v3 & 0xFFFFFFFFFFFFFE00uLL) )
      {
        v6 = v3 & 0xFFFFFFFFFFFFFE00uLL;
        sub_1402C38D0(v5, v3 & 0xFFFFFE00, 512, 0, 0);
      }
      v8 = (unsigned __int8)sub_1402F2700(v7);
      if ( --*(_WORD *)(v7 + 32) == 1 )
        ++v4;
      if ( (*(_QWORD *)(v7 + 24) & 0x4000000000000000LL) == 0 )
        *(_QWORD *)(v7 + 24) |= 0x4000000000000000uLL;
      sub_140273FD0(v7);
      _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      result = (unsigned int)dword_140D06B08;
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 )
        {
          result = KeGetCurrentIrql();
          if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v8 <= 0xFu && (unsigned __int8)result >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            v15 = *((_QWORD *)CurrentPrcb + 4375);
            result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v8 + 1));
            v12 = ((unsigned int)result & *(_DWORD *)(v15 + 20)) == 0;
            *(_DWORD *)(v15 + 20) &= result;
            if ( v12 )
              result = sub_140418E4C(CurrentPrcb);
          }
        }
      }
      __writecr8(v8);
      v7 += 48LL;
      ++v3;
      --a2;
    }
    else
    {
      if ( !v5 )
        v5 = *(_QWORD *)(qword_140C51F48 + 8 * ((*(_QWORD *)(v7 + 40) >> 43) & 0x3FFLL));
      result = sub_14028CA70(v3, v13, 6LL);
      v3 += 512LL;
      v7 += 24576LL;
      a2 -= 512LL;
    }
  }
  while ( a2 );
  if ( v4 )
  {
    sub_14028CE10(v5, v4);
    result = (__int64)&StartContext;
    if ( (ULONG_PTR *)v5 != &StartContext )
      goto LABEL_25;
    v10 = KeGetCurrentPrcb();
    v11 = *((int *)v10 + 8615);
    if ( (_DWORD)v11 == -1 )
      goto LABEL_25;
    for ( ; v4 + v11 <= 0x100; result = v4 + (int)result )
    {
      if ( v4 >= 0x80000 )
        break;
      result = (unsigned int)_InterlockedCompareExchange((volatile signed __int32 *)v10 + 8615, v11 + v4, v11);
      v12 = (_DWORD)v11 == (_DWORD)result;
      v11 = (int)result;
      if ( v12 )
        return result;
      if ( (_DWORD)result == -1 )
        break;
    }
    if ( (int)v11 > 192 )
    {
      result = (unsigned int)_InterlockedCompareExchange((volatile signed __int32 *)v10 + 8615, 192, v11);
      if ( (_DWORD)v11 == (_DWORD)result )
      {
        result = (unsigned int)(v11 - 192);
        v4 += (int)result;
      }
    }
    if ( v4 )
LABEL_25:
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v5 + 16960), v4);
  }
  return result;
}
