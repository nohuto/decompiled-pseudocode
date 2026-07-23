/*
 * XREFs of sub_14081A654 @ 0x14081A654
 * Callers:
 *     sub_1403CE6F8 @ 0x1403CE6F8 (sub_1403CE6F8.c)
 *     sub_14081A3AC @ 0x14081A3AC (sub_14081A3AC.c)
 *     sub_14099E10C @ 0x14099E10C (sub_14099E10C.c)
 *     sub_14099E20C @ 0x14099E20C (sub_14099E20C.c)
 * Callees:
 *     KeIsEmptyAffinityEx @ 0x140292F90 (KeIsEmptyAffinityEx.c)
 */

unsigned __int8 sub_14081A654()
{
  unsigned __int8 v0; // bl
  unsigned int v1; // esi
  _BYTE *v2; // rdi
  unsigned int v3; // ecx
  unsigned __int8 *v4; // rax
  _QWORD *v5; // rdx
  unsigned __int8 v6; // r8
  unsigned __int8 result; // al

  if ( dword_140C1CF34 != 1 || *((_DWORD *)KeGetCurrentPrcb() + 39) != *(unsigned __int8 *)(qword_140C1CF38 + 6) )
  {
    v0 = 0;
    v1 = 0;
    if ( !dword_140C1CF34 )
      goto LABEL_17;
    v2 = (_BYTE *)(qword_140C1CF38 + 136);
    while ( 1 )
    {
      if ( *(v2 - 2) || *v2 || *((_QWORD *)v2 - 13) || !(unsigned int)KeIsEmptyAffinityEx(asc_140C0B9F0) )
      {
        v0 = 1;
        goto LABEL_17;
      }
      v3 = 0;
      v4 = v2 - 4;
      v5 = v2 - 80;
      while ( 1 )
      {
        v6 = *(v4 - 4);
        if ( v6 )
          break;
LABEL_15:
        ++v3;
        ++v5;
        ++v4;
        if ( v3 >= 2 )
          goto LABEL_16;
      }
      if ( *(v4 - 2) >= *v4 && *v4 >= v6 )
        break;
      v0 = 1;
LABEL_16:
      ++v1;
      v2 += 336;
      if ( v1 >= dword_140C1CF34 )
      {
LABEL_17:
        result = v0;
        dword_140C1CF20 = v0;
        return result;
      }
    }
    if ( *v5 )
      v0 = 1;
    goto LABEL_15;
  }
  return 0;
}
