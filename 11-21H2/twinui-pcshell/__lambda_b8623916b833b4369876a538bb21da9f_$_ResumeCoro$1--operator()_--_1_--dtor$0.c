/*
 * XREFs of __lambda_b8623916b833b4369876a538bb21da9f_$_ResumeCoro$1::operator()_::_1_::dtor$0 @ 0x1801BB218
 * Callers:
 *     <none>
 * Callees:
 *     ??1awaitable@?1??resume_after@winrt@@YA@V?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@chrono@std@@@Z@QEAA@XZ @ 0x180158CE0 (--1awaitable@-1--resume_after@winrt@@YA@V-$duration@_JU-$ratio@$00$0JIJGIA@@std@@@chrono@std@@@Z.c)
 */

void __fastcall _lambda_b8623916b833b4369876a538bb21da9f___ResumeCoro_1::operator()_::_1_::dtor_0(
        __int64 a1,
        __int64 a2)
{
  *(_QWORD *)(a2 + 40) = *(_QWORD *)(a2 + 80) + 16LL;
  `winrt::resume_after'::`2'::awaitable::~awaitable(*(_QWORD *)(a2 + 40));
}
