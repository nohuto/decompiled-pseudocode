/*
 * XREFs of sub_1403CD3EC @ 0x1403CD3EC
 * Callers:
 *     sub_140845A60 @ 0x140845A60 (sub_140845A60.c)
 *     sub_140845F30 @ 0x140845F30 (sub_140845F30.c)
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

__int64 __fastcall sub_1403CD3EC(__int64 a1)
{
  unsigned __int64 v2; // rdi
  _QWORD *v3; // rax
  _QWORD *v4; // rbx
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v7; // r9
  bool v8; // zf

  v2 = KeAcquireSpinLockRaiseToDpc(&qword_140C4E2F0);
  v3 = (_QWORD *)qword_140C4E2E8;
  v4 = (_QWORD *)(a1 + 456);
  if ( *(__int64 **)qword_140C4E2E8 != &qword_140C4E2E0 )
    __fastfail(3u);
  *v4 = &qword_140C4E2E0;
  v4[1] = v3;
  *v3 = v4;
  qword_140C4E2E8 = (__int64)v4;
  KeReleaseSpinLockFromDpcLevel(&qword_140C4E2F0);
  result = (unsigned int)dword_140D06B08;
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      result = KeGetCurrentIrql();
      if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v2 <= 0xFu && (unsigned __int8)result >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v7 = *((_QWORD *)CurrentPrcb + 4375);
        result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v2 + 1));
        v8 = ((unsigned int)result & *(_DWORD *)(v7 + 20)) == 0;
        *(_DWORD *)(v7 + 20) &= result;
        if ( v8 )
          result = sub_140418E4C(CurrentPrcb);
      }
    }
  }
  __writecr8(v2);
  return result;
}
