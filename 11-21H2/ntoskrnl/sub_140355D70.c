/*
 * XREFs of sub_140355D70 @ 0x140355D70
 * Callers:
 *     sub_140355534 @ 0x140355534 (sub_140355534.c)
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     sub_140355830 @ 0x140355830 (sub_140355830.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_1404199A4 @ 0x1404199A4 (sub_1404199A4.c)
 */

__int64 __fastcall sub_140355D70(__int64 a1)
{
  KSPIN_LOCK *v1; // rbp
  KIRQL v3; // al
  ULONG_PTR v4; // r14
  __int64 v5; // rbx
  unsigned __int64 i; // rsi
  __int64 v7; // rbx
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v10; // r9
  bool v11; // zf
  __int64 v12; // [rsp+40h] [rbp+8h] BYREF

  v1 = (KSPIN_LOCK *)(a1 + 128);
  v3 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 128));
  v4 = *(_QWORD *)(a1 + 80);
  v5 = 0LL;
  for ( i = v3; (unsigned int)v5 < *(_DWORD *)(a1 + 172); v5 = (unsigned int)(v5 + 1) )
    sub_140355830(v4, *(unsigned int *)(*(_QWORD *)(a1 + 176) + 8 * v5), 2);
  v7 = 0LL;
  v12 = 0LL;
  while ( (unsigned __int8)sub_1404199A4(a1, v7, &v12) )
  {
    v7 = v12;
    sub_140355830(*(_QWORD *)(*(_QWORD *)(v12 + 24) + 80LL), *(unsigned int *)(*(_QWORD *)(v12 + 24) + 16LL), 2);
    *(_DWORD *)(v7 + 16) &= ~2u;
  }
  KeReleaseSpinLockFromDpcLevel(v1);
  result = (unsigned int)dword_140D06B08;
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      result = KeGetCurrentIrql();
      if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)i <= 0xFu && (unsigned __int8)result >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v10 = *((_QWORD *)CurrentPrcb + 4375);
        result = ~(unsigned __int16)(-1LL << ((unsigned __int8)i + 1));
        v11 = ((unsigned int)result & *(_DWORD *)(v10 + 20)) == 0;
        *(_DWORD *)(v10 + 20) &= result;
        if ( v11 )
          result = sub_140418E4C(CurrentPrcb);
      }
    }
  }
  __writecr8(i);
  return result;
}
