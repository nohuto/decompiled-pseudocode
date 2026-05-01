/*
 * XREFs of ??1?$ComPtr@VCAppMemoryReport@System@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180019FC0
 * Callers:
 *     ?GetAppMemoryReport@CMemoryManager@System@Windows@@UEAAJPEAPEAUIAppMemoryReport@23@@Z @ 0x180005EF0 (-GetAppMemoryReport@CMemoryManager@System@Windows@@UEAAJPEAPEAUIAppMemoryReport@23@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180015750 (_guard_xfg_dispatch_icall_nop.c)
 */

_QWORD *__fastcall Microsoft::WRL::ComPtr<Windows::System::CAppMemoryReport>::~ComPtr<Windows::System::CAppMemoryReport>(
        _QWORD *a1)
{
  _QWORD *result; // rax
  __int64 v2; // rcx

  result = a1;
  v2 = *a1;
  if ( v2 )
  {
    *result = 0LL;
    return (_QWORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  return result;
}
