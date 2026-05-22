/*
 * XREFs of ??1?$com_ptr_t@UILampArrayStaticsPrivate@Internal@Lights@Devices@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180059A74
 * Callers:
 *     ??1?$NtList@UAmbientListEntry@LampArrayRawInputProvider@@@@QEAA@XZ @ 0x180059A0C (--1-$NtList@UAmbientListEntry@LampArrayRawInputProvider@@@@QEAA@XZ.c)
 *     _lambda_0b51ff8d1905919b0baadac0918cf5fb_::operator() @ 0x180059B08 (_lambda_0b51ff8d1905919b0baadac0918cf5fb_--operator().c)
 *     ?EnsureAmbientManager@LampArrayRawInputProvider@@AEAAJXZ @ 0x180059DD4 (-EnsureAmbientManager@LampArrayRawInputProvider@@AEAAJXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
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
