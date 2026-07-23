/*
 * XREFs of sub_140B25898 @ 0x140B25898
 * Callers:
 *     sub_140A57680 @ 0x140A57680 (sub_140A57680.c)
 *     sub_140AFB264 @ 0x140AFB264 (sub_140AFB264.c)
 *     sub_140AFBDF4 @ 0x140AFBDF4 (sub_140AFBDF4.c)
 * Callees:
 *     sub_1403D7134 @ 0x1403D7134 (sub_1403D7134.c)
 *     sub_1403D71A4 @ 0x1403D71A4 (sub_1403D71A4.c)
 *     _strupr @ 0x1403E03F0 (_strupr.c)
 *     strstr @ 0x1403E0C40 (strstr.c)
 *     sub_140B25950 @ 0x140B25950 (sub_140B25950.c)
 *     sub_140B56D04 @ 0x140B56D04 (sub_140B56D04.c)
 */

char __fastcall sub_140B25898(unsigned int a1, __int64 a2, unsigned int a3)
{
  char v6; // bl
  int v7; // ecx
  char *v8; // rcx
  char *v9; // rax

  v6 = 1;
  if ( (unsigned int)sub_1403D71A4(a2) != 2 )
  {
    if ( (int)sub_140B56D04(a2, a1) < 0 )
    {
      v6 = 0;
      v7 = 3;
      dword_140C54D50 = 0;
    }
    else
    {
      dword_140C54D50 = 2;
      v7 = 4;
    }
    sub_1403D7134(v7);
  }
  v8 = *(char **)(a2 + 216);
  if ( !v8 )
    return sub_140B25950(a1, a2, a3);
  v9 = strupr(v8);
  if ( !strstr(v9, "NOVGA") )
    return sub_140B25950(a1, a2, a3);
  return v6;
}
