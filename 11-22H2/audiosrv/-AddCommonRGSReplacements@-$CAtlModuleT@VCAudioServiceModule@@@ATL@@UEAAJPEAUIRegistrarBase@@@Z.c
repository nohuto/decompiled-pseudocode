/*
 * XREFs of ?AddCommonRGSReplacements@?$CAtlModuleT@VCAudioServiceModule@@@ATL@@UEAAJPEAUIRegistrarBase@@@Z @ 0x1800EF590
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall ATL::CAtlModuleT<CAudioServiceModule>::AddCommonRGSReplacements(__int64 a1, __int64 a2)
{
  return (*(__int64 (__fastcall **)(__int64, const wchar_t *, const WCHAR *))(*(_QWORD *)a2 + 24LL))(
           a2,
           L"APPID",
           &String2);
}
