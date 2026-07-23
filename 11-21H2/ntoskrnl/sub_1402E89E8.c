/*
 * XREFs of sub_1402E89E8 @ 0x1402E89E8
 * Callers:
 *     sub_1402E8BCC @ 0x1402E8BCC (sub_1402E8BCC.c)
 * Callees:
 *     sub_1402E901C @ 0x1402E901C (sub_1402E901C.c)
 */

__int64 __fastcall sub_1402E89E8(__int64 a1, __int64 *a2, unsigned int a3)
{
  unsigned int v5; // esi
  __int64 v6; // rbx
  __int64 *v7; // rdi
  __int64 v8; // rax
  __int64 v10; // rbp

  v5 = 1;
  v6 = 0LL;
  v7 = a2;
  do
  {
    v8 = *v7;
    if ( *v7 != -1 )
    {
      v10 = 48 * v8;
      if ( _interlockedbittestandset64((volatile signed __int32 *)(48 * v8 - 0x21FFFFFFFFE8LL), 0x3FuLL) )
      {
        v5 = 0;
      }
      else
      {
        sub_1402E901C(&a2[v6], a3, -1LL);
        _InterlockedAnd64((volatile signed __int64 *)(v10 - 0x21FFFFFFFFE8LL), 0x7FFFFFFFFFFFFFFFuLL);
      }
    }
    v6 = (unsigned int)(v6 + 1);
    ++v7;
  }
  while ( (unsigned int)v6 < 0x40 );
  return v5;
}
