/*
 * XREFs of ??0?$com_ptr_t@VAtmosCheck@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVAtmosCheck@@@Z @ 0x18005D990
 * Callers:
 *     ?Initialize@AtmosCheck@@QEAAJW4AtmosRegistration@@PEAVIAtmosCodecsStatusChangedCallback@@@Z @ 0x18005D69C (-Initialize@AtmosCheck@@QEAAJW4AtmosRegistration@@PEAVIAtmosCodecsStatusChangedCallback@@@Z.c)
 *     ?OnDeviceStateChanged@AtmosCheck@@UEAAJPEBGK@Z @ 0x18015C3E0 (-OnDeviceStateChanged@AtmosCheck@@UEAAJPEBGK@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 */

_QWORD *__fastcall wil::com_ptr_t<AtmosCheck,wil::err_returncode_policy>::com_ptr_t<AtmosCheck,wil::err_returncode_policy>(
        _QWORD *a1,
        __int64 a2)
{
  *a1 = a2;
  if ( a2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
  return a1;
}
