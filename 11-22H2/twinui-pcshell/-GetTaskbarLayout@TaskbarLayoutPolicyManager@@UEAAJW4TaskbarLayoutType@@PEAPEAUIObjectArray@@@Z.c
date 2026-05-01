/*
 * XREFs of ?GetTaskbarLayout@TaskbarLayoutPolicyManager@@UEAAJW4TaskbarLayoutType@@PEAPEAUIObjectArray@@@Z @ 0x1803E7300
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Stop@?$ActivityBase@VTaskbarLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18017CF0C (-Stop@-$ActivityBase@VTaskbarLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?RemoveAll@?$CTSimpleArray@V?$ComPtr@UIMultitaskingViewGridElement@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIMultitaskingViewGridElement@@@WRL@Microsoft@@@@VComPtrCompareHelper@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIMultitaskingViewGridElement@@@WRL@Microsoft@@@@@@QEAAXXZ @ 0x1802D2574 (-RemoveAll@-$CTSimpleArray@V-$ComPtr@UIMultitaskingViewGridElement@@@WRL@Microsoft@@$0PPPPPPPO@V.c)
 *     ??$?0$$V@GetTaskbarLayout@TaskbarFlexibleLayoutTelemetry@@AEAA@U?$integral_constant@D$0A@@wistd@@@Z @ 0x1803E598C (--$-0$$V@GetTaskbarLayout@TaskbarFlexibleLayoutTelemetry@@AEAA@U-$integral_constant@D$0A@@wistd@.c)
 *     ??1GetTaskbarLayout@TaskbarFlexibleLayoutTelemetry@@QEAA@XZ @ 0x1803E5F7C (--1GetTaskbarLayout@TaskbarFlexibleLayoutTelemetry@@QEAA@XZ.c)
 *     ?ConvertItemsToObjectArray@TaskbarLayoutPolicyManager@@AEAAJAEAV?$CCoSimpleArray@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@@@@@PEAPEAUIObjectArray@@@Z @ 0x1803E63DC (-ConvertItemsToObjectArray@TaskbarLayoutPolicyManager@@AEAAJAEAV-$CCoSimpleArray@V-$ComPtr@UITas.c)
 *     ?PopulateCloudDefaultLayoutItems@TaskbarLayoutPolicyManager@@AEAAJAEAV?$CCoSimpleArray@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@@@@@@Z @ 0x1803E7CC8 (-PopulateCloudDefaultLayoutItems@TaskbarLayoutPolicyManager@@AEAAJAEAV-$CCoSimpleArray@V-$ComPtr.c)
 *     ?PopulateDefaultLayoutItems@TaskbarLayoutPolicyManager@@AEAAJAEAV?$CCoSimpleArray@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@@@@@@Z @ 0x1803E7E2C (-PopulateDefaultLayoutItems@TaskbarLayoutPolicyManager@@AEAAJAEAV-$CCoSimpleArray@V-$ComPtr@UITa.c)
 *     ?PopulateEnterpriseLayoutItems@TaskbarLayoutPolicyManager@@AEAAJAEAV?$CCoSimpleArray@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@@@@@@Z @ 0x1803E7F90 (-PopulateEnterpriseLayoutItems@TaskbarLayoutPolicyManager@@AEAAJAEAV-$CCoSimpleArray@V-$ComPtr@U.c)
 *     ?PopulateOEMLayoutItems@TaskbarLayoutPolicyManager@@AEAAJAEAV?$CCoSimpleArray@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@@@@@@Z @ 0x1803E81C8 (-PopulateOEMLayoutItems@TaskbarLayoutPolicyManager@@AEAAJAEAV-$CCoSimpleArray@V-$ComPtr@UITaskba.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall TaskbarLayoutPolicyManager::GetTaskbarLayout(
        TaskbarLayoutPolicyManager *a1,
        unsigned int a2,
        _QWORD *a3)
{
  int v6; // eax
  unsigned int v7; // ebx
  __int64 v8; // r9
  __int64 v9; // rdx
  unsigned int v10; // edi
  unsigned int v11; // edi
  int v12; // eax
  __int64 v13; // rcx
  __int64 v14; // rdx
  unsigned int v15; // edx
  int v17; // [rsp+30h] [rbp-D0h] BYREF
  _QWORD v18[4]; // [rsp+38h] [rbp-C8h] BYREF
  _BYTE v19[8]; // [rsp+58h] [rbp-A8h] BYREF
  _BYTE v20[320]; // [rsp+60h] [rbp-A0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1D8h] [rbp+D8h]

  TaskbarFlexibleLayoutTelemetry::GetTaskbarLayout::GetTaskbarLayout((__int64)v20, a2);
  *a3 = 0LL;
  v6 = (*(__int64 (__fastcall **)(TaskbarLayoutPolicyManager *, _QWORD, int *, _BYTE *))(*(_QWORD *)a1 + 24LL))(
         a1,
         a2,
         &v17,
         v19);
  v7 = v6;
  if ( v6 >= 0 )
  {
    if ( !v17 )
    {
      v7 = -2147467259;
      v8 = 2147500037LL;
      v9 = 197LL;
      goto LABEL_5;
    }
    memset(v18, 0, sizeof(v18));
    if ( a2 )
    {
      v10 = a2 - 1;
      if ( v10 )
      {
        v11 = v10 - 1;
        if ( v11 )
        {
          if ( v11 != 1 )
          {
            v7 = -2147024809;
LABEL_23:
            CTSimpleArray<Microsoft::WRL::ComPtr<IMultitaskingViewGridElement>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IMultitaskingViewGridElement>>,ComPtrCompareHelper,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IMultitaskingViewGridElement>>>::RemoveAll((__int64)v18);
            goto LABEL_24;
          }
          v12 = TaskbarLayoutPolicyManager::PopulateCloudDefaultLayoutItems(a1, v18);
          v7 = v12;
          if ( v12 < 0 )
          {
            v14 = 212LL;
LABEL_21:
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)v14,
              (int)"pcshell\\twinui\\flexibletaskbarlayout\\lib\\taskbarlayoutpolicymanager.cpp",
              (const char *)(unsigned int)v12);
            goto LABEL_23;
          }
        }
        else
        {
          v12 = TaskbarLayoutPolicyManager::PopulateEnterpriseLayoutItems(a1);
          v7 = v12;
          if ( v12 < 0 )
          {
            v14 = 209LL;
            goto LABEL_21;
          }
        }
      }
      else
      {
        v12 = TaskbarLayoutPolicyManager::PopulateOEMLayoutItems(a1);
        v7 = v12;
        if ( v12 < 0 )
        {
          v14 = 206LL;
          goto LABEL_21;
        }
      }
    }
    else
    {
      v12 = TaskbarLayoutPolicyManager::PopulateDefaultLayoutItems(a1, v18);
      v7 = v12;
      if ( v12 < 0 )
      {
        v14 = 203LL;
        goto LABEL_21;
      }
    }
    v12 = TaskbarLayoutPolicyManager::ConvertItemsToObjectArray(v13, (__int64)v18, a3);
    v7 = v12;
    if ( v12 >= 0 )
    {
      wil::ActivityBase<TaskbarLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v20, v15);
      v7 = 0;
      goto LABEL_23;
    }
    v14 = 220LL;
    goto LABEL_21;
  }
  v8 = (unsigned int)v6;
  v9 = 196LL;
LABEL_5:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v9,
    (int)"pcshell\\twinui\\flexibletaskbarlayout\\lib\\taskbarlayoutpolicymanager.cpp",
    (const char *)v8);
LABEL_24:
  TaskbarFlexibleLayoutTelemetry::GetTaskbarLayout::~GetTaskbarLayout((TaskbarFlexibleLayoutTelemetry::GetTaskbarLayout *)v20);
  return v7;
}
