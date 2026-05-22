/*
 * XREFs of ?GetDragManagerInputSite@DragNDropProcessor@@AEAA?AV?$ComPtr@VInputSite@@@WRL@Microsoft@@UtagPOINT@@W4InputType@@PEAVBamoDragManagerClientProxy@@PEAUHitTestResult@@@Z @ 0x18013EE60
 * Callers:
 *     ?CancelDrag@DragNDropProcessor@@QEAAJKPEAVBamoDragManagerClientProxy@@@Z @ 0x18013DC40 (-CancelDrag@DragNDropProcessor@@QEAAJKPEAVBamoDragManagerClientProxy@@@Z.c)
 *     ?GetDragSourceInputSite@DragNDropProcessor@@AEAAXUtagPOINT@@W4InputType@@PEAVBamoDragManagerClientProxy@@PEAPEAVBamoDragSourceClientProxy@@PEAPEAVInputSite@@@Z @ 0x18013F140 (-GetDragSourceInputSite@DragNDropProcessor@@AEAAXUtagPOINT@@W4InputType@@PEAVBamoDragManagerClie.c)
 *     ?StartAnimation@DragNDropProcessor@@QEAAJKPEAVBamoDragManagerClientProxy@@@Z @ 0x1801411F8 (-StartAnimation@DragNDropProcessor@@QEAAJKPEAVBamoDragManagerClientProxy@@@Z.c)
 *     ?StartDrag@DragNDropProcessor@@QEAAJK_KPEAVBamoDragManagerClientProxy@@@Z @ 0x180141668 (-StartDrag@DragNDropProcessor@@QEAAJK_KPEAVBamoDragManagerClientProxy@@@Z.c)
 * Callees:
 *     ?_Tidy@?$vector@V?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@V?$allocator@V?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@@2@@std@@AEAAXXZ @ 0x1800064E0 (-_Tidy@-$vector@V-$vector@V-$ComPtr@VInputSite@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@VInputSit.c)
 *     ??1?$unique_storage@U?$handle_null_resource_policy@P6AJPEAX@Z$1?NtCloseCompositionInputSink@@YAJ0@Z@details@wil@@@details@wil@@IEAA@XZ @ 0x180013EC0 (--1-$unique_storage@U-$handle_null_resource_policy@P6AJPEAX@Z$1-NtCloseCompositionInputSink@@YAJ.c)
 *     __security_check_cookie @ 0x18004A930 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?InternalRelease@?$ComPtr@VBamoCustomCursorControllerClient2Proxy@@@WRL@Microsoft@@IEAAKXZ @ 0x1800E9710 (-InternalRelease@-$ComPtr@VBamoCustomCursorControllerClient2Proxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??4?$ComPtr@VInputSite@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180123724 (--4-$ComPtr@VInputSite@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ??$GetAttachedObject@UIDragManagerClientProxy@@VBamoDragManagerClientProxy@@@InputSite@@QEAA?AV?$ComPtr@VBamoDragManagerClientProxy@@@WRL@Microsoft@@XZ @ 0x18013B254 (--$GetAttachedObject@UIDragManagerClientProxy@@VBamoDragManagerClientProxy@@@InputSite@@QEAA-AV-.c)
 *     ??4HitTestResult@@QEAAAEAU0@$$QEAU0@@Z @ 0x18013DB34 (--4HitTestResult@@QEAAAEAU0@$$QEAU0@@Z.c)
 *     ?GetDragManager@DragNDrop@InputETW@@SAXUtagPOINT@@I_N1@Z @ 0x18013ED18 (-GetDragManager@DragNDrop@InputETW@@SAXUtagPOINT@@I_N1@Z.c)
 *     ?ConvertInputTypeToPointerType@HitTestHelper@@SA?BHW4InputType@@@Z @ 0x180198EBC (-ConvertInputTypeToPointerType@HitTestHelper@@SA-BHW4InputType@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 *__fastcall DragNDropProcessor::GetDragManagerInputSite(
        __int64 a1,
        __int64 *a2,
        __int64 a3,
        unsigned int a4,
        __int64 *a5,
        unsigned __int8 *a6)
{
  struct tagPOINT v7; // rbx
  bool *v9; // rsi
  unsigned __int8 v10; // r9
  unsigned int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rax
  __int64 *v18; // rbx
  __int64 *v19; // rsi
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 *v24; // [rsp+30h] [rbp-D0h] BYREF
  int v25; // [rsp+38h] [rbp-C8h]
  bool v26[8]; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v27[11]; // [rsp+48h] [rbp-B8h] BYREF
  __int128 v28; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v29; // [rsp+B0h] [rbp-50h]
  char v30[8]; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v31[11]; // [rsp+C8h] [rbp-38h] BYREF
  char v32[32]; // [rsp+120h] [rbp+20h] BYREF

  v7 = (struct tagPOINT)a3;
  v24 = a2;
  v9 = (bool *)a6;
  *a2 = 0LL;
  v25 = 1;
  v26[0] = 0;
  v27[0] = 0LL;
  v28 = 0LL;
  v29 = 0LL;
  LOBYTE(a3) = 0;
  if ( !a6 || (v10 = *a6) == 0 )
  {
    v11 = HitTestHelper::ConvertInputTypeToPointerType(a4, a1, a3);
    v13 = (*(__int64 (__fastcall **)(_QWORD, char *, struct tagPOINT, _QWORD))(**(_QWORD **)(v12 + 24) + 32LL))(
            *(_QWORD *)(v12 + 24),
            v30,
            v7,
            v11);
    HitTestResult::operator=((__int64)v26, v13);
    std::vector<std::vector<Microsoft::WRL::ComPtr<InputSite>>>::_Tidy((__int64)v32);
    wil::details::unique_storage<wil::details::handle_null_resource_policy<long (*)(void *),&long NtCloseCompositionInputSink(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<long (*)(void *),&long NtCloseCompositionInputSink(void *)>>(
      v31,
      v14,
      v15,
      v16);
    v9 = v26;
    LOBYTE(a3) = 1;
    v10 = v26[0];
  }
  InputETW::DragNDrop::GetDragManager(v7, a4, a3, v10);
  if ( *v9 )
  {
    v17 = *((_QWORD *)v9 + 13);
    v18 = *(__int64 **)(v17 - 24);
    v19 = *(__int64 **)(v17 - 16);
    while ( v18 != v19 )
    {
      InputSite::GetAttachedObject<IDragManagerClientProxy,BamoDragManagerClientProxy>(*v18, (__int64 *)&v24);
      if ( v24 && v24 == a5 )
      {
        Microsoft::WRL::ComPtr<InputSite>::operator=(a2, v18);
        Microsoft::WRL::ComPtr<BamoCustomCursorControllerClient2Proxy>::InternalRelease((__int64 *)&v24);
        break;
      }
      Microsoft::WRL::ComPtr<BamoCustomCursorControllerClient2Proxy>::InternalRelease((__int64 *)&v24);
      ++v18;
    }
  }
  std::vector<std::vector<Microsoft::WRL::ComPtr<InputSite>>>::_Tidy((__int64)&v28);
  wil::details::unique_storage<wil::details::handle_null_resource_policy<long (*)(void *),&long NtCloseCompositionInputSink(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<long (*)(void *),&long NtCloseCompositionInputSink(void *)>>(
    v27,
    v20,
    v21,
    v22);
  return a2;
}
