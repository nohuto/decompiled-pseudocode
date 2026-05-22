/*
 * XREFs of ?CreateHandlerForHandlerContext@ShellGesturesProcessor@@CAXAEAUHandlerContext@1@UtagPOINT@@_K@Z @ 0x180074218
 * Callers:
 *     ?StartOperation@ShellGesturesProcessor@@QEAA_NI_N_K1PEAVDragManagerClientProxy@@@Z @ 0x180074B34 (-StartOperation@ShellGesturesProcessor@@QEAA_NI_N_K1PEAVDragManagerClientProxy@@@Z.c)
 *     ?OnInput@ShellGesturesProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x18017D310 (-OnInput@ShellGesturesProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorRe.c)
 * Callees:
 *     ?GetBamoServerConnection@ISMStatics@@SAPEAVInputSystemServerConnection@@XZ @ 0x1800254AC (-GetBamoServerConnection@ISMStatics@@SAPEAVInputSystemServerConnection@@XZ.c)
 *     ?CreateGestureHandler@GestureServices@@QEAA?AV?$weak_ptr@VGestureHandler@@@std@@IUtagPOINT@@_KW4GestureProcessorType@@@Z @ 0x180072CA4 (-CreateGestureHandler@GestureServices@@QEAA-AV-$weak_ptr@VGestureHandler@@@std@@IUtagPOINT@@_KW4.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x1800D0BC8 (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??4?$weak_ptr@VGestureHandler@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18017CF34 (--4-$weak_ptr@VGestureHandler@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 */

void __fastcall ShellGesturesProcessor::CreateHandlerForHandlerContext(
        struct ShellGesturesProcessor::HandlerContext *a1,
        struct tagPOINT a2,
        __int64 a3)
{
  struct InputSystemServerConnection *BamoServerConnection; // rax
  __int64 v7; // rax
  __int64 GestureHandler; // rax
  _BYTE v9[8]; // [rsp+30h] [rbp-18h] BYREF
  std::_Ref_count_base *v10; // [rsp+38h] [rbp-10h]

  BamoServerConnection = ISMStatics::GetBamoServerConnection();
  v7 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*((_QWORD *)BamoServerConnection + 31) + 8LL) + 88LL))(*((_QWORD *)BamoServerConnection + 31) + 8LL);
  GestureHandler = GestureServices::CreateGestureHandler(v7, (__int64)v9, *(_DWORD *)a1, *(_QWORD *)&a2, a3);
  std::weak_ptr<GestureHandler>::operator=((char *)a1 + 16, GestureHandler);
  if ( v10 )
    std::_Ref_count_base::_Decwref(v10);
}
