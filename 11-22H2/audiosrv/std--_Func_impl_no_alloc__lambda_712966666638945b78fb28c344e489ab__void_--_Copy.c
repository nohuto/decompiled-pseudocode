/*
 * XREFs of std::_Func_impl_no_alloc__lambda_712966666638945b78fb28c344e489ab__void_::_Copy @ 0x180073E20
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$shared_ptr@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@QEAA@AEBV01@@Z @ 0x180025520 (--0-$shared_ptr@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@std@@QEAA@AEBV01@.c)
 */

__int64 __fastcall std::_Func_impl_no_alloc__lambda_712966666638945b78fb28c344e489ab__void_::_Copy(
        __int64 a1,
        _QWORD *a2)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 result; // rax
  __int64 v5; // rcx

  *a2 = off_180170940;
  std::shared_ptr<std::wstring>::shared_ptr<std::wstring>(a2 + 1, (_QWORD *)(a1 + 8));
  result = v3;
  *(_OWORD *)(v5 + 16) = *(_OWORD *)(v2 + 16);
  return result;
}
