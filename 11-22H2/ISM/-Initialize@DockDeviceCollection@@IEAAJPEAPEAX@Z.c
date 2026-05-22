/*
 * XREFs of ?Initialize@DockDeviceCollection@@IEAAJPEAPEAX@Z @ 0x1800F114C
 * Callers:
 *     ?Create@DockDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXPEAPEAV1@@Z @ 0x1800F0E20 (-Create@DockDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXPEAPEAV1@@Z.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x1800333EC (-reset@-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@_E$1-CloseHandle@details@wil@@YAX0@ZU-$i.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800334B8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Initialize@HIDDeviceCollection@@QEAAJKQEAU_RIM_USAGE_ANDPAGE@@KKPEAPEAX@Z @ 0x180041DD0 (-Initialize@HIDDeviceCollection@@QEAAJKQEAU_RIM_USAGE_ANDPAGE@@KKPEAPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetLastErrorFailHr@details@wil@@YAJXZ @ 0x1800A5DFC (-GetLastErrorFailHr@details@wil@@YAJXZ.c)
 *     ?reset@?$com_ptr_t@UIPerceptionTimestamp@Perception@Windows@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x1800C4CA0 (-reset@-$com_ptr_t@UIPerceptionTimestamp@Perception@Windows@@Uerr_exception_policy@wil@@@wil@@QE.c)
 */

__int64 __fastcall DockDeviceCollection::Initialize(DockDeviceCollection *this, void **a2, __int64 a3, __int64 a4)
{
  int LastErrorFailHr; // edi
  __int64 v6; // rdx
  __int64 v8; // rdx
  wil::details *v9; // rcx
  wil::details *Event; // rdi
  __int64 v11; // r8
  const char *v12; // r9
  _QWORD *v13; // rsi
  int v14; // eax
  unsigned int v15; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  int v17; // [rsp+50h] [rbp+18h] BYREF

  v17 = 65553;
  LastErrorFailHr = HIDDeviceCollection::Initialize(
                      (HANDLE *)this,
                      (__int64)a2,
                      (struct _RIM_USAGE_ANDPAGE *const)&v17,
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
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\dockdevicecollection.cpp",
      (const char *)(unsigned int)LastErrorFailHr);
    return (unsigned int)LastErrorFailHr;
  }
  Event = (wil::details *)CreateEventExW(0LL, 0LL, 0, 0x1F0003u);
  if ( Event )
  {
    GetLastError();
    v13 = (_QWORD *)((char *)this + 2768);
    _reset___unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__QEAAXPEAX_Z(
      (wil::details **)this + 346,
      Event);
  }
  else
  {
    v13 = (_QWORD *)((char *)this + 2768);
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
  v14 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 (__fastcall *)(void *, unsigned int, void *), DockDeviceCollection *))(**((_QWORD **)this + 345) + 272LL))(
          *((_QWORD *)this + 345),
          *v13,
          DockDeviceCollection::OnReportQueryCallbackStatic,
          this);
  v15 = v14;
  if ( v14 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x46,
    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\dockdevicecollection.cpp",
    (const char *)(unsigned int)v14);
  return v15;
}
