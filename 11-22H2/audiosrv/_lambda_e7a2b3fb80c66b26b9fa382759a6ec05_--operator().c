/*
 * XREFs of _lambda_e7a2b3fb80c66b26b9fa382759a6ec05_::operator() @ 0x1800E7CD4
 * Callers:
 *     wil::details::lambda_call__lambda_e7a2b3fb80c66b26b9fa382759a6ec05___::_lambda_call__lambda_e7a2b3fb80c66b26b9fa382759a6ec05___ @ 0x1800E77C4 (wil--details--lambda_call__lambda_e7a2b3fb80c66b26b9fa382759a6ec05___--_lambda_call__lambda_e7a2.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18000A850 (--3@YAXPEAX@Z.c)
 */

void __fastcall lambda_e7a2b3fb80c66b26b9fa382759a6ec05_::operator()(__int64 a1)
{
  int v1; // edi
  __int64 v3; // rbp

  v1 = 0;
  if ( **(int **)a1 > 0 )
  {
    v3 = 0LL;
    do
    {
      operator delete(*(void **)(**(_QWORD **)(a1 + 8) + v3));
      v3 += 8LL;
      ++v1;
    }
    while ( v1 < **(_DWORD **)a1 );
  }
  operator delete(**(void ***)(a1 + 8));
}
