/*
 * XREFs of ?HitTestForTarget@EdgyProcessor@@AEAAJUtagPOINT@@W4InputType@@U_GUID@@PEAU2@PEA_K4@Z @ 0x180176AE0
 * Callers:
 *     ?CancelDrag@EdgyProcessor@@QEAAJKPEAVBamoDragManagerClientProxy@@@Z @ 0x180175950 (-CancelDrag@EdgyProcessor@@QEAAJKPEAVBamoDragManagerClientProxy@@@Z.c)
 *     ?OnInputDrag@EdgyProcessor@@AEAAXPEAUInputInfo@@AEAUtagPOINTER_INFO@@PEAUContextualProcessorResponse@@@Z @ 0x180176E4C (-OnInputDrag@EdgyProcessor@@AEAAXPEAUInputInfo@@AEAUtagPOINTER_INFO@@PEAUContextualProcessorResp.c)
 * Callees:
 *     ?_Tidy@?$vector@V?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@V?$allocator@V?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@@2@@std@@AEAAXXZ @ 0x18000F520 (-_Tidy@-$vector@V-$vector@V-$ComPtr@VInputSite@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@VInputSit.c)
 *     IsEqualGUID @ 0x180022FE0 (IsEqualGUID.c)
 *     __security_check_cookie @ 0x1800574C0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1HitTestResult@@QEAA@XZ @ 0x1800F6D38 (--1HitTestResult@@QEAA@XZ.c)
 *     ??$GetAttachedObject@UIDropTargetClientProxy@@VBamoDropTargetClientProxy@@@InputSite@@QEAA?AV?$ComPtr@VBamoDropTargetClientProxy@@@WRL@Microsoft@@XZ @ 0x1801689C4 (--$GetAttachedObject@UIDropTargetClientProxy@@VBamoDropTargetClientProxy@@@InputSite@@QEAA-AV-$C.c)
 *     ?HitTestForTarget@Edgy@InputETW@@SAXUtagPOINT@@I_N1@Z @ 0x180176A04 (-HitTestForTarget@Edgy@InputETW@@SAXUtagPOINT@@I_N1@Z.c)
 *     ?ConvertInputTypeToPointerType@HitTestHelper@@SA?BHW4InputType@@@Z @ 0x1801C45FC (-ConvertInputTypeToPointerType@HitTestHelper@@SA-BHW4InputType@@@Z.c)
 *     ?GetPositionRelativeToSite@PointerManipulationHelper@@SA?AUtagPOINT@@PEAVInputSite@@U2@@Z @ 0x1801C8FFC (-GetPositionRelativeToSite@PointerManipulationHelper@@SA-AUtagPOINT@@PEAVInputSite@@U2@@Z.c)
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
  unsigned int v7; // edi
  unsigned int v9; // eax
  __int64 v10; // rdx
  char v11; // r8
  __int64 *v13; // rdi
  __int64 *v14; // rbp
  _QWORD *v15; // rsi
  _QWORD *v16; // r14
  _QWORD *v17; // rax
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  _QWORD *v21; // [rsp+30h] [rbp-D8h] BYREF
  _QWORD *v22; // [rsp+38h] [rbp-D0h]
  bool v23[8]; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v24; // [rsp+48h] [rbp-C0h]
  char v25[8]; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v26; // [rsp+A8h] [rbp-60h]

  v22 = a4;
  v7 = a3;
  v9 = HitTestHelper::ConvertInputTypeToPointerType((unsigned int)a3, a1, a3);
  (*(void (__fastcall **)(_QWORD, bool *, struct tagPOINT, _QWORD))(**(_QWORD **)(v10 + 344) + 32LL))(
    *(_QWORD *)(v10 + 344),
    v23,
    a2,
    v9);
  InputETW::Edgy::HitTestForTarget(a2, v7, v11, v23[0]);
  if ( v23[0] )
  {
    if ( a5 && a6 && a7 )
    {
      v13 = *(__int64 **)(v26 - 24);
      v14 = *(__int64 **)(v26 - 16);
      while ( v13 != v14 )
      {
        InputSite::GetAttachedObject<IDropTargetClientProxy,BamoDropTargetClientProxy>(*v13, &v21);
        v15 = v21;
        if ( v21 )
        {
          v16 = v21 + 1;
          v17 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD *))(v21[1] + 32LL))(v21 + 1);
          if ( IsEqualGUID(v17, v22) )
          {
            *a6 = (*(__int64 (__fastcall **)(_QWORD *))(*v16 + 24LL))(v15 + 1);
            *a5 = PointerManipulationHelper::GetPositionRelativeToSite((struct InputSite *)*v13, a2);
            *a7 = *(unsigned int *)((*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v15[4] + 16LL) + 8LL))(*(_QWORD *)(v15[4] + 16LL))
                                  + 32);
            (*(void (__fastcall **)(_QWORD *))(*v15 + 8LL))(v15);
            break;
          }
        }
        if ( v15 )
        {
          v21 = 0LL;
          (*(void (__fastcall **)(_QWORD *))(*v15 + 8LL))(v15);
        }
        ++v13;
      }
    }
    std::vector<std::vector<Microsoft::WRL::ComPtr<InputSite>>>::_Tidy((__int64)v25);
    if ( (unsigned __int64)(v24 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
      NtCloseCompositionInputSink(v24, v18, v19, v20);
    return 0LL;
  }
  else
  {
    HitTestResult::~HitTestResult((HitTestResult *)v23);
    return 2147500037LL;
  }
}
