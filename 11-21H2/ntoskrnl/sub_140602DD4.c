/*
 * XREFs of sub_140602DD4 @ 0x140602DD4
 * Callers:
 *     sub_140602808 @ 0x140602808 (sub_140602808.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140602DD4(__int64 a1)
{
  __int64 v1; // r9
  unsigned int v3; // ebx
  unsigned int v4; // r11d
  unsigned __int16 v5; // r8
  unsigned __int64 v6; // rdx
  __int64 v7; // rax
  int v8; // ecx
  __int64 v9; // rcx
  _DWORD *v10; // rdx
  __int16 v11; // r9
  unsigned __int16 v12; // r9
  unsigned __int16 v13; // ax

  v1 = a1 + 88;
  v3 = 0;
  v4 = 0;
  v5 = 1;
  if ( a1 != -88 )
  {
    v6 = -1LL;
    do
      ++v6;
    while ( *(_WORD *)(v1 + 2 * v6) );
    if ( v6 )
    {
      v7 = 0LL;
      do
      {
        v8 = *(unsigned __int16 *)(v1 + 2 * v7);
        v7 = ++v4;
        v3 = v8 + 65599 * v3;
      }
      while ( v4 < v6 );
    }
  }
  v9 = v3 % 0xFB;
  v10 = qword_140D049B0;
  v11 = *((_WORD *)qword_140D049B0 + 4 * v9 + 2);
  if ( v11 )
  {
    if ( *((_DWORD *)qword_140D049B0 + 2 * v9) != *(_DWORD *)(a1 + 1120) || v11 == -1 )
    {
      v13 = *((_WORD *)qword_140D049B0 + 4 * v9 + 3);
      if ( v13 != 0xFFFF )
        *((_WORD *)qword_140D049B0 + 4 * v9 + 3) = ++v13;
      return v13;
    }
    else
    {
      v12 = v11 + 1;
      *((_WORD *)qword_140D049B0 + 4 * v9 + 2) = v12;
      return v12;
    }
  }
  else
  {
    *((_WORD *)qword_140D049B0 + 4 * v9 + 2) = 1;
    v10[2 * v9] = *(_DWORD *)(a1 + 1120);
  }
  return v5;
}
