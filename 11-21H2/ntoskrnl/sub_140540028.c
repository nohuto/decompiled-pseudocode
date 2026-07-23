/*
 * XREFs of sub_140540028 @ 0x140540028
 * Callers:
 *     sub_140928158 @ 0x140928158 (sub_140928158.c)
 * Callees:
 *     sub_1405400A4 @ 0x1405400A4 (sub_1405400A4.c)
 */

__int64 __fastcall sub_140540028(PVOID Object, PVOID a2, PRKEVENT a3, __int64 a4, unsigned int a5)
{
  __int64 result; // rax
  __int64 v9; // rbx
  __int64 v10; // rdi

  result = a5;
  if ( a5 )
  {
    v9 = a4 + 16;
    v10 = a5;
    do
    {
      result = sub_1405400A4(Object, a2, *(_DWORD *)(v9 + 4), a3);
      v9 += 24LL;
      --v10;
    }
    while ( v10 );
  }
  return result;
}
