/*
 * XREFs of sub_140A83DA0 @ 0x140A83DA0
 * Callers:
 *     sub_140A895A4 @ 0x140A895A4 (sub_140A895A4.c)
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

unsigned __int16 *__fastcall sub_140A83DA0(_QWORD *a1, __int64 a2)
{
  KSPIN_LOCK *v2; // rsi
  KIRQL v5; // al
  _QWORD *v6; // r8
  unsigned __int64 v7; // rdi
  unsigned __int16 *v8; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v11; // r8
  int v12; // eax
  bool v13; // zf
  unsigned __int8 v15; // al
  struct _KPRCB *v16; // r10
  __int64 v17; // r8
  int v18; // eax

  v2 = a1 + 2;
  v5 = KeAcquireSpinLockRaiseToDpc(a1 + 2);
  v6 = (_QWORD *)*a1;
  v7 = v5;
  v8 = (unsigned __int16 *)(*a1 - 48LL);
  while ( 1 )
  {
    if ( a1 == v6 )
    {
      KeReleaseSpinLockFromDpcLevel(v2);
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( CurrentIrql <= 0xFu && (unsigned __int8)v7 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            v11 = *((_QWORD *)CurrentPrcb + 4375);
            v12 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v7 + 1));
            v13 = (v12 & *(_DWORD *)(v11 + 20)) == 0;
            *(_DWORD *)(v11 + 20) &= v12;
            if ( v13 )
              sub_140418E4C((__int64)CurrentPrcb);
          }
        }
      }
      v8 = 0LL;
      goto LABEL_13;
    }
    if ( *((_QWORD *)v8 + 2) + *v8 == a2 )
      break;
    v8 = (unsigned __int16 *)(*v6 - 48LL);
    v6 = (_QWORD *)*v6;
  }
  KeReleaseSpinLockFromDpcLevel(v2);
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      v15 = KeGetCurrentIrql();
      if ( v15 <= 0xFu && (unsigned __int8)v7 <= 0xFu && v15 >= 2u )
      {
        v16 = KeGetCurrentPrcb();
        v17 = *((_QWORD *)v16 + 4375);
        v18 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v7 + 1));
        v13 = (v18 & *(_DWORD *)(v17 + 20)) == 0;
        *(_DWORD *)(v17 + 20) &= v18;
        if ( v13 )
          sub_140418E4C((__int64)v16);
      }
    }
  }
LABEL_13:
  __writecr8(v7);
  return v8;
}
