/*
 * XREFs of ?StartAnimation@GestureServices@@MEAAJPEAVBamoGestureServicesStub@@IPEBQEAVBamoAnimationTargetClientProxy@@IPEAVBamoDragManagerClientProxy@@W4GestureProcessorType@@@Z @ 0x180161F90
 * Callers:
 *     <none>
 * Callees:
 *     ??$count@X@?$_Hash@V?$_Uset_traits@IV?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@I@2@$0A@@std@@@std@@QEBA_KAEBI@Z @ 0x18003921C (--$count@X@-$_Hash@V-$_Uset_traits@IV-$_Uhash_compare@IU-$hash@I@std@@U-$equal_to@I@2@@std@@V-$a.c)
 *     ??$emplace@AEBI@?$_Hash@V?$_Uset_traits@IV?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@I@2@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@I@std@@@std@@@std@@_N@1@AEBI@Z @ 0x18003A494 (--$emplace@AEBI@-$_Hash@V-$_Uset_traits@IV-$_Uhash_compare@IU-$hash@I@std@@U-$equal_to@I@2@@std@.c)
 *     __security_check_cookie @ 0x1800574C0 (__security_check_cookie.c)
 *     ?AnimationStarted@InputGesture@InputETW@@SAXPEBGK_K1@Z @ 0x180072B7C (-AnimationStarted@InputGesture@InputETW@@SAXPEBGK_K1@Z.c)
 *     ?IsShellClient@GestureServices@@AEBA_NPEAVDragManagerClientProxy@@@Z @ 0x180073418 (-IsShellClient@GestureServices@@AEBA_NPEAVDragManagerClientProxy@@@Z.c)
 *     ?StartAnimationReceived@InputGesture@InputETW@@SAXPEBGK@Z @ 0x18007366C (-StartAnimationReceived@InputGesture@InputETW@@SAXPEBGK@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$find@X@?$_Hash@V?$_Umap_traits@I_KV?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBI_K@std@@@2@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBI_K@std@@@std@@@std@@@1@AEBI@Z @ 0x1800AABA8 (--$find@X@-$_Hash@V-$_Umap_traits@I_KV-$_Uhash_compare@IU-$hash@I@std@@U-$equal_to@I@2@@std@@V-$.c)
 *     ??$_Try_emplace@AEB_K$$V@?$_Hash@V?$_Umap_traits@_KV?$shared_ptr@VGestureHandler@@@std@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@2@V?$allocator@U?$pair@$$CB_KV?$shared_ptr@VGestureHandler@@@std@@@std@@@2@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CB_KV?$shared_ptr@VGestureHandler@@@std@@@std@@PEAX@std@@_N@1@AEB_K@Z @ 0x180160C08 (--$_Try_emplace@AEB_K$$V@-$_Hash@V-$_Umap_traits@_KV-$shared_ptr@VGestureHandler@@@std@@V-$_Uhas.c)
 *     ??4?$shared_ptr@VGestureHandler@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x180161210 (--4-$shared_ptr@VGestureHandler@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?GetProcessId@DragManagerClientProxy@@QEAA?BIXZ @ 0x18016153C (-GetProcessId@DragManagerClientProxy@@QEAA-BIXZ.c)
 *     ?GetProcessorTypeString@GestureServices@@QEBAPEBGW4GestureProcessorType@@@Z @ 0x180161570 (-GetProcessorTypeString@GestureServices@@QEBAPEBGW4GestureProcessorType@@@Z.c)
 *     ?SetAnimationDataForSource@DragManagerClientProxy@@QEAAX_KAEBUGestureAnimationData@Input@Internal@UI@Windows@@@Z @ 0x180163B88 (-SetAnimationDataForSource@DragManagerClientProxy@@QEAAX_KAEBUGestureAnimationData@Input@Interna.c)
 *     ?SetData@AnimationTargetClientProxy@@QEAAXAEBUGestureAnimationData@Input@Internal@UI@Windows@@@Z @ 0x1801640E8 (-SetData@AnimationTargetClientProxy@@QEAAXAEBUGestureAnimationData@Input@Internal@UI@Windows@@@Z.c)
 *     ?StartAnimation@GestureHandler@@QEAAXAEAV?$unordered_set@IU?$hash@I@std@@U?$equal_to@I@2@V?$allocator@I@2@@std@@_N@Z @ 0x180165E98 (-StartAnimation@GestureHandler@@QEAAXAEAV-$unordered_set@IU-$hash@I@std@@U-$equal_to@I@2@V-$allo.c)
 *     ?StartAnimation@GestureHandler@@QEAAXI_N@Z @ 0x180166050 (-StartAnimation@GestureHandler@@QEAAXI_N@Z.c)
 *     ?StartAnimation@DragNDropProcessor@@QEAAJKPEAVBamoDragManagerClientProxy@@@Z @ 0x18016E378 (-StartAnimation@DragNDropProcessor@@QEAAJKPEAVBamoDragManagerClientProxy@@@Z.c)
 *     ?StartAnimation@EdgyProcessor@@QEAAJKPEAVBamoDragManagerClientProxy@@@Z @ 0x180177B60 (-StartAnimation@EdgyProcessor@@QEAAJKPEAVBamoDragManagerClientProxy@@@Z.c)
 */

