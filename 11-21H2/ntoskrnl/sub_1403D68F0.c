/*
 * XREFs of sub_1403D68F0 @ 0x1403D68F0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1405DDBE0 @ 0x1405DDBE0 (sub_1405DDBE0.c)
 */

__int64 __fastcall sub_1403D68F0(unsigned int *a1)
{
  __int64 v1; // rdx
  unsigned int v2; // r8d

  v1 = *a1;
  v2 = 0;
  if ( (_DWORD)v1 )
  {
    if ( (_DWORD)v1 == 2 && a1[4] == 1 )
      *((_BYTE *)a1 + 20) = byte_140C1C978;
    else
      return (unsigned int)-1073741637;
  }
  else
  {
    return (unsigned int)sub_1405DDBE0(a1 + 4, v1, 0LL);
  }
  return v2;
}
