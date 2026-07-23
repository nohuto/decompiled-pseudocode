/*
 * XREFs of sub_14023A710 @ 0x14023A710
 * Callers:
 *     sub_1405B0E10 @ 0x1405B0E10 (sub_1405B0E10.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_1404192EC @ 0x1404192EC (sub_1404192EC.c)
 *     sub_1405B0E30 @ 0x1405B0E30 (sub_1405B0E30.c)
 *     sub_1405B1568 @ 0x1405B1568 (sub_1405B1568.c)
 *     sub_1405B1910 @ 0x1405B1910 (sub_1405B1910.c)
 */

__int64 __fastcall sub_14023A710(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // rax
  _QWORD *v7; // rbx
  KIRQL v8; // al
  __int64 v9; // rcx
  unsigned __int64 v10; // r15
  _QWORD *v11; // rdi
  _QWORD *v12; // rax
  _QWORD *v13; // r14
  _QWORD *v14; // rcx
  int v15; // ecx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v18; // r9
  int v19; // eax
  bool v20; // zf
  _QWORD *v21; // rdx

  v3 = *(int *)(a2 + 48);
  if ( (unsigned int)v3 > 3 && *(_BYTE *)(v3 + a1 + 15976) && *(_QWORD *)(a2 + 64) + *(_QWORD *)(a2 + 32) )
    *(_BYTE *)(*(int *)(a2 + 48) + a1 + 15976) = 0;
  if ( (*(_DWORD *)(a2 + 56) & 1) != 0
    && (a3 || (unsigned __int64)(sub_1404192EC() - *(_QWORD *)(a2 + 152)) >= 0x2FAF080) )
  {
    sub_1405B1568(a2);
    v7 = 0LL;
    v8 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a2 + 16));
    *(_DWORD *)(a2 + 56) &= ~1u;
    v9 = *(_QWORD *)(a2 + 8);
    v10 = v8;
    if ( (v9 & 1) != 0 )
    {
      if ( v9 == 1 )
      {
LABEL_25:
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a2 + 16));
        if ( dword_140D06B08 )
        {
          if ( (dword_140D06B08 & 1) != 0 )
          {
            CurrentIrql = KeGetCurrentIrql();
            if ( CurrentIrql <= 0xFu && (unsigned __int8)v10 <= 0xFu && CurrentIrql >= 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              v18 = *((_QWORD *)CurrentPrcb + 4375);
              v19 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v10 + 1));
              v20 = (v19 & *(_DWORD *)(v18 + 20)) == 0;
              *(_DWORD *)(v18 + 20) &= v19;
              if ( v20 )
                sub_140418E4C(CurrentPrcb);
            }
          }
        }
        __writecr8(v10);
        while ( 1 )
        {
          v21 = v7;
          if ( !v7 )
            break;
          v7 = (_QWORD *)*v7;
          sub_1405B0E30(a2, v21);
        }
        return 0LL;
      }
      v11 = (_QWORD *)(v9 ^ (a2 | 1));
    }
    else
    {
      v11 = *(_QWORD **)(a2 + 8);
    }
    while ( v11 )
    {
      v12 = (_QWORD *)v11[1];
      v13 = v11;
      v14 = v11;
      if ( v12 )
      {
        do
        {
          v11 = v12;
          v12 = (_QWORD *)*v12;
        }
        while ( v12 );
      }
      else
      {
        while ( 1 )
        {
          v11 = (_QWORD *)(v11[2] & 0xFFFFFFFFFFFFFFFCuLL);
          if ( !v11 || (_QWORD *)*v11 == v14 )
            break;
          v14 = v11;
        }
      }
      if ( (*((_DWORD *)v13 + 35) & 1) == 0 )
      {
        v15 = *((_DWORD *)v13 + 33);
        if ( v15 == 512 )
        {
          sub_1405B1910(a1, a2, v13);
          *v13 = v7;
          v7 = v13;
        }
        else if ( (unsigned int)(v15 + *((_DWORD *)v13 + 34)) >= 0x200 )
        {
          *(_DWORD *)(a2 + 56) |= 1u;
        }
      }
    }
    goto LABEL_25;
  }
  return 0LL;
}
