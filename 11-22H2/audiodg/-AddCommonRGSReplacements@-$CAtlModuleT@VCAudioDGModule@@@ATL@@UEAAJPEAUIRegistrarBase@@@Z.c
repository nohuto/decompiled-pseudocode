/*
 * XREFs of ?AddCommonRGSReplacements@?$CAtlModuleT@VCAudioDGModule@@@ATL@@UEAAJPEAUIRegistrarBase@@@Z @ 0x140050B40
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F210 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall ATL::CAtlModuleT<CAudioDGModule>::AddCommonRGSReplacements(__int64 a1, __int64 a2)
{
  return (*(__int64 (__fastcall **)(__int64, const wchar_t *, void *))(*(_QWORD *)a2 + 24LL))(
           a2,
           L"APPID",
           &unk_1400AF8C4);
}
