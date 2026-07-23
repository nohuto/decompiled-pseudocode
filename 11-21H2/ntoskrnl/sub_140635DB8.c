/*
 * XREFs of sub_140635DB8 @ 0x140635DB8
 * Callers:
 *     sub_140635DA0 @ 0x140635DA0 (sub_140635DA0.c)
 *     sub_140635EEC @ 0x140635EEC (sub_140635EEC.c)
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_1406366B8 @ 0x1406366B8 (sub_1406366B8.c)
 */

__int64 __fastcall sub_140635DB8(__int64 a1)
{
  KSPIN_LOCK *v1; // r15
  int v3; // r14d
  unsigned __int64 v4; // rbp
  _QWORD *i; // rdi
  __int64 *v6; // rdx
  bool v7; // cf
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v10; // r9
  bool v11; // zf

  v1 = (KSPIN_LOCK *)(a1 + 368);
  v3 = 1;
  v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 368));
  if ( !*(_DWORD *)(a1 + 1024) && !*(_DWORD *)(a1 + 1032) )
  {
    for ( i = *(_QWORD **)(a1 + 688); i != (_QWORD *)(a1 + 688); i = (_QWORD *)*i )
      sub_1406366B8(i - 2);
    v6 = *(__int64 **)(a1 + 704);
    if ( v6 == (__int64 *)(a1 + 704) )
      goto LABEL_11;
    do
    {
      v7 = *((_DWORD *)v6 + 15) < *((_DWORD *)v6 + 14);
      v6 = (__int64 *)*v6;
      if ( v7 )
        v3 = 0;
    }
    while ( v6 != (__int64 *)(a1 + 704) );
    if ( v3 )
    {
LABEL_11:
      *(_DWORD *)(a1 + 1032) = 1;
      KeSetEvent((PRKEVENT)(a1 + 1000), 0, 0);
    }
  }
  KeReleaseSpinLockFromDpcLevel(v1);
  result = (unsigned int)dword_140D06B08;
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      result = KeGetCurrentIrql();
      if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v4 <= 0xFu && (unsigned __int8)result >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v10 = *((_QWORD *)CurrentPrcb + 4375);
        result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v4 + 1));
        v11 = ((unsigned int)result & *(_DWORD *)(v10 + 20)) == 0;
        *(_DWORD *)(v10 + 20) &= result;
        if ( v11 )
          result = sub_140418E4C((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(v4);
  return result;
}
