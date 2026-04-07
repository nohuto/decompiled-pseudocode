/*
 * XREFs of ?Create@CGraphicsDeviceManager@@SAJPEAPEAV1@@Z @ 0x18005600C
 * Callers:
 *     ?Initialize@CDesktopManager@@AEAAJPEAUIUnknown@@@Z @ 0x180052CB0 (-Initialize@CDesktopManager@@AEAAJPEAUIUnknown@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800049E0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x180013914 (-reset@-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@_E$1-CloseHandle@details@wil@@YAX0@ZU-$i.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180028A00 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?InitializeGraphicsDevice@CGraphicsDeviceManager@@IEAAJXZ @ 0x180056214 (-InitializeGraphicsDevice@CGraphicsDeviceManager@@IEAAJXZ.c)
 *     memset_0 @ 0x180060F40 (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetLastErrorFailHr@details@wil@@YAJXZ @ 0x18009496C (-GetLastErrorFailHr@details@wil@@YAJXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CGraphicsDeviceManager::Create(struct CGraphicsDeviceManager **a1)
{
  void *v2; // rax
  void *v3; // rbx
  wil::details *v4; // rcx
  wil::details *Event; // rdi
  int LastErrorFailHr; // eax
  unsigned int v7; // edi
  struct CGraphicsDeviceManager *v8; // rax
  __int64 v10; // rdx
  __int64 v11; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *a1 = 0LL;
  v2 = (void *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
                 WPF::g_pProcessHeap,
                 72LL);
  v3 = v2;
  if ( !v2 )
  {
    v3 = 0LL;
    v7 = -2147024882;
    v11 = 27LL;
    goto LABEL_14;
  }
  memset_0(v2, 0, 0x48uLL);
  *((_DWORD *)v3 + 2) = 1;
  *(_QWORD *)v3 = &CGraphicsDeviceManager::`vftable';
  *((_QWORD *)v3 + 2) = 0LL;
  *((_QWORD *)v3 + 3) = 0LL;
  *((_QWORD *)v3 + 4) = 0LL;
  *((_QWORD *)v3 + 5) = 0LL;
  *((_QWORD *)v3 + 6) = 0LL;
  *((_QWORD *)v3 + 7) = 0LL;
  *((_QWORD *)v3 + 7) = 0LL;
  *((_DWORD *)v3 + 16) = 0;
  Event = (wil::details *)CreateEventExW(0LL, 0LL, 1u, 0x1F0003u);
  if ( Event )
  {
    GetLastError();
    _reset___unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__QEAAXPEAX_Z(
      (wil::details **)v3 + 7,
      Event);
LABEL_4:
    LastErrorFailHr = CGraphicsDeviceManager::InitializeGraphicsDevice((CGraphicsDeviceManager *)v3);
    v7 = LastErrorFailHr;
    if ( LastErrorFailHr >= 0 )
    {
      v8 = (struct CGraphicsDeviceManager *)v3;
      v3 = 0LL;
      *a1 = v8;
      v7 = 0;
      goto LABEL_6;
    }
    v10 = 40LL;
    goto LABEL_12;
  }
  LastErrorFailHr = wil::details::GetLastErrorFailHr(v4);
  v7 = LastErrorFailHr;
  if ( LastErrorFailHr >= 0 )
    goto LABEL_4;
  v10 = 39LL;
LABEL_12:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v10,
    (int)"clientcore\\windows\\dwm\\udwm\\graphicsdevicemanager.cpp",
    (const char *)(unsigned int)LastErrorFailHr);
  v11 = 29LL;
LABEL_14:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v11,
    (int)"clientcore\\windows\\dwm\\udwm\\graphicsdevicemanager.cpp",
    (const char *)v7);
LABEL_6:
  if ( v3 )
    CBaseObject::Release((CBaseObject *)v3);
  return v7;
}
