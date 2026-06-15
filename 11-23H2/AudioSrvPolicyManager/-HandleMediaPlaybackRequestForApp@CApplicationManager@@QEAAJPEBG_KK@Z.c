/*
 * XREFs of ?HandleMediaPlaybackRequestForApp@CApplicationManager@@QEAAJPEBG_KK@Z @ 0x18002CE38
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_0e1598c2378d1c33dd4f2102e3c6083e__void_::_Do_call @ 0x180030E80 (std--_Func_impl_no_alloc__lambda_0e1598c2378d1c33dd4f2102e3c6083e__void_--_Do_call.c)
 * Callees:
 *     ?QueueGenericWorkItem@@YAJV?$function@$$A6AXXZ@std@@@Z @ 0x1800025C0 (-QueueGenericWorkItem@@YAJV-$function@$$A6AXXZ@std@@@Z.c)
 *     ?TsSessionFromSessionId@@YAJKHPEAPEAVTSSession@@@Z @ 0x180009190 (-TsSessionFromSessionId@@YAJKHPEAPEAVTSSession@@@Z.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18000B580 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ?Lock@CApplicationManager@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@XZ @ 0x18000E200 (-Lock@CApplicationManager@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_C.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010214 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AudPolicyLogError@@YAXPEBDHJ@Z @ 0x1800113A0 (-AudPolicyLogError@@YAXPEBDHJ@Z.c)
 *     WPP_SF_d @ 0x18001F1F8 (WPP_SF_d.c)
 *     WPP_SF_S @ 0x180023798 (WPP_SF_S.c)
 *     ?HandleMediaPlaybackRequestForActiveMediaApp@CApplicationManager@@IEAAJPEAVCApplication@@@Z @ 0x18002CD30 (-HandleMediaPlaybackRequestForActiveMediaApp@CApplicationManager@@IEAAJPEAVCApplication@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CApplicationManager::HandleMediaPlaybackRequestForApp(
        struct _RTL_CRITICAL_SECTION *this,
        const unsigned __int16 *a2,
        __int64 a3,
        DWORD a4)
{
  int v7; // edi
  struct _RTL_CRITICAL_SECTION *v8; // rbx
  PVOID *v9; // rcx
  int v10; // eax
  unsigned int v11; // ebx
  struct CApplication **i; // rcx
  struct CApplication *v14; // rbx
  CApplicationManager *v15; // rcx
  int active; // eax
  struct TSSession *v17; // [rsp+20h] [rbp-50h] BYREF
  struct _RTL_CRITICAL_SECTION *v18; // [rsp+28h] [rbp-48h] BYREF
  __int64 (__fastcall **v19)(); // [rsp+30h] [rbp-40h] BYREF
  DWORD v20; // [rsp+38h] [rbp-38h]
  __int64 (__fastcall ***v21)(); // [rsp+68h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+28h]
  struct _RTL_CRITICAL_SECTION *v23; // [rsp+A0h] [rbp+30h] BYREF

  v23 = this;
  v7 = 0;
  v8 = (struct _RTL_CRITICAL_SECTION *)((char *)g_ApplicationManager + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
  v18 = v8;
  v9 = (PVOID *)WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != &WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x1Du, &WPP_7bcb4e64156732b2305239eaa24ad5b8_Traceguids, a2);
    v9 = (PVOID *)WPP_GLOBAL_Control;
  }
  if ( g_bIsSystemAsleep != 1 )
  {
LABEL_9:
    if ( a2 )
    {
      CApplicationManager::Lock((__int64)v9, &v23);
      if ( (int)TsSessionFromSessionId(a4, 0, &v17) >= 0 )
      {
        for ( i = (struct CApplication **)*((_QWORD *)v17 + 6); ; ++i )
        {
          if ( i == *((struct CApplication ***)v17 + 7) )
          {
            v14 = 0LL;
            goto LABEL_24;
          }
          if ( *((_QWORD *)*i + 87) == a3 )
            break;
        }
        v14 = *i;
LABEL_24:
        wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v23);
        if ( v14 )
        {
          active = CApplicationManager::HandleMediaPlaybackRequestForActiveMediaApp(v15, v14);
          v7 = active;
          if ( active < 0 )
          {
            if ( WPP_GLOBAL_Control != &WPP_GLOBAL_Control
              && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
              && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
            {
              WPP_SF_d(
                *((_QWORD *)WPP_GLOBAL_Control + 2),
                0x1Fu,
                &WPP_7bcb4e64156732b2305239eaa24ad5b8_Traceguids,
                active);
            }
            AudPolicyLogError("CApplicationManager::HandleMediaPlaybackRequestForApp", 1502, v7);
          }
          goto LABEL_17;
        }
      }
      else
      {
        wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v23);
      }
      v9 = (PVOID *)WPP_GLOBAL_Control;
    }
    if ( v9 != &WPP_GLOBAL_Control && (*((_DWORD *)v9 + 7) & 0x40000000) != 0 && *((_BYTE *)v9 + 25) >= 4u )
      WPP_SF_S((TRACEHANDLE)v9[2], 0x1Eu, &WPP_7bcb4e64156732b2305239eaa24ad5b8_Traceguids, a2);
LABEL_17:
    v11 = v7;
    goto LABEL_18;
  }
  g_bIsSystemAsleep = 0;
  v19 = off_18004EA98;
  v20 = a4;
  v21 = &v19;
  v10 = QueueGenericWorkItem((__int64 *)&v19);
  v11 = v10;
  if ( v10 >= 0 )
  {
    v9 = (PVOID *)WPP_GLOBAL_Control;
    goto LABEL_9;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x5C8,
    (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\applicationmanager.cpp",
    (const char *)(unsigned int)v10);
LABEL_18:
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v18);
  return v11;
}
