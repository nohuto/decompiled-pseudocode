/*
 * XREFs of sub_1409B1860 @ 0x1409B1860
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     sub_140683990 @ 0x140683990 (sub_140683990.c)
 */

__int64 sub_1409B1860()
{
  void *v0; // rbx
  __int64 result; // rax

  do
  {
    _InterlockedExchange(&dword_140D3B10C, 1);
    while ( qword_140D3B138 )
    {
      v0 = (void *)_InterlockedExchange64(&qword_140D3B138, 0LL);
      if ( !v0 )
        break;
      sub_140683990((ULONG_PTR)v0, 0);
      ObfDereferenceObjectWithTag(v0, 0x77537350u);
    }
    result = (unsigned int)_InterlockedCompareExchange(&dword_140D3B10C, 0, 1);
  }
  while ( (_DWORD)result != 1 );
  return result;
}
