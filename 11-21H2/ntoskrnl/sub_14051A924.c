/*
 * XREFs of sub_14051A924 @ 0x14051A924
 * Callers:
 *     sub_14051B720 @ 0x14051B720 (sub_14051B720.c)
 * Callees:
 *     sub_1405186B0 @ 0x1405186B0 (sub_1405186B0.c)
 */

__int64 __fastcall sub_14051A924(unsigned int *a1)
{
  int v2; // r8d
  unsigned int i; // ebx
  unsigned __int16 **v4; // rdx
  unsigned __int16 *v5; // rcx

  v2 = 0;
  for ( i = 0; i < *a1; ++i )
  {
    v4 = *(unsigned __int16 ***)&a1[2 * i + 2];
    v5 = *v4;
    if ( *(_DWORD *)*v4 == 1 )
    {
      if ( v5[7] )
      {
        v2 = sub_1405186B0(v5 + 4);
        if ( v2 < 0 )
          break;
      }
    }
  }
  return (unsigned int)v2;
}
