/*
 * XREFs of sub_140B07AB0 @ 0x140B07AB0
 * Callers:
 *     sub_140A57680 @ 0x140A57680 (sub_140A57680.c)
 *     sub_140AFB264 @ 0x140AFB264 (sub_140AFB264.c)
 *     sub_140AFBDF4 @ 0x140AFBDF4 (sub_140AFBDF4.c)
 *     sub_140B020A4 @ 0x140B020A4 (sub_140B020A4.c)
 * Callees:
 *     sub_140294CC0 @ 0x140294CC0 (sub_140294CC0.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     sub_140AF47DC @ 0x140AF47DC (sub_140AF47DC.c)
 *     sub_140B071D0 @ 0x140B071D0 (sub_140B071D0.c)
 *     sub_140B07C00 @ 0x140B07C00 (sub_140B07C00.c)
 *     sub_140B312E8 @ 0x140B312E8 (sub_140B312E8.c)
 *     sub_140B50C1C @ 0x140B50C1C (sub_140B50C1C.c)
 */

char __fastcall sub_140B07AB0(__int64 a1, ULONG_PTR a2, __int64 a3)
{
  int v4; // r9d
  __int64 v6; // rcx
  unsigned __int8 v7; // r8
  unsigned __int8 v8; // al
  int v9; // eax
  int v10; // ecx
  unsigned __int16 *v11; // r10
  unsigned int v12; // r9d
  unsigned int i; // r8d
  unsigned int v14; // esi
  __int64 v15; // rax

  v4 = a1;
  if ( !dword_140C50720 )
  {
    v7 = sub_140B312E8(a1, a2, a3, (unsigned int)a1);
    if ( v7 > 0x34u )
      v7 = 52;
    dword_140C50720 = v7;
    v8 = v7 - 12;
    if ( (unsigned __int8)(v7 - 12) > 0x26u )
      v8 = 38;
    dword_140C50724 = v8;
  }
  if ( v4 == -1 )
  {
    stru_140C29560.SizeOfBitMap = 2048;
    stru_140C29560.Buffer = (PULONG)&unk_140C29570;
    word_140C296D2 |= 1u;
    v9 = sub_140294CC0();
    if ( !v9 )
    {
LABEL_18:
      sub_140B071D0(a2);
      return 1;
    }
    v10 = dword_140D06880 | 0x1000;
    dword_140D06880 |= 0x1000u;
    if ( (v9 & 4) != 0 )
    {
      v10 |= 0x6000u;
      dword_140D06880 = v10;
    }
    if ( (v9 & 1) != 0 )
    {
      v10 |= 0x28000u;
    }
    else
    {
      if ( (v9 & 2) == 0 )
      {
LABEL_29:
        if ( (v9 & 0x10) == 0 )
        {
          v10 |= 0x10000u;
          dword_140D06880 = v10;
        }
        if ( (v9 & 0x40) != 0 )
        {
          v10 |= 0x80000u;
          dword_140D06880 = v10;
        }
        if ( (v9 & 0x80u) != 0 )
          dword_140D06880 = v10 | 0x40000;
        goto LABEL_18;
      }
      v10 |= 0x8000u;
    }
    dword_140D06880 = v10;
    goto LABEL_29;
  }
  if ( v4 )
  {
    if ( v4 == 1 )
    {
      if ( (unsigned __int16)word_140D05000 > 1u )
      {
        v11 = (unsigned __int16 *)sub_140B50C1C();
        if ( v11 )
        {
          v12 = (unsigned __int16)word_140D05000;
          for ( i = 0; i < v12; ++i )
          {
            v14 = 0;
            do
            {
              v15 = i * v12 + v14++;
              *(_DWORD *)(qword_140C506D8 + 4LL * (unsigned int)v15) = v11[v15];
            }
            while ( v14 < v12 );
          }
          ExFreePoolWithTag(v11, 0);
        }
      }
      dword_140D06880 = dword_140D06880 & 0xFFFFFFCF | 0x10;
      if ( (unsigned __int8)sub_140B07C00(1LL, a2) )
      {
        byte_140C53444 = 1;
        return 1;
      }
      return 0;
    }
    if ( v4 == 2 )
    {
      v6 = 2LL;
      dword_140D06880 = dword_140D06880 & 0xFFFFFFCF | 0x20;
      return sub_140B07C00(v6, a2);
    }
  }
  else if ( sub_140AF47DC(a2) )
  {
    v6 = 0LL;
    return sub_140B07C00(v6, a2);
  }
  return 0;
}
