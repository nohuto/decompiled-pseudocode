/*
 * XREFs of sub_14024E884 @ 0x14024E884
 * Callers:
 *     sub_140249470 @ 0x140249470 (sub_140249470.c)
 *     sub_14024A5B4 @ 0x14024A5B4 (sub_14024A5B4.c)
 *     sub_14024E7F8 @ 0x14024E7F8 (sub_14024E7F8.c)
 *     sub_140256F58 @ 0x140256F58 (sub_140256F58.c)
 *     sub_1402A2490 @ 0x1402A2490 (sub_1402A2490.c)
 *     sub_1402A30D0 @ 0x1402A30D0 (sub_1402A30D0.c)
 *     sub_1402A4E10 @ 0x1402A4E10 (sub_1402A4E10.c)
 *     sub_140376950 @ 0x140376950 (sub_140376950.c)
 *     sub_1403857EC @ 0x1403857EC (sub_1403857EC.c)
 *     sub_14039F3B0 @ 0x14039F3B0 (sub_14039F3B0.c)
 *     sub_140542458 @ 0x140542458 (sub_140542458.c)
 *     sub_14054276C @ 0x14054276C (sub_14054276C.c)
 *     sub_14092E8CC @ 0x14092E8CC (sub_14092E8CC.c)
 * Callees:
 *     KeAcquireQueuedSpinLock @ 0x140285C80 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x1402A3F30 (KeReleaseQueuedSpinLock.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_14024E884(_QWORD *P)
{
  _QWORD **v2; // rcx
  PVOID *v3; // rax
  __int64 v4; // rdi

  v2 = (_QWORD **)*P;
  if ( v2[1] != P || (v3 = (PVOID *)P[1], *v3 != P) )
    __fastfail(3u);
  *v3 = v2;
  v2[1] = v3;
  v4 = P[2];
  if ( v4 )
  {
    *(_BYTE *)(v4 + 69) = KeAcquireQueuedSpinLock(7uLL);
    _InterlockedExchange64((volatile __int64 *)(v4 + 104), 0LL);
    KeReleaseQueuedSpinLock(7uLL, *(_BYTE *)(v4 + 69));
    *(_QWORD *)(v4 + 56) = *((unsigned int *)P + 12);
    *(_DWORD *)(v4 + 48) = *(_BYTE *)(v4 + 68) != 0 ? 0xC0000120 : 0;
  }
  sub_14042A5E0(P[4], v4);
  ExFreePoolWithTag(P, 0);
}
