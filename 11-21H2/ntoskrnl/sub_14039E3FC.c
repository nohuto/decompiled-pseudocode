/*
 * XREFs of sub_14039E3FC @ 0x14039E3FC
 * Callers:
 *     ExTryAcquireAutoExpandPushLockShared @ 0x14039E320 (ExTryAcquireAutoExpandPushLockShared.c)
 * Callees:
 *     sub_140220664 @ 0x140220664 (sub_140220664.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

volatile signed __int64 *__fastcall sub_14039E3FC(unsigned int a1, int a2)
{
  unsigned int v2; // eax
  unsigned __int64 v3; // r9
  unsigned int v4; // ecx
  unsigned int v5; // r10d
  volatile signed __int64 *v6; // r11

  v2 = (a1 >> 13) & 0x3FFFF;
  v3 = a1;
  _BitScanReverse(&v4, v2);
  v5 = a2 | 2;
  v6 = (volatile signed __int64 *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)KeGetCurrentPrcb() + 4310) + 8LL * (v4 - 2))
                                             + 8LL * (v2 ^ (1 << v4))
                                             + 8)
                                 + 8 * ((v3 >> 4) & 0x1FF));
  if ( (a2 & 0xFFFFFFF8) != 0 )
    KeBugCheckEx(0x152u, v5, (ULONG_PTR)v6, 0LL, 0LL);
  if ( !_InterlockedCompareExchange64(v6, 17LL, 0LL) || sub_140220664((signed __int64 *)v6, v5) )
    return v6;
  else
    return 0LL;
}
