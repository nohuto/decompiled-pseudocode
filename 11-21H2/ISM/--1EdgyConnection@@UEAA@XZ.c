/*
 * XREFs of ??1EdgyConnection@@UEAA@XZ @ 0x1801A94A4
 * Callers:
 *     ??_EEdgyConnection@@UEAAPEAXI@Z @ 0x1801A9590 (--_EEdgyConnection@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ @ 0x18000BC64 (-InternalRelease@-$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000E6AC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?reset@?$unique_com_token@UIMessageSession@@_K$$A6AXPEAU1@_K@Z$1?IMessageSessionCloseEndpointFunction@details@wil@@YAX01@Z$0A@@wil@@QEAAXPEAUIMessageSession@@_K@Z @ 0x1800409D8 (-reset@-$unique_com_token@UIMessageSession@@_K$$A6AXPEAU1@_K@Z$1-IMessageSessionCloseEndpointFun.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C7A4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?InternalRelease@?$ComPtr@VShellGesturesClientProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x180080384 (-InternalRelease@-$ComPtr@VShellGesturesClientProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$_Destroy_range@V?$allocator@VEdge@@@std@@@std@@YAXPEAVEdge@@QEAV1@AEAV?$allocator@VEdge@@@0@@Z @ 0x1801A9430 (--$_Destroy_range@V-$allocator@VEdge@@@std@@@std@@YAXPEAVEdge@@QEAV1@AEAV-$allocator@VEdge@@@0@@.c)
 */

void __fastcall EdgyConnection::~EdgyConnection(EdgyConnection *this)
{
  int v2; // eax
  Edge *v3; // rcx
  unsigned __int64 v4; // r8
  unsigned __int64 v5; // r8
  int v6; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *(_QWORD *)this = &EdgyConnection::`vftable';
  if ( *((_QWORD *)this + 5) )
  {
    v2 = (*(__int64 (__fastcall **)(_QWORD, const wchar_t *, _QWORD))(**((_QWORD **)this + 3) + 48LL))(
           *((_QWORD *)this + 3),
           L"EdgyConfigurationEndpoint",
           0LL);
    if ( v2 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x25,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\edgylegacy\\processor\\edgyconnection.cpp",
        (const char *)(unsigned int)v2,
        v6);
  }
  v3 = (Edge *)*((_QWORD *)this + 9);
  if ( v3 )
  {
    std::_Destroy_range<std::allocator<Edge>>(v3, *((Edge **)this + 10));
    std::_Deallocate<16,0>(
      *((void **)this + 9),
      (*((_QWORD *)this + 11) - *((_QWORD *)this + 9)) & 0xFFFFFFFFFFFFFF80uLL);
    *((_QWORD *)this + 9) = 0LL;
    *((_QWORD *)this + 10) = 0LL;
    *((_QWORD *)this + 11) = 0LL;
  }
  Microsoft::WRL::ComPtr<ShellGesturesClientProxy>::InternalRelease((__int64 *)this + 8);
  wil::unique_com_token<IMessageSession,unsigned __int64,void (IMessageSession *,unsigned __int64),&void wil::details::IMessageSessionCloseEndpointFunction(IMessageSession *,unsigned __int64),0>::reset(
    (wil::details **)this + 6,
    0LL,
    v4);
  wil::unique_com_token<IMessageSession,unsigned __int64,void (IMessageSession *,unsigned __int64),&void wil::details::IMessageSessionCloseEndpointFunction(IMessageSession *,unsigned __int64),0>::reset(
    (wil::details **)this + 4,
    0LL,
    v5);
  Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease((__int64 *)this + 3);
  Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease((__int64 *)this + 2);
  *(_QWORD *)this = &RefCountedObject::`vftable';
}
