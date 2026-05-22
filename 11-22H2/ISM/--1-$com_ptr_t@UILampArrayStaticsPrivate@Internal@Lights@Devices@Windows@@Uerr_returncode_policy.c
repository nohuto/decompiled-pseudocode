/*
 * XREFs of ??1?$com_ptr_t@UILampArrayStaticsPrivate@Internal@Lights@Devices@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800621A4
 * Callers:
 *     ??1?$NtList@UAmbientListEntry@LampArrayRawInputProvider@@@@QEAA@XZ @ 0x18006213C (--1-$NtList@UAmbientListEntry@LampArrayRawInputProvider@@@@QEAA@XZ.c)
 *     _lambda_9ed77799b713aee1828fcea8d6a76348_::operator() @ 0x18006232C (_lambda_9ed77799b713aee1828fcea8d6a76348_--operator().c)
 *     ?EnsureAmbientManager@LampArrayRawInputProvider@@AEAAJXZ @ 0x180062544 (-EnsureAmbientManager@LampArrayRawInputProvider@@AEAAJXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall wil::com_ptr_t<Windows::Devices::Lights::Internal::ILampArrayStaticsPrivate,wil::err_returncode_policy>::~com_ptr_t<Windows::Devices::Lights::Internal::ILampArrayStaticsPrivate,wil::err_returncode_policy>(
        __int64 *a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
  return result;
}
