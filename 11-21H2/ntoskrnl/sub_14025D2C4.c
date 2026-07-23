/*
 * XREFs of sub_14025D2C4 @ 0x14025D2C4
 * Callers:
 *     sub_1407DB734 @ 0x1407DB734 (sub_1407DB734.c)
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     ZwSetTimerResolution @ 0x14041EEC0 (ZwSetTimerResolution.c)
 *     sub_1406EA338 @ 0x1406EA338 (sub_1406EA338.c)
 *     sub_1407D6CBC @ 0x1407D6CBC (sub_1407D6CBC.c)
 *     sub_1407D6F54 @ 0x1407D6F54 (sub_1407D6F54.c)
 */

__int64 __fastcall sub_14025D2C4(__int64 a1)
{
  __int64 v1; // rbx
  unsigned __int64 v2; // rdi
  __int64 v3; // rax
  _QWORD *v4; // r8
  __int64 v5; // rdi
  __int64 result; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v9; // r9
  int v10; // eax
  bool v11; // zf
  ULONG ActualTime; // [rsp+30h] [rbp+8h] BYREF

  ActualTime = 0;
  v1 = *((_QWORD *)KeGetCurrentThread() + 23);
  if ( (*(_DWORD *)(v1 + 1124) & 0x1000) != 0 )
    ZwSetTimerResolution(DesiredTime, 0, &ActualTime);
  LOBYTE(a1) = 1;
  sub_1407D6F54(a1);
  v2 = KeAcquireSpinLockRaiseToDpc(&qword_140C15B28);
  v3 = *(_QWORD *)(v1 + 2080);
  v4 = *(_QWORD **)(v1 + 2088);
  if ( *(_QWORD *)(v3 + 8) != v1 + 2080 || *v4 != v1 + 2080 )
    __fastfail(3u);
  *v4 = v3;
  *(_QWORD *)(v3 + 8) = v4;
  KeReleaseSpinLockFromDpcLevel(&qword_140C15B28);
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v2 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v9 = *((_QWORD *)CurrentPrcb + 4375);
        v10 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v2 + 1));
        v11 = (v10 & *(_DWORD *)(v9 + 20)) == 0;
        *(_DWORD *)(v9 + 20) &= v10;
        if ( v11 )
          sub_140418E4C(CurrentPrcb);
      }
    }
  }
  __writecr8(v2);
  v5 = *(_QWORD *)(v1 + 2096);
  *(_QWORD *)(v1 + 2096) = 0LL;
  result = sub_1407D6CBC();
  if ( v5 )
    return sub_1406EA338(v5);
  return result;
}
