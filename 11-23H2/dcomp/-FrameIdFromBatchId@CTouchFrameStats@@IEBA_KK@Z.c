/*
 * XREFs of ?FrameIdFromBatchId@CTouchFrameStats@@IEBA_KK@Z @ 0x1801A8680
 * Callers:
 *     ?ResolveFrames@CTouchFrameStats@@IEAA_NAEBUtagCOMPOSITION_TARGET_ID@@@Z @ 0x1801A89E8 (-ResolveFrames@CTouchFrameStats@@IEAA_NAEBUtagCOMPOSITION_TARGET_ID@@@Z.c)
 *     ?SendTelemetry@CTouchFrameStats@@MEAAXXZ @ 0x1801A8B60 (-SendTelemetry@CTouchFrameStats@@MEAAXXZ.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall CTouchFrameStats::FrameIdFromBatchId(CTouchFrameStats *this, unsigned int a2)
{
  __int64 i; // rax

  for ( i = *((_QWORD *)this + 24); ; i += 16LL )
  {
    if ( i == *((_QWORD *)this + 25) )
      return 0LL;
    if ( *(_DWORD *)i >= a2 )
      break;
  }
  return *(_QWORD *)(i + 8);
}
