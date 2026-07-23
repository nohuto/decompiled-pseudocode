/*
 * XREFs of sub_140858F98 @ 0x140858F98
 * Callers:
 *     sub_1407483B4 @ 0x1407483B4 (sub_1407483B4.c)
 *     sub_140958F84 @ 0x140958F84 (sub_140958F84.c)
 * Callees:
 *     qsort @ 0x1403E1E70 (qsort.c)
 */

unsigned __int64 __fastcall sub_140858F98(__int64 a1)
{
  unsigned __int64 result; // rax
  unsigned __int64 *v2; // rdi
  unsigned __int64 *v4; // rsi
  unsigned __int64 v5; // rdx
  unsigned __int64 *j; // rcx
  unsigned int i; // edx
  unsigned int v8; // eax

  result = *(unsigned int *)(a1 + 32);
  v2 = 0LL;
  if ( (unsigned int)result > 1 )
  {
    for ( i = 0; i < v8; ++i )
    {
      *(_DWORD *)(*(_QWORD *)(a1 + 8LL * i + 40) + 4LL) = i;
      v8 = *(_DWORD *)(a1 + 32);
    }
    v4 = (unsigned __int64 *)(a1 + 40);
    qsort((void *)(a1 + 40), v8, 8uLL, sub_14085F8A0);
    result = *(unsigned int *)(a1 + 32);
  }
  else
  {
    v4 = (unsigned __int64 *)(a1 + 40);
  }
  v5 = (unsigned __int64)&v4[result];
  for ( j = v4; (unsigned __int64)j < v5; ++j )
  {
    result = *j;
    if ( *(_DWORD *)*j > 0x7FFFu )
      break;
  }
  if ( j != v4 )
    v2 = j;
  *(_QWORD *)(a1 + 24) = v2;
  return result;
}
