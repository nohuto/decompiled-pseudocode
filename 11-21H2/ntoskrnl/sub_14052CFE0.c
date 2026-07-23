/*
 * XREFs of sub_14052CFE0 @ 0x14052CFE0
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

__int64 __fastcall sub_14052CFE0(unsigned int a1, __int16 a2, __int16 a3, _DWORD *a4)
{
  ULONG_PTR v5; // r12
  __int64 v8; // r14
  unsigned __int64 v9; // rsi
  int v10; // ecx
  int v11; // ebx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v14; // r9
  int v15; // eax
  bool v16; // zf
  _DWORD v18[2]; // [rsp+38h] [rbp-50h] BYREF
  __int128 v19; // [rsp+40h] [rbp-48h]
  __int64 v20; // [rsp+50h] [rbp-38h]
  int v21; // [rsp+80h] [rbp-8h]

  v5 = a1;
  v8 = *(_QWORD *)(qword_140C4ABF0 + 8LL * a1);
  v9 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v8 + 2216));
  sub_14052CED4(3uLL, v5, v8 + 2216);
  *(_QWORD *)(v8 + 2240) = 0LL;
  *(_QWORD *)(v8 + 2248) = 0LL;
  *(_WORD *)(v8 + 2238) = a3;
  *(_DWORD *)(v8 + 2228) = 1;
  *(_DWORD *)(v8 + 2232) = 2;
  *(_WORD *)(v8 + 2236) = a2;
  _InterlockedExchange((volatile __int32 *)(v8 + 2224), 1);
  v10 = *(_DWORD *)(v8 + 20);
  v20 = 0LL;
  v19 = 0LL;
  DWORD2(v19) = v10;
  LODWORD(v19) = 4;
  v18[1] = *(_DWORD *)(qword_140C54B50 + 20);
  v18[0] = *(_DWORD *)(qword_140C54B50 + 16);
  _disable();
  v11 = sub_14042A5E0(*(_QWORD *)(qword_140C54A88 + 16), v18);
  if ( (v21 & 0x200) != 0 )
    _enable();
  if ( v11 < 0 )
    KeBugCheckEx(0x1DAu, 4uLL, 3uLL, v5, v8 + 2216);
  sub_14052CED4(3uLL, v5, v8 + 2216);
  *a4 = *(_DWORD *)(v8 + 2240);
  KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(v8 + 2216));
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v9 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v14 = *((_QWORD *)CurrentPrcb + 4375);
        v15 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v9 + 1));
        v16 = (v15 & *(_DWORD *)(v14 + 20)) == 0;
        *(_DWORD *)(v14 + 20) &= v15;
        if ( v16 )
          sub_140418E4C((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(v9);
  return (unsigned int)v11;
}
