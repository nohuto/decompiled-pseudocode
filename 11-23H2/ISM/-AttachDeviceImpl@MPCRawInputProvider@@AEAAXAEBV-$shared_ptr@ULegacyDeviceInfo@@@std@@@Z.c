/*
 * XREFs of ?AttachDeviceImpl@MPCRawInputProvider@@AEAAXAEBV?$shared_ptr@ULegacyDeviceInfo@@@std@@@Z @ 0x1800CF094
 * Callers:
 *     ?AttachDevice@MPCRawInputProvider@@QEAAJW4InputType@@PEAK@Z @ 0x1800CEF6C (-AttachDevice@MPCRawInputProvider@@QEAAJW4InputType@@PEAK@Z.c)
 *     ?FlushQueuedDeviceChanges@MPCRawInputProvider@@AEAAXXZ @ 0x1800CF180 (-FlushQueuedDeviceChanges@MPCRawInputProvider@@AEAAXXZ.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800581C4 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180058998 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$_Emplace_reallocate@AEBV?$shared_ptr@ULegacyDeviceInfo@@@std@@@?$vector@V?$shared_ptr@ULegacyDeviceInfo@@@std@@V?$allocator@V?$shared_ptr@ULegacyDeviceInfo@@@std@@@2@@std@@QEAAPEAV?$shared_ptr@ULegacyDeviceInfo@@@1@QEAV21@AEBV21@@Z @ 0x1800CE7E8 (--$_Emplace_reallocate@AEBV-$shared_ptr@ULegacyDeviceInfo@@@std@@@-$vector@V-$shared_ptr@ULegacy.c)
 *     ??0?$shared_ptr@VSystemCursorShapeBitmap2@@@std@@QEAA@AEBV01@@Z @ 0x1800CEB34 (--0-$shared_ptr@VSystemCursorShapeBitmap2@@@std@@QEAA@AEBV01@@Z.c)
 */

char *__fastcall MPCRawInputProvider::AttachDeviceImpl(__int64 a1, _QWORD *a2, __int64 a3, const char *a4)
{
  __int64 *v4; // rbx
  _DWORD **i; // r8
  int v7; // eax
  _QWORD *v8; // rcx
  char *result; // rax
  int v10; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = (__int64 *)(a1 + 24);
  for ( i = *(_DWORD ***)(a1 + 24); i != *(_DWORD ***)(a1 + 32); i += 2 )
  {
    if ( **i == *(_DWORD *)*a2 )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x138,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\mpc\\lib\\mpcrawinputprovider.cpp",
        a4);
  }
  v7 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(**(_QWORD **)(a1 + 16) + 40LL))(
         *(_QWORD *)(a1 + 16),
         *a2,
         a1);
  if ( v7 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x13A,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\mpc\\lib\\mpcrawinputprovider.cpp",
      (const char *)(unsigned int)v7,
      v10);
  v8 = (_QWORD *)v4[1];
  if ( v8 == (_QWORD *)v4[2] )
    return std::vector<std::shared_ptr<LegacyDeviceInfo>>::_Emplace_reallocate<std::shared_ptr<LegacyDeviceInfo> const &>(
             v4,
             v4[1],
             (__int64)a2);
  result = (char *)std::shared_ptr<SystemCursorShapeBitmap2>::shared_ptr<SystemCursorShapeBitmap2>(v8, a2);
  v4[1] += 16LL;
  return result;
}
