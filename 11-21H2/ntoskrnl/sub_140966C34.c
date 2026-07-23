/*
 * XREFs of sub_140966C34 @ 0x140966C34
 * Callers:
 *     sub_140966A1C @ 0x140966A1C (sub_140966A1C.c)
 *     sub_140966A84 @ 0x140966A84 (sub_140966A84.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140966C34(unsigned int a1)
{
  char *v2; // rax
  __int64 i; // rcx

  if ( qword_140C2A150 )
  {
    v2 = (char *)qword_140C2A150 + 16 * ((a1 >> 2) & 0x3FF);
    for ( i = *((_QWORD *)v2 + 1); (char *)i != v2; i = *(_QWORD *)(i + 8) )
    {
      if ( *(_DWORD *)(i + 28) && *(_DWORD *)(i + 24) == a1 )
        return i - 16;
    }
  }
  return 0LL;
}
