/*
 * XREFs of ?attach@?$com_ptr_t@UISubmixProxy@@Uerr_returncode_policy@wil@@@wil@@QEAAXPEAUISubmixProxy@@@Z @ 0x1800E5F3C
 * Callers:
 *     ?PopulateAudioHistoryForStream@CVADServer@@UEAAJ_J00@Z @ 0x1800EF150 (-PopulateAudioHistoryForStream@CVADServer@@UEAAJ_J00@Z.c)
 *     ??4SystemAudioStream@@QEAAAEAU0@$$QEAU0@@Z @ 0x1800F7600 (--4SystemAudioStream@@QEAAAEAU0@$$QEAU0@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall wil::com_ptr_t<ISubmixProxy,wil::err_returncode_policy>::attach(__int64 *a1, __int64 a2)
{
  __int64 v2; // r8
  __int64 result; // rax

  v2 = *a1;
  *a1 = a2;
  if ( v2 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  return result;
}
