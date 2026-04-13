/*
 * XREFs of ??0StoredCallContextInfo@details@wil@@QEAA@AEBV012@@Z @ 0x18008F80C
 * Callers:
 *     _lambda_4f27881777b3828299edd9a0e9cb6746_::operator() @ 0x18009005C (_lambda_4f27881777b3828299edd9a0e9cb6746_--operator().c)
 * Callees:
 *     <none>
 */

wil::details::StoredCallContextInfo *__fastcall wil::details::StoredCallContextInfo::StoredCallContextInfo(
        wil::details::StoredCallContextInfo *this,
        const struct wil::details::StoredCallContextInfo *a2)
{
  _WORD *v3; // rdi
  __int64 v4; // rax
  __int64 v5; // rsi
  HANDLE ProcessHeap; // rax
  void *v7; // rax

  *((_BYTE *)this + 24) = 0;
  *(_DWORD *)this = *(_DWORD *)a2;
  *((_QWORD *)this + 1) = *((_QWORD *)a2 + 1);
  v3 = (_WORD *)*((_QWORD *)a2 + 2);
  if ( *((_BYTE *)a2 + 24) )
  {
    v4 = -1LL;
    do
      ++v4;
    while ( v3[v4] );
    if ( v4 )
    {
      v5 = 2 * v4 + 2;
      ProcessHeap = GetProcessHeap();
      v7 = HeapAlloc(ProcessHeap, 0, v5);
      *((_QWORD *)this + 2) = v7;
      if ( v7 )
      {
        *((_BYTE *)this + 24) = 1;
        memcpy_s(v7, v5, v3, v5);
      }
    }
  }
  else
  {
    *((_QWORD *)this + 2) = v3;
  }
  return this;
}
