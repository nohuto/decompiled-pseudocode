/*
 * XREFs of sub_14052D720 @ 0x14052D720
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_14052CED4 @ 0x14052CED4 (sub_14052CED4.c)
 */

__int64 __fastcall sub_14052D720(unsigned int a1, int a2, __int64 a3, __int64 a4)
{
  ULONG_PTR v7; // r12
  __int64 v9; // rsi
  unsigned __int64 v10; // r15
  int v11; // ebx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v14; // r9
  int v15; // eax
  bool v16; // zf
  __int16 v18; // [rsp+80h] [rbp-8h]
  int v19; // [rsp+A8h] [rbp+20h] BYREF
  int v20; // [rsp+ACh] [rbp+24h]

  v7 = a1;
  v9 = *(_QWORD *)(qword_140C4ABF0 + 8LL * a1);
  v10 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v9 + 2216));
  sub_14052CED4(2uLL, a1, v9 + 2216);
  *(_DWORD *)(v9 + 2236) = a2;
  *(_DWORD *)(v9 + 2228) = 2;
  *(_DWORD *)(v9 + 2232) = 1;
  *(_QWORD *)(v9 + 2240) = a3;
  *(_QWORD *)(v9 + 2248) = a4;
  _InterlockedExchange((volatile __int32 *)(v9 + 2224), 1);
  v20 = *(_DWORD *)(qword_140C54B50 + 20);
  v19 = *(_DWORD *)(qword_140C54B50 + 16);
  _disable();
  v11 = sub_14042A5E0(*(_QWORD *)(qword_140C54A88 + 16), &v19);
  if ( (v18 & 0x200) != 0 )
    _enable();
  if ( v11 < 0 )
    KeBugCheckEx(0x1DAu, 4uLL, 2uLL, v7, v9 + 2216);
  KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(v9 + 2216));
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v10 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v14 = *((_QWORD *)CurrentPrcb + 4375);
        v15 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v10 + 1));
        v16 = (v15 & *(_DWORD *)(v14 + 20)) == 0;
        *(_DWORD *)(v14 + 20) &= v15;
        if ( v16 )
          sub_140418E4C((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(v10);
  return (unsigned int)v11;
}
