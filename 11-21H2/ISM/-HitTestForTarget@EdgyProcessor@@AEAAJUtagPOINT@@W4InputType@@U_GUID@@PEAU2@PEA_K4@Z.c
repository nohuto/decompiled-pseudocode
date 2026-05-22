/*
 * XREFs of ?HitTestForTarget@EdgyProcessor@@AEAAJUtagPOINT@@W4InputType@@U_GUID@@PEAU2@PEA_K4@Z @ 0x180149FAC
 * Callers:
 *     ?CancelDrag@EdgyProcessor@@QEAAJKPEAVBamoDragManagerClientProxy@@@Z @ 0x180148B24 (-CancelDrag@EdgyProcessor@@QEAAJKPEAVBamoDragManagerClientProxy@@@Z.c)
 *     ?OnInputDrag@EdgyProcessor@@AEAAXPEAUInputInfo@@AEAUtagPOINTER_INFO@@PEAUContextualProcessorResponse@@@Z @ 0x18014A30C (-OnInputDrag@EdgyProcessor@@AEAAXPEAUInputInfo@@AEAUtagPOINTER_INFO@@PEAUContextualProcessorResp.c)
 * Callees:
 *     ?_Tidy@?$vector@V?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@V?$allocator@V?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@@2@@std@@AEAAXXZ @ 0x1800064E0 (-_Tidy@-$vector@V-$vector@V-$ComPtr@VInputSite@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@VInputSit.c)
 *     ??1?$unique_storage@U?$handle_null_resource_policy@P6AJPEAX@Z$1?NtCloseCompositionInputSink@@YAJ0@Z@details@wil@@@details@wil@@IEAA@XZ @ 0x180013EC0 (--1-$unique_storage@U-$handle_null_resource_policy@P6AJPEAX@Z$1-NtCloseCompositionInputSink@@YAJ.c)
 *     __security_check_cookie @ 0x18004A930 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$GetAttachedObject@UIDropTargetClientProxy@@VBamoDropTargetClientProxy@@@InputSite@@QEAA?AV?$ComPtr@VBamoDropTargetClientProxy@@@WRL@Microsoft@@XZ @ 0x18013B37C (--$GetAttachedObject@UIDropTargetClientProxy@@VBamoDropTargetClientProxy@@@InputSite@@QEAA-AV-$C.c)
 *     ?HitTestForTarget@Edgy@InputETW@@SAXUtagPOINT@@I_N1@Z @ 0x180149E6C (-HitTestForTarget@Edgy@InputETW@@SAXUtagPOINT@@I_N1@Z.c)
 *     ?ConvertInputTypeToPointerType@HitTestHelper@@SA?BHW4InputType@@@Z @ 0x180198EBC (-ConvertInputTypeToPointerType@HitTestHelper@@SA-BHW4InputType@@@Z.c)
 *     ?GetPositionRelativeToSite@PointerManipulationHelper@@SA?AUtagPOINT@@PEAVInputSite@@U2@@Z @ 0x18019D55C (-GetPositionRelativeToSite@PointerManipulationHelper@@SA-AUtagPOINT@@PEAVInputSite@@U2@@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall EdgyProcessor::HitTestForTarget(
        __int64 a1,
        struct tagPOINT a2,
        __int64 a3,
        _QWORD *a4,
        struct tagPOINT *a5,
        _QWORD *a6,
        _QWORD *a7)
{
  unsigned int v8; // edi
  unsigned int v10; // eax
  __int64 v11; // rdx
  char v12; // r8
  unsigned int v13; // edi
  __int64 *v14; // rsi
  __int64 *v15; // rbp
  _QWORD *v16; // r14
  _QWORD *v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  _QWORD *v24; // [rsp+30h] [rbp-D8h] BYREF
  _QWORD *v25; // [rsp+38h] [rbp-D0h]
  bool v26[8]; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v27[11]; // [rsp+48h] [rbp-C0h] BYREF
  char v28[8]; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v29; // [rsp+A8h] [rbp-60h]

  v8 = a3;
  v25 = a7;
  v10 = HitTestHelper::ConvertInputTypeToPointerType((unsigned int)a3, a1, a3);
  (*(void (__fastcall **)(_QWORD, bool *, struct tagPOINT, _QWORD))(**(_QWORD **)(v11 + 344) + 32LL))(
    *(_QWORD *)(v11 + 344),
    v26,
    a2,
    v10);
  InputETW::Edgy::HitTestForTarget(a2, v8, v12, v26[0]);
  v13 = 0;
  if ( v26[0] )
  {
    if ( a5 && a6 && a7 )
    {
      v14 = *(__int64 **)(v29 - 24);
      v15 = *(__int64 **)(v29 - 16);
      while ( v14 != v15 )
      {
        InputSite::GetAttachedObject<IDropTargetClientProxy,BamoDropTargetClientProxy>(*v14, &v24);
        v16 = v24;
        if ( v24 )
        {
          v17 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD *))(v24[1] + 32LL))(v24 + 1);
          v18 = *v17 - *a4;
          if ( *v17 == *a4 )
            v18 = v17[1] - a4[1];
          if ( !v18 )
          {
            *a6 = (*(__int64 (__fastcall **)(_QWORD *))(v16[1] + 24LL))(v16 + 1);
            *a5 = PointerManipulationHelper::GetPositionRelativeToSite((struct InputSite *)*v14, a2);
            v19 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v16[4] + 16LL) + 8LL))(*(_QWORD *)(v16[4] + 16LL));
            *v25 = *(unsigned int *)(v19 + 32);
            (*(void (__fastcall **)(_QWORD *))(*v16 + 8LL))(v16);
            break;
          }
        }
        if ( v16 )
        {
          v24 = 0LL;
          (*(void (__fastcall **)(_QWORD *))(*v16 + 8LL))(v16);
        }
        ++v14;
      }
    }
  }
  else
  {
    v13 = -2147467259;
  }
  std::vector<std::vector<Microsoft::WRL::ComPtr<InputSite>>>::_Tidy((__int64)v28);
  wil::details::unique_storage<wil::details::handle_null_resource_policy<long (*)(void *),&long NtCloseCompositionInputSink(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<long (*)(void *),&long NtCloseCompositionInputSink(void *)>>(
    v27,
    v20,
    v21,
    v22);
  return v13;
}
