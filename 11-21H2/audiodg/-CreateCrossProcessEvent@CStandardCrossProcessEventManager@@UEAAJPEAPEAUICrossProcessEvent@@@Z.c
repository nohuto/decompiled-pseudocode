/*
 * XREFs of ?CreateCrossProcessEvent@CStandardCrossProcessEventManager@@UEAAJPEAPEAUICrossProcessEvent@@@Z @ 0x14005B760
 * Callers:
 *     <none>
 * Callees:
 *     ?reset@?$com_ptr_t@UIAudioEndpointRT@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x140001FF0 (-reset@-$com_ptr_t@UIAudioEndpointRT@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??1?$com_ptr_t@UIAudioVirtualProtectedOutput@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x140004168 (--1-$com_ptr_t@UIAudioVirtualProtectedOutput@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x14001F688 (--1-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@_E$1-CloseHandle@details@wil@@YAX0@ZU-$integ.c)
 *     ?GetLastErrorFailHr@details@wil@@YAJXZ @ 0x140021194 (-GetLastErrorFailHr@details@wil@@YAJXZ.c)
 *     ??$MakeAndInitialize@VCStandardEvent@@UICrossProcessEvent@@PEAX@Details@WRL@Microsoft@@YAJPEAPEAUICrossProcessEvent@@$$QEAPEAX@Z @ 0x1400235EC (--$MakeAndInitialize@VCStandardEvent@@UICrossProcessEvent@@PEAX@Details@WRL@Microsoft@@YAJPEAPEA.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x140026348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CStandardCrossProcessEventManager::CreateCrossProcessEvent(
        CStandardCrossProcessEventManager *this,
        struct ICrossProcessEvent **a2)
{
  wil::details *v3; // rbx
  __int64 v4; // rdx
  wil::details *v5; // rcx
  wil::details *Event; // rdi
  __int64 v7; // r8
  const char *v8; // r9
  int v9; // eax
  unsigned int v10; // edi
  signed int LastErrorFailHr; // eax
  void *v12; // rdx
  struct ICrossProcessEvent *v13; // rcx
  int v15[2]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct ICrossProcessEvent *v17; // [rsp+50h] [rbp+18h] BYREF
  wil::details *v18; // [rsp+58h] [rbp+20h] BYREF

  v3 = 0LL;
  v18 = 0LL;
  Event = (wil::details *)CreateEventExW(0LL, 0LL, 0, 0x1F0003u);
  if ( Event )
  {
    GetLastError();
    v3 = Event;
    v18 = Event;
  }
  else
  {
    LastErrorFailHr = wil::details::GetLastErrorFailHr(v5, v4, v7, v8);
    v10 = LastErrorFailHr;
    if ( LastErrorFailHr < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x39,
        (int)"avcore\\audiocore\\Engine\\Core\\CrossProcessEngineObjects\\CPStandardEvent.h",
        (const char *)(unsigned int)LastErrorFailHr);
      goto LABEL_12;
    }
  }
  v17 = 0LL;
  *(_QWORD *)v15 = v3;
  wil::com_ptr_t<IAudioEndpointRT,wil::err_returncode_policy>::reset((__int64 *)&v17);
  v9 = Microsoft::WRL::Details::MakeAndInitialize<CStandardEvent,ICrossProcessEvent,void *>(&v17, (wil::details **)v15);
  v10 = v9;
  if ( v9 >= 0 )
  {
    v18 = 0LL;
    v13 = v17;
    if ( v17 )
    {
      *a2 = v17;
      (*(void (__fastcall **)(struct ICrossProcessEvent *))(*(_QWORD *)v13 + 8LL))(v13);
    }
    else
    {
      *a2 = 0LL;
    }
    v10 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3C,
      (int)"avcore\\audiocore\\Engine\\Core\\CrossProcessEngineObjects\\CPStandardEvent.h",
      (const char *)(unsigned int)v9);
  }
  wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>((__int64 *)&v17);
LABEL_12:
  __1__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__IEAA_XZ(
    &v18,
    v12);
  return v10;
}
