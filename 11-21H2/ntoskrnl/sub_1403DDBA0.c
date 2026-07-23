/*
 * XREFs of sub_1403DDBA0 @ 0x1403DDBA0
 * Callers:
 *     <none>
 * Callees:
 *     sub_140348800 @ 0x140348800 (sub_140348800.c)
 */

__int64 __fastcall sub_1403DDBA0(int a1)
{
  unsigned int v1; // ebx
  unsigned int i; // edi
  __int64 v4; // rax
  unsigned int v5; // edx

  v1 = 0;
  for ( i = 0; i < (unsigned int)dword_140D06884; v1 = v5 )
  {
    v4 = sub_140348800(i);
    v5 = v1 + 1;
    if ( a1 != *(_DWORD *)(v4 + 34840) )
      v5 = v1;
    ++i;
  }
  return v1;
}
