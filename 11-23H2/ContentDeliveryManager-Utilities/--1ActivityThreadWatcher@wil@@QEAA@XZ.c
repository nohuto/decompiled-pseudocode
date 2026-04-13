/*
 * XREFs of ??1ActivityThreadWatcher@wil@@QEAA@XZ @ 0x18008FE0C
 * Callers:
 *     _lambda_4f27881777b3828299edd9a0e9cb6746_::operator() @ 0x18009005C (_lambda_4f27881777b3828299edd9a0e9cb6746_--operator().c)
 *     __lambda_4f27881777b3828299edd9a0e9cb6746_::operator()_::_1_::dtor$1 @ 0x1800D8AF5 (__lambda_4f27881777b3828299edd9a0e9cb6746_--operator()_--_1_--dtor$1.c)
 * Callees:
 *     ??1ThreadFailureCallbackHolder@details@wil@@QEAA@XZ @ 0x1800535E0 (--1ThreadFailureCallbackHolder@details@wil@@QEAA@XZ.c)
 */

void __fastcall wil::ActivityThreadWatcher::~ActivityThreadWatcher(wil::ActivityThreadWatcher *this)
{
  wil::details::ThreadFailureCallbackHolder::~ThreadFailureCallbackHolder((wil::ActivityThreadWatcher *)((char *)this + 32));
  wil::details::StoredCallContextInfo::ClearMessage(this);
}
