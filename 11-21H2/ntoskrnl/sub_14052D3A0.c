/*
 * XREFs of sub_14052D3A0 @ 0x14052D3A0
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

__int64 __fastcall sub_14052D3A0(unsigned int a1, __int64 a2)
{
  ULONG_PTR v4; // r15
  __int64 v5; // rsi
  KSPIN_LOCK *BugCheckParameter4; // r14
  unsigned __int64 v7; // rbp
  int v8; // ebx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v11; // r9
  int v12; // eax
  bool v13; // zf
  __int16 v15; // [rsp+70h] [rbp-8h]
  int v16; // [rsp+90h] [rbp+18h] BYREF
  int v17; // [rsp+94h] [rbp+1Ch]

  v4 = a1;
  v5 = *(_QWORD *)(qword_140C4ABF0 + 8LL * a1);
  BugCheckParameter4 = (KSPIN_LOCK *)(v5 + 2216);
  v7 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v5 + 2216));
  sub_14052CED4(5uLL, a1, v5 + 2216);
  *(_QWORD *)(v5 + 2232) = 0LL;
  *(_QWORD *)(v5 + 2248) = 0LL;
  *(_QWORD *)(v5 + 2240) = a2;
  *(_DWORD *)(v5 + 2228) = 3;
  _InterlockedExchange((volatile __int32 *)(v5 + 2224), 1);
  v17 = *(_DWORD *)(qword_140C54B50 + 20);
  v16 = *(_DWORD *)(qword_140C54B50 + 16);
  _disable();
  v8 = sub_14042A5E0(*(_QWORD *)(qword_140C54A88 + 16), &v16);
  if ( (v15 & 0x200) != 0 )
    _enable();
  if ( v8 < 0 )
    KeBugCheckEx(0x1DAu, 4uLL, 5uLL, v4, (ULONG_PTR)BugCheckParameter4);
  KeReleaseSpinLockFromDpcLevel(BugCheckParameter4);
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
  __writecr8(v7);
  return (unsigned int)v8;
}
