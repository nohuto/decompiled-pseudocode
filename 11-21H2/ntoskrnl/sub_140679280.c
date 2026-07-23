/*
 * XREFs of sub_140679280 @ 0x140679280
 * Callers:
 *     sub_140678C4C @ 0x140678C4C (sub_140678C4C.c)
 *     sub_140679034 @ 0x140679034 (sub_140679034.c)
 * Callees:
 *     sub_1406792F4 @ 0x1406792F4 (sub_1406792F4.c)
 */

__int64 __fastcall sub_140679280(PVOID Object, _DWORD *a2, __int64 a3)
{
  __int64 result; // rax
  unsigned int v5; // ebx
  _QWORD *v6; // rdi

  result = (unsigned int)(*a2 | a2[1]);
  if ( *(_QWORD *)a2 )
  {
    v5 = 0;
    v6 = (_QWORD *)(a3 + 8);
    do
    {
      result = sub_1406792F4(Object, *v6 != 0LL ? 3 : 0);
      if ( (_BYTE)result )
        break;
      ++v5;
      ++v6;
    }
    while ( v5 < 7 );
  }
  return result;
}
