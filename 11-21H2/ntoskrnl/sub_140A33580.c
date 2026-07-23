/*
 * XREFs of sub_140A33580 @ 0x140A33580
 * Callers:
 *     sub_140A33600 @ 0x140A33600 (sub_140A33600.c)
 *     sub_140A33AD0 @ 0x140A33AD0 (sub_140A33AD0.c)
 * Callees:
 *     isdigit @ 0x1403E1A90 (isdigit.c)
 */

__int64 __fastcall sub_140A33580(unsigned __int8 *a1, unsigned int a2, int *a3, _DWORD *a4)
{
  unsigned int v4; // ebx
  int v9; // ecx
  int v10; // edx
  int v11; // ecx

  *a3 = 0;
  v4 = 0;
  for ( *a4 = 0; v4 < a2; *a3 = v11 + 2 * (v10 - 24) )
  {
    if ( !isdigit(*a1) )
      break;
    v9 = *a3;
    ++v4;
    ++*a4;
    v10 = 5 * v9;
    v11 = *a1++;
  }
  return v4;
}
