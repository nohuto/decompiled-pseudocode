/*
 * XREFs of ?DelinkProcess@CApplication@@QEAAJPEAVCProcess@@@Z @ 0x1800166BC
 * Callers:
 *     ??1CApplicationManager@@MEAA@XZ @ 0x18001ECD8 (--1CApplicationManager@@MEAA@XZ.c)
 *     ?Unregister@CApplicationManager@@IEAAJPEAVCProcess@@@Z @ 0x180024E94 (-Unregister@CApplicationManager@@IEAAJPEAVCProcess@@@Z.c)
 * Callees:
 *     ?AudPolicyLogError@@YAXPEBDHJ@Z @ 0x1800095B4 (-AudPolicyLogError@@YAXPEBDHJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000E27C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     WPP_SF_d @ 0x18000E914 (WPP_SF_d.c)
 *     ?GetApplicationSpecificEndpointInfo@CProcess@@UEAAJPEAPEAUIApplicationSpecificEndpointInfo@@@Z @ 0x180017400 (-GetApplicationSpecificEndpointInfo@CProcess@@UEAAJPEAPEAUIApplicationSpecificEndpointInfo@@@Z.c)
 *     ?RemoveAt@?$CAtlList@PEAVCProcess@@V?$CElementTraits@PEAVCProcess@@@ATL@@@ATL@@QEAAXPEAU__POSITION@@@Z @ 0x18001A840 (-RemoveAt@-$CAtlList@PEAVCProcess@@V-$CElementTraits@PEAVCProcess@@@ATL@@@ATL@@QEAAXPEAU__POSITI.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180044490 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CApplication::DelinkProcess(CApplication *this, struct CProcess *a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rsi
  int ApplicationSpecificEndpointInfo; // eax
  struct IApplicationSpecificEndpointInfo *v6; // rbx
  int v7; // eax
  __int64 **i; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  struct IApplicationSpecificEndpointInfo *v11; // [rsp+70h] [rbp+18h] BYREF
  char *v12; // [rsp+78h] [rbp+20h]

  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 32);
  v12 = (char *)this + 32;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
  v11 = 0LL;
  ApplicationSpecificEndpointInfo = CProcess::GetApplicationSpecificEndpointInfo(a2, &v11);
  v6 = v11;
  if ( ApplicationSpecificEndpointInfo >= 0 )
  {
    if ( v11 )
    {
      v7 = (*(__int64 (__fastcall **)(struct IApplicationSpecificEndpointInfo *, _QWORD))(*(_QWORD *)v11 + 72LL))(
             v11,
             *((unsigned int *)a2 + 40));
      if ( v7 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x131,
          (__int64)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\application.cpp",
          (const char *)(unsigned int)v7);
    }
  }
  for ( i = (__int64 **)*((_QWORD *)this + 9); i; i = (__int64 **)*i )
  {
    if ( i[2] == (__int64 *)a2 )
    {
      ATL::CAtlList<CProcess *,ATL::CElementTraits<CProcess *>>::RemoveAt((char *)this + 72);
      break;
    }
  }
  if ( v6 )
    (*(void (__fastcall **)(struct IApplicationSpecificEndpointInfo *))(*(_QWORD *)v6 + 16LL))(v6);
  if ( v4 )
    LeaveCriticalSection(v4);
  return 0LL;
}
