/*
 * XREFs of sub_1402A3A14 @ 0x1402A3A14
 * Callers:
 *     IoGetInitiatorProcess @ 0x14025D5C0 (IoGetInitiatorProcess.c)
 *     sub_1402A2EF0 @ 0x1402A2EF0 (sub_1402A2EF0.c)
 *     sub_1402A36D0 @ 0x1402A36D0 (sub_1402A36D0.c)
 *     IoGetOplockKeyContextEx @ 0x1402A3840 (IoGetOplockKeyContextEx.c)
 *     sub_1402A38B4 @ 0x1402A38B4 (sub_1402A38B4.c)
 *     sub_1402A3984 @ 0x1402A3984 (sub_1402A3984.c)
 *     sub_1402A39EC @ 0x1402A39EC (sub_1402A39EC.c)
 *     CcInitializeCacheMapEx @ 0x140310F10 (CcInitializeCacheMapEx.c)
 *     sub_14039E588 @ 0x14039E588 (sub_14039E588.c)
 *     IoFreeSfioStreamIdentifier @ 0x140557510 (IoFreeSfioStreamIdentifier.c)
 *     IoGetOplockKeyContext @ 0x140557630 (IoGetOplockKeyContext.c)
 *     sub_140558AE0 @ 0x140558AE0 (sub_140558AE0.c)
 *     sub_1406B9CBC @ 0x1406B9CBC (sub_1406B9CBC.c)
 *     sub_1406B9FD4 @ 0x1406B9FD4 (sub_1406B9FD4.c)
 *     sub_1406C78D4 @ 0x1406C78D4 (sub_1406C78D4.c)
 *     sub_1406DF940 @ 0x1406DF940 (sub_1406DF940.c)
 *     sub_14072B8B0 @ 0x14072B8B0 (sub_14072B8B0.c)
 *     sub_14072E9E0 @ 0x14072E9E0 (sub_14072E9E0.c)
 *     sub_140731680 @ 0x140731680 (sub_140731680.c)
 *     sub_140935790 @ 0x140935790 (sub_140935790.c)
 *     IoCopyDeviceObjectHint @ 0x1409361B0 (IoCopyDeviceObjectHint.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1402A3A14(__int64 a1, int a2, _QWORD *a3)
{
  _QWORD *v3; // r9
  __int64 result; // rax

  v3 = *(_QWORD **)(a1 + 208);
  if ( !v3 )
  {
    if ( a3 )
      *a3 = 0LL;
    return 0LL;
  }
  if ( v3 == off_140C06A80 )
    return 0LL;
  result = v3[a2 + 1];
  if ( a3 )
    *a3 = v3;
  return result;
}
