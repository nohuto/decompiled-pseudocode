/*
 * XREFs of sub_14022CFE4 @ 0x14022CFE4
 * Callers:
 *     sub_1406A4C10 @ 0x1406A4C10 (sub_1406A4C10.c)
 *     sub_1406A4C58 @ 0x1406A4C58 (sub_1406A4C58.c)
 * Callees:
 *     KeAcquireSpinLockAtDpcLevel @ 0x140211E00 (KeAcquireSpinLockAtDpcLevel.c)
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     IoCancelIrp @ 0x14022D160 (IoCancelIrp.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

__int64 __fastcall sub_14022CFE4(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  KSPIN_LOCK *v4; // rdi
  unsigned int v8; // r13d
  KIRQL v9; // r15
  __int64 *i; // rsi
  unsigned __int8 CurrentIrql; // cl
  __int64 v13; // r9
  int v14; // eax
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 v16; // rdx
  bool v17; // zf
  unsigned __int8 v18; // al
  struct _KPRCB *v19; // r10
  __int64 v20; // r9
  int v21; // edx

  v4 = (KSPIN_LOCK *)(a2 + 1496);
  v8 = 0;
  v9 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 1496));
  for ( i = *(__int64 **)(a2 + 1280); (__int64 *)(a2 + 1280) != i; i = (__int64 *)*i )
  {
    if ( *((char *)i + 35) < *((char *)i + 34) + 2 )
    {
      if ( a4 )
      {
        if ( (!a1 || i[20] == a1) && (!a3 || i[5] == a3) )
        {
          v14 = *((_DWORD *)i - 4);
          if ( (v14 & 0x402) == 0 && ((v14 & 0x84) != 0 || (*((_BYTE *)i + 39) & 2) != 0) )
          {
LABEL_12:
            v8 = 1;
            KeReleaseSpinLockFromDpcLevel(v4);
            if ( dword_140D06B08 )
            {
              if ( (dword_140D06B08 & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
              {
                CurrentPrcb = KeGetCurrentPrcb();
                v16 = *((_QWORD *)CurrentPrcb + 4375);
                v17 = (*(_DWORD *)(v16 + 20) & 0xFFFF0003) == 0;
                *(_DWORD *)(v16 + 20) &= 0xFFFF0003;
                if ( v17 )
                  sub_140418E4C(CurrentPrcb);
              }
            }
            __writecr8(1uLL);
            IoCancelIrp((PIRP)(i - 4));
            CurrentIrql = KeGetCurrentIrql();
            __writecr8(2uLL);
            if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
            {
              v13 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
              *(_DWORD *)(v13 + 20) |= (-1 << (CurrentIrql + 1)) & 4;
            }
            KeAcquireSpinLockAtDpcLevel(v4);
          }
        }
      }
      else if ( (*(_DWORD *)(i - 2) & 2) == 0 && (!a1 || i[20] == a1) && (!a3 || i[5] == a3) )
      {
        goto LABEL_12;
      }
    }
  }
  KeReleaseSpinLockFromDpcLevel(v4);
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      v18 = KeGetCurrentIrql();
      if ( v18 <= 0xFu && v9 <= 0xFu && v18 >= 2u )
      {
        v19 = KeGetCurrentPrcb();
        v20 = *((_QWORD *)v19 + 4375);
        v21 = ~(unsigned __int16)(-1LL << (v9 + 1));
        v17 = (v21 & *(_DWORD *)(v20 + 20)) == 0;
        *(_DWORD *)(v20 + 20) &= v21;
        if ( v17 )
          sub_140418E4C(v19);
      }
    }
  }
  __writecr8(v9);
  return v8;
}
