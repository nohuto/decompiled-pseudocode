/*
 * XREFs of sub_140A5A324 @ 0x140A5A324
 * Callers:
 *     sub_140A57680 @ 0x140A57680 (sub_140A57680.c)
 *     sub_140A59FA4 @ 0x140A59FA4 (sub_140A59FA4.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall sub_140A5A324(__int64 a1, char a2)
{
  __int64 *v2; // r9
  unsigned __int64 v3; // r10
  __int64 v4; // r8
  void (*v6)(); // rcx
  unsigned __int64 v7; // rdx
  __int16 v8; // ax
  unsigned __int64 result; // rax
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // r11
  __int16 v12; // dx
  __int16 v13; // cx
  int v14; // ecx
  __int16 v15; // ax
  __int64 v16; // rcx

  dword_140D68660 = 0;
  v2 = &qword_140D68270;
  v3 = 0LL;
  v4 = a1 + 4;
  do
  {
    if ( !dword_140D686C4 || (unsigned int)v3 > 0x2D || (v16 = 0x30000000600ALL, !_bittest64(&v16, v3)) )
    {
      v6 = (void (*)())sub_140AB62C0;
      if ( !a2 )
        v6 = sub_140422B50;
      v7 = (unsigned __int64)v6 + 8 * v3;
      if ( (_DWORD)v3 == 46 && dword_140D6815C != 1 )
      {
        v15 = *(_WORD *)v4 & 0xF8;
        *(_WORD *)(v4 - 4) = v7;
        *(_WORD *)v4 = v15 | 0x8E00;
        result = v7 >> 16;
        v10 = HIDWORD(v7);
        v2 += 3;
        goto LABEL_8;
      }
      if ( (_DWORD)v3 != *(unsigned __int8 *)v2 )
      {
        v8 = *(_WORD *)v4 & 0xF8;
        *(_WORD *)(v4 - 4) = v7;
        *(_WORD *)v4 = v8 | 0x8E00;
        result = v7 >> 16;
        v10 = HIDWORD(v7);
LABEL_8:
        *(_DWORD *)(v4 + 4) = v10;
        *(_WORD *)(v4 + 2) = result;
        *(_WORD *)(v4 - 2) = 16;
        goto LABEL_9;
      }
      if ( a2 )
        v11 = v2[2];
      else
        v11 = v2[1];
      *(_WORD *)(v4 - 4) = v11;
      *(_WORD *)(v4 - 2) = 16;
      v12 = *(_WORD *)v4 & 0xEEF8 | *((_BYTE *)v2 + 2) & 7 | 0xE00;
      *(_WORD *)v4 = v12;
      v13 = v12 & 0x1FFF | ((*((_BYTE *)v2 + 1) & 3 | 4) << 13);
      *(_WORD *)(v4 + 2) = WORD1(v11);
      result = HIDWORD(v11);
      *(_DWORD *)(v4 + 4) = HIDWORD(v11);
      *(_WORD *)v4 = v13;
      if ( *((_BYTE *)v2 + 1) )
      {
        v14 = dword_140D68660;
        qword_140E01910[dword_140D68660] = v11;
        dword_140D68660 = v14 + 1;
      }
LABEL_15:
      v2 += 3;
      goto LABEL_9;
    }
    result = *(unsigned __int8 *)v2;
    if ( (_DWORD)v3 == (_DWORD)result )
      goto LABEL_15;
LABEL_9:
    v3 = (unsigned int)(v3 + 1);
    v4 += 16LL;
  }
  while ( (unsigned int)v3 <= 0xFF );
  return result;
}
