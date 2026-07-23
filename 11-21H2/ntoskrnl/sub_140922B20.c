/*
 * XREFs of sub_140922B20 @ 0x140922B20
 * Callers:
 *     sub_14065B6A0 @ 0x14065B6A0 (sub_14065B6A0.c)
 *     sub_1409224D4 @ 0x1409224D4 (sub_1409224D4.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_14065AAAC @ 0x14065AAAC (sub_14065AAAC.c)
 *     sub_14065B3DC @ 0x14065B3DC (sub_14065B3DC.c)
 *     sub_14069EDC0 @ 0x14069EDC0 (sub_14069EDC0.c)
 *     sub_14069F150 @ 0x14069F150 (sub_14069F150.c)
 *     sub_14069F1CC @ 0x14069F1CC (sub_14069F1CC.c)
 *     sub_14069F2B4 @ 0x14069F2B4 (sub_14069F2B4.c)
 *     sub_14071B4A0 @ 0x14071B4A0 (sub_14071B4A0.c)
 *     sub_140721CE0 @ 0x140721CE0 (sub_140721CE0.c)
 */

__int64 __fastcall sub_140922B20(__int64 a1, __int16 *a2, char a3)
{
  char v6; // di
  __int16 v7; // r14
  ULONG_PTR v8; // rsi
  int v9; // ebx
  __int64 v10; // r15
  __int16 v11; // dx
  char v13[80]; // [rsp+20h] [rbp-88h] BYREF

  memset(v13, 0, 0x4AuLL);
  v6 = 0;
  sub_14069F2B4(v13);
  v7 = *(_WORD *)(a1 + 2);
  v8 = sub_140721CE0(a1, v7);
  v9 = sub_14069EDC0((__int64)v13, a1, 0LL);
  if ( v9 < 0 )
    goto LABEL_11;
  v10 = sub_14069F1CC((__int64)v13, v7);
  if ( *(_DWORD *)(sub_14069F1CC((__int64)a2, v11) + 8) == -1 )
  {
    v9 = sub_14065B3DC((__int64)v13, (__int64)a2);
    if ( v9 < 0 )
      goto LABEL_11;
    v6 = 1;
  }
  if ( a3 )
  {
    v9 = sub_14065AAAC((__int64)v13, a2);
    if ( v9 < 0 )
      goto LABEL_9;
    v6 = 1;
  }
  v9 = 0;
LABEL_9:
  if ( v6 )
  {
    ++*(_QWORD *)(v8 + 304);
    sub_14071B4A0(v8, *(_QWORD *)(v10 + 16), 0LL, 0);
  }
LABEL_11:
  sub_14069F150((__int64)v13);
  return (unsigned int)v9;
}
