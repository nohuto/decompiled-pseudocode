/*
 * XREFs of ?GetDragSourceInputSite@DragNDropProcessor@@AEAAXUtagPOINT@@W4InputType@@PEAVBamoDragManagerClientProxy@@PEAPEAVBamoDragSourceClientProxy@@PEAPEAVInputSite@@@Z @ 0x18013F140
 * Callers:
 *     ?StartDrag@DragNDropProcessor@@QEAAJK_KPEAVBamoDragManagerClientProxy@@@Z @ 0x180141668 (-StartDrag@DragNDropProcessor@@QEAAJK_KPEAVBamoDragManagerClientProxy@@@Z.c)
 * Callees:
 *     ?_Tidy@?$vector@V?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@V?$allocator@V?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@@2@@std@@AEAAXXZ @ 0x1800064E0 (-_Tidy@-$vector@V-$vector@V-$ComPtr@VInputSite@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@VInputSit.c)
 *     ??1?$unique_storage@U?$handle_null_resource_policy@P6AJPEAX@Z$1?NtCloseCompositionInputSink@@YAJ0@Z@details@wil@@@details@wil@@IEAA@XZ @ 0x180013EC0 (--1-$unique_storage@U-$handle_null_resource_policy@P6AJPEAX@Z$1-NtCloseCompositionInputSink@@YAJ.c)
 *     ?InternalAddRef@?$ComPtr@UIAsyncActionCompletedHandler@Foundation@Windows@@@WRL@Microsoft@@IEBAXXZ @ 0x18004905C (-InternalAddRef@-$ComPtr@UIAsyncActionCompletedHandler@Foundation@Windows@@@WRL@Microsoft@@IEBAX.c)
 *     __security_check_cookie @ 0x18004A930 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?InternalRelease@?$ComPtr@VBamoCustomCursorControllerClient2Proxy@@@WRL@Microsoft@@IEAAKXZ @ 0x1800E9710 (-InternalRelease@-$ComPtr@VBamoCustomCursorControllerClient2Proxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@VBamoDragSourceClientProxy@@@WRL@Microsoft@@IEBAXXZ @ 0x18012E618 (-InternalAddRef@-$ComPtr@VBamoDragSourceClientProxy@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??$GetAttachedObject@UIDragManagerClientProxy@@VBamoDragManagerClientProxy@@@InputSite@@QEAA?AV?$ComPtr@VBamoDragManagerClientProxy@@@WRL@Microsoft@@XZ @ 0x18013B254 (--$GetAttachedObject@UIDragManagerClientProxy@@VBamoDragManagerClientProxy@@@InputSite@@QEAA-AV-.c)
 *     ??$GetAttachedObject@UIDragSourceClientProxy@@VBamoDragSourceClientProxy@@@InputSite@@QEAA?AV?$ComPtr@VBamoDragSourceClientProxy@@@WRL@Microsoft@@XZ @ 0x18013B2E8 (--$GetAttachedObject@UIDragSourceClientProxy@@VBamoDragSourceClientProxy@@@InputSite@@QEAA-AV-$C.c)
 *     ?GetDragManagerInputSite@DragNDropProcessor@@AEAA?AV?$ComPtr@VInputSite@@@WRL@Microsoft@@UtagPOINT@@W4InputType@@PEAVBamoDragManagerClientProxy@@PEAUHitTestResult@@@Z @ 0x18013EE60 (-GetDragManagerInputSite@DragNDropProcessor@@AEAA-AV-$ComPtr@VInputSite@@@WRL@Microsoft@@UtagPOI.c)
 *     ?GetDragSource@DragNDrop@InputETW@@SAXUtagPOINT@@I_N1@Z @ 0x18013F000 (-GetDragSource@DragNDrop@InputETW@@SAXUtagPOINT@@I_N1@Z.c)
 *     ?ConvertInputTypeToPointerType@HitTestHelper@@SA?BHW4InputType@@@Z @ 0x180198EBC (-ConvertInputTypeToPointerType@HitTestHelper@@SA-BHW4InputType@@@Z.c)
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
  __int64 v14; // rax
  __int64 *v15; // rbx
  __int64 *v16; // rsi
  __int64 (__fastcall ***v17)(_QWORD); // rdi
  _QWORD *v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 (__fastcall ***v25)(_QWORD); // [rsp+30h] [rbp-99h] BYREF
  __int64 v26; // [rsp+38h] [rbp-91h] BYREF
  GUID v27; // [rsp+40h] [rbp-89h]
  unsigned __int8 v28[8]; // [rsp+50h] [rbp-79h] BYREF
  __int64 v29[11]; // [rsp+58h] [rbp-71h] BYREF
  _BYTE v30[8]; // [rsp+B0h] [rbp-19h] BYREF
  __int64 v31; // [rsp+B8h] [rbp-11h]

  v7 = a3;
  v10 = HitTestHelper::ConvertInputTypeToPointerType((unsigned int)a3, a2, a3);
  (*(void (__fastcall **)(_QWORD, unsigned __int8 *, __int64, _QWORD))(**(_QWORD **)(a1 + 24) + 32LL))(
    *(_QWORD *)(a1 + 24),
    v28,
    v11,
    v10);
  InputETW::DragNDrop::GetDragSource((struct tagPOINT)a2, v7, v12, v28[0]);
  if ( v28[0] && a5 && a4 )
  {
    v27 = GUID_NULL;
    DragNDropProcessor::GetDragManagerInputSite(a1, &v26, a2, v7, a4, v28);
    if ( v26 )
    {
      Attached = InputSite::GetAttachedObject<IDragManagerClientProxy,BamoDragManagerClientProxy>(v26, (__int64 *)&v25);
      v27 = *(GUID *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*Attached + 8) + 72LL))(*Attached + 8);
      Microsoft::WRL::ComPtr<BamoCustomCursorControllerClient2Proxy>::InternalRelease((__int64 *)&v25);
    }
    v14 = *(_QWORD *)&v27.Data1 - *(_QWORD *)&GUID_NULL.Data1;
    if ( *(_QWORD *)&v27.Data1 == *(_QWORD *)&GUID_NULL.Data1 )
      v14 = *(_QWORD *)v27.Data4 - *(_QWORD *)GUID_NULL.Data4;
    if ( v14 )
    {
      v15 = *(__int64 **)(v31 - 24);
      v16 = *(__int64 **)(v31 - 16);
      while ( v15 != v16 )
      {
        InputSite::GetAttachedObject<IDragSourceClientProxy,BamoDragSourceClientProxy>(*v15, (__int64 *)&v25);
        v17 = v25;
        if ( v25 )
        {
          v18 = (_QWORD *)v25[1][3](v25 + 1);
          v19 = *v18 - *(_QWORD *)&v27.Data1;
          if ( *v18 == *(_QWORD *)&v27.Data1 )
            v19 = v18[1] - *(_QWORD *)v27.Data4;
          if ( !v19 )
          {
            Microsoft::WRL::ComPtr<BamoDragSourceClientProxy>::InternalAddRef(&v25);
            *a5 = v17;
            Microsoft::WRL::ComPtr<Windows::Foundation::IAsyncActionCompletedHandler>::InternalAddRef(v15);
            *a6 = *v15;
            (*v17)[1](v17);
            break;
          }
        }
        if ( v17 )
        {
          v25 = 0LL;
          (*v17)[1](v17);
        }
        ++v15;
      }
    }
    v20 = v26;
    if ( v26 )
    {
      v26 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
    }
  }
  std::vector<std::vector<Microsoft::WRL::ComPtr<InputSite>>>::_Tidy((__int64)v30);
  return wil::details::unique_storage<wil::details::handle_null_resource_policy<long (*)(void *),&long NtCloseCompositionInputSink(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<long (*)(void *),&long NtCloseCompositionInputSink(void *)>>(
           v29,
           v21,
           v22,
           v23);
}
