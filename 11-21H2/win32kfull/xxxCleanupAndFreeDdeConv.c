/*
 * XREFs of xxxCleanupAndFreeDdeConv @ 0x1C0217A00
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1C00788F8 (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     ?FreeListFree@@YAXPEAUtagFREELIST@@@Z @ 0x1C0109E90 (-FreeListFree@@YAXPEAUtagFREELIST@@@Z.c)
 *     xxxFreeDdeConv @ 0x1C0218788 (xxxFreeDdeConv.c)
 */

__int64 __fastcall xxxCleanupAndFreeDdeConv(struct tagDDECONV *a1)
{
  bool v2; // dl
  struct tagFREELIST *v3; // rcx

  v2 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x2000) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( v2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_q(
      WPP_GLOBAL_Control->AttachedDevice,
      v2,
      WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
      57,
      4,
      14,
      57,
      (__int64)&WPP_b8232c44b11d3b42055fa312fd74cb4b_Traceguids,
      (char)a1);
  v3 = (struct tagFREELIST *)*((_QWORD *)a1 + 9);
  if ( v3 )
  {
    FreeListFree(v3);
    *((_QWORD *)a1 + 9) = 0LL;
  }
  return xxxFreeDdeConv(a1);
}
