/*
 * XREFs of sub_140922984 @ 0x140922984
 * Callers:
 *     sub_14065B6A0 @ 0x14065B6A0 (sub_14065B6A0.c)
 *     sub_1409224D4 @ 0x1409224D4 (sub_1409224D4.c)
 *     sub_1409226E0 @ 0x1409226E0 (sub_1409226E0.c)
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

__int64 __fastcall sub_140922984(__int64 a1, __int64 a2, char a3)
{
  __int16 v5; // r14
  char v6; // si
  ULONG_PTR v7; // r15
  __int16 v8; // dx
  ULONG_PTR v9; // rdi
  int v10; // ebx
  __int64 v11; // r13
  __int16 v12; // dx
  __int64 v13; // r14
  __int16 v16[40]; // [rsp+30h] [rbp-89h] BYREF
  char v17[80]; // [rsp+80h] [rbp-39h] BYREF

  memset(v17, 0, 0x4AuLL);
  memset(v16, 0, 0x4AuLL);
  sub_14069F2B4(v17);
  sub_14069F2B4((char *)v16);
  v5 = *(_WORD *)(a1 + 2);
  v6 = 0;
  v7 = sub_140721CE0(a1, v5);
  v9 = sub_140721CE0(a2, v8);
  v10 = sub_14069EDC0((__int64)v17, a1, 0LL);
  if ( v10 < 0 )
    goto LABEL_12;
  v10 = sub_14069EDC0((__int64)v16, a2, 0LL);
  if ( v10 < 0 )
    goto LABEL_12;
  v11 = sub_14069F1CC((__int64)v17, v5);
  v13 = sub_14069F1CC((__int64)v16, v12);
  if ( *(_DWORD *)(v9 + 40) == -1 )
  {
    v10 = sub_14065B3DC((__int64)v17, (__int64)v16);
    if ( v10 < 0 )
      goto LABEL_12;
    v6 = 1;
    *(_DWORD *)(v9 + 40) = *(_DWORD *)(v13 + 8);
  }
  if ( a3 )
  {
    v10 = sub_14065AAAC((__int64)v17, v16);
    if ( v10 < 0 )
      goto LABEL_10;
    v6 = 1;
  }
  v10 = 0;
LABEL_10:
  if ( v6 )
  {
    ++*(_QWORD *)(v9 + 304);
    sub_14071B4A0(v9, *(_QWORD *)(v13 + 16), 0LL, 0);
    ++*(_QWORD *)(v7 + 304);
    sub_14071B4A0(v7, *(_QWORD *)(v11 + 16), 0LL, 0);
  }
LABEL_12:
  sub_14069F150((__int64)v16);
  sub_14069F150((__int64)v17);
  return (unsigned int)v10;
}
