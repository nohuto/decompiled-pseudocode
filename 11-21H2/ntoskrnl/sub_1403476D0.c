/*
 * XREFs of sub_1403476D0 @ 0x1403476D0
 * Callers:
 *     sub_140234D58 @ 0x140234D58 (sub_140234D58.c)
 *     sub_140347E10 @ 0x140347E10 (sub_140347E10.c)
 *     sub_140418160 @ 0x140418160 (sub_140418160.c)
 *     sub_140559FA8 @ 0x140559FA8 (sub_140559FA8.c)
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

__int64 __fastcall sub_1403476D0(__int64 a1, __int64 a2)
{
  KSPIN_LOCK *v2; // rsi
  KIRQL v4; // al
  _QWORD *v5; // r8
  _QWORD *v6; // rdx
  unsigned __int64 v7; // rdi
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v12; // r9
  bool v13; // zf

  v2 = (KSPIN_LOCK *)(a2 + 184);
  v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 184));
  v5 = *(_QWORD **)(a1 + 40);
  v6 = (_QWORD *)(a1 + 32);
  v7 = v4;
  v8 = *(_QWORD *)(a1 + 32);
  if ( *(_QWORD *)(v8 + 8) != a1 + 32 || (_QWORD *)*v5 != v6 )
    __fastfail(3u);
  *v5 = v8;
  *(_QWORD *)(v8 + 8) = v5;
  v9 = *(_QWORD *)(a1 + 88);
  *(_QWORD *)(a1 + 40) = a1 + 32;
  *v6 = v6;
  ObfDereferenceObjectWithTag((PVOID)(v9 & 0xFFFFFFFFFFFFFFF9uLL), 0x70436F49u);
  *(_DWORD *)(a1 + 16) = *(_DWORD *)(a1 + 16) & 0xFFFF5FFF | 0x8000;
  KeReleaseSpinLockFromDpcLevel(v2);
  result = (unsigned int)dword_140D06B08;
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      result = KeGetCurrentIrql();
      if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v7 <= 0xFu && (unsigned __int8)result >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v12 = *((_QWORD *)CurrentPrcb + 4375);
        result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v7 + 1));
        v13 = ((unsigned int)result & *(_DWORD *)(v12 + 20)) == 0;
        *(_DWORD *)(v12 + 20) &= result;
        if ( v13 )
          result = sub_140418E4C(CurrentPrcb);
      }
    }
  }
  __writecr8(v7);
  return result;
}
