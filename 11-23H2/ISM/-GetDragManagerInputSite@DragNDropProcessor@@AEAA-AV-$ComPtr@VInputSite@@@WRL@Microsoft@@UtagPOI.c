/*
 * XREFs of ?GetDragManagerInputSite@DragNDropProcessor@@AEAA?AV?$ComPtr@VInputSite@@@WRL@Microsoft@@UtagPOINT@@W4InputType@@PEAVBamoDragManagerClientProxy@@PEAUHitTestResult@@@Z @ 0x18015DDB0
 * Callers:
 *     ?CancelDrag@DragNDropProcessor@@QEAAJKPEAVBamoDragManagerClientProxy@@@Z @ 0x18015CDA0 (-CancelDrag@DragNDropProcessor@@QEAAJKPEAVBamoDragManagerClientProxy@@@Z.c)
 *     ?GetDragSourceInputSite@DragNDropProcessor@@AEAAXUtagPOINT@@W4InputType@@PEAVBamoDragManagerClientProxy@@PEAPEAVBamoDragSourceClientProxy@@PEAPEAVInputSite@@@Z @ 0x18015E04C (-GetDragSourceInputSite@DragNDropProcessor@@AEAAXUtagPOINT@@W4InputType@@PEAVBamoDragManagerClie.c)
 *     ?StartAnimation@DragNDropProcessor@@QEAAJKPEAVBamoDragManagerClientProxy@@@Z @ 0x1801600F8 (-StartAnimation@DragNDropProcessor@@QEAAJKPEAVBamoDragManagerClientProxy@@@Z.c)
 *     ?StartDrag@DragNDropProcessor@@QEAAJK_KPEAVBamoDragManagerClientProxy@@@Z @ 0x1801604AC (-StartDrag@DragNDropProcessor@@QEAAJK_KPEAVBamoDragManagerClientProxy@@@Z.c)
 * Callees:
 *     ?_Tidy@?$vector@V?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@V?$allocator@V?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@@2@@std@@AEAAXXZ @ 0x18000EE10 (-_Tidy@-$vector@V-$vector@V-$ComPtr@VInputSite@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@VInputSit.c)
 *     __security_check_cookie @ 0x180056730 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 *     ?InternalRelease@?$ComPtr@VBamoCustomCursorControllerClient2Proxy@@@WRL@Microsoft@@IEAAKXZ @ 0x1801024F0 (-InternalRelease@-$ComPtr@VBamoCustomCursorControllerClient2Proxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??4?$ComPtr@VInputSite@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18013E3CC (--4-$ComPtr@VInputSite@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ??$GetAttachedObject@UIDragManagerClientProxy@@VBamoDragManagerClientProxy@@@InputSite@@QEAA?AV?$ComPtr@VBamoDragManagerClientProxy@@@WRL@Microsoft@@XZ @ 0x18015A61C (--$GetAttachedObject@UIDragManagerClientProxy@@VBamoDragManagerClientProxy@@@InputSite@@QEAA-AV-.c)
 *     ??4HitTestResult@@QEAAAEAU0@$$QEAU0@@Z @ 0x18015CC94 (--4HitTestResult@@QEAAAEAU0@$$QEAU0@@Z.c)
 *     ?GetDragManager@DragNDrop@InputETW@@SAXUtagPOINT@@I_N1@Z @ 0x18015DCD8 (-GetDragManager@DragNDrop@InputETW@@SAXUtagPOINT@@I_N1@Z.c)
 *     ?ConvertInputTypeToPointerType@HitTestHelper@@SA?BHW4InputType@@@Z @ 0x1801B6EDC (-ConvertInputTypeToPointerType@HitTestHelper@@SA-BHW4InputType@@@Z.c)
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
  bool *v9; // rdi
  unsigned __int8 v10; // r9
  unsigned int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rax
  __int64 *v18; // rbx
  __int64 *v19; // rdi
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 *v23; // [rsp+30h] [rbp-D0h] BYREF
  int v24; // [rsp+38h] [rbp-C8h]
  bool v25[8]; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v26; // [rsp+48h] [rbp-B8h]
  __int128 v27; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v28; // [rsp+B0h] [rbp-50h]
  char v29[8]; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v30; // [rsp+C8h] [rbp-38h]
  char v31[32]; // [rsp+120h] [rbp+20h] BYREF

  v7 = (struct tagPOINT)a3;
  v23 = a2;
  v9 = (bool *)a6;
  *a2 = 0LL;
  v24 = 1;
  v25[0] = 0;
  v26 = 0LL;
  v27 = 0LL;
  v28 = 0LL;
  LOBYTE(a3) = 0;
  if ( !a6 || (v10 = *a6) == 0 )
  {
    v11 = HitTestHelper::ConvertInputTypeToPointerType(a4, a1, a3);
    v13 = (*(__int64 (__fastcall **)(_QWORD, char *, struct tagPOINT, _QWORD))(**(_QWORD **)(v12 + 24) + 32LL))(
            *(_QWORD *)(v12 + 24),
            v29,
            v7,
            v11);
    HitTestResult::operator=((__int64)v25, v13);
    std::vector<std::vector<Microsoft::WRL::ComPtr<InputSite>>>::_Tidy((__int64)v31);
    if ( (unsigned __int64)(v30 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
      NtCloseCompositionInputSink(v30, v14, v15, v16);
    v9 = v25;
    LOBYTE(a3) = 1;
    v10 = v25[0];
  }
  InputETW::DragNDrop::GetDragManager(v7, a4, a3, v10);
  if ( *v9 )
  {
    v17 = *((_QWORD *)v9 + 13);
    v18 = *(__int64 **)(v17 - 24);
    v19 = *(__int64 **)(v17 - 16);
    while ( v18 != v19 )
    {
      InputSite::GetAttachedObject<IDragManagerClientProxy,BamoDragManagerClientProxy>(*v18, (__int64 *)&v23);
      if ( v23 && v23 == a5 )
      {
        Microsoft::WRL::ComPtr<InputSite>::operator=(a2, v18);
        Microsoft::WRL::ComPtr<BamoCustomCursorControllerClient2Proxy>::InternalRelease((__int64 *)&v23);
        break;
      }
      Microsoft::WRL::ComPtr<BamoCustomCursorControllerClient2Proxy>::InternalRelease((__int64 *)&v23);
      ++v18;
    }
  }
  std::vector<std::vector<Microsoft::WRL::ComPtr<InputSite>>>::_Tidy((__int64)&v27);
  if ( (unsigned __int64)(v26 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    NtCloseCompositionInputSink(v26, v26 - 1, v20, v21);
  return a2;
}
