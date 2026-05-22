/*
 * XREFs of ?CancelManualDrag@DragNDropProcessor@@AEAAXKPEAVManualDragAreaClientProxy@@@Z @ 0x18013DEDC
 * Callers:
 *     ?StartManualDrag@DragNDropProcessor@@QEAAXKPEAVBamoManualDragAreaClientProxy@@@Z @ 0x180141AC8 (-StartManualDrag@DragNDropProcessor@@QEAAXKPEAVBamoManualDragAreaClientProxy@@@Z.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C7A4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?ManualDragCancelled@DragNDrop@InputETW@@SAXKPEAUtagPOINT@@00_KW4VirtualKeyModifiers@System@Windows@@1@Z @ 0x18013FE4C (-ManualDragCancelled@DragNDrop@InputETW@@SAXKPEAUtagPOINT@@00_KW4VirtualKeyModifiers@System@Wind.c)
 */

void __fastcall DragNDropProcessor::CancelManualDrag(
        DragNDropProcessor *this,
        unsigned int a2,
        struct ManualDragAreaClientProxy *a3)
{
  int v5; // eax
  int v6; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v8; // [rsp+50h] [rbp+8h] BYREF

  v8 = 0LL;
  InputETW::DragNDrop::ManualDragCancelled(a2, &v8, &v8, &v8);
  *((_BYTE *)a3 + 72) = 0;
  v5 = (*(__int64 (__fastcall **)(char *, _QWORD))(*((_QWORD *)a3 + 1) + 24LL))((char *)a3 + 8, a2);
  if ( v5 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x1F,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\dragndrop\\system\\lib\\dragareaclientproxy.cpp",
      (const char *)(unsigned int)v5,
      v6);
}
