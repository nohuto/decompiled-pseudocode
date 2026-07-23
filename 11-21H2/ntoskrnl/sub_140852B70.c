/*
 * XREFs of sub_140852B70 @ 0x140852B70
 * Callers:
 *     <none>
 * Callees:
 *     sub_1403D57DC @ 0x1403D57DC (sub_1403D57DC.c)
 */

__int64 __fastcall sub_140852B70(unsigned int a1, __int64 a2, int a3, char a4, unsigned int *a5, unsigned int a6)
{
  _DWORD *v6; // rax
  __int64 v7; // r10

  if ( a6 )
  {
    v6 = a5 + 10;
    v7 = a6;
    do
    {
      *v6 &= ~0x40000000u;
      v6 += 22;
      --v7;
    }
    while ( v7 );
  }
  return sub_1403D57DC(a1, a2, a3, a4, a5, a6);
}
