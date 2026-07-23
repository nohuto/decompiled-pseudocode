/*
 * XREFs of sub_1403B3120 @ 0x1403B3120
 * Callers:
 *     sub_1403B30A0 @ 0x1403B30A0 (sub_1403B30A0.c)
 *     sub_140522FB0 @ 0x140522FB0 (sub_140522FB0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1403B3120(__int64 a1, int a2, int a3)
{
  ULONG_PTR *v5; // rax
  ULONG_PTR *v6; // rcx
  int v7; // edx
  int v8; // eax
  bool v9; // zf

  if ( ((a3 | a2) & 0xFFFF9FFF) == 0 && (a2 & a3) == 0 && a1 )
  {
    v5 = (ULONG_PTR *)qword_140C4E4E0;
    do
    {
      if ( v5 == &qword_140C4E4E0 )
      {
        dword_140C4E844 = 13;
        return 3221226021LL;
      }
      v6 = v5;
      v5 = (ULONG_PTR *)*v5;
    }
    while ( v6[9] != a1 );
    v7 = *((_DWORD *)v6 + 56);
    v8 = ~a3 & (a2 | v7);
    v9 = v6 == (ULONG_PTR *)qword_140C4E390;
    *((_DWORD *)v6 + 56) = v8;
    if ( v9
      && *((_DWORD *)v6 + 57) == 5
      && ((((unsigned __int16)a2 ^ (unsigned __int16)v7) & 0x2000) != 0
       || (v8 & 0x4000) != 0 && (unsigned __int8)byte_140C4E364 > 1u) )
    {
      byte_140C4C768 = 1;
    }
    return 0LL;
  }
  else
  {
    dword_140C4E844 = 12;
    return 3221225485LL;
  }
}
