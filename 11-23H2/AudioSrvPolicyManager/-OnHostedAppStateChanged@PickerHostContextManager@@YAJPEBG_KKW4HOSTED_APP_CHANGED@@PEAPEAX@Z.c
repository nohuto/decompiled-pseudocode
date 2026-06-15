/*
 * XREFs of ?OnHostedAppStateChanged@PickerHostContextManager@@YAJPEBG_KKW4HOSTED_APP_CHANGED@@PEAPEAX@Z @ 0x18000EB90
 * Callers:
 *     PbmReportHostedAppStateChange @ 0x180014600 (PbmReportHostedAppStateChange.c)
 *     PbmReportHostedAppStateChange_2 @ 0x180031A90 (PbmReportHostedAppStateChange_2.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18000CCA0 (--2@YAPEAX_K@Z.c)
 *     ?AudPolicyLogError@@YAXPEBDHJ@Z @ 0x1800113A0 (-AudPolicyLogError@@YAXPEBDHJ@Z.c)
 *     ?AddHostedAppInteractivityNotification@CPickerHostContext@@QEAAJPEBG_KKW4HOSTED_APP_CHANGED@@@Z @ 0x180012CA0 (-AddHostedAppInteractivityNotification@CPickerHostContext@@QEAAJPEBG_KKW4HOSTED_APP_CHANGED@@@Z.c)
 *     ?IsValidPickerHostContext@PickerHostContextManager@@YAHPEAVCPickerHostContext@@@Z @ 0x180014BC0 (-IsValidPickerHostContext@PickerHostContextManager@@YAHPEAVCPickerHostContext@@@Z.c)
 *     WPP_SF_d @ 0x18001F1F8 (WPP_SF_d.c)
 *     ??_GCPickerHostContext@@QEAAPEAXI@Z @ 0x180030200 (--_GCPickerHostContext@@QEAAPEAXI@Z.c)
 *     ?NewNode@?$CAtlList@PEAVCPickerHostContext@@V?$CElementTraits@PEAVCPickerHostContext@@@ATL@@@ATL@@AEAAPEAVCNode@12@AEBQEAVCPickerHostContext@@PEAV312@1@Z @ 0x1800304C0 (-NewNode@-$CAtlList@PEAVCPickerHostContext@@V-$CElementTraits@PEAVCPickerHostContext@@@ATL@@@ATL.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall PickerHostContextManager::OnHostedAppStateChanged(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        int a4,
        PickerHostContextManager **a5)
{
  int v5; // esi
  unsigned int v6; // r14d
  __int64 v7; // r15
  __int64 v8; // r12
  struct CPickerHostContext *v9; // rdx
  PickerHostContextManager **v10; // r13
  PickerHostContextManager *v11; // rdi
  CPickerHostContext *v12; // rax
  __int64 v13; // r8
  __int64 v14; // rax
  CPickerHostContext *v15; // rax
  int v16; // edi
  int *v18; // rbx
  __int64 *v19; // rdx
  __int64 v20; // [rsp+0h] [rbp-98h] BYREF
  int v21[2]; // [rsp+30h] [rbp-68h]
  PickerHostContextManager *v22; // [rsp+38h] [rbp-60h] BYREF
  CPickerHostContext *v23; // [rsp+40h] [rbp-58h]
  struct _RTL_CRITICAL_SECTION *v24; // [rsp+48h] [rbp-50h]
  ATL::CAtlException *v25; // [rsp+50h] [rbp-48h] BYREF

  v5 = a4;
  v6 = a3;
  v7 = a2;
  v8 = a1;
  EnterCriticalSection(&PickerHostContextManager::s_csPickerHostContextList);
  v24 = &PickerHostContextManager::s_csPickerHostContextList;
  v10 = a5;
  v11 = *a5;
  if ( *a5 && (unsigned int)PickerHostContextManager::IsValidPickerHostContext(*a5, v9) )
    goto LABEL_13;
  v12 = (CPickerHostContext *)operator new(0x30uLL);
  *(_QWORD *)v21 = v12;
  if ( v12 )
  {
    try
    {
      *((_QWORD *)v12 + 5) = 10LL;
      *(_QWORD *)v12 = 0LL;
      *((_QWORD *)v12 + 1) = 0LL;
      *((_QWORD *)v12 + 2) = 0LL;
      *((_QWORD *)v12 + 3) = 0LL;
      *((_QWORD *)v12 + 4) = 0LL;
      v23 = v12;
      v11 = v12;
      v22 = v12;
      v14 = ATL::CAtlList<CPickerHostContext *,ATL::CElementTraits<CPickerHostContext *>>::NewNode(
              0LL,
              &v22,
              v13,
              PickerHostContextManager::s_PickerHostContextList);
      if ( PickerHostContextManager::s_PickerHostContextList )
        *(_QWORD *)(PickerHostContextManager::s_PickerHostContextList + 8) = v14;
      else
        qword_180060C80 = v14;
      PickerHostContextManager::s_PickerHostContextList = v14;
      v15 = *(CPickerHostContext **)v21;
    }
    catch ( ATL::CAtlException *v25 )
    {
      v19 = &v20;
      v18 = (int *)v25;
      if ( *(_DWORD *)v25 == -1073741571 )
        _o__resetstkoflw();
      v21[0] = *v18;
      v16 = v21[0];
      if ( v21[0] < 0 )
      {
        CPickerHostContext::`scalar deleting destructor'(v23, (unsigned int)v19);
        goto LABEL_16;
      }
      v10 = a5;
      v5 = a4;
      v6 = a3;
      v7 = a2;
      v8 = a1;
      v11 = v22;
      v15 = v23;
    }
    *v10 = v15;
LABEL_13:
    v16 = CPickerHostContext::AddHostedAppInteractivityNotification(v11, v8, v7, v6, v5);
    if ( v16 >= 0 )
      goto LABEL_21;
    goto LABEL_16;
  }
  v16 = -2147024882;
LABEL_16:
  if ( WPP_GLOBAL_Control != &WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      10LL,
      &WPP_1c004e7844a83aef02453228989ecd61_Traceguids,
      (unsigned int)v16);
  }
  AudPolicyLogError("PickerHostContextManager::OnHostedAppStateChanged", 80, v16);
LABEL_21:
  LeaveCriticalSection(&PickerHostContextManager::s_csPickerHostContextList);
  return (unsigned int)v16;
}
