/*
 * XREFs of sub_1403A32AC @ 0x1403A32AC
 * Callers:
 *     sub_1403A24DC @ 0x1403A24DC (sub_1403A24DC.c)
 * Callees:
 *     sub_1403A340C @ 0x1403A340C (sub_1403A340C.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     _setjmp @ 0x14042B890 (_setjmp.c)
 */

__int64 __fastcall sub_1403A32AC(__int64 a1, __int16 a2, unsigned __int16 a3, __int64 a4)
{
  unsigned int v4; // edx
  unsigned __int8 v5; // al
  __int16 v6; // cx
  __int64 v7; // rdx
  __int64 v8; // rdx

  dword_140CF7118 = *(_DWORD *)a4;
  dword_140CF711C = *(_DWORD *)(a4 + 4);
  dword_140CF7120 = *(_DWORD *)(a4 + 8);
  dword_140CF7124 = *(_DWORD *)(a4 + 12);
  dword_140CF712C = *(_DWORD *)(a4 + 16);
  dword_140CF7130 = *(_DWORD *)(a4 + 20);
  dword_140CF7134 = *(_DWORD *)(a4 + 24);
  word_140CF713E = *(_WORD *)(a4 + 28);
  word_140CF7138 = *(_WORD *)(a4 + 30);
  word_140CF713A = a2;
  dword_140CF7114 = a3;
  v4 = setjmp(Buf);
  for ( dword_140C548D0 = v4; !dword_140C548D0; v4 = dword_140C548D0 )
  {
    *((_DWORD *)&unk_140CF7100 + 29) = 3;
    *((_QWORD *)&unk_140CF7100 + 17) = 0LL;
    unk_140CF7100 = qword_140010040;
    do
    {
      v5 = sub_1403A340C(&unk_140CF7100);
      *((_DWORD *)&unk_140CF7100 + 28) = v5;
      v6 = *(_WORD *)(unk_140CF7100 + 2LL * v5);
      *((_WORD *)&unk_140CF7100 + 40) = v6;
      *((_DWORD *)&unk_140CF7100 + 31) = (unsigned __int8)v6;
    }
    while ( !(unsigned int)sub_14042A5E0(&unk_140CF7100, v7) );
    sub_14042A5E0(&unk_140CF7100, v8);
  }
  *(_DWORD *)a4 = *((_DWORD *)&unk_140CF7100 + 6);
  *(_DWORD *)(a4 + 4) = *((_DWORD *)&unk_140CF7100 + 7);
  *(_DWORD *)(a4 + 8) = *((_DWORD *)&unk_140CF7100 + 8);
  *(_DWORD *)(a4 + 12) = *((_DWORD *)&unk_140CF7100 + 9);
  *(_DWORD *)(a4 + 16) = *((_DWORD *)&unk_140CF7100 + 11);
  *(_DWORD *)(a4 + 20) = *((_DWORD *)&unk_140CF7100 + 12);
  *(_DWORD *)(a4 + 24) = *((_DWORD *)&unk_140CF7100 + 13);
  return v4;
}
