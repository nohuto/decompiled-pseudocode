/*
 * XREFs of ?Initialize@DockDeviceCollection@@IEAAJPEAPEAX@Z @ 0x1800C883C
 * Callers:
 *     ?Create@DockDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXPEAPEAV1@@Z @ 0x1800C8510 (-Create@DockDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXPEAPEAV1@@Z.c)
 * Callees:
 *     ?Initialize@HIDDeviceCollection@@QEAAJKQEAU_RIM_USAGE_ANDPAGE@@KKPEAPEAX@Z @ 0x18002B01C (-Initialize@HIDDeviceCollection@@QEAAJKQEAU_RIM_USAGE_ANDPAGE@@KKPEAPEAX@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044BD0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetLastErrorFailHr@details@wil@@YAJXZ @ 0x18007C12C (-GetLastErrorFailHr@details@wil@@YAJXZ.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x18007F1DC (-reset@-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@_E$1-CloseHandle@details@wil@@YAX0@ZU-$i.c)
 *     ?reset@?$com_ptr_t@UIPerceptionTimestamp@Perception@Windows@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x18009BFB4 (-reset@-$com_ptr_t@UIPerceptionTimestamp@Perception@Windows@@Uerr_exception_policy@wil@@@wil@@QE.c)
 */

__int64 __fastcall DockDeviceCollection::Initialize(DockDeviceCollection *this, void **a2, __int64 a3, __int64 a4)
{
  int LastErrorFailHr; // ebx
  __int64 v6; // rdx
  __int64 v8; // rdx
  wil::details *v9; // rcx
  wil::details *Event; // rbx
  __int64 v11; // r8
  const char *v12; // r9
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  int v14; // [rsp+50h] [rbp+18h] BYREF

  v14 = 65553;
  LastErrorFailHr = HIDDeviceCollection::Initialize(
                      (HANDLE *)this,
                      (__int64)a2,
                      (struct _RIM_USAGE_ANDPAGE *const)&v14,
                      a4,
                      0x40u,
                      a2);
  if ( LastErrorFailHr < 0 )
  {
    v6 = 59LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\dockdevicecollection.cpp",
      (const char *)(unsigned int)LastErrorFailHr);
    return (unsigned int)LastErrorFailHr;
  }
  Event = (wil::details *)CreateEventExW(0LL, 0LL, 0, 0x1F0003u);
  if ( Event )
  {
    GetLastError();
    _reset___unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__QEAAXPEAX_Z(
      (wil::details **)this + 346,
      Event);
  }
  else
  {
    LastErrorFailHr = wil::details::GetLastErrorFailHr(v9, v8, v11, v12);
    if ( LastErrorFailHr < 0 )
    {
      v6 = 63LL;
      goto LABEL_3;
    }
  }
  wil::com_ptr_t<Windows::Perception::IPerceptionTimestamp,wil::err_exception_policy>::reset((__int64 *)this + 345);
  LastErrorFailHr = CoreUICreate((char *)this + 2760);
  if ( LastErrorFailHr < 0 )
  {
    v6 = 65LL;
    goto LABEL_3;
  }
  LastErrorFailHr = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 (__fastcall *)(void *, unsigned int, void *), DockDeviceCollection *))(**((_QWORD **)this + 345) + 272LL))(
                      *((_QWORD *)this + 345),
                      *((_QWORD *)this + 346),
                      DockDeviceCollection::OnReportQueryCallbackStatic,
                      this);
  if ( LastErrorFailHr < 0 )
  {
    v6 = 70LL;
    goto LABEL_3;
  }
  return 0LL;
}
