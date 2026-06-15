/*
 * XREFs of ?HandleMediaPlaybackRequestForApp@CApplicationManager@@QEAAJPEBG_KK@Z @ 0x1800205A4
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_0e1598c2378d1c33dd4f2102e3c6083e__void_::_Do_call @ 0x180027CF0 (std--_Func_impl_no_alloc__lambda_0e1598c2378d1c33dd4f2102e3c6083e__void_--_Do_call.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180006854 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AudPolicyLogError@@YAXPEBDHJ@Z @ 0x1800095B4 (-AudPolicyLogError@@YAXPEBDHJ@Z.c)
 *     WPP_SF_d @ 0x18000E914 (WPP_SF_d.c)
 *     WPP_SF_S @ 0x180013550 (WPP_SF_S.c)
 *     ?HandleMediaPlaybackRequestForActiveMediaApp@CApplicationManager@@IEAAJPEAVCApplication@@@Z @ 0x1800204A0 (-HandleMediaPlaybackRequestForActiveMediaApp@CApplicationManager@@IEAAJPEAVCApplication@@@Z.c)
 *     ?TsSessionIdGetActiveMediaAppById@@YAPEAVCApplication@@KPEBG_K@Z @ 0x18002ED8C (-TsSessionIdGetActiveMediaAppById@@YAPEAVCApplication@@KPEBG_K@Z.c)
 *     ?QueueGenericWorkItem@@YAJV?$function@$$A6AXXZ@std@@@Z @ 0x180032708 (-QueueGenericWorkItem@@YAJV-$function@$$A6AXXZ@std@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CApplicationManager::HandleMediaPlaybackRequestForApp(
        CApplicationManager *this,
        const unsigned __int16 *a2,
        unsigned __int64 a3,
        DWORD a4)
{
  unsigned int v7; // edi
  struct _RTL_CRITICAL_SECTION *v8; // rbx
  const unsigned __int16 *v9; // rdx
  _UNKNOWN **v10; // rcx
  int v11; // eax
  unsigned int v12; // esi
  struct CApplication *ActiveMediaAppById; // rax
  CApplicationManager *v15; // rcx
  int active; // eax
  __int64 (__fastcall **v17)(); // [rsp+28h] [rbp-70h] BYREF
  DWORD v18; // [rsp+30h] [rbp-68h]
  __int64 (__fastcall ***v19)(); // [rsp+60h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]

  v7 = 0;
  v8 = (struct _RTL_CRITICAL_SECTION *)((char *)g_ApplicationManager + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
  v10 = (_UNKNOWN **)WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x1Du, &WPP_7bcb4e64156732b2305239eaa24ad5b8_Traceguids, a2);
    v10 = (_UNKNOWN **)WPP_GLOBAL_Control;
  }
  if ( g_bIsSystemAsleep == 1 )
  {
    g_bIsSystemAsleep = 0;
    v17 = off_180048420;
    v18 = a4;
    v19 = &v17;
    v11 = QueueGenericWorkItem(&v17);
    v12 = v11;
    if ( v11 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x5C8,
        (__int64)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\applicationmanager.cpp",
        (const char *)(unsigned int)v11);
      if ( v8 )
        LeaveCriticalSection(v8);
      return v12;
    }
    v10 = (_UNKNOWN **)WPP_GLOBAL_Control;
  }
  if ( !a2 )
    goto LABEL_20;
  ActiveMediaAppById = TsSessionIdGetActiveMediaAppById(a4, v9, a3);
  if ( !ActiveMediaAppById )
  {
    v10 = (_UNKNOWN **)WPP_GLOBAL_Control;
LABEL_20:
    if ( v10 != &WPP_GLOBAL_Control && (*((_DWORD *)v10 + 7) & 0x40000000) != 0 && *((_BYTE *)v10 + 25) >= 4u )
      WPP_SF_S((TRACEHANDLE)v10[2], 0x1Eu, &WPP_7bcb4e64156732b2305239eaa24ad5b8_Traceguids, a2);
    goto LABEL_24;
  }
  active = CApplicationManager::HandleMediaPlaybackRequestForActiveMediaApp(v15, ActiveMediaAppById);
  v7 = active;
  if ( active < 0 )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x1Fu, &WPP_7bcb4e64156732b2305239eaa24ad5b8_Traceguids, active);
    }
    AudPolicyLogError("CApplicationManager::HandleMediaPlaybackRequestForApp", 1502, v7);
  }
LABEL_24:
  if ( v8 )
    LeaveCriticalSection(v8);
  return v7;
}
