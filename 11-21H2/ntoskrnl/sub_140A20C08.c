/*
 * XREFs of sub_140A20C08 @ 0x140A20C08
 * Callers:
 *     sub_140A1FB1C @ 0x140A1FB1C (sub_140A1FB1C.c)
 * Callees:
 *     sub_140A20D6C @ 0x140A20D6C (sub_140A20D6C.c)
 */

__int64 __fastcall sub_140A20C08(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  __int64 v4; // rbx
  unsigned int v5; // esi
  __int64 v10; // rbp
  __int64 result; // rax

  v4 = 0LL;
  v5 = 0;
  if ( *a4 )
  {
    v10 = (unsigned int)*a4;
    do
    {
      if ( (int)sub_140A20D6C(a1, a2, a3 + 4 * v4) >= 0 )
        v4 = (unsigned int)(v4 + 1);
      else
        v5 = -2147483635;
      a2 += 16LL;
      --v10;
    }
    while ( v10 );
  }
  result = v5;
  *a4 = v4;
  return result;
}
