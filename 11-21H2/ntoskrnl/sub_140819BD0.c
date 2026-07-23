/*
 * XREFs of sub_140819BD0 @ 0x140819BD0
 * Callers:
 *     sub_1403987D0 @ 0x1403987D0 (sub_1403987D0.c)
 *     sub_1407FEC6C @ 0x1407FEC6C (sub_1407FEC6C.c)
 *     sub_140808834 @ 0x140808834 (sub_140808834.c)
 *     sub_1408197A0 @ 0x1408197A0 (sub_1408197A0.c)
 *     sub_1408651F0 @ 0x1408651F0 (sub_1408651F0.c)
 * Callees:
 *     sub_140808810 @ 0x140808810 (sub_140808810.c)
 *     sub_1408111A0 @ 0x1408111A0 (sub_1408111A0.c)
 */

void __fastcall sub_140819BD0(int *a1, int a2)
{
  int v2; // r10d
  int *v3; // r11
  int v4; // r9d
  int v5; // r8d
  __int128 *v6; // rcx
  _BYTE *v7; // rcx
  char v8; // al
  _BYTE *v10; // rcx

  v2 = a2;
  v3 = a1;
  if ( a1 )
  {
    v4 = *a1;
    v5 = *a1;
    if ( *a1 <= -1 || (unsigned int)(v4 - 2) <= 3 )
    {
      if ( a2 < 0 )
      {
LABEL_8:
        *v3 = v4;
        return;
      }
      v6 = &xmmword_140C23400;
      if ( a2 > 1 )
      {
        if ( a2 != 2 )
          goto LABEL_8;
        v8 = 1;
        if ( v5 != 2 )
        {
          if ( v5 != 3 )
          {
            if ( v5 != 4 )
            {
              if ( v5 != 5 )
                goto LABEL_8;
              goto LABEL_38;
            }
LABEL_24:
            if ( BYTE5(xmmword_140C23400) )
              goto LABEL_8;
LABEL_38:
            if ( !v8 || !sub_140808810((__int64)v6) && !sub_1408111A0(v10) )
              v4 = 1;
            goto LABEL_8;
          }
LABEL_22:
          if ( BYTE4(xmmword_140C23400) )
            goto LABEL_8;
          v4 = 4;
          goto LABEL_24;
        }
LABEL_20:
        if ( BYTE3(xmmword_140C23400) )
          goto LABEL_8;
        v4 = 3;
        goto LABEL_22;
      }
      if ( v4 == 5 )
      {
        if ( sub_140808810((__int64)&xmmword_140C23400) )
          goto LABEL_8;
        if ( sub_1408111A0(v7) )
          goto LABEL_8;
        v4 = 4;
      }
      else if ( v5 != 4 )
      {
        if ( v5 != 3 )
        {
          if ( v5 != 2 )
            goto LABEL_8;
          goto LABEL_16;
        }
LABEL_36:
        if ( BYTE4(xmmword_140C23400) )
          goto LABEL_8;
        v4 = 2;
LABEL_16:
        if ( BYTE3(xmmword_140C23400) )
          goto LABEL_8;
        v4 = 1;
        if ( v2 != 1 )
          goto LABEL_8;
        v8 = 0;
        v4 = 2;
        goto LABEL_20;
      }
      if ( BYTE5(xmmword_140C23400) )
        goto LABEL_8;
      v4 = 3;
      goto LABEL_36;
    }
  }
}
