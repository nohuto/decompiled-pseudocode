/*
 * XREFs of std::_Func_impl_no_alloc__lambda_fd18c6a3b571192092869a19e3ba0802__void_::_Do_call @ 0x1800EE720
 * Callers:
 *     <none>
 * Callees:
 *     ?ResetEvent@details@wil@@YAXPEAX@Z @ 0x1800CF0BC (-ResetEvent@details@wil@@YAXPEAX@Z.c)
 */

void __fastcall std::_Func_impl_no_alloc__lambda_fd18c6a3b571192092869a19e3ba0802__void_::_Do_call(
        __int64 a1,
        void *a2)
{
  wil::details::ResetEvent(*(wil::details **)(*(_QWORD *)(a1 + 8) + 360LL), a2);
  CAudioStream::PublishAudioEffects(*(CAudioStream **)(a1 + 8));
}
