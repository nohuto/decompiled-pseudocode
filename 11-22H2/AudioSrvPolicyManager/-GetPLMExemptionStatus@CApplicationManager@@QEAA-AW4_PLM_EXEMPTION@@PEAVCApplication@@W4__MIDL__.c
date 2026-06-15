/*
 * XREFs of ?GetPLMExemptionStatus@CApplicationManager@@QEAA?AW4_PLM_EXEMPTION@@PEAVCApplication@@W4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@@Z @ 0x180008940
 * Callers:
 *     ?OnApplicationInteractivityChanged@CApplicationManager@@QEAAXPEAVCApplication@@@Z @ 0x180006EE0 (-OnApplicationInteractivityChanged@CApplicationManager@@QEAAXPEAVCApplication@@@Z.c)
 *     ?ApplyPBMPolicyForAllAppsInSession@CApplicationManager@@QEAAJKH@Z @ 0x180007EE0 (-ApplyPBMPolicyForAllAppsInSession@CApplicationManager@@QEAAJKH@Z.c)
 *     ?GetApplicationPBMStatus@CApplicationManager@@QEAAJPEAVCApplication@@PEAW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@1PEAW4_PLM_EXEMPTION@@@Z @ 0x18000B1D0 (-GetApplicationPBMStatus@CApplicationManager@@QEAAJPEAVCApplication@@PEAW4__MIDL___MIDL_itf_audi.c)
 *     ?ApplyPBMPolicy@CApplicationManager@@QEAAJPEAVCApplication@@IH@Z @ 0x1800122A0 (-ApplyPBMPolicy@CApplicationManager@@QEAAJPEAVCApplication@@IH@Z.c)
 * Callees:
 *     ?HasBackgroundAudioTask@CApplication@@QEAAHXZ @ 0x180005DD0 (-HasBackgroundAudioTask@CApplication@@QEAAHXZ.c)
 *     ?GetNext@?$CAtlList@PEAVCProcess@@V?$CElementTraits@PEAVCProcess@@@ATL@@@ATL@@QEAAAEAPEAVCProcess@@AEAPEAU__POSITION@@@Z @ 0x180009030 (-GetNext@-$CAtlList@PEAVCProcess@@V-$CElementTraits@PEAVCProcess@@@ATL@@@ATL@@QEAAAEAPEAVCProces.c)
 *     ?IsRestrictedBackgroundAudioCapable@CApplication@@QEAAHXZ @ 0x18000EF00 (-IsRestrictedBackgroundAudioCapable@CApplication@@QEAAHXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationManager::GetPLMExemptionStatus(__int64 a1, __int64 a2, int a3)
{
  struct _RTL_CRITICAL_SECTION *v5; // r12
  unsigned int v6; // ebx
  int v7; // ebx
  _QWORD *v8; // r14
  _QWORD *v9; // rcx
  __int64 v10; // rdx
  int v11; // r9d
  int v12; // eax
  __int64 v13; // rcx
  int v14; // ebp
  int v15; // esi
  _QWORD *v16; // rax
  __int64 Next; // rax
  int v18; // esi
  _QWORD *v19; // rcx
  __int64 v20; // rdx
  int v21; // esi
  _QWORD *v22; // rax
  __int64 v23; // rdx
  _QWORD *v24; // rdx
  __int64 v25; // r8
  _QWORD *i; // [rsp+50h] [rbp+8h] BYREF

  v5 = (struct _RTL_CRITICAL_SECTION *)(a1 + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 32));
  if ( *(_DWORD *)(a2 + 640) )
  {
    v6 = *(_DWORD *)(a2 + 644);
  }
  else
  {
    EnterCriticalSection((LPCRITICAL_SECTION)(a2 + 32));
    v7 = 4;
    v8 = (_QWORD *)(a2 + 72);
    if ( *(_DWORD *)(a2 + 612) )
    {
      v7 = *(_DWORD *)(a2 + 616);
    }
    else
    {
      v9 = (_QWORD *)*v8;
      if ( *v8 )
      {
        do
        {
          v10 = v9[2];
          v9 = (_QWORD *)*v9;
          if ( !*(_DWORD *)(v10 + 416) || *(_QWORD *)(v10 + 360) )
          {
            v11 = *(_DWORD *)(v10 + 480);
            v12 = v11 ? *(_DWORD *)(v10 + 484) : *(_DWORD *)(v10 + 312);
            if ( v12 < v7 )
            {
              if ( v11 )
                v7 = *(_DWORD *)(v10 + 484);
              else
                v7 = *(_DWORD *)(v10 + 312);
            }
          }
        }
        while ( v9 );
      }
    }
    if ( a2 != -32 )
      LeaveCriticalSection((LPCRITICAL_SECTION)(a2 + 32));
    if ( dword_1800522B0[v7] && (unsigned int)CApplication::IsRestrictedBackgroundAudioCapable((CApplication *)a2) )
    {
      v6 = 2;
    }
    else if ( a3 )
    {
      EnterCriticalSection((LPCRITICAL_SECTION)(a2 + 32));
      v14 = 0;
      v15 = 0;
      v16 = (_QWORD *)*v8;
      for ( i = (_QWORD *)*v8; ; v16 = i )
      {
        v6 = 1;
        if ( !v16 )
          break;
        Next = ATL::CAtlList<CProcess *,ATL::CElementTraits<CProcess *>>::GetNext(v13, &i);
        v13 = *(_QWORD *)Next;
        if ( !*(_DWORD *)(*(_QWORD *)Next + 416LL) && *(_DWORD *)(v13 + 432) )
        {
          v15 = 1;
          break;
        }
      }
      if ( a2 != -32 )
        LeaveCriticalSection((LPCRITICAL_SECTION)(a2 + 32));
      if ( v15 )
      {
        EnterCriticalSection((LPCRITICAL_SECTION)(a2 + 32));
        v18 = 0;
        v19 = (_QWORD *)*v8;
        while ( v19 )
        {
          v20 = v19[2];
          v19 = (_QWORD *)*v19;
          if ( !*(_DWORD *)(v20 + 416) && *(_DWORD *)(v20 + 436) )
          {
            v18 = 1;
            break;
          }
        }
        if ( a2 != -32 )
          LeaveCriticalSection((LPCRITICAL_SECTION)(a2 + 32));
        if ( !v18 )
        {
          EnterCriticalSection((LPCRITICAL_SECTION)(a2 + 32));
          v21 = 0;
          v22 = (_QWORD *)*v8;
          while ( v22 )
          {
            v23 = v22[2];
            v22 = (_QWORD *)*v22;
            if ( !*(_DWORD *)(v23 + 416) && *(_DWORD *)(v23 + 500) )
            {
              v21 = 1;
              break;
            }
          }
          if ( a2 != -32 )
            LeaveCriticalSection((LPCRITICAL_SECTION)(a2 + 32));
          if ( v21 && !(unsigned int)CApplication::HasBackgroundAudioTask((CApplication *)a2) )
            goto LABEL_56;
        }
      }
      EnterCriticalSection((LPCRITICAL_SECTION)(a2 + 32));
      v24 = (_QWORD *)*v8;
      while ( v24 )
      {
        v25 = v24[2];
        v24 = (_QWORD *)*v24;
        if ( !*(_DWORD *)(v25 + 416) && *(_DWORD *)(v25 + 440) )
        {
          v14 = 1;
          break;
        }
      }
      if ( a2 != -32 )
        LeaveCriticalSection((LPCRITICAL_SECTION)(a2 + 32));
      if ( v14 )
LABEL_56:
        v6 = 2;
    }
    else
    {
      v6 = 1;
    }
  }
  if ( v5 )
    LeaveCriticalSection(v5);
  return v6;
}
