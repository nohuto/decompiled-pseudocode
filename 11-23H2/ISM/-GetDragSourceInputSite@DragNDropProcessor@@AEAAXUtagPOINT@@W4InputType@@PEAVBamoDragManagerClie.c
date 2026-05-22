/*
 * XREFs of ?GetDragSourceInputSite@DragNDropProcessor@@AEAAXUtagPOINT@@W4InputType@@PEAVBamoDragManagerClientProxy@@PEAPEAVBamoDragSourceClientProxy@@PEAPEAVInputSite@@@Z @ 0x18015E04C
 * Callers:
 *     ?StartDrag@DragNDropProcessor@@QEAAJK_KPEAVBamoDragManagerClientProxy@@@Z @ 0x1801604AC (-StartDrag@DragNDropProcessor@@QEAAJK_KPEAVBamoDragManagerClientProxy@@@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIAsyncActionCompletedHandler@Foundation@Windows@@@WRL@Microsoft@@IEBAXXZ @ 0x180002D48 (-InternalAddRef@-$ComPtr@UIAsyncActionCompletedHandler@Foundation@Windows@@@WRL@Microsoft@@IEBAX.c)
 *     ?_Tidy@?$vector@V?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@V?$allocator@V?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@@2@@std@@AEAAXXZ @ 0x18000EE10 (-_Tidy@-$vector@V-$vector@V-$ComPtr@VInputSite@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@VInputSit.c)
 *     ?InternalAddRef@?$ComPtr@VBamoDragSourceClientProxy@@@WRL@Microsoft@@IEBAXXZ @ 0x18001A8DC (-InternalAddRef@-$ComPtr@VBamoDragSourceClientProxy@@@WRL@Microsoft@@IEBAXXZ.c)
 *     IsEqualGUID @ 0x180021F40 (IsEqualGUID.c)
 *     __security_check_cookie @ 0x180056730 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 *     ?InternalRelease@?$ComPtr@VBamoCustomCursorControllerClient2Proxy@@@WRL@Microsoft@@IEAAKXZ @ 0x1801024F0 (-InternalRelease@-$ComPtr@VBamoCustomCursorControllerClient2Proxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$GetAttachedObject@UIDragManagerClientProxy@@VBamoDragManagerClientProxy@@@InputSite@@QEAA?AV?$ComPtr@VBamoDragManagerClientProxy@@@WRL@Microsoft@@XZ @ 0x18015A61C (--$GetAttachedObject@UIDragManagerClientProxy@@VBamoDragManagerClientProxy@@@InputSite@@QEAA-AV-.c)
 *     ??$GetAttachedObject@UIDragSourceClientProxy@@VBamoDragSourceClientProxy@@@InputSite@@QEAA?AV?$ComPtr@VBamoDragSourceClientProxy@@@WRL@Microsoft@@XZ @ 0x18015A6B0 (--$GetAttachedObject@UIDragSourceClientProxy@@VBamoDragSourceClientProxy@@@InputSite@@QEAA-AV-$C.c)
 *     ?GetDragManagerInputSite@DragNDropProcessor@@AEAA?AV?$ComPtr@VInputSite@@@WRL@Microsoft@@UtagPOINT@@W4InputType@@PEAVBamoDragManagerClientProxy@@PEAUHitTestResult@@@Z @ 0x18015DDB0 (-GetDragManagerInputSite@DragNDropProcessor@@AEAA-AV-$ComPtr@VInputSite@@@WRL@Microsoft@@UtagPOI.c)
 *     ?GetDragSource@DragNDrop@InputETW@@SAXUtagPOINT@@I_N1@Z @ 0x18015DF70 (-GetDragSource@DragNDrop@InputETW@@SAXUtagPOINT@@I_N1@Z.c)
 *     ?ConvertInputTypeToPointerType@HitTestHelper@@SA?BHW4InputType@@@Z @ 0x1801B6EDC (-ConvertInputTypeToPointerType@HitTestHelper@@SA-BHW4InputType@@@Z.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall DragNDropProcessor::GetDragSourceInputSite(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 *a4,
        _QWORD *a5,
        __int64 *a6)
{
  unsigned int v7; // r15d
  unsigned int v10; // eax
  __int64 v11; // rdx
  char v12; // r8
  __int64 *Attached; // rax
  __int64 *v14; // rbx
  __int64 *v15; // rsi
  __int64 (__fastcall ***v16)(_QWORD); // rdi
  _QWORD *v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 result; // rax
  __int64 (__fastcall ***v23)(_QWORD); // [rsp+30h] [rbp-99h] BYREF
  __int64 v24; // [rsp+38h] [rbp-91h] BYREF
  GUID v25; // [rsp+40h] [rbp-89h] BYREF
  unsigned __int8 v26[8]; // [rsp+50h] [rbp-79h] BYREF
  __int64 v27; // [rsp+58h] [rbp-71h]
  _BYTE v28[8]; // [rsp+B0h] [rbp-19h] BYREF
  __int64 v29; // [rsp+B8h] [rbp-11h]

  v7 = a3;
  v10 = HitTestHelper::ConvertInputTypeToPointerType((unsigned int)a3, a2, a3);
  (*(void (__fastcall **)(_QWORD, unsigned __int8 *, __int64, _QWORD))(**(_QWORD **)(a1 + 24) + 32LL))(
    *(_QWORD *)(a1 + 24),
    v26,
    v11,
    v10);
  InputETW::DragNDrop::GetDragSource((struct tagPOINT)a2, v7, v12, v26[0]);
  if ( v26[0] && a5 && a4 )
  {
    v25 = GUID_NULL;
    DragNDropProcessor::GetDragManagerInputSite(a1, &v24, a2, v7, a4, v26);
    if ( v24 )
    {
      Attached = InputSite::GetAttachedObject<IDragManagerClientProxy,BamoDragManagerClientProxy>(v24, (__int64 *)&v23);
      v25 = *(GUID *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*Attached + 8) + 80LL))(*Attached + 8);
      Microsoft::WRL::ComPtr<BamoCustomCursorControllerClient2Proxy>::InternalRelease((__int64 *)&v23);
    }
    if ( !IsEqualGUID(&v25, &GUID_NULL) )
    {
      v14 = *(__int64 **)(v29 - 24);
      v15 = *(__int64 **)(v29 - 16);
      while ( v14 != v15 )
      {
        InputSite::GetAttachedObject<IDragSourceClientProxy,BamoDragSourceClientProxy>(*v14, (__int64 *)&v23);
        v16 = v23;
        if ( v23 )
        {
          v17 = (_QWORD *)v23[1][3](v23 + 1);
          if ( IsEqualGUID(v17, &v25) )
          {
            Microsoft::WRL::ComPtr<BamoDragSourceClientProxy>::InternalAddRef(&v23);
            *a5 = v16;
            Microsoft::WRL::ComPtr<Windows::Foundation::IAsyncActionCompletedHandler>::InternalAddRef(v14);
            *a6 = *v14;
            (*v16)[1](v16);
            break;
          }
        }
        if ( v16 )
        {
          v23 = 0LL;
          (*v16)[1](v16);
        }
        ++v14;
      }
    }
    v18 = v24;
    if ( v24 )
    {
      v24 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
    }
  }
  std::vector<std::vector<Microsoft::WRL::ComPtr<InputSite>>>::_Tidy((__int64)v28);
  result = v27 - 1;
  if ( (unsigned __int64)(v27 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    return NtCloseCompositionInputSink(v27, v19, v20, v21);
  return result;
}
