/*
 * XREFs of sub_140A57680 @ 0x140A57680
 * Callers:
 *     DriverEntry @ 0x140A47010 (DriverEntry.c)
 * Callees:
 *     KeAddProcessorAffinityEx @ 0x140294460 (KeAddProcessorAffinityEx.c)
 *     HalInitializeProcessor @ 0x1403BFB00 (HalInitializeProcessor.c)
 *     HalInitializeBios @ 0x1403D0150 (HalInitializeBios.c)
 *     sub_1403DC4D0 @ 0x1403DC4D0 (sub_1403DC4D0.c)
 *     sub_1403DE2DC @ 0x1403DE2DC (sub_1403DE2DC.c)
 *     strstr @ 0x1403E0C40 (strstr.c)
 *     atoi @ 0x1403E0CC0 (atoi.c)
 *     sub_14041F600 @ 0x14041F600 (sub_14041F600.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_140A56118 @ 0x140A56118 (sub_140A56118.c)
 *     sub_140A56A48 @ 0x140A56A48 (sub_140A56A48.c)
 *     sub_140A56CDC @ 0x140A56CDC (sub_140A56CDC.c)
 *     sub_140A57AD4 @ 0x140A57AD4 (sub_140A57AD4.c)
 *     sub_140A57CB4 @ 0x140A57CB4 (sub_140A57CB4.c)
 *     sub_140A59FA4 @ 0x140A59FA4 (sub_140A59FA4.c)
 *     sub_140A5A324 @ 0x140A5A324 (sub_140A5A324.c)
 *     sub_140AF305C @ 0x140AF305C (sub_140AF305C.c)
 *     sub_140AFB154 @ 0x140AFB154 (sub_140AFB154.c)
 *     sub_140B07AB0 @ 0x140B07AB0 (sub_140B07AB0.c)
 *     sub_140B15450 @ 0x140B15450 (sub_140B15450.c)
 *     sub_140B25898 @ 0x140B25898 (sub_140B25898.c)
 *     sub_140B29610 @ 0x140B29610 (sub_140B29610.c)
 *     sub_140B315C0 @ 0x140B315C0 (sub_140B315C0.c)
 */

