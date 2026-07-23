/*
 * XREFs of sub_14052D550 @ 0x14052D550
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

__int64 __fastcall sub_14052D550(unsigned int a1, __int16 a2, __int16 a3, int a4, int a5)
{
  ULONG_PTR v8; // r13
  __int64 v10; // r14
  unsigned __int64 v11; // r12
  int v12; // ecx
  int v13; // ebx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v16; // r9
  int v17; // eax
  bool v18; // zf
  _DWORD v20[2]; // [rsp+38h] [rbp-50h] BYREF
  __int128 v21; // [rsp+40h] [rbp-48h]
  __int64 v22; // [rsp+50h] [rbp-38h]
  int v23; // [rsp+80h] [rbp-8h]

  v8 = a1;
  v10 = *(_QWORD *)(qword_140C4ABF0 + 8LL * a1);
  v11 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v10 + 2216));
  sub_14052CED4(4uLL, a1, v10 + 2216);
  *(_QWORD *)(v10 + 2248) = 0LL;
  *(_DWORD *)(v10 + 2228) = 2;
  *(_DWORD *)(v10 + 2232) = 2;
  *(_DWORD *)(v10 + 2244) = a5;
  *(_WORD *)(v10 + 2236) = a2;
  *(_WORD *)(v10 + 2238) = a3;
  *(_DWORD *)(v10 + 2240) = a4;
  _InterlockedExchange((volatile __int32 *)(v10 + 2224), 1);
  v12 = *(_DWORD *)(v10 + 20);
  v22 = 0LL;
  v21 = 0LL;
  DWORD2(v21) = v12;
  LODWORD(v21) = 4;
  v20[1] = *(_DWORD *)(qword_140C54B50 + 20);
  v20[0] = *(_DWORD *)(qword_140C54B50 + 16);
  _disable();
  v13 = sub_14042A5E0(*(_QWORD *)(qword_140C54A88 + 16), v20);
  if ( (v23 & 0x200) != 0 )
    _enable();
  if ( v13 < 0 )
    KeBugCheckEx(0x1DAu, 4uLL, 4uLL, v8, v10 + 2216);
  KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(v10 + 2216));
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v11 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v16 = *((_QWORD *)CurrentPrcb + 4375);
        v17 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v11 + 1));
        v18 = (v17 & *(_DWORD *)(v16 + 20)) == 0;
        *(_DWORD *)(v16 + 20) &= v17;
        if ( v18 )
          sub_140418E4C((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(v11);
  return (unsigned int)v13;
}
