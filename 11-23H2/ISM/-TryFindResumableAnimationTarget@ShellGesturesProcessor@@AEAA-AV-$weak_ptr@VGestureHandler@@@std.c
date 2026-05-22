/*
 * XREFs of ?TryFindResumableAnimationTarget@ShellGesturesProcessor@@AEAA?AV?$weak_ptr@VGestureHandler@@@std@@PEAUHitTestInfo@@PEAUHitTestResult@@@Z @ 0x18016FB04
 * Callers:
 *     ?OnHitTest@ShellGesturesProcessor@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUContextualProcessorInitialState@@@Z @ 0x180013510 (-OnHitTest@ShellGesturesProcessor@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUContextualProcess.c)
 * Callees:
 *     ?GetBamoServerConnection@ISMStatics@@SAPEAVInputSystemServerConnection@@XZ @ 0x180024ACC (-GetBamoServerConnection@ISMStatics@@SAPEAVInputSystemServerConnection@@XZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180045DDC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x1800C05B8 (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?lock@?$weak_ptr@VSystemCursorService2@@@std@@QEBA?AV?$shared_ptr@VSystemCursorService2@@@2@XZ @ 0x18010703C (-lock@-$weak_ptr@VSystemCursorService2@@@std@@QEBA-AV-$shared_ptr@VSystemCursorService2@@@2@XZ.c)
 *     ?TryResumeGestureHandler@GestureServices@@QEAA?AV?$weak_ptr@VGestureHandler@@@std@@_KI@Z @ 0x180153F5C (-TryResumeGestureHandler@GestureServices@@QEAA-AV-$weak_ptr@VGestureHandler@@@std@@_KI@Z.c)
 *     ?InitializeForGesture@GestureHandler@@QEAAXIW4InputType@@UGestureTargetData@@@Z @ 0x18015757C (-InitializeForGesture@GestureHandler@@QEAAXIW4InputType@@UGestureTargetData@@@Z.c)
 *     ??$GetAttachedObject@UIAnimationTargetClientProxy@@VAnimationTargetClientProxy@@@InputSite@@QEAA?AV?$ComPtr@VAnimationTargetClientProxy@@@WRL@Microsoft@@XZ @ 0x18016DD74 (--$GetAttachedObject@UIAnimationTargetClientProxy@@VAnimationTargetClientProxy@@@InputSite@@QEAA.c)
 */

// Hidden C++ exception states: #wind=3
__int64 *__fastcall ShellGesturesProcessor::TryFindResumableAnimationTarget(
        _QWORD *a1,
        __int64 *a2,
        __int64 a3,
        __int64 a4)
{
  struct InputSystemServerConnection *BamoServerConnection; // rax
  _QWORD *v8; // r13
  __int64 v9; // rcx
  __int64 *v10; // rsi
  __int64 *v11; // r15
  _QWORD *v12; // rbx
  _QWORD *v13; // rax
  __int64 v14; // r14
  volatile signed __int32 *v16; // rcx
  __int64 v17; // [rsp+28h] [rbp-48h] BYREF
  std::_Ref_count_base *v18; // [rsp+30h] [rbp-40h]
  __int128 v19; // [rsp+40h] [rbp-30h]
  __int64 v20; // [rsp+50h] [rbp-20h] BYREF
  std::_Ref_count_base *v21; // [rsp+58h] [rbp-18h]
  __int128 v22; // [rsp+60h] [rbp-10h]
  _QWORD *v23; // [rsp+A0h] [rbp+30h] BYREF

  v23 = a1;
  BamoServerConnection = ISMStatics::GetBamoServerConnection();
  v8 = (_QWORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*((_QWORD *)BamoServerConnection + 31) + 8LL) + 88LL))(*((_QWORD *)BamoServerConnection + 31) + 8LL);
  v9 = *(_QWORD *)(a4 + 104);
  v10 = *(__int64 **)(v9 - 24);
  v11 = *(__int64 **)(v9 - 16);
  while ( 1 )
  {
    if ( v10 == v11 )
    {
      *a2 = 0LL;
      a2[1] = 0LL;
      return a2;
    }
    InputSite::GetAttachedObject<IAnimationTargetClientProxy,AnimationTargetClientProxy>(*v10, &v23);
    v12 = v23;
    if ( v23 )
      break;
LABEL_8:
    if ( v12 )
    {
      v23 = 0LL;
      (*(void (__fastcall **)(_QWORD *))(*v12 + 8LL))(v12);
    }
    ++v10;
  }
  v13 = GestureServices::TryResumeGestureHandler(v8, &v20, v23[9], *(_DWORD *)(a3 + 40));
  std::weak_ptr<SystemCursorService2>::lock((__int64)v13, &v17);
  if ( v21 )
    std::_Ref_count_base::_Decwref(v21);
  v14 = v17;
  if ( !v17 )
  {
    if ( v18 )
      std::_Ref_count_base::_Decref(v18);
    goto LABEL_8;
  }
  *(_QWORD *)&v19 = (*(__int64 (__fastcall **)(_QWORD *))(v12[1] + 24LL))(v12 + 1);
  *((_QWORD *)&v19 + 1) = *(unsigned int *)((*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v12[4] + 16LL) + 8LL))(*(_QWORD *)(v12[4] + 16LL))
                                          + 32);
  v22 = v19;
  GestureHandler::InitializeForGesture(v14);
  *a2 = 0LL;
  a2[1] = 0LL;
  v16 = (volatile signed __int32 *)v18;
  if ( v18 )
  {
    *a2 = v14;
    a2[1] = (__int64)v16;
    _InterlockedIncrement(v16 + 3);
    v12 = v23;
    v16 = (volatile signed __int32 *)v18;
  }
  if ( v16 )
    std::_Ref_count_base::_Decref((std::_Ref_count_base *)v16);
  (*(void (__fastcall **)(_QWORD *))(*v12 + 8LL))(v12);
  return a2;
}
