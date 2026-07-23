/*
 * XREFs of sub_1409B17B0 @ 0x1409B17B0
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     sub_140683990 @ 0x140683990 (sub_140683990.c)
 *     sub_1407B6B90 @ 0x1407B6B90 (sub_1407B6B90.c)
 */

__int64 sub_1409B17B0()
{
  __int64 *v0; // rcx
  __int64 *v1; // rax
  __int64 *v2; // rbx
  void *v3; // rbx
  __int64 result; // rax

  do
  {
    v0 = 0LL;
    _InterlockedExchange(&dword_140D3B108, 1);
    while ( 1 )
    {
      v1 = sub_1407B6B90(v0);
      v2 = v1;
      if ( !v1 )
        break;
      if ( _interlockedbittestandreset((volatile signed __int32 *)v1 + 280, 8u) )
      {
        sub_140683990((ULONG_PTR)v1, 0);
        ObfDereferenceObjectWithTag(v2, 0x77537350u);
      }
      v0 = v2;
    }
    while ( qword_140D3B138 )
    {
      v3 = (void *)_InterlockedExchange64(&qword_140D3B138, 0LL);
      if ( !v3 )
        break;
      sub_140683990((ULONG_PTR)v3, 0);
      ObfDereferenceObjectWithTag(v3, 0x77537350u);
    }
    result = (unsigned int)_InterlockedCompareExchange(&dword_140D3B108, 0, 1);
  }
  while ( (_DWORD)result != 1 );
  return result;
}
