/*
 * XREFs of sub_1409839C0 @ 0x1409839C0
 * Callers:
 *     sub_140983B10 @ 0x140983B10 (sub_140983B10.c)
 *     sub_140983B80 @ 0x140983B80 (sub_140983B80.c)
 * Callees:
 *     sub_14023FF18 @ 0x14023FF18 (sub_14023FF18.c)
 *     sub_14024B428 @ 0x14024B428 (sub_14024B428.c)
 *     sub_14026A574 @ 0x14026A574 (sub_14026A574.c)
 *     sub_1402828F0 @ 0x1402828F0 (sub_1402828F0.c)
 *     sub_1402EB3DC @ 0x1402EB3DC (sub_1402EB3DC.c)
 *     sub_140339C20 @ 0x140339C20 (sub_140339C20.c)
 *     sub_140983AC0 @ 0x140983AC0 (sub_140983AC0.c)
 */

__int64 __fastcall sub_1409839C0(__int64 *a1)
{
  unsigned int v2; // edi
  unsigned int v3; // eax
  __int64 v5; // rsi
  PVOID v6; // rax
  __int128 v7; // [rsp+20h] [rbp-18h] BYREF

  v2 = 0;
  v7 = 0LL;
  sub_140339C20((char *)(*((_QWORD *)KeGetCurrentThread() + 23) + 1664LL), 0, (__int64)&v7);
  v3 = sub_1402EB3DC((__int64)&v7);
  if ( !(unsigned int)sub_14026A574((__int64)(a1 + 6), v3, 8) )
    return 3221225626LL;
  sub_14024B428(2uLL, 256, (__int64)(a1 + 22));
  if ( *((_DWORD *)a1 + 45)
    && (v5 = *a1,
        a1[25] = 0LL,
        a1[27] = 0LL,
        a1[26] = 0LL,
        v6 = sub_1402828F0(64, 0x1000uLL, 0x6363454Du),
        (a1[25] = (__int64)v6) != 0) )
  {
    if ( *((_DWORD *)a1 + 2) != -1 )
      a1[27] = sub_14023FF18(*(_QWORD *)(v5 + 48), 1u);
  }
  else
  {
    sub_140983AC0(a1);
    return (unsigned int)-1073741670;
  }
  return v2;
}
