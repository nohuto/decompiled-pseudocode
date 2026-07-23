/*
 * XREFs of sub_140849940 @ 0x140849940
 * Callers:
 *     sub_1407FCE7C @ 0x1407FCE7C (sub_1407FCE7C.c)
 *     sub_140848BE8 @ 0x140848BE8 (sub_140848BE8.c)
 *     sub_14099788C @ 0x14099788C (sub_14099788C.c)
 *     sub_140997BA0 @ 0x140997BA0 (sub_140997BA0.c)
 * Callees:
 *     sub_140224C00 @ 0x140224C00 (sub_140224C00.c)
 *     sub_140224E90 @ 0x140224E90 (sub_140224E90.c)
 *     sub_1403CEDC4 @ 0x1403CEDC4 (sub_1403CEDC4.c)
 *     sub_1403CF1A0 @ 0x1403CF1A0 (sub_1403CF1A0.c)
 *     sub_14069DDE8 @ 0x14069DDE8 (sub_14069DDE8.c)
 *     sub_14081A3AC @ 0x14081A3AC (sub_14081A3AC.c)
 *     sub_14081ACB4 @ 0x14081ACB4 (sub_14081ACB4.c)
 *     sub_140849690 @ 0x140849690 (sub_140849690.c)
 *     sub_140849B04 @ 0x140849B04 (sub_140849B04.c)
 *     sub_14098EC78 @ 0x14098EC78 (sub_14098EC78.c)
 */

void __fastcall sub_140849940(_DWORD *a1)
{
  char v1; // bp
  _WORD *v2; // rbx
  char v3; // al
  int v4; // eax
  char v5; // si
  char v6; // di

  v1 = 0;
  v2 = a1;
  if ( (*a1 & 0x1800) != 0 )
  {
    LOBYTE(a1) = (*a1 & 0x800) != 0;
    v3 = sub_140849B04(a1);
    if ( (*(_DWORD *)v2 & 0x800) != 0 || v3 )
    {
      v1 = 1;
      *(_DWORD *)v2 |= 0x200Eu;
    }
  }
  sub_14081ACB4(v2, 0LL);
  v4 = *(_DWORD *)v2;
  if ( (*(_DWORD *)v2 & 4) != 0 )
  {
    sub_1403CEDC4();
    v4 = *(_DWORD *)v2;
  }
  if ( (v4 & 0x10) != 0 )
  {
    sub_14098EC78();
    v4 = *(_DWORD *)v2;
  }
  if ( (v4 & 8) != 0 )
  {
    sub_14081A3AC();
    v4 = *(_DWORD *)v2;
  }
  v5 = 0;
  v6 = 1;
  if ( (v4 & 2) != 0 )
  {
    v6 = 0;
    v5 = 1;
    sub_14069DDE8(v1);
    v4 = *(_DWORD *)v2;
  }
  if ( (v4 & 4) != 0 )
  {
    if ( v5 )
    {
      sub_140224E90((struct _KTHREAD **)&qword_140C22FE0);
      v4 = *(_DWORD *)v2;
    }
    if ( (v4 & 0x2000) != 0 )
      sub_140849690(1);
    else
      sub_1403CF1A0();
  }
  else if ( v6 )
  {
    sub_140224C00(&qword_140C22FE0);
  }
}
