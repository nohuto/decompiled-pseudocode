/*
 * XREFs of ??4?$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUIMMDevice@@@Z @ 0x1400717AC
 * Callers:
 *     ??$MakeAndInitialize@VCAPOEndpointNotificationsHandler@@V1@AEAPEAUIMMDevice@@@Details@WRL@Microsoft@@YAJPEAPEAVCAPOEndpointNotificationsHandler@@AEAPEAUIMMDevice@@@Z @ 0x14006A5A0 (--$MakeAndInitialize@VCAPOEndpointNotificationsHandler@@V1@AEAPEAUIMMDevice@@@Details@WRL@Micros.c)
 *     ?RuntimeClassInitialize@CAudioSystemEffectsPropertyChangeNotificationsHandler@@QEAAJPEBGU_GUID@@PEAUIMMDevice@@@Z @ 0x140073524 (-RuntimeClassInitialize@CAudioSystemEffectsPropertyChangeNotificationsHandler@@QEAAJPEBGU_GUID@@.c)
 *     ?RuntimeClassInitialize@CMicBoostNotificationsHandler@@QEAAJPEAUIMMDevice@@@Z @ 0x1400786D8 (-RuntimeClassInitialize@CMicBoostNotificationsHandler@@QEAAJPEAUIMMDevice@@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F1D0 (_guard_xfg_dispatch_icall_nop.c)
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
