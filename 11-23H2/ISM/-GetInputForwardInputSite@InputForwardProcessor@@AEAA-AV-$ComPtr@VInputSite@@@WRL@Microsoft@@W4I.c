/*
 * XREFs of ?GetInputForwardInputSite@InputForwardProcessor@@AEAA?AV?$ComPtr@VInputSite@@@WRL@Microsoft@@W4InputType@@PEAUHitTestResult@@@Z @ 0x1801C7060
 * Callers:
 *     ?OnHitTest@InputForwardProcessor@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUContextualProcessorInitialState@@@Z @ 0x1801C72B0 (-OnHitTest@InputForwardProcessor@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUContextualProcesso.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIAsyncActionCompletedHandler@Foundation@Windows@@@WRL@Microsoft@@IEBAXXZ @ 0x180002D48 (-InternalAddRef@-$ComPtr@UIAsyncActionCompletedHandler@Foundation@Windows@@@WRL@Microsoft@@IEBAX.c)
 *     __security_check_cookie @ 0x180056730 (__security_check_cookie.c)
 *     ?GetCompositionInputQueue@LegacyInputSinkData@@QEBAAEBUCOMPOSITION_INPUT_QUEUE@@W4CompositionInputType@@@Z @ 0x18005F944 (-GetCompositionInputQueue@LegacyInputSinkData@@QEBAAEBUCOMPOSITION_INPUT_QUEUE@@W4CompositionInp.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_Throw_bad_optional_access@std@@YAXXZ @ 0x18009DCC4 (-_Throw_bad_optional_access@std@@YAXXZ.c)
 *     ?ConvertInputTypeToCompositionInputType@HitTestHelper@@SA?BW4CompositionInputType@@W4InputType@@@Z @ 0x1801B6EAC (-ConvertInputTypeToCompositionInputType@HitTestHelper@@SA-BW4CompositionInputType@@W4InputType@@.c)
 *     ??$GetAttachedObject@UIInputForwardAreaInputObjectProxy@@VBamoInputForwardAreaInputObjectProxy@@@InputSite@@QEAA?AV?$ComPtr@VBamoInputForwardAreaInputObjectProxy@@@WRL@Microsoft@@XZ @ 0x1801C6A9C (--$GetAttachedObject@UIInputForwardAreaInputObjectProxy@@VBamoInputForwardAreaInputObjectProxy@@.c)
 *     ??$GetAttachedObject@UIInputForwardTargetInputObjectProxy@@VBamoInputForwardTargetInputObjectProxy@@@InputSite@@QEAA?AV?$ComPtr@VBamoInputForwardTargetInputObjectProxy@@@WRL@Microsoft@@XZ @ 0x1801C6B40 (--$GetAttachedObject@UIInputForwardTargetInputObjectProxy@@VBamoInputForwardTargetInputObjectPro.c)
 */

// Hidden C++ exception states: #wind=3
__int64 *__fastcall InputForwardProcessor::GetInputForwardInputSite(__int64 a1, __int64 *a2, char a3, __int64 a4)
{
  char v4; // r10
  bool v6; // r14
  __int64 v7; // rax
  __int64 *v8; // rbx
  __int64 *v9; // r13
  __int64 v10; // r15
  __int64 v11; // r12
  __int64 v12; // rax
  unsigned int v13; // eax
  __int64 v14; // r8
  __int64 v15; // rsi
  __int64 v16; // rax
  __int64 *v17; // rsi
  _QWORD *v18; // rax
  __int64 v19; // rcx
  unsigned int v20; // eax
  __int64 v21; // r8
  __int64 *v24; // [rsp+28h] [rbp-38h] BYREF
  __int64 v25; // [rsp+30h] [rbp-30h] BYREF
  GUID v26; // [rsp+40h] [rbp-20h]

  v4 = a3;
  v24 = a2;
  v26 = GUID_NULL;
  v6 = 0;
  v7 = *(_QWORD *)(a4 + 104);
  v8 = *(__int64 **)(v7 - 24);
  v9 = *(__int64 **)(v7 - 16);
  if ( v8 == v9 )
  {
LABEL_30:
    *a2 = 0LL;
    return a2;
  }
  v10 = *(_QWORD *)v26.Data4;
  v11 = *(_QWORD *)&v26.Data1;
  while ( !v6 )
  {
    v12 = v11 - *(_QWORD *)&GUID_NULL.Data1;
    if ( v11 == *(_QWORD *)&GUID_NULL.Data1 )
      v12 = v10 - *(_QWORD *)GUID_NULL.Data4;
    if ( !v12 )
    {
      if ( !*(_BYTE *)(*v8 + 480) )
        goto LABEL_29;
      v13 = HitTestHelper::ConvertInputTypeToCompositionInputType(v4);
      if ( *(_DWORD *)LegacyInputSinkData::GetCompositionInputQueue((LegacyInputSinkData *)(v14 + 48), v13) )
        goto LABEL_30;
      InputSite::GetAttachedObject<IInputForwardAreaInputObjectProxy,BamoInputForwardAreaInputObjectProxy>(*v8, &v25);
      v15 = v25;
      if ( v25 )
      {
        v26 = *(GUID *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v25 + 8) + 24LL))(v25 + 8);
        v10 = *(_QWORD *)v26.Data4;
        v11 = *(_QWORD *)&v26.Data1;
      }
      if ( v15 )
      {
        v25 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 8LL))(v15);
      }
    }
    v16 = v11 - *(_QWORD *)&GUID_NULL.Data1;
    if ( v11 == *(_QWORD *)&GUID_NULL.Data1 )
      v16 = v10 - *(_QWORD *)GUID_NULL.Data4;
    if ( v16 )
    {
      InputSite::GetAttachedObject<IInputForwardTargetInputObjectProxy,BamoInputForwardTargetInputObjectProxy>(
        *v8,
        &v24);
      v17 = v24;
      if ( v24 )
      {
        v18 = (_QWORD *)(*(__int64 (__fastcall **)(__int64 *))(v24[1] + 24))(v24 + 1);
        v19 = *v18 - v11;
        if ( *v18 == v11 )
          v19 = v18[1] - v10;
        v6 = v19 == 0;
      }
      if ( v17 )
      {
        v24 = 0LL;
        (*(void (__fastcall **)(__int64 *))(*v17 + 8))(v17);
      }
      if ( v6 )
      {
        v4 = a3;
        break;
      }
    }
LABEL_26:
    if ( ++v8 == v9 )
      goto LABEL_30;
    v4 = a3;
  }
  if ( !*(_BYTE *)(*v8 + 480) )
LABEL_29:
    std::_Throw_bad_optional_access();
  v20 = HitTestHelper::ConvertInputTypeToCompositionInputType(v4);
  if ( !*(_DWORD *)LegacyInputSinkData::GetCompositionInputQueue((LegacyInputSinkData *)(v21 + 48), v20) )
    goto LABEL_26;
  *a2 = *v8;
  Microsoft::WRL::ComPtr<Windows::Foundation::IAsyncActionCompletedHandler>::InternalAddRef(a2);
  return a2;
}