__int64 __fastcall GestureServices::StartAnimation(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        AnimationTargetClientProxy **a4,
        int a5,
        DragManagerClientProxy *a6,
        int a7)
{
  const unsigned __int16 *ProcessorTypeString; // rax
  unsigned __int64 v11; // rsi
  unsigned __int64 v12; // rbx
  const unsigned __int16 *v13; // rax
  char *v14; // rcx
  __int64 v15; // rax
  unsigned __int64 v16; // r9
  unsigned __int64 v17; // r8
  __int64 v18; // rax
  AnimationTargetClientProxy **v19; // rbx
  __int64 v20; // rax
  unsigned __int64 *i; // rcx
  const unsigned __int16 *v22; // rax
  unsigned int ProcessId; // [rsp+38h] [rbp-38h] BYREF
  int v25; // [rsp+40h] [rbp-30h]
  _BYTE v26[16]; // [rsp+48h] [rbp-28h] BYREF
  unsigned __int64 v27[2]; // [rsp+58h] [rbp-18h] BYREF

  ProcessId = a3;
  v25 = a7;
  ProcessorTypeString = GestureServices::GetProcessorTypeString((_QWORD *)a1, a7);
  InputETW::InputGesture::StartAnimationReceived(ProcessorTypeString, a3);
  v11 = 0LL;
  if ( !a7 )
  {
    DragNDropProcessor::StartAnimation(*(DragNDropProcessor **)(a1 + 64), a3, a6);
    return 0LL;
  }
  if ( a7 == 1 )
  {
    EdgyProcessor::StartAnimation(*(EdgyProcessor **)(a1 + 72), a3, a6);
    return 0LL;
  }
  std::_Hash<std::_Umap_traits<unsigned int,unsigned __int64,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,unsigned __int64>>,0>>::find<void>(
    (_QWORD *)(a1 + 200),
    v27,
    (const unsigned __int8 *)&ProcessId);
  v12 = v27[0];
  if ( v27[0] != *(_QWORD *)(a1 + 208) )
  {
    ProcessId = DragManagerClientProxy::GetProcessId(a6);
    if ( !std::_Hash<std::_Uset_traits<unsigned int,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<unsigned int>,0>>::count<void>(
            a1 + 136,
            (const unsigned __int8 *)&ProcessId) )
    {
      if ( !GestureServices::IsShellClient((GestureServices *)a1, a6) )
      {
        GestureHandler::StartAnimation(*(GestureHandler **)(v12 + 24), ProcessId, a5 != 0);
LABEL_10:
        *(_OWORD *)v27 = *(_OWORD *)(*(_QWORD *)(v12 + 24) + 256LL);
        if ( v27[0] )
        {
          v18 = std::_Hash<std::_Umap_traits<unsigned __int64,std::shared_ptr<GestureHandler>,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,std::shared_ptr<GestureHandler>>>,0>>::_Try_emplace<unsigned __int64 const &,>(
                  (float *)(a1 + 264),
                  (__int64)v26,
                  (unsigned __int8 *)v27);
          std::shared_ptr<GestureHandler>::operator=((_QWORD *)(*(_QWORD *)v18 + 24LL), (_QWORD *)(v12 + 24));
          if ( a5 && *a4 )
          {
            v19 = &a4[a5];
            while ( a4 != v19 )
              AnimationTargetClientProxy::SetData(
                *a4++,
                (const struct Windows::UI::Internal::Input::GestureAnimationData *)v27);
          }
          else
          {
            v20 = *(_QWORD *)(v12 + 24);
            for ( i = *(unsigned __int64 **)(v20 + 112); i != *(unsigned __int64 **)(v20 + 120); i += 5 )
            {
              if ( (DragManagerClientProxy *)i[1] == a6 )
              {
                v11 = *i;
                break;
              }
            }
            DragManagerClientProxy::SetAnimationDataForSource(
              a6,
              v11,
              (const struct Windows::UI::Internal::Input::GestureAnimationData *)v27);
          }
        }
        v22 = GestureServices::GetProcessorTypeString((_QWORD *)a1, v25);
        InputETW::InputGesture::AnimationStarted(v22, a3, v27[1], v27[0]);
        v14 = (char *)a6 + 8;
        v15 = *((_QWORD *)a6 + 1);
        v16 = v27[0];
        v17 = v27[1];
        goto LABEL_25;
      }
      std::_Hash<std::_Uset_traits<unsigned int,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<unsigned int>,0>>::emplace<unsigned int const &>(
        (_QWORD *)(a1 + 136),
        (__int64)v26,
        (const unsigned __int8 *)&ProcessId);
    }
    GestureHandler::StartAnimation(*(GestureHandler **)(v12 + 24));
    goto LABEL_10;
  }
  v13 = GestureServices::GetProcessorTypeString((_QWORD *)a1, a7);
  InputETW::InputGesture::AnimationStarted(v13, a3, 0LL, 0LL);
  v14 = (char *)a6 + 8;
  v15 = *((_QWORD *)a6 + 1);
  v16 = 0LL;
  v17 = 0LL;
LABEL_25:
  (*(void (__fastcall **)(char *, _QWORD, unsigned __int64, unsigned __int64))(v15 + 64))(v14, a3, v17, v16);
  return 0LL;
}
