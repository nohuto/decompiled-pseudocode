/*
 * XREFs of ?WorkAreaMayHaveChanged@XamlLauncher@@UEAAJPEAUHMONITOR__@@@Z @ 0x1801726A0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ReleaseAndGetAddressOf@?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveMonitor@@XZ @ 0x18015DFA8 (-ReleaseAndGetAddressOf@-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveMonito.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetMonitor@ImmersiveMonitorHelper@@QEAAJPEAPEAUIImmersiveMonitor@@@Z @ 0x18022DA22 (-GetMonitor@ImmersiveMonitorHelper@@QEAAJPEAPEAUIImmersiveMonitor@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall XamlLauncher::WorkAreaMayHaveChanged(XamlLauncher *this, HMONITOR a2)
{
  __int64 v4; // rcx
  ImmersiveMonitorHelper *v6; // rbx
  __int64 *AddressOf; // rax
  int Monitor; // eax
  int v9; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v11; // [rsp+30h] [rbp+8h] BYREF
  HMONITOR v12; // [rsp+40h] [rbp+18h] BYREF

  v4 = *((_QWORD *)this + 39);
  if ( !v4 )
    return 2147943568LL;
  if ( !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v4 + 104LL))(v4)
    && !(*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)this + 39) + 144LL))(*((_QWORD *)this + 39)) )
  {
    return 0LL;
  }
  v11 = 0LL;
  v6 = (ImmersiveMonitorHelper *)*((_QWORD *)this + 22);
  AddressOf = Microsoft::WRL::ComPtr<IImmersiveMonitor>::ReleaseAndGetAddressOf(&v11);
  Monitor = ImmersiveMonitorHelper::GetMonitor(v6, (struct IImmersiveMonitor **)AddressOf);
  v9 = Monitor;
  if ( Monitor >= 0 )
  {
    v9 = (*(__int64 (__fastcall **)(__int64, HMONITOR *))(*(_QWORD *)v11 + 40LL))(v11, &v12);
    if ( v9 >= 0 )
    {
      if ( a2 != v12
        || (v9 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 18) + 104LL))(*((_QWORD *)this + 18)), v9 >= 0) )
      {
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v11);
        return 0LL;
      }
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1CB,
      (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
      (const char *)(unsigned int)Monitor);
  }
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v11);
  return (unsigned int)v9;
}
