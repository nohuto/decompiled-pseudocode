/*
 * XREFs of ?NotifyOnDeadObserver@CProcessAttributionManager@@AEAAXPEAVCProcessAttributionObserver@@@Z @ 0x1801AE8CC
 * Callers:
 *     ??1Observer@CProcessAttributionManager@@UEAA@XZ @ 0x1801AE7BC (--1Observer@CProcessAttributionManager@@UEAA@XZ.c)
 * Callees:
 *     memmove_0 @ 0x18010518B (memmove_0.c)
 *     _lambda_73f2a4da0cca98f221385d01cc2cbc64_::operator() @ 0x1801AE84C (_lambda_73f2a4da0cca98f221385d01cc2cbc64_--operator().c)
 */

void __fastcall CProcessAttributionManager::NotifyOnDeadObserver(
        CProcessAttributionManager *this,
        struct CProcessAttributionObserver *a2)
{
  struct CProcessAttributionObserver **v2; // rdi
  struct CProcessAttributionObserver **v4; // rdx
  CProcessAttributionManager *v5; // r14
  CProcessAttributionManager **i; // rax
  size_t v7; // rbx
  __int64 *v8; // rdi
  __int64 *v9; // rsi
  __int64 v10; // rax
  __int64 *v11; // rsi
  __int64 *j; // rdi
  __int64 *k; // rbx
  size_t v14; // rbx

  v2 = (struct CProcessAttributionObserver **)*((_QWORD *)this + 3);
  v4 = (struct CProcessAttributionObserver **)*((_QWORD *)this + 4);
  v5 = this;
  while ( v2 != v4 && *v2 != a2 )
    ++v2;
  if ( v2 != v4 )
  {
    for ( i = v2 + 1; i != v4; ++i )
    {
      this = *i;
      if ( *i != a2 )
        *v2++ = this;
    }
    if ( v2 != v4 )
    {
      v7 = *((_QWORD *)v5 + 4) - (_QWORD)v4;
      memmove_0(v2, v4, v7);
      *((_QWORD *)v5 + 4) = (char *)v2 + v7;
    }
  }
  v8 = *(__int64 **)v5;
  v9 = (__int64 *)*((_QWORD *)v5 + 1);
  if ( *(__int64 **)v5 != v9 )
  {
    do
    {
      v10 = *v8++;
      --*(_DWORD *)(v10 + 160);
    }
    while ( v8 != v9 );
    v11 = (__int64 *)*((_QWORD *)v5 + 1);
    for ( j = *(__int64 **)v5; j != v11 && !lambda_73f2a4da0cca98f221385d01cc2cbc64_::operator()((__int64)this, *j); ++j )
      ;
    if ( j != v11 )
    {
      for ( k = j + 1; k != v11; ++k )
      {
        if ( !lambda_73f2a4da0cca98f221385d01cc2cbc64_::operator()((__int64)this, *k) )
          *j++ = *k;
      }
      if ( j != v11 )
      {
        v14 = *((_QWORD *)v5 + 1) - (_QWORD)v11;
        memmove_0(j, v11, v14);
        *((_QWORD *)v5 + 1) = (char *)j + v14;
      }
    }
  }
}
