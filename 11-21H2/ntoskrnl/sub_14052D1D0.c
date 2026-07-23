/*
 * XREFs of sub_14052D1D0 @ 0x14052D1D0
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

__int64 __fastcall sub_14052D1D0(unsigned int a1, int a2, _QWORD *a3)
{
  ULONG_PTR v4; // r15
  __int64 v6; // rbp
  unsigned __int64 v7; // rdi
  int v8; // eax
  int v9; // ebx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v12; // r9
  int v13; // eax
  bool v14; // zf
  _DWORD v16[2]; // [rsp+30h] [rbp-58h] BYREF
  __int128 v17; // [rsp+38h] [rbp-50h]
  __int64 v18; // [rsp+48h] [rbp-40h]
  int v19; // [rsp+80h] [rbp-8h]

  v4 = a1;
  v6 = *(_QWORD *)(qword_140C4ABF0 + 8LL * a1);
  v7 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v6 + 2216));
  sub_14052CED4(1uLL, v4, v6 + 2216);
  *(_QWORD *)(v6 + 2240) = 0LL;
  *(_QWORD *)(v6 + 2248) = 0LL;
  *(_DWORD *)(v6 + 2228) = 1;
  *(_DWORD *)(v6 + 2232) = 1;
  *(_DWORD *)(v6 + 2236) = a2;
  _InterlockedExchange((volatile __int32 *)(v6 + 2224), 1);
  v8 = *(_DWORD *)(v6 + 20);
  v17 = 0LL;
  DWORD2(v17) = v8;
  v18 = 0LL;
  LODWORD(v17) = 4;
  v16[1] = *(_DWORD *)(qword_140C54B50 + 20);
  v16[0] = *(_DWORD *)(qword_140C54B50 + 16);
  _disable();
  v9 = sub_14042A5E0(*(_QWORD *)(qword_140C54A88 + 16), v16);
  if ( (v19 & 0x200) != 0 )
    _enable();
  if ( v9 < 0 )
    KeBugCheckEx(0x1DAu, 4uLL, 1uLL, v4, v6 + 2216);
  sub_14052CED4(1uLL, v4, v6 + 2216);
  *a3 = *(_QWORD *)(v6 + 2240);
  KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(v6 + 2216));
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v7 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v12 = *((_QWORD *)CurrentPrcb + 4375);
        v13 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v7 + 1));
        v14 = (v13 & *(_DWORD *)(v12 + 20)) == 0;
        *(_DWORD *)(v12 + 20) &= v13;
        if ( v14 )
          sub_140418E4C((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(v7);
  return (unsigned int)v9;
}
