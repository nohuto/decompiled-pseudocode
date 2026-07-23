/*
 * XREFs of sub_14082552C @ 0x14082552C
 * Callers:
 *     sub_14096029C @ 0x14096029C (sub_14096029C.c)
 *     sub_140AFE7A0 @ 0x140AFE7A0 (sub_140AFE7A0.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_140863C68 @ 0x140863C68 (sub_140863C68.c)
 *     sub_140A57C10 @ 0x140A57C10 (sub_140A57C10.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_14082552C(__int64 a1, _OWORD *a2)
{
  _OWORD *v2; // rsi
  char *Pool2; // rbx
  void *v5; // rbp
  int v6; // eax
  void *v7; // rbp
  void *v8; // rbp
  void *v9; // rbp
  _OWORD v11[2]; // [rsp+30h] [rbp-58h] BYREF

  v2 = a2;
  memset(v11, 0, sizeof(v11));
  if ( !a2 )
  {
    sub_140863C68(v11);
    v2 = v11;
  }
  Pool2 = (char *)ExAllocatePool2(64LL, 640LL, 28489LL);
  v5 = Pool2;
  if ( dword_140CF5F58 > 0 )
    v6 = *((_DWORD *)v2 + 7);
  else
    v6 = 0x7FFFFFFF;
  *(_DWORD *)(a1 + 11676) = v6;
  *(_QWORD *)(a1 + 2168) = &unk_140CF8AC0;
  if ( Pool2 )
  {
    sub_140A57C10((_DWORD)Pool2, 512, 56, 1349542729, *((_WORD *)v2 + 3), (__int64)&qword_140C11710);
    Pool2 += 128;
  }
  else
  {
    v5 = &unk_140CF8AC0;
  }
  *(_QWORD *)(a1 + 2160) = v5;
  *(_QWORD *)(a1 + 2088) = &unk_140CF8A40;
  v7 = Pool2;
  if ( Pool2 )
  {
    sub_140A57C10((_DWORD)Pool2, 512, *((_DWORD *)v2 + 5), 1282437705, *((_WORD *)v2 + 2), (__int64)&qword_140C11710);
    Pool2 += 128;
  }
  else
  {
    v7 = &unk_140CF8A40;
  }
  *(_QWORD *)(a1 + 2080) = v7;
  *(_QWORD *)(a1 + 2072) = &unk_140CF8BC0;
  v8 = Pool2;
  if ( Pool2 )
  {
    sub_140A57C10((_DWORD)Pool2, 512, *((_DWORD *)v2 + 4), 1299214921, *((_WORD *)v2 + 1), (__int64)&qword_140C11710);
    Pool2 += 128;
  }
  else
  {
    v8 = &unk_140CF8BC0;
  }
  *(_QWORD *)(a1 + 2064) = v8;
  *(_QWORD *)(a1 + 2056) = &unk_140CF8B40;
  v9 = Pool2;
  if ( Pool2 )
  {
    sub_140A57C10((_DWORD)Pool2, 512, *((_DWORD *)v2 + 3), 1399878217, *(_WORD *)v2, (__int64)&qword_140C11710);
    Pool2 += 128;
  }
  else
  {
    v9 = &unk_140CF8B40;
  }
  *(_QWORD *)(a1 + 2048) = v9;
  *(_QWORD *)(a1 + 2104) = &unk_140CF89C0;
  if ( Pool2 )
    sub_140A57C10((_DWORD)Pool2, 512, *((_DWORD *)v2 + 6), 1349280845, *((_WORD *)v2 + 4), (__int64)&qword_140C11710);
  else
    Pool2 = (char *)&unk_140CF89C0;
  *(_QWORD *)(a1 + 2096) = Pool2;
  if ( (dword_140C46D90 & 3) != 0 )
  {
    memset((void *)(a1 + 35776), 0, 0x50uLL);
    *(_DWORD *)(a1 + 35856) = 0;
    memset((void *)(a1 + 35860), 0, 0x50uLL);
    *(_DWORD *)(a1 + 35940) = 0;
  }
  return 0LL;
}
