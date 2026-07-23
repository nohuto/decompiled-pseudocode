/*
 * XREFs of sub_140B26CFC @ 0x140B26CFC
 * Callers:
 *     sub_140A5B510 @ 0x140A5B510 (sub_140A5B510.c)
 * Callees:
 *     sub_140213A40 @ 0x140213A40 (sub_140213A40.c)
 */

__int64 __fastcall sub_140B26CFC(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rcx
  __int64 v3; // rax
  unsigned int v4; // r8d
  _BYTE *v5; // rdx
  char v6; // al
  unsigned int v7; // r10d
  __int64 result; // rax

  if ( byte_140C4E848 )
    return 0LL;
  v1 = sub_140213A40(a1, 1195787085, 0, 0);
  v2 = v1;
  if ( !v1 )
    return 0LL;
  v3 = *(unsigned int *)(v1 + 4);
  if ( (unsigned int)v3 >= 0x3C )
  {
    dword_140C4A844 = 0;
    v4 = 0;
    qword_140C4A858 = v2;
    dword_140C4A840 = (unsigned __int64)(v3 - 44) >> 4;
    if ( dword_140C4A840 )
    {
      v5 = (_BYTE *)(v2 + 55);
      do
      {
        v6 = 0;
        v7 = 0;
        if ( v4 )
        {
          do
          {
            if ( *(_WORD *)(v2 + 16LL * v7 + 52) == *(_WORD *)(v5 - 3) )
            {
              if ( *(_QWORD *)(v2 + 16LL * v7 + 44) != *(_QWORD *)(v5 - 11) && !byte_140C4A860
                || *(_BYTE *)(v2 + 16LL * v7 + 54) <= *v5 && *(_BYTE *)(v2 + 16LL * v7 + 55) >= *(v5 - 1) )
              {
                qword_140C4A858 = 0LL;
                result = 3221225473LL;
                dword_140C4A840 = 0;
                dword_140C4A844 = 0;
                return result;
              }
              v6 = 1;
            }
            ++v7;
          }
          while ( v7 < v4 );
          if ( v6 )
            goto LABEL_8;
        }
        ++dword_140C4A844;
LABEL_8:
        ++v4;
        v5 += 16;
      }
      while ( v4 < dword_140C4A840 );
    }
    off_140C020B0 = (__int64 (__fastcall *)())sub_14051F680;
    return 0LL;
  }
  return 3221225473LL;
}
