/*
 * XREFs of ?OnHostedAppStateChanged@PickerHostContextManager@@YAJPEBG_KKW4HOSTED_APP_CHANGED@@PEAPEAX@Z @ 0x180026620
 * Callers:
 *     PbmReportHostedAppStateChange @ 0x180028F70 (PbmReportHostedAppStateChange.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180002AC8 (--3@YAXPEAX_K@Z.c)
 *     ?AudPolicyLogError@@YAXPEBDHJ@Z @ 0x1800095B4 (-AudPolicyLogError@@YAXPEBDHJ@Z.c)
 *     WPP_SF_d @ 0x18000E914 (WPP_SF_d.c)
 *     ??1CPickerHostContext@@QEAA@XZ @ 0x180025CEC (--1CPickerHostContext@@QEAA@XZ.c)
 *     ?AddHead@?$CAtlList@PEAVCPickerHostContext@@V?$CElementTraits@PEAVCPickerHostContext@@@ATL@@@ATL@@QEAAPEAU__POSITION@@AEBQEAVCPickerHostContext@@@Z @ 0x180025E80 (-AddHead@-$CAtlList@PEAVCPickerHostContext@@V-$CElementTraits@PEAVCPickerHostContext@@@ATL@@@ATL.c)
 *     ?AddHostedAppInteractivityNotification@CPickerHostContext@@QEAAJPEBG_KKW4HOSTED_APP_CHANGED@@@Z @ 0x1800260D0 (-AddHostedAppInteractivityNotification@CPickerHostContext@@QEAAJPEBG_KKW4HOSTED_APP_CHANGED@@@Z.c)
 *     WPP_SF_q @ 0x180026D00 (WPP_SF_q.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall PickerHostContextManager::OnHostedAppStateChanged(
        const unsigned __int16 *a1,
        unsigned __int64 a2,
        unsigned int a3,
        int a4,
        CPickerHostContext **a5)
{
  int v5; // r13d
  CPickerHostContext **v6; // r12
  CPickerHostContext *v7; // r15
  __int64 v8; // rdx
  __int64 v9; // r8
  _QWORD *i; // rax
  int v11; // edi
  HANDLE ProcessHeap; // rax
  CPickerHostContext *v13; // rax
  __int64 v14; // rcx
  CPickerHostContext *v15; // rdi
  int v16; // edi
  int *v18; // rbx
  CPickerHostContext *v19; // [rsp+38h] [rbp-60h]
  __int64 v20[2]; // [rsp+40h] [rbp-58h] BYREF
  ATL::CAtlException *v21; // [rsp+50h] [rbp-48h] BYREF

  v5 = a4;
  EnterCriticalSection(&PickerHostContextManager::s_csPickerHostContextList);
  v20[1] = (__int64)&PickerHostContextManager::s_csPickerHostContextList;
  v6 = a5;
  v7 = *a5;
  if ( *a5 )
  {
    EnterCriticalSection(&PickerHostContextManager::s_csPickerHostContextList);
    for ( i = (_QWORD *)PickerHostContextManager::s_PickerHostContextList; i; i = (_QWORD *)*i )
    {
      if ( (CPickerHostContext *)i[2] == v7 )
      {
        v11 = 1;
        goto LABEL_11;
      }
    }
    v11 = 0;
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), v8, v9, v7);
    }
LABEL_11:
    LeaveCriticalSection(&PickerHostContextManager::s_csPickerHostContextList);
    if ( v11 )
      goto LABEL_18;
  }
  ProcessHeap = GetProcessHeap();
  v13 = (CPickerHostContext *)HeapAlloc(ProcessHeap, 0, 0x30uLL);
  v15 = v13;
  if ( v13 )
  {
    try
    {
      *((_QWORD *)v13 + 5) = 10LL;
      *(_QWORD *)v13 = 0LL;
      *((_QWORD *)v13 + 1) = 0LL;
      *((_QWORD *)v13 + 2) = 0LL;
      *((_QWORD *)v13 + 3) = 0LL;
      *((_QWORD *)v13 + 4) = 0LL;
      v19 = v13;
      v7 = v13;
      v20[0] = (__int64)v13;
      ATL::CAtlList<CPickerHostContext *,ATL::CElementTraits<CPickerHostContext *>>::AddHead(v14, v20);
    }
    catch ( ATL::CAtlException *v21 )
    {
      v18 = (int *)v21;
      if ( *(_DWORD *)v21 == -1073741571 )
        _o__resetstkoflw();
      v16 = *v18;
      if ( *v18 < 0 )
      {
        CPickerHostContext::~CPickerHostContext(v19);
        operator delete(v19);
        goto LABEL_21;
      }
      v6 = a5;
      v5 = a4;
      v7 = (CPickerHostContext *)v20[0];
      v15 = v19;
    }
    *v6 = v15;
LABEL_18:
    v16 = CPickerHostContext::AddHostedAppInteractivityNotification(v7, a1, a2, a3, v5);
    if ( v16 >= 0 )
      goto LABEL_26;
    goto LABEL_21;
  }
  v16 = -2147024882;
LABEL_21:
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xAu, &WPP_1c004e7844a83aef02453228989ecd61_Traceguids, v16);
  }
  AudPolicyLogError("PickerHostContextManager::OnHostedAppStateChanged", 80, v16);
LABEL_26:
  LeaveCriticalSection(&PickerHostContextManager::s_csPickerHostContextList);
  return (unsigned int)v16;
}
