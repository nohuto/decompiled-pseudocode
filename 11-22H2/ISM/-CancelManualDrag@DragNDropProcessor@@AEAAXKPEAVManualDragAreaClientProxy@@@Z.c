/*
 * XREFs of ?CancelManualDrag@DragNDropProcessor@@AEAAXKPEAVManualDragAreaClientProxy@@@Z @ 0x18016B32C
 * Callers:
 *     ?StartManualDrag@DragNDropProcessor@@QEAAXKPEAVBamoManualDragAreaClientProxy@@@Z @ 0x18016EC50 (-StartManualDrag@DragNDropProcessor@@QEAAXKPEAVBamoManualDragAreaClientProxy@@@Z.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180059D90 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?ManualDragCancelled@InputGesture@InputETW@@SAXPEBGKPEAUtagPOINT@@11_KW4VirtualKeyModifiers@System@Windows@@2@Z @ 0x18016CF74 (-ManualDragCancelled@InputGesture@InputETW@@SAXPEBGKPEAUtagPOINT@@11_KW4VirtualKeyModifiers@Syst.c)
 */

void __fastcall DragNDropProcessor::CancelManualDrag(
        DragNDropProcessor *this,
        unsigned int a2,
        struct ManualDragAreaClientProxy *a3)
{
  __int64 v5; // rax
  int v6; // eax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v8; // [rsp+50h] [rbp+8h] BYREF

  v8 = 0LL;
  v5 = (*(__int64 (__fastcall **)(DragNDropProcessor *))(*(_QWORD *)this + 48LL))(this);
  InputETW::InputGesture::ManualDragCancelled(v5, a2, &v8, &v8);
  *((_BYTE *)a3 + 72) = 0;
  v6 = (*(__int64 (__fastcall **)(char *, _QWORD))(*((_QWORD *)a3 + 1) + 24LL))((char *)a3 + 8, a2);
  if ( v6 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x1F,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\dragndrop\\system\\lib\\dragareaclientproxy.cpp",
      (const char *)(unsigned int)v6,
      (int)&v8);
}
