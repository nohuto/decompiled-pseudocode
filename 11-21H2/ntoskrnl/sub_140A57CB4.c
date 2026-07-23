/*
 * XREFs of sub_140A57CB4 @ 0x140A57CB4
 * Callers:
 *     sub_140A57680 @ 0x140A57680 (sub_140A57680.c)
 * Callees:
 *     sub_14025E724 @ 0x14025E724 (sub_14025E724.c)
 *     KeInitializeDpc @ 0x1402940D0 (KeInitializeDpc.c)
 *     InitializeSListHead @ 0x1402A05A0 (InitializeSListHead.c)
 *     sub_1403C0478 @ 0x1403C0478 (sub_1403C0478.c)
 *     sub_1403C04C0 @ 0x1403C04C0 (sub_1403C04C0.c)
 *     sub_1403C04FC @ 0x1403C04FC (sub_1403C04FC.c)
 *     memset @ 0x140435E00 (memset.c)
 */

void *__fastcall sub_140A57CB4(__int64 a1, int a2)
{
  _QWORD *v2; // rax
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // r8
  _QWORD *v8; // rcx
  __int64 v9; // rdi
  __int64 v10; // rbx
  void *result; // rax

  v2 = (_QWORD *)(a1 + 32576);
  *(_DWORD *)(a1 + 32472) = 0;
  *(_DWORD *)(a1 + 32480) = 1;
  *(_DWORD *)(a1 + 33140) = 0;
  *(_QWORD *)(a1 + 33144) = 0LL;
  *(_QWORD *)(a1 + 11528) = 0LL;
  v5 = 32LL;
  do
  {
    v2[1] = v2;
    *v2 = v2;
    v2 += 2;
    --v5;
  }
  while ( v5 );
  v6 = 0LL;
  v7 = 32LL;
  **(_QWORD **)(a1 + 34888) = 0LL;
  *(_DWORD *)(*(_QWORD *)(a1 + 34888) + 8LL) = 0;
  *(_DWORD *)(*(_QWORD *)(a1 + 34888) + 672LL) = 0;
  *(_QWORD *)(*(_QWORD *)(a1 + 34888) + 680LL) = 0LL;
  do
  {
    v8 = (_QWORD *)(v6 + *(_QWORD *)(a1 + 34888) + 16LL);
    v6 += 16LL;
    v8[1] = v8;
    *v8 = v8;
    --v7;
  }
  while ( v7 );
  memset((void *)(*(_QWORD *)(a1 + 34888) + 528LL), 63, 0x40uLL);
  *(_BYTE *)(*(_QWORD *)(a1 + 34888) + 656LL) = 1;
  *(_BYTE *)(*(_QWORD *)(a1 + 34888) + 657LL) = *(_BYTE *)(a1 + 209);
  *(_BYTE *)(*(_QWORD *)(a1 + 34888) + 658LL) = 1;
  *(_BYTE *)(*(_QWORD *)(a1 + 34888) + 660LL) = 1;
  *(_QWORD *)(*(_QWORD *)(a1 + 34888) + 664LL) = *(_QWORD *)(a1 + 200);
  *(_QWORD *)(a1 + 56) = *(_QWORD *)(a1 + 34888) + 528LL;
  sub_14025E724((_QWORD *)(a1 + 13120));
  *(_QWORD *)(a1 + 13136) = 0LL;
  *(_DWORD *)(a1 + 13144) = 0;
  *(_DWORD *)(a1 + 13148) = 0;
  *(_BYTE *)(a1 + 13242) = 0;
  *(_DWORD *)(a1 + 13244) = 0;
  *(_DWORD *)(a1 + 13224) = dword_140D05094;
  *(_DWORD *)(a1 + 13232) = dword_140D050C4;
  *(_DWORD *)(a1 + 33108) = dword_140D05098;
  KeInitializeDpc((PRKDPC)(a1 + 32352), (PKDEFERRED_ROUTINE)sub_1402220E0, 0LL);
  if ( !*(_QWORD *)(a1 + 32408) )
    *(_WORD *)(a1 + 32354) = a2 + 2048;
  *(_BYTE *)(a1 + 32353) = 2;
  sub_1403C04FC(a1);
  *(_QWORD *)(a1 + 13096) = 1LL;
  *(_QWORD *)(a1 + 32456) = a1 + 32448;
  *(_QWORD *)(a1 + 32448) = a1 + 32448;
  InitializeSListHead((PSLIST_HEADER)(a1 + 13056));
  KeGetPcr()->NtTib.ArbitraryUserPointer = (PVOID)(a1 + 1776);
  *(_QWORD *)(a1 + 2008) = &qword_140D31580;
  *(_QWORD *)(a1 + 2000) = 0LL;
  *(_QWORD *)(a1 + 1864) = &qword_140D315C0;
  *(_QWORD *)(a1 + 1848) = &qword_140D31600;
  *(_QWORD *)(a1 + 1880) = &qword_140D31480;
  *(_QWORD *)(a1 + 1896) = &qword_140D314C0;
  *(_QWORD *)(a1 + 1928) = &qword_140D31500;
  *(_QWORD *)(a1 + 1944) = &qword_140D31540;
  *(_QWORD *)(a1 + 1960) = &qword_140D31640;
  *(_QWORD *)(a1 + 1976) = &qword_140D31680;
  *(_QWORD *)(a1 + 1992) = &qword_140D316C0;
  *(_QWORD *)(a1 + 1856) = 0LL;
  *(_QWORD *)(a1 + 1840) = 0LL;
  *(_QWORD *)(a1 + 1872) = 0LL;
  *(_QWORD *)(a1 + 1888) = 0LL;
  *(_QWORD *)(a1 + 1920) = 0LL;
  *(_QWORD *)(a1 + 1936) = 0LL;
  *(_QWORD *)(a1 + 1952) = 0LL;
  *(_QWORD *)(a1 + 1968) = 0LL;
  *(_QWORD *)(a1 + 1984) = 0LL;
  *(_QWORD *)(a1 + 2032) = 0LL;
  *(_QWORD *)(a1 + 2040) = 0LL;
  *(_DWORD *)(a1 + 35296) = (3 * (_WORD)a2) & 0x3FF;
  *(_QWORD *)(a1 + 48) = 0LL;
  *(_QWORD *)(a1 + 32464) = 0LL;
  *(_DWORD *)(a1 + 32416) = 1;
  KeInitializeDpc((PRKDPC)(a1 + 35560), (PKDEFERRED_ROUTINE)sub_140248EF0, (PVOID)(a1 + 35296));
  if ( !a2 )
  {
    byte_140C095E0 = byte_140D05003;
    qword_140D31340 = 0LL;
    qword_140D31580 = 0LL;
    qword_140D315C0 = 0LL;
    qword_140D31600 = 0LL;
    qword_140D314C0 = 0LL;
    qword_140D31640 = 0LL;
    qword_140D31540 = 0LL;
    qword_140D31500 = 0LL;
    qword_140D31480 = 0LL;
    qword_140D31680 = 0LL;
    qword_140D316C0 = 0LL;
    *(_DWORD *)byte_140C2AF60 = 2097184;
    memset(&unk_140C2AF64, 0, 0x104uLL);
  }
  sub_1403C04C0(a1);
  KeInitializeDpc((PRKDPC)(a1 + 35712), (PKDEFERRED_ROUTINE)sub_140359020, 0LL);
  if ( !*(_QWORD *)(a1 + 35768) )
    *(_WORD *)(a1 + 35714) = a2 + 2048;
  sub_1403C0478((_DWORD *)(a1 + 12760));
  *(_DWORD *)(a1 + 34452) = 0;
  v9 = 5LL;
  v10 = a1 + 40636;
  do
  {
    *(_QWORD *)(v10 - 4) = 2097153LL;
    result = memset((void *)(v10 + 4), 0, 0x100uLL);
    v10 += 264LL;
    --v9;
  }
  while ( v9 );
  return result;
}
