/*
 * XREFs of sub_14045951C @ 0x14045951C
 * Callers:
 *     sub_14045945E @ 0x14045945E (sub_14045945E.c)
 *     sub_14051F680 @ 0x14051F680 (sub_14051F680.c)
 * Callees:
 *     <none>
 */

char __fastcall sub_14045951C(unsigned __int64 a1, _WORD *a2, _BYTE *a3, _DWORD *a4)
{
  int v4; // r11d
  __int64 i; // r10
  __int64 v7; // r8
  char result; // al
  __int64 v9; // rcx

  v4 = 0;
  if ( !dword_140C4A840 )
    return 0;
  for ( i = qword_140C4A858 + 44; ; i += 16LL )
  {
    v7 = *(_QWORD *)i;
    if ( a1 >= *(_QWORD *)i
      && a1 < v7
            + (unsigned __int64)((*(unsigned __int8 *)(i + 11) - (unsigned int)*(unsigned __int8 *)(i + 10) + 1) << 20) )
    {
      break;
    }
    if ( ++v4 >= (unsigned int)dword_140C4A840 )
      return 0;
  }
  v9 = a1 - v7;
  *a2 = *(_WORD *)(i + 8);
  result = 1;
  *a3 = v9 >> 20;
  *a4 = (v9 >> 15) & 0x1F | (32 * ((v9 >> 12) & 7));
  return result;
}
