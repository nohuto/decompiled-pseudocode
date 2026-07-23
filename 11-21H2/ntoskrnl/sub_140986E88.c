/*
 * XREFs of sub_140986E88 @ 0x140986E88
 * Callers:
 *     sub_1406AD6BC @ 0x1406AD6BC (sub_1406AD6BC.c)
 * Callees:
 *     sub_14036044C @ 0x14036044C (sub_14036044C.c)
 *     ?do_max_length@?$codecvt@_WDH@std@@MEBAHXZ @ 0x140360698 (-do_max_length@-$codecvt@_WDH@std@@MEBAHXZ.c)
 *     sub_140862398 @ 0x140862398 (sub_140862398.c)
 *     sub_140988074 @ 0x140988074 (sub_140988074.c)
 *     sub_140A6AD80 @ 0x140A6AD80 (sub_140A6AD80.c)
 */

__int64 __fastcall sub_140986E88(int *a1)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  unsigned int v4; // ecx
  int v5; // edi
  int v7; // [rsp+30h] [rbp+8h] BYREF

  if ( (*a1 & 0x1Fu) - 2 <= 1 )
  {
    v2 = *((_QWORD *)a1 + 1);
    *(_OWORD *)v2 = xmmword_140C4EC70;
    *(_QWORD *)(v2 + 16) = unk_140C4EC80;
    if ( (*a1 & 0x1F) == 2 )
      v3 = (*(_DWORD *)(v2 + 24) >> 5) & 7;
    else
      v3 = (unsigned int)std::codecvt<wchar_t,char,int>::do_max_length();
    sub_140A6AD80(v3);
  }
  if ( (*(_BYTE *)a1 & 0x1F) == 0x1B && (*(_DWORD *)(*((_QWORD *)a1 + 1) + 8LL) & 3) == 1 )
    _InterlockedAnd(&dword_140CF5E54, 0xFFFFFFFE);
  v4 = *a1;
  v5 = dword_140C5451C
     + ((((MEMORY[0xFFFFF78000000004] * HIDWORD(MEMORY[0xFFFFF78000000320])) << 8)
       + ((MEMORY[0xFFFFF78000000004] * (unsigned __int64)MEMORY[0xFFFFF78000000320]) >> 24)) >> 10);
  if ( (*a1 & 0x20) != 0 )
  {
    v7 = ((unsigned int)*a1 >> 6) & 1;
    sub_140862398((unsigned int *)&v7, 4u, 0);
    sub_140988074(&Thread, 0LL);
    v4 = *a1;
  }
  return sub_14036044C(v4 & 0x1F, v5, *((const void **)a1 + 1), v4 >> 7);
}
