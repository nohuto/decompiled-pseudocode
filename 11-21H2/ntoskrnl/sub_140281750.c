/*
 * XREFs of sub_140281750 @ 0x140281750
 * Callers:
 *     sub_14066D4BC @ 0x14066D4BC (sub_14066D4BC.c)
 *     sub_1406A377C @ 0x1406A377C (sub_1406A377C.c)
 *     sub_1406F3884 @ 0x1406F3884 (sub_1406F3884.c)
 *     sub_1406F71A0 @ 0x1406F71A0 (sub_1406F71A0.c)
 *     sub_1406F884C @ 0x1406F884C (sub_1406F884C.c)
 *     sub_1406F8D30 @ 0x1406F8D30 (sub_1406F8D30.c)
 *     sub_1406F9060 @ 0x1406F9060 (sub_1406F9060.c)
 *     sub_1406F9990 @ 0x1406F9990 (sub_1406F9990.c)
 *     sub_1406FD140 @ 0x1406FD140 (sub_1406FD140.c)
 *     sub_140706ABC @ 0x140706ABC (sub_140706ABC.c)
 *     sub_140707460 @ 0x140707460 (sub_140707460.c)
 *     sub_14075FC44 @ 0x14075FC44 (sub_14075FC44.c)
 *     sub_140761234 @ 0x140761234 (sub_140761234.c)
 *     sub_1407BA750 @ 0x1407BA750 (sub_1407BA750.c)
 *     sub_1407E4D40 @ 0x1407E4D40 (sub_1407E4D40.c)
 *     sub_1407F0478 @ 0x1407F0478 (sub_1407F0478.c)
 *     sub_1407FAEE0 @ 0x1407FAEE0 (sub_1407FAEE0.c)
 *     sub_140881A9A @ 0x140881A9A (sub_140881A9A.c)
 *     sub_140881BB6 @ 0x140881BB6 (sub_140881BB6.c)
 *     sub_14096B158 @ 0x14096B158 (sub_14096B158.c)
 *     sub_14096CB14 @ 0x14096CB14 (sub_14096CB14.c)
 *     sub_14096CCF8 @ 0x14096CCF8 (sub_14096CCF8.c)
 *     sub_14096F8CC @ 0x14096F8CC (sub_14096F8CC.c)
 *     sub_1409780D4 @ 0x1409780D4 (sub_1409780D4.c)
 *     sub_14097A9C4 @ 0x14097A9C4 (sub_14097A9C4.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x1402A6D50 (ObfReferenceObjectWithTag.c)
 *     sub_1402F339C @ 0x1402F339C (sub_1402F339C.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1403127A0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockShared @ 0x140366580 (ExAcquireSpinLockShared.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_1405C5EC8 @ 0x1405C5EC8 (sub_1405C5EC8.c)
 */

unsigned __int64 __fastcall sub_140281750(__int64 a1)
{
  signed __int64 v2; // r8
  signed __int64 v3; // rax
  signed __int64 v4; // rbx
  unsigned int v5; // r8d
  unsigned __int64 v6; // rbx
  unsigned __int64 v8; // rbp
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v11; // r9
  int v12; // edx
  bool v13; // zf

  _m_prefetchw((const void *)(a1 + 64));
  v2 = *(_QWORD *)(a1 + 64);
  if ( (v2 & 0xF) != 0 )
  {
    do
    {
      v3 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 64), v2 - 1, v2);
      if ( v2 == v3 )
        break;
      v2 = v3;
    }
    while ( (v3 & 0xF) != 0 );
  }
  v4 = v2;
  v5 = v2 & 0xF;
  v6 = v4 & 0xFFFFFFFFFFFFFFF0uLL;
  if ( v5 <= 1 )
  {
    if ( !v5 )
    {
LABEL_9:
      v8 = ExAcquireSpinLockShared((PEX_SPIN_LOCK)(a1 + 72));
      v6 = *(_QWORD *)(a1 + 64) & 0xFFFFFFFFFFFFFFF0uLL;
      if ( v6 )
        ObfReferenceObjectWithTag((PVOID)(*(_QWORD *)(a1 + 64) & 0xFFFFFFFFFFFFFFF0uLL), 0x63536D4Du);
      ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(a1 + 72));
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( CurrentIrql <= 0xFu && (unsigned __int8)v8 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            v11 = *((_QWORD *)CurrentPrcb + 4375);
            v12 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v8 + 1));
            v13 = (v12 & *(_DWORD *)(v11 + 20)) == 0;
            *(_DWORD *)(v11 + 20) &= v12;
            if ( v13 )
              sub_140418E4C(CurrentPrcb);
          }
        }
      }
      __writecr8(v8);
      return v6;
    }
    sub_1402F339C(a1 + 64, v6);
  }
  if ( dword_140D05010 )
    sub_1405C5EC8(v6 - 48);
  if ( !v6 )
    goto LABEL_9;
  return v6;
}
