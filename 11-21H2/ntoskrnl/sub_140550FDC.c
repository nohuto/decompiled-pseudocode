/*
 * XREFs of sub_140550FDC @ 0x140550FDC
 * Callers:
 *     sub_140550E80 @ 0x140550E80 (sub_140550E80.c)
 * Callees:
 *     sub_140550BFC @ 0x140550BFC (sub_140550BFC.c)
 *     sub_140550D9C @ 0x140550D9C (sub_140550D9C.c)
 */

void __fastcall sub_140550FDC(__int64 a1, __int64 a2)
{
  __int64 v2; // rcx
  int v3; // ecx
  __int64 v4; // r8
  __int64 v5; // rcx
  __int64 v6; // rdx
  int v7; // ebx

  if ( dword_140D0186C )
  {
    if ( dword_140D0186C == 1 )
    {
      v7 = dword_140C48740;
      sub_140550D9C(dword_140C48740);
      dword_140C48740 = ++v7;
      *((_DWORD *)off_140C08E78 + 1) = 0;
      if ( v7 >= 20 )
      {
        dword_140D0186C = 2;
        dword_140C48740 = 1;
      }
      goto LABEL_25;
    }
    v2 = (unsigned int)(dword_140D0186C - 2);
    if ( dword_140D0186C != 2 )
    {
      if ( dword_140D0186C == 3 )
        return;
      goto LABEL_25;
    }
    if ( !dword_140D01870 )
    {
      v5 = 371LL;
      v4 = 376LL;
      goto LABEL_20;
    }
    if ( dword_140D01870 == 1 )
    {
      v6 = 259LL;
    }
    else
    {
      if ( dword_140D01870 != 2 )
      {
        if ( dword_140D01870 == 16 )
        {
          VidBufferToScreenBlt(&unk_140C48640, 363LL, 354LL, 6LL, 9, 4);
          VidBufferToScreenBlt(&unk_140C48760, (unsigned int)(8 * dword_140D01870 + 243), 354LL, 6LL, 9, 4);
        }
        else
        {
          if ( dword_140D01870 != 17 )
          {
            VidBufferToScreenBlt(&unk_140C48640, (unsigned int)(8 * dword_140D01870 + 235), 354LL, 6LL, 9, 4);
            VidBufferToScreenBlt(&unk_140C48760, (unsigned int)(8 * dword_140D01870 + 243), 354LL, 6LL, 9, 4);
            VidBufferToScreenBlt(&unk_140C48680, (unsigned int)(8 * dword_140D01870 + 251), 354LL, 6LL, 9, 4);
            v2 = (unsigned int)dword_140D01870;
            if ( dword_140D01870 <= 3 )
              goto LABEL_21;
            goto LABEL_12;
          }
          VidBufferToScreenBlt(&unk_140C48640, 371LL, 354LL, 6LL, 9, 4);
        }
        LODWORD(v2) = dword_140D01870;
LABEL_12:
        v3 = ((int)v2 + 16) % 18;
        v4 = (unsigned int)(8 * v3 + 248);
        v5 = (unsigned int)(8 * v3 + 243);
LABEL_20:
        VidSolidColorFill(v5, 354LL, v4, 362LL, 0);
LABEL_21:
        if ( ++dword_140D01870 > 17 )
          dword_140D01870 = 0;
LABEL_25:
        if ( !(unsigned int)sub_140550BFC(v2, a2) )
          VidBitBlt(&unk_140C486C0, 0LL, 480LL);
        return;
      }
      VidBufferToScreenBlt(&unk_140C48760, 259LL, 354LL, 6LL, 9, 4);
      v6 = (unsigned int)(8 * dword_140D01870 + 251);
    }
    VidBufferToScreenBlt(&unk_140C48680, v6, 354LL, 6LL, 9, 4);
    goto LABEL_21;
  }
}
