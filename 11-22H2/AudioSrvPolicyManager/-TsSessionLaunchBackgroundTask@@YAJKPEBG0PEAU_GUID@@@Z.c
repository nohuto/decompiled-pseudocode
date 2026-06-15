/*
 * XREFs of ?TsSessionLaunchBackgroundTask@@YAJKPEBG0PEAU_GUID@@@Z @ 0x180039AB0
 * Callers:
 *     PbmLaunchBackgroundTask @ 0x1800317E0 (PbmLaunchBackgroundTask.c)
 * Callees:
 *     ?GetNext@?$CAtlList@PEAVCProcess@@V?$CElementTraits@PEAVCProcess@@@ATL@@@ATL@@QEAAAEAPEAVCProcess@@AEAPEAU__POSITION@@@Z @ 0x180009030 (-GetNext@-$CAtlList@PEAVCProcess@@V-$CElementTraits@PEAVCProcess@@@ATL@@@ATL@@QEAAAEAPEAVCProces.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18000B5D0 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ?Lock@CApplicationManager@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@XZ @ 0x18000E250 (-Lock@CApplicationManager@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_C.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010264 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FindAppFromProcessId@CApplicationManager@@QEAAPEAVCApplication@@K@Z @ 0x18002CB1C (-FindAppFromProcessId@CApplicationManager@@QEAAPEAVCApplication@@K@Z.c)
 *     ?DoLaunchBackgroundTask@@YAJPEAVCApplication@@PEBG1PEAU_GUID@@@Z @ 0x1800351C4 (-DoLaunchBackgroundTask@@YAJPEAVCApplication@@PEBG1PEAU_GUID@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall TsSessionLaunchBackgroundTask(
        __int64 a1,
        const unsigned __int16 *a2,
        const unsigned __int16 *a3,
        struct _GUID *a4)
{
  int v7; // ebp
  CApplicationManager *v8; // rcx
  struct CApplication *AppFromProcessId; // rax
  struct CApplication *v10; // rdi
  unsigned int v11; // ebx
  __int64 v12; // r9
  __int64 v13; // rdx
  int v14; // eax
  struct _GUID v15; // xmm6
  __int64 v16; // rcx
  _QWORD *v17; // rax
  __int64 *Next; // rax
  _QWORD *v20; // [rsp+20h] [rbp-38h] BYREF
  struct _RTL_CRITICAL_SECTION *v21; // [rsp+28h] [rbp-30h] BYREF
  struct _RTL_CRITICAL_SECTION *v22[2]; // [rsp+30h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v7 = a1;
  CApplicationManager::Lock(a1, v22);
  AppFromProcessId = CApplicationManager::FindAppFromProcessId(v8, v7);
  v10 = AppFromProcessId;
  if ( !AppFromProcessId )
  {
    v11 = -2147418113;
    v12 = 2147549183LL;
    v13 = 1395LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v13,
      (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
      (const char *)v12);
    goto LABEL_13;
  }
  v14 = DoLaunchBackgroundTask(AppFromProcessId, a2, a3, a4);
  v11 = v14;
  if ( v14 < 0 )
  {
    v12 = (unsigned int)v14;
    v13 = 1398LL;
    goto LABEL_5;
  }
  v15 = *a4;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)v10 + 32));
  v21 = (struct _RTL_CRITICAL_SECTION *)((char *)v10 + 32);
  v17 = (_QWORD *)*((_QWORD *)v10 + 9);
  v20 = v17;
  while ( v17 )
  {
    Next = ATL::CAtlList<CProcess *,ATL::CElementTraits<CProcess *>>::GetNext(v16, &v20);
    v16 = *Next;
    if ( *(_DWORD *)(*Next + 160) == v7 && !*(_DWORD *)(v16 + 416) )
    {
      *(struct _GUID *)(v16 + 520) = v15;
      break;
    }
    v17 = v20;
  }
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v21);
  v11 = 0;
LABEL_13:
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(v22);
  return v11;
}
