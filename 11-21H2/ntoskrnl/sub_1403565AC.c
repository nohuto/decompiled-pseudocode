/*
 * XREFs of sub_1403565AC @ 0x1403565AC
 * Callers:
 *     sub_140356454 @ 0x140356454 (sub_140356454.c)
 *     sub_1403B17EC @ 0x1403B17EC (sub_1403B17EC.c)
 *     sub_14045E4C2 @ 0x14045E4C2 (sub_14045E4C2.c)
 *     sub_1405D4C64 @ 0x1405D4C64 (sub_1405D4C64.c)
 *     sub_1405D4D6C @ 0x1405D4D6C (sub_1405D4D6C.c)
 *     sub_1405D4E64 @ 0x1405D4E64 (sub_1405D4E64.c)
 *     sub_1405D5360 @ 0x1405D5360 (sub_1405D5360.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1403565AC(unsigned int *a1, __int64 a2, int a3)
{
  __int64 result; // rax
  __int64 v4; // rdx
  _DWORD *v5; // rcx

  if ( !a3 )
    return 0LL;
  result = a1[30];
  if ( a3 == 2 )
  {
    if ( a2 )
      return (unsigned int)(*(_DWORD *)(a2 + 104) + result);
  }
  else if ( a3 == 3 )
  {
    v4 = a1[45];
    if ( (_DWORD)v4 )
    {
      v5 = a1 + 74;
      do
      {
        result = (unsigned int)(*v5 + result);
        v5 += 52;
        --v4;
      }
      while ( v4 );
    }
  }
  return result;
}
