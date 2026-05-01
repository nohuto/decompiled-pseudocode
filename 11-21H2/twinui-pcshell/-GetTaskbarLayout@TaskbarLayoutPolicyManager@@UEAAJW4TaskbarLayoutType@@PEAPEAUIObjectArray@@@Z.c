/*
 * XREFs of ?GetTaskbarLayout@TaskbarLayoutPolicyManager@@UEAAJW4TaskbarLayoutType@@PEAPEAUIObjectArray@@@Z @ 0x1803186C0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Stop@?$ActivityBase@VTaskbarLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180116ED4 (-Stop@-$ActivityBase@VTaskbarLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil.c)
 *     ??0?$ActivityBase@VTaskbarLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x180117128 (--0-$ActivityBase@VTaskbarLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@Q.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1GetTaskbarLayout@TaskbarFlexibleLayoutTelemetry@@QEAA@XZ @ 0x180317130 (--1GetTaskbarLayout@TaskbarFlexibleLayoutTelemetry@@QEAA@XZ.c)
 *     ?ConvertItemsToObjectArray@TaskbarLayoutPolicyManager@@AEAAJAEAV?$CCoSimpleArray@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@@@@@PEAPEAUIObjectArray@@@Z @ 0x180317594 (-ConvertItemsToObjectArray@TaskbarLayoutPolicyManager@@AEAAJAEAV-$CCoSimpleArray@V-$ComPtr@UITas.c)
 *     ?PopulateCloudDefaultLayoutItems@TaskbarLayoutPolicyManager@@AEAAJAEAV?$CCoSimpleArray@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@@@@@@Z @ 0x18031909C (-PopulateCloudDefaultLayoutItems@TaskbarLayoutPolicyManager@@AEAAJAEAV-$CCoSimpleArray@V-$ComPtr.c)
 *     ?PopulateDefaultLayoutItems@TaskbarLayoutPolicyManager@@AEAAJAEAV?$CCoSimpleArray@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@@@@@@Z @ 0x180319200 (-PopulateDefaultLayoutItems@TaskbarLayoutPolicyManager@@AEAAJAEAV-$CCoSimpleArray@V-$ComPtr@UITa.c)
 *     ?PopulateEnterpriseLayoutItems@TaskbarLayoutPolicyManager@@AEAAJAEAV?$CCoSimpleArray@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@@@@@@Z @ 0x180319364 (-PopulateEnterpriseLayoutItems@TaskbarLayoutPolicyManager@@AEAAJAEAV-$CCoSimpleArray@V-$ComPtr@U.c)
 *     ?PopulateOEMLayoutItems@TaskbarLayoutPolicyManager@@AEAAJAEAV?$CCoSimpleArray@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@@@@@@Z @ 0x18031959C (-PopulateOEMLayoutItems@TaskbarLayoutPolicyManager@@AEAAJAEAV-$CCoSimpleArray@V-$ComPtr@UITaskba.c)
 *     ?RemoveAll@?$CTSimpleArray@V?$ComPtr@UIMultitaskingViewGridElement@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIMultitaskingViewGridElement@@@WRL@Microsoft@@@@VComPtrCompareHelper@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIMultitaskingViewGridElement@@@WRL@Microsoft@@@@@@QEAAXXZ @ 0x180319714 (-RemoveAll@-$CTSimpleArray@V-$ComPtr@UIMultitaskingViewGridElement@@@WRL@Microsoft@@$0PPPPPPPO@V.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_ProgrammableTaskbarDefaultPins@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18031984C (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_ProgrammableTaskbarDefaultPins@@@details@.c)
 *     ?StartActivity@GetTaskbarLayout@TaskbarFlexibleLayoutTelemetry@@QEAAXXZ @ 0x180319A5C (-StartActivity@GetTaskbarLayout@TaskbarFlexibleLayoutTelemetry@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall TaskbarLayoutPolicyManager::GetTaskbarLayout(
        TaskbarLayoutPolicyManager *a1,
        unsigned int a2,
        _QWORD *a3)
{
  int v6; // eax
  __int64 v7; // rdx
  unsigned int v8; // ebx
  __int64 v9; // r9
  __int64 v10; // rdx
  unsigned int v11; // edi
  unsigned int v12; // edi
  int v13; // eax
  __int64 v14; // rcx
  __int64 v15; // rdx
  unsigned int v16; // edx
  int v18; // [rsp+30h] [rbp-D0h] BYREF
  _QWORD v19[4]; // [rsp+38h] [rbp-C8h] BYREF
  _BYTE v20[8]; // [rsp+58h] [rbp-A8h] BYREF
  _QWORD v21[40]; // [rsp+60h] [rbp-A0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1D8h] [rbp+D8h]

  wil::ActivityBase<TaskbarLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<TaskbarLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v21,
    (__int64)"GetTaskbarLayout");
  v21[0] = &TaskbarFlexibleLayoutTelemetry::GetTaskbarLayout::`vftable';
  TaskbarFlexibleLayoutTelemetry::GetTaskbarLayout::StartActivity((TaskbarFlexibleLayoutTelemetry::GetTaskbarLayout *)v21);
  *a3 = 0LL;
  v6 = (*(__int64 (__fastcall **)(TaskbarLayoutPolicyManager *, _QWORD, int *, _BYTE *))(*(_QWORD *)a1 + 24LL))(
         a1,
         a2,
         &v18,
         v20);
  v8 = v6;
  if ( v6 >= 0 )
  {
    if ( !v18 )
    {
      v8 = -2147467259;
      v9 = 2147500037LL;
      v10 = 203LL;
      goto LABEL_5;
    }
    memset(v19, 0, sizeof(v19));
    if ( a2 )
    {
      v11 = a2 - 1;
      if ( v11 )
      {
        v12 = v11 - 1;
        if ( v12 )
        {
          if ( v12 != 1 )
          {
            v8 = -2147024809;
LABEL_23:
            CTSimpleArray<Microsoft::WRL::ComPtr<IMultitaskingViewGridElement>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IMultitaskingViewGridElement>>,ComPtrCompareHelper,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IMultitaskingViewGridElement>>>::RemoveAll(v19);
            goto LABEL_24;
          }
          LOBYTE(v7) = 1;
          wil::details::FeatureImpl<__WilFeatureTraits_Feature_ProgrammableTaskbarDefaultPins>::ReportUsage(
            &`wil::Feature<__WilFeatureTraits_Feature_ProgrammableTaskbarDefaultPins>::GetImpl'::`2'::impl,
            v7);
          v13 = TaskbarLayoutPolicyManager::PopulateCloudDefaultLayoutItems(a1, v19);
          v8 = v13;
          if ( v13 < 0 )
          {
            v15 = 220LL;
LABEL_21:
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)v15,
              (__int64)"pcshell\\twinui\\flexibletaskbarlayout\\lib\\taskbarlayoutpolicymanager.cpp",
              (const char *)(unsigned int)v13);
            goto LABEL_23;
          }
        }
        else
        {
          v13 = TaskbarLayoutPolicyManager::PopulateEnterpriseLayoutItems(a1);
          v8 = v13;
          if ( v13 < 0 )
          {
            v15 = 215LL;
            goto LABEL_21;
          }
        }
      }
      else
      {
        v13 = TaskbarLayoutPolicyManager::PopulateOEMLayoutItems(a1);
        v8 = v13;
        if ( v13 < 0 )
        {
          v15 = 212LL;
          goto LABEL_21;
        }
      }
    }
    else
    {
      v13 = TaskbarLayoutPolicyManager::PopulateDefaultLayoutItems(a1, v19);
      v8 = v13;
      if ( v13 < 0 )
      {
        v15 = 209LL;
        goto LABEL_21;
      }
    }
    v13 = TaskbarLayoutPolicyManager::ConvertItemsToObjectArray(v14, (__int64)v19, a3);
    v8 = v13;
    if ( v13 >= 0 )
    {
      wil::ActivityBase<TaskbarLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v21, v16);
      v8 = 0;
      goto LABEL_23;
    }
    v15 = 232LL;
    goto LABEL_21;
  }
  v9 = (unsigned int)v6;
  v10 = 202LL;
LABEL_5:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v10,
    (__int64)"pcshell\\twinui\\flexibletaskbarlayout\\lib\\taskbarlayoutpolicymanager.cpp",
    (const char *)v9);
LABEL_24:
  TaskbarFlexibleLayoutTelemetry::GetTaskbarLayout::~GetTaskbarLayout((TaskbarFlexibleLayoutTelemetry::GetTaskbarLayout *)v21);
  return v8;
}
