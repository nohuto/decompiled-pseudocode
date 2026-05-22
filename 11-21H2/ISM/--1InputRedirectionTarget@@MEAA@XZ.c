/*
 * XREFs of ??1InputRedirectionTarget@@MEAA@XZ @ 0x1801B1934
 * Callers:
 *     ??_GInputRedirectionTarget@@MEAAPEAXI@Z @ 0x1801B19C8 (--_GInputRedirectionTarget@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ @ 0x18000BC64 (-InternalRelease@-$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1?$unique_storage@U?$handle_null_resource_policy@P6AJPEAX@Z$1?NtCloseCompositionInputSink@@YAJ0@Z@details@wil@@@details@wil@@IEAA@XZ @ 0x180013EC0 (--1-$unique_storage@U-$handle_null_resource_policy@P6AJPEAX@Z$1-NtCloseCompositionInputSink@@YAJ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall InputRedirectionTarget::~InputRedirectionTarget(InputRedirectionTarget *this)
{
  __int64 *v2; // rdi
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9

  *(_QWORD *)this = &InputRedirectionTarget::`vftable'{for `IInputRedirectionTarget'};
  *((_QWORD *)this + 1) = &InputRedirectionTarget::`vftable'{for `IDCompInputTarget'};
  *((_QWORD *)this + 2) = &InputRedirectionTarget::`vftable'{for `RefCountedObject'};
  v2 = (__int64 *)((char *)this + 32);
  if ( *((_QWORD *)this + 5) )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)*v2 + 168LL))(*v2);
    *((_QWORD *)this + 5) = 0LL;
  }
  Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease(v2);
  wil::details::unique_storage<wil::details::handle_null_resource_policy<long (*)(void *),&long NtCloseCompositionInputSink(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<long (*)(void *),&long NtCloseCompositionInputSink(void *)>>(
    (__int64 *)this + 14,
    v3,
    v4,
    v5);
  Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease(v2);
  *((_QWORD *)this + 2) = &RefCountedObject::`vftable';
}
