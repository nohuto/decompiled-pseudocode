/*
 * XREFs of ??0HeatDisplayOcclusionRect@@QEAA@AEBUtagRECT@@0QEBG@Z @ 0x180183B5C
 * Callers:
 *     ?BroadcastContextMessage@ISMHeatFrameworkHost@@IEAAJPEAV?$variant@Umonostate@std@@UInputConfigContextMessage@@UDisplayOcclusionContextMessage@@UVirtualTouchpadContextMessage@@UMIT_WIN32K_INPUTDESKTOP_STATE_MESSAGE@@@std@@PEAUIHeatSystemContextClient@@@Z @ 0x180184140 (-BroadcastContextMessage@ISMHeatFrameworkHost@@IEAAJPEAV-$variant@Umonostate@std@@UInputConfigCo.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C7A4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x18007E5EC (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 */

HeatDisplayOcclusionRect *__fastcall HeatDisplayOcclusionRect::HeatDisplayOcclusionRect(
        HeatDisplayOcclusionRect *this,
        const struct tagRECT *a2,
        const struct tagRECT *a3,
        size_t *a4)
{
  HRESULT v4; // eax
  HeatDisplayOcclusionRect *v5; // r11
  int v7; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *(struct tagRECT *)this = *a2;
  *((struct tagRECT *)this + 1) = *a3;
  v4 = StringCchCopyW((unsigned __int16 *)this + 16, 0x39uLL, a4);
  if ( v4 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x76,
      (int)"onecoreuap\\Windows\\input\\heat\\inc\\heatcoretypes.h",
      (const char *)(unsigned int)v4,
      v7);
  return v5;
}