__int64 __fastcall sub_140A57680(__int64 a1)
{
  KPCR *Pcr; // r14
  struct _KPRCB *CurrentPrcb; // rdi
  __int64 LockArray_high; // rbp
  _QWORD *v5; // rcx
  __int64 v6; // rax
  bool v7; // zf
  union _KIDTENTRY64 *IdtBase; // r15
  unsigned int v9; // eax
  unsigned __int64 v10; // rdx
  unsigned int v11; // ecx
  __int64 v12; // r8
  unsigned __int64 v13; // rax
  int v14; // eax
  __int64 (__fastcall *v15)(); // rbx
  __int64 (__fastcall *v16)(); // rsi
  __int64 v18; // r10
  __int64 v19; // rax
  int v20; // edx
  const char *v21; // rcx
  char *v22; // rax
  int v23; // ecx
  char i; // cl
  unsigned int v25; // [rsp+60h] [rbp+8h] BYREF
  unsigned int v26; // [rsp+68h] [rbp+10h] BYREF
  int v27; // [rsp+70h] [rbp+18h] BYREF

  Pcr = KeGetPcr();
  CurrentPrcb = KeGetCurrentPrcb();
  v26 = 0;
  v25 = 0;
  v27 = 0;
  *(_DWORD *)&Pcr->MajorVersion = 65537;
  *((_DWORD *)CurrentPrcb + 34) = 65537;
  *((_BYTE *)CurrentPrcb + 140) = 0;
  LockArray_high = HIDWORD(Pcr[1].LockArray);
  if ( !(_DWORD)LockArray_high )
  {
    sub_140AF305C(*(_QWORD *)(a1 + 240));
    v18 = *(_QWORD *)(a1 + 240);
    dword_140C2AF00 = *(_DWORD *)(v18 + 3492);
    dword_140C2AF04 = (*(_DWORD *)(v18 + 132) >> 21) & 0x3F;
    *(_QWORD *)(a1 + 144) = &unk_140D32B00;
    *(_QWORD *)(a1 + 152) = &unk_140D35BC0;
    LODWORD(dword_140D05050) = *(_DWORD *)(a1 + 160);
    v19 = *(_QWORD *)(a1 + 128) + 28672LL;
    *((_QWORD *)CurrentPrcb + 4411) = v19;
    v19 += 28592LL;
    *(_QWORD *)(v19 + 40) = &loc_1404205B0;
    *((_QWORD *)CurrentPrcb + 4173) = v19;
  }
  *((_QWORD *)CurrentPrcb + 4361) = (char *)CurrentPrcb + 35968;
  v5 = *(_QWORD **)(a1 + 152);
  *((_QWORD *)CurrentPrcb + 2) = 0LL;
  *((_QWORD *)CurrentPrcb + 1) = v5;
  *((_QWORD *)CurrentPrcb + 3) = v5;
  v5[23] = *(_QWORD *)(a1 + 144);
  v5[20] = v5 + 19;
  v5[19] = v5 + 19;
  if ( !(_DWORD)LockArray_high )
    sub_140B15450(a1);
  qword_140D088C0[LockArray_high] = (__int64)CurrentPrcb;
  v6 = *(_QWORD *)(a1 + 128) - 80LL;
  *(_QWORD *)(v6 + 40) = &loc_140428B50;
  v7 = *((_QWORD *)CurrentPrcb + 4408) == 0LL;
  *((_QWORD *)CurrentPrcb + 1652) = v6;
  if ( v7 )
  {
    *((_DWORD *)CurrentPrcb + 8818) = 1048587;
    *((_QWORD *)CurrentPrcb + 4408) = (char *)CurrentPrcb + 496;
  }
  IdtBase = Pcr->IdtBase;
  v9 = sub_140A56A48((_BYTE *)CurrentPrcb + 141, (int *)&v26, (int *)&v25, &v27);
  v11 = v26;
  v12 = v9;
  LOWORD(v9) = v27 | ((_WORD)v25 << 8);
  v7 = *((_BYTE *)CurrentPrcb + 141) == 2;
  *((_BYTE *)CurrentPrcb + 65) = 1;
  *((_BYTE *)CurrentPrcb + 64) = v11;
  *((_WORD *)CurrentPrcb + 33) = v9;
  if ( v7 && (v11 >= 0xF || v11 == 6 && v25 > 0xD) )
  {
    v13 = __readmsr(0x1A0u) & 0xFFFFFFFFFFBFFFFFuLL;
    v10 = HIDWORD(v13);
    __writemsr(0x1A0u, v13);
  }
  if ( !(_DWORD)LockArray_high )
  {
    sub_140A56118((__int64)CurrentPrcb, v12);
    *((_QWORD *)IdtBase + 526) = Pcr;
    sub_140B315C0(a1);
    sub_140B29610();
    sub_1403DC4D0(a1);
    sub_140B07AB0(0xFFFFFFFFLL, a1);
    v20 = *(_DWORD *)(*(_QWORD *)(a1 + 240) + 132LL);
    if ( (v20 & 8) != 0 )
      dword_140D686C4 = 1;
    if ( (v20 & 0x100) != 0 )
      dword_140D6815C = 1;
    sub_140A5A324(IdtBase, 0LL);
    HalInitializeBios(-1, (_QWORD *)a1);
    sub_140B25898(0xFFFFFFFFLL, a1, 0LL);
    v21 = *(const char **)(a1 + 216);
    if ( v21 )
    {
      v22 = strstr(v21, "GROUPSIZE");
      if ( v22 )
      {
        for ( i = *v22; *v22; i = *++v22 )
        {
          if ( i == 32 )
            break;
          if ( (unsigned __int8)(i - 48) <= 9u )
            break;
        }
        dword_140D0503C = atoi(v22);
        if ( (unsigned int)(dword_140D0503C - 1) > 0x3F )
          dword_140D0503C = 64;
      }
    }
  }
  *((_WORD *)Pcr->NtTib.StackBase + 51) = 104;
  if ( !HIDWORD(KeGetPcr()[1].LockArray) )
    sub_140AFB154(104LL, v10, v12);
  HalInitializeProcessor(LockArray_high);
  sub_140A56CDC((__int64)CurrentPrcb);
  v14 = *((_DWORD *)CurrentPrcb + 9);
  v15 = sub_140433B00;
  v16 = (__int64 (__fastcall *)())sub_140434000;
  if ( !v14 )
  {
    sub_140A59FA4(CurrentPrcb, &Pcr->NtTib.ExceptionList[-763]);
    v14 = *((_DWORD *)CurrentPrcb + 9);
  }
  if ( byte_140E01840 )
  {
    v15 = sub_140AB6E40;
    v16 = sub_140AB71C0;
  }
  if ( !v14 )
    dword_140D06D58 = sub_1403DE2DC();
  if ( *((_QWORD *)CurrentPrcb + 1440) )
    __writemsr(0x122u, *((_QWORD *)CurrentPrcb + 1440));
  if ( !*((_DWORD *)CurrentPrcb + 9) )
  {
    v23 = dword_140D68660;
    qword_140C02C00 = (__int64)qword_140E01910;
    qword_140C02C08 = 64LL;
    qword_140E01910[dword_140D68660] = v16;
    qword_140E01910[++v23] = v15;
    dword_140D68660 = v23 + 1;
  }
  __writemsr(0xC0000081, 0x23001000000000uLL);
  __writemsr(0xC0000083, (unsigned __int64)v15);
  __writemsr(0xC0000082, (unsigned __int64)v16);
  __writemsr(0xC0000084, 0x4700uLL);
  sub_140A57CB4(CurrentPrcb, (unsigned int)LockArray_high);
  sub_140A57AD4();
  if ( !(_DWORD)LockArray_high )
  {
    LODWORD(dword_140D06884) = 1;
    KeNumberProcessors[0] = 1;
    dword_140D06E40[0] = 2097153;
    memset(&unk_140D06E44, 0, 0x104uLL);
    KeAddProcessorAffinityEx((unsigned __int16 *)dword_140D06E40, 0);
  }
  return sub_14041F600((__int64)CurrentPrcb + 256);
}
