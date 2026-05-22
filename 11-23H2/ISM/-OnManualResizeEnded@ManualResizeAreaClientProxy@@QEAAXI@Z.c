/*
 * XREFs of ?OnManualResizeEnded@ManualResizeAreaClientProxy@@QEAAXI@Z @ 0x180161B78
 * Callers:
 *     ?CancelResize@ResizeProcessor@@QEAAJKPEAVBamoResizeControllerClientProxy@@@Z @ 0x180163A84 (-CancelResize@ResizeProcessor@@QEAAJKPEAVBamoResizeControllerClientProxy@@@Z.c)
 *     ?OnInput@ResizeProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x180164B60 (-OnInput@ResizeProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorResponse@.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180058998 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall ManualResizeAreaClientProxy::OnManualResizeEnded(ManualResizeAreaClientProxy *this)
{
  int v1; // eax
  int v2; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *((_BYTE *)this + 64) = 0;
  v1 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)this + 1) + 32LL))((char *)this + 8);
  if ( v1 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x25,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\resize\\system\\lib\\resizeareaclientproxy.cpp",
      (const char *)(unsigned int)v1,
      v2);
}
