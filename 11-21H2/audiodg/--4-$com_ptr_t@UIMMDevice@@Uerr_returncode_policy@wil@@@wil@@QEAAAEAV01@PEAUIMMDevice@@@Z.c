/*
 * XREFs of ??4?$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUIMMDevice@@@Z @ 0x14006953C
 * Callers:
 *     ?RuntimeClassInitialize@CAPOEndpointNotificationsHandler@@QEAAJPEBGPEAUIMMDevice@@@Z @ 0x14006A1F0 (-RuntimeClassInitialize@CAPOEndpointNotificationsHandler@@QEAAJPEBGPEAUIMMDevice@@@Z.c)
 *     ?RuntimeClassInitialize@CAudioSystemEffectsPropertyChangeNotificationsHandler@@QEAAJPEBGU_GUID@@PEAUIMMDevice@@@Z @ 0x14006AF48 (-RuntimeClassInitialize@CAudioSystemEffectsPropertyChangeNotificationsHandler@@QEAAJPEBGU_GUID@@.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 *__fastcall wil::com_ptr_t<IMMDevice,wil::err_returncode_policy>::operator=(__int64 *a1, __int64 a2)
{
  __int64 v3; // rdi

  v3 = *a1;
  *a1 = a2;
  if ( a2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  return a1;
}
