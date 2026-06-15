/*
 * XREFs of std::_Func_impl_no_alloc__lambda_87bf9f13687bedce95b5ee608297e79e__void_::_Do_call @ 0x18010ADD0
 * Callers:
 *     <none>
 * Callees:
 *     ?OnMfxEffectsChanged@CAudioStream@@QEAAXXZ @ 0x180016884 (-OnMfxEffectsChanged@CAudioStream@@QEAAXXZ.c)
 *     ?ResetEvent@details@wil@@YAXPEAX@Z @ 0x1800CF06C (-ResetEvent@details@wil@@YAXPEAX@Z.c)
 */

void __fastcall std::_Func_impl_no_alloc__lambda_87bf9f13687bedce95b5ee608297e79e__void_::_Do_call(
        __int64 a1,
        void *a2)
{
  __int64 v3; // rax
  _QWORD *v4; // rdi
  _QWORD *i; // rbx

  wil::details::ResetEvent(*(wil::details **)(*(_QWORD *)(a1 + 8) + 1824LL), a2);
  v3 = *(_QWORD *)(a1 + 8);
  v4 = *(_QWORD **)(v3 + 208);
  for ( i = *(_QWORD **)(v3 + 200); i != v4; ++i )
    CAudioStream::OnMfxEffectsChanged((CAudioStream *)((*i - 8LL) & -(__int64)(*i != 0LL)), (void *)(*i - 8LL));
}
