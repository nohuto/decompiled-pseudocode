/*
 * XREFs of MiGetVadMandatoryPageSize @ 0x14028ECC8
 * Callers:
 *     MiCaptureWriteWatchDirtyBit @ 0x1402358D4 (MiCaptureWriteWatchDirtyBit.c)
 *     MiMoveDirtyBitsToPfns @ 0x14028E8E0 (MiMoveDirtyBitsToPfns.c)
 *     NtGetWriteWatch @ 0x1402CF630 (NtGetWriteWatch.c)
 *     MiCreateWriteWatchView @ 0x1406BF94C (MiCreateWriteWatchView.c)
 *     NtResetWriteWatch @ 0x140700F70 (NtResetWriteWatch.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiGetVadMandatoryPageSize(__int64 a1)
{
  unsigned int v1; // edx
  unsigned __int64 result; // rax

  v1 = *(_DWORD *)(a1 + 48);
  result = MiVadPageSizes[(v1 >> 19) & 3];
  if ( result < 0x200 && (v1 & 0x800000) == 0 )
    return 1LL;
  return result;
}
