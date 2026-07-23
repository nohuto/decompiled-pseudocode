/*
 * XREFs of sub_1402DE734 @ 0x1402DE734
 * Callers:
 *     sub_1402DE5C0 @ 0x1402DE5C0 (sub_1402DE5C0.c)
 *     sub_14074B420 @ 0x14074B420 (sub_14074B420.c)
 *     sub_1409478F0 @ 0x1409478F0 (sub_1409478F0.c)
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     sub_14035AD70 @ 0x14035AD70 (sub_14035AD70.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

__int64 __fastcall sub_1402DE734(__int64 a1, _QWORD *a2)
{
  KIRQL v3; // al
  __int64 v4; // rcx
  unsigned __int64 v5; // rdi
  _QWORD *v6; // rax
  _QWORD *v7; // rax
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v10; // r9
  bool v11; // zf

  v3 = KeAcquireSpinLockRaiseToDpc(&qword_140C46008);
  v4 = *a2;
  v5 = v3;
  v6 = (_QWORD *)a2[1];
  if ( *(_QWORD **)(*a2 + 8LL) != a2
    || (_QWORD *)*v6 != a2
    || (*v6 = v4,
        *(_QWORD *)(v4 + 8) = v6,
        v7 = (_QWORD *)qword_140C45FE0,
        --dword_140C45FD0,
        *(__int64 **)qword_140C45FE0 != &qword_140C45FD8) )
  {
    __fastfail(3u);
  }
  *a2 = &qword_140C45FD8;
  a2[1] = v7;
  *v7 = a2;
  qword_140C45FE0 = (__int64)a2;
  sub_14035AD70(&byte_140C45FE8, 0);
  KeReleaseSpinLockFromDpcLevel(&qword_140C46008);
  result = (unsigned int)dword_140D06B08;
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      result = KeGetCurrentIrql();
      if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v5 <= 0xFu && (unsigned __int8)result >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v10 = *((_QWORD *)CurrentPrcb + 4375);
        result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v5 + 1));
        v11 = ((unsigned int)result & *(_DWORD *)(v10 + 20)) == 0;
        *(_DWORD *)(v10 + 20) &= result;
        if ( v11 )
          result = sub_140418E4C(CurrentPrcb);
      }
    }
  }
  __writecr8(v5);
  return result;
}
