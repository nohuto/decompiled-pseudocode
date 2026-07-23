/*
 * XREFs of sub_14063DF48 @ 0x14063DF48
 * Callers:
 *     sub_140308240 @ 0x140308240 (sub_140308240.c)
 * Callees:
 *     <none>
 */

char __fastcall sub_14063DF48(unsigned __int8 a1, char a2)
{
  __int64 v2; // r8
  unsigned __int8 v3; // r9
  __int64 *v4; // rdx
  int v5; // eax
  __int64 v6; // rcx
  __int64 v7; // r8

  if ( qword_140C158A0 )
  {
    v2 = a1 < 0x10u ? a1 : 0;
    v3 = a1 < 0x10u ? a2 : 0;
    v4 = qword_140003350;
    LOBYTE(v5) = v3 < LOBYTE(qword_140003350[3 * v2]) ? v3 : 0;
    v6 = (unsigned __int8)v5;
    if ( ((unsigned __int8)v2 & (unsigned __int8)-(v3 < LOBYTE(qword_140003350[3 * v2]))) != 0 )
    {
      v7 = v3 < LOBYTE(qword_140003350[3 * v2]) ? (unsigned __int8)v2 : 0;
      do
      {
        v5 = *(unsigned __int8 *)v4;
        v4 += 3;
        v6 = (unsigned int)(v5 + v6);
        --v7;
      }
      while ( v7 );
    }
    ++*(_DWORD *)(qword_140C158A0 + 4 * v6);
  }
  return v5;
}
