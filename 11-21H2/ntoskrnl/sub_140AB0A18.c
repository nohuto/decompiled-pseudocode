/*
 * XREFs of sub_140AB0A18 @ 0x140AB0A18
 * Callers:
 *     sub_140AAE560 @ 0x140AAE560 (sub_140AAE560.c)
 *     sub_140AB09E0 @ 0x140AB09E0 (sub_140AB09E0.c)
 * Callees:
 *     sub_14064D4AC @ 0x14064D4AC (sub_14064D4AC.c)
 */

__int64 sub_140AB0A18()
{
  __int64 v0; // rax
  unsigned int v1; // ecx
  int v2; // r8d
  _DWORD *v3; // r9
  __int64 v4; // r10
  unsigned int v5; // eax
  __int64 v6; // r11
  unsigned int i; // ebx
  __int64 v8; // rcx
  __int64 v9; // rdx

  v0 = qword_140CE1AD8;
  v1 = *(_DWORD *)(qword_140CE1AD8 + 16);
  *(_DWORD *)(qword_140CE1AD8 + 68) = 0;
  *(_DWORD *)(v0 + 72) = 0;
  v2 = sub_14064D4AC(v1);
  if ( v2 >= 0 )
  {
    v3 = (_DWORD *)qword_140CE1AD8;
    v4 = 0LL;
    v5 = *(_DWORD *)(qword_140CE1AD8 + 4);
    v6 = 80LL;
    do
    {
      for ( i = 0; i < v5; v5 = v3[1] )
      {
        v8 = v4 + i++;
        v9 = 3 * v8;
        LOWORD(v3[v9 + 22]) = 32;
        v3[3 * v8 + 21] = v3[4];
        v3[v9 + 20] = v3[3];
      }
      v4 += 25LL;
      --v6;
    }
    while ( v6 );
  }
  return (unsigned int)v2;
}
