/*
 * XREFs of sub_1409BCDDC @ 0x1409BCDDC
 * Callers:
 *     sub_1405ED40C @ 0x1405ED40C (sub_1405ED40C.c)
 *     sub_1405ED45C @ 0x1405ED45C (sub_1405ED45C.c)
 *     sub_1409BCF40 @ 0x1409BCF40 (sub_1409BCF40.c)
 *     sub_1409BCF8C @ 0x1409BCF8C (sub_1409BCF8C.c)
 *     sub_1409BD378 @ 0x1409BD378 (sub_1409BD378.c)
 *     sub_1409BDBFC @ 0x1409BDBFC (sub_1409BDBFC.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1409BCDDC(__int64 a1, int a2, int a3)
{
  int v5; // r8d
  __int64 v6; // rcx
  __int64 v7; // rax
  unsigned __int16 v8; // r8
  unsigned __int16 v9; // si
  __int64 v10; // r9
  int v11; // edi

  if ( ((a2 & 0x1F0000) == 0) != ((a3 & 0x1F0000) == 0) )
    return 0LL;
  v5 = *(_DWORD *)(a1 + 88);
  if ( !v5 )
    return 0LL;
  v6 = *(_QWORD *)(a1 + 96);
  v7 = (unsigned __int16)((a2 + 12541 * a3) % v5);
  v8 = *(_WORD *)(v6 + 2 * v7);
  v9 = *(_WORD *)(v6 + 2 * v7 + 2);
  if ( v8 >= v9 )
    return 0LL;
  v10 = *(_QWORD *)(a1 + 104);
  while ( 1 )
  {
    v11 = *(unsigned __int16 *)(v10 + 2LL * v8);
    if ( a2 == v11 && a3 == *(unsigned __int16 *)(v10 + 2LL * v8 + 2) )
      return *(unsigned __int16 *)(v10 + 2LL * v8 + 4);
    if ( (unsigned __int16)(v11 + 10240) <= 0x7FFu )
      break;
LABEL_14:
    v8 += 3;
    if ( v8 >= v9 )
      return 0LL;
  }
  if ( a2 <= 0xFFFF
    || (_WORD)v11 != (unsigned __int16)((a2 - 0x10000) / 1024) - 10240
    || *(_WORD *)(v10 + 2LL * v8 + 2) != (unsigned __int16)((a2 - 0x10000) % 1024) - 9216
    || *(_WORD *)(v10 + 2LL * v8 + 4) != (unsigned __int16)((a3 - 0x10000) / 1024) - 10240
    || *(_WORD *)(v10 + 2LL * v8 + 6) != (unsigned __int16)((a3 - 0x10000) % 1024) - 9216 )
  {
    v8 += 3;
    goto LABEL_14;
  }
  return *(unsigned __int16 *)(v10 + 2LL * v8 + 10)
       + (((unsigned int)*(unsigned __int16 *)(v10 + 2LL * v8 + 8) - 55287) << 10);
}
