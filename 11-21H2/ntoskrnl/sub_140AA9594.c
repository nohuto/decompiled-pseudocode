/*
 * XREFs of sub_140AA9594 @ 0x140AA9594
 * Callers:
 *     sub_140AA8ED0 @ 0x140AA8ED0 (sub_140AA8ED0.c)
 *     sub_140B315E8 @ 0x140B315E8 (sub_140B315E8.c)
 * Callees:
 *     sub_14065445C @ 0x14065445C (sub_14065445C.c)
 *     sub_14065465C @ 0x14065465C (sub_14065465C.c)
 *     sub_140AAA418 @ 0x140AAA418 (sub_140AAA418.c)
 */

__int64 __fastcall sub_140AA9594(char a1)
{
  unsigned int v1; // edx
  char v2; // r8
  int v3; // ecx
  PKSPIN_LOCK v4; // rax
  __int64 v6; // r8

  if ( a1 == 1 )
  {
    v1 = *((_DWORD *)qword_140D01468 + 12);
    if ( (v1 & 1) == 0 )
    {
      v2 = *((_BYTE *)qword_140D01468 + 116);
      if ( !v2 || (v1 & 2) == 0 )
      {
        v3 = (unsigned __int8)sub_14065445C(
                                *((_DWORD *)qword_140D01468 + 13),
                                (v1 >> 9) & 7,
                                qword_140D01468[8],
                                (_DWORD *)qword_140D01468 + 14,
                                v2,
                                *((_BYTE *)qword_140D01468 + 85));
        v4 = qword_140D01468;
        *((_DWORD *)qword_140D01468 + 12) ^= (*((_DWORD *)qword_140D01468 + 12) ^ v3) & 1;
        if ( (v4[6] & 1) == 0 )
          return 3221225473LL;
        sub_140AAA418("\x1B[2J");
        sub_140AAA418(qword_140AA8080);
      }
    }
  }
  else if ( !a1 )
  {
    sub_14065465C(*((_DWORD *)qword_140D01468 + 14));
    *(_DWORD *)(v6 + 56) = 0;
    *(_DWORD *)(v6 + 48) &= ~1u;
  }
  return 0LL;
}
