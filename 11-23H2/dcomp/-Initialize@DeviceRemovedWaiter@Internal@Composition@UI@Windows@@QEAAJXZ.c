/*
 * XREFs of ?Initialize@DeviceRemovedWaiter@Internal@Composition@UI@Windows@@QEAAJXZ @ 0x1800A5FC8
 * Callers:
 *     ?CreateNewDevice@SharedD3DDevicePool@Internal@Composition@UI@Windows@@AEAAJU_LUID@@PEAPEAUSharedDevice@12345@@Z @ 0x1800A57D8 (-CreateNewDevice@SharedD3DDevicePool@Internal@Composition@UI@Windows@@AEAAJU_LUID@@PEAPEAUShared.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x180069480 (-reset@-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@_E$1-CloseHandle@details@wil@@YAX0@ZU-$i.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_TP_WAIT@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolWait@$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_TP_WAIT@@@Z @ 0x1800A6DA8 (-reset@-$unique_storage@U-$resource_policy@PEAU_TP_WAIT@@P6AXPEAU1@@Z$1-Destroy@-$DestroyThreadP.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetLastErrorFailHr@details@wil@@YAJXZ @ 0x1800E46CC (-GetLastErrorFailHr@details@wil@@YAJXZ.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800E4E88 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::Internal::DeviceRemovedWaiter::Initialize(wil::details **pv)
{
  wil::details *v2; // rcx
  wil::details *Event; // rbx
  HANDLE *v4; // rsi
  int LastErrorFailHr; // ebx
  __int64 v6; // rdx
  PTP_WAIT ThreadpoolWait; // rax
  const char *v9; // r9
  struct _TP_WAIT *v10; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  Event = (wil::details *)CreateEventExW(0LL, 0LL, 0, 0x1F0003u);
  if ( Event )
  {
    GetLastError();
    v4 = (HANDLE *)(pv + 3);
    _reset___unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__QEAAXPEAX_Z(
      pv + 3,
      Event);
  }
  else
  {
    v4 = (HANDLE *)(pv + 3);
    LastErrorFailHr = wil::details::GetLastErrorFailHr(v2);
    if ( LastErrorFailHr < 0 )
    {
      v6 = 52LL;
      goto LABEL_7;
    }
  }
  LastErrorFailHr = (*(__int64 (__fastcall **)(wil::details *, HANDLE, char *))(*(_QWORD *)pv[2] + 520LL))(
                      pv[2],
                      *v4,
                      (char *)pv + 40);
  if ( LastErrorFailHr < 0 )
  {
    v6 = 56LL;
LABEL_7:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtsharedd3ddevicepool.cpp",
      (const char *)(unsigned int)LastErrorFailHr);
    return (unsigned int)LastErrorFailHr;
  }
  *((_BYTE *)pv + 44) = 1;
  ThreadpoolWait = CreateThreadpoolWait(
                     (PTP_WAIT_CALLBACK)lambda_ba5bfaa728056e7e3dec720690f39894_::_lambda_invoker_cdecl_,
                     pv,
                     0LL);
  wil::details::unique_storage<wil::details::resource_policy<_TP_WAIT *,void (*)(_TP_WAIT *),&public: static void wil::details::DestroyThreadPoolWait<0>::Destroy(_TP_WAIT *),wistd::integral_constant<unsigned __int64,0>,_TP_WAIT *,_TP_WAIT *,0,std::nullptr_t>>::reset(
    pv + 4,
    ThreadpoolWait);
  v10 = pv[4];
  if ( !v10 )
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)0x47,
             (unsigned int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtsharedd3ddevicepool.cpp",
             v9);
  SetThreadpoolWait(v10, *v4, 0LL);
  return 0LL;
}
