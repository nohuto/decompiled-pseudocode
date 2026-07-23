/*
 * XREFs of sub_14041F920 @ 0x14041F920
 * Callers:
 *     sub_140423360 @ 0x140423360 (sub_140423360.c)
 *     sub_140424520 @ 0x140424520 (sub_140424520.c)
 *     sub_140425050 @ 0x140425050 (sub_140425050.c)
 *     sub_1404257E0 @ 0x1404257E0 (sub_1404257E0.c)
 *     sub_140425B20 @ 0x140425B20 (sub_140425B20.c)
 *     sub_140425E60 @ 0x140425E60 (sub_140425E60.c)
 *     sub_1404261A0 @ 0x1404261A0 (sub_1404261A0.c)
 *     sub_1404264E0 @ 0x1404264E0 (sub_1404264E0.c)
 *     sub_140427360 @ 0x140427360 (sub_140427360.c)
 *     sub_140427B30 @ 0x140427B30 (sub_140427B30.c)
 *     sub_140428220 @ 0x140428220 (sub_140428220.c)
 *     sub_14042C600 @ 0x14042C600 (sub_14042C600.c)
 *     sub_14042CB00 @ 0x14042CB00 (sub_14042CB00.c)
 *     sub_14042CF40 @ 0x14042CF40 (sub_14042CF40.c)
 *     sub_14042D480 @ 0x14042D480 (sub_14042D480.c)
 *     sub_14042D7C0 @ 0x14042D7C0 (sub_14042D7C0.c)
 *     sub_14042DB00 @ 0x14042DB00 (sub_14042DB00.c)
 *     sub_14042E1C0 @ 0x14042E1C0 (sub_14042E1C0.c)
 *     sub_14042E840 @ 0x14042E840 (sub_14042E840.c)
 *     sub_14042EBC0 @ 0x14042EBC0 (sub_14042EBC0.c)
 *     sub_14042EF00 @ 0x14042EF00 (sub_14042EF00.c)
 *     sub_14042F240 @ 0x14042F240 (sub_14042F240.c)
 *     sub_14042F580 @ 0x14042F580 (sub_14042F580.c)
 *     sub_14042F940 @ 0x14042F940 (sub_14042F940.c)
 *     sub_14042FCC0 @ 0x14042FCC0 (sub_14042FCC0.c)
 *     sub_140430000 @ 0x140430000 (sub_140430000.c)
 *     sub_140430800 @ 0x140430800 (sub_140430800.c)
 *     sub_140430BC0 @ 0x140430BC0 (sub_140430BC0.c)
 *     sub_140430F00 @ 0x140430F00 (sub_140430F00.c)
 *     sub_140431640 @ 0x140431640 (sub_140431640.c)
 *     sub_140431CC0 @ 0x140431CC0 (sub_140431CC0.c)
 *     sub_140432080 @ 0x140432080 (sub_140432080.c)
 *     sub_140432780 @ 0x140432780 (sub_140432780.c)
 *     sub_140432EC0 @ 0x140432EC0 (sub_140432EC0.c)
 *     sub_140433200 @ 0x140433200 (sub_140433200.c)
 *     sub_140433540 @ 0x140433540 (sub_140433540.c)
 *     sub_140433B00 @ 0x140433B00 (sub_140433B00.c)
 *     sub_140434000 @ 0x140434000 (sub_140434000.c)
 *     sub_140AB6E40 @ 0x140AB6E40 (sub_140AB6E40.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14041F920()
{
  __int64 v0; // rbp
  unsigned __int64 *Pcr; // r9
  unsigned __int64 v2; // rax
  unsigned __int64 v3; // rdx
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // rdx
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rdx
  __int64 result; // rax
  int v9; // r8d
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rax
  int v12; // ecx
  unsigned __int64 v13; // rax
  unsigned int v14; // edx
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // rdx
  unsigned __int64 v17; // rdx
  int v18; // r8d
  unsigned __int64 v19; // rax
  unsigned int v20; // edx

  Pcr = (unsigned __int64 *)KeGetPcr();
  v2 = __readdr(0);
  v3 = __readdr(1u);
  *(_QWORD *)(v0 + 88) = v2;
  *(_QWORD *)(v0 + 96) = v3;
  v4 = __readdr(2u);
  v5 = __readdr(3u);
  *(_QWORD *)(v0 + 104) = v4;
  *(_QWORD *)(v0 + 112) = v5;
  v6 = __readdr(6u);
  v7 = __readdr(7u);
  *(_QWORD *)(v0 + 120) = v6;
  *(_QWORD *)(v0 + 128) = v7;
  result = 0LL;
  __writedr(7u, 0LL);
  if ( (BYTE2(KeGetPcr()[94].Unused3) & 2) != 0 && (v7 & 0x300) != 0 )
  {
    if ( (dword_140C2BD48 & 2) != 0 )
    {
      *(_QWORD *)(v0 + 152) = 0LL;
      *(_QWORD *)(v0 + 144) = 0LL;
      *(_QWORD *)(v0 + 168) = 0LL;
      *(_QWORD *)(v0 + 160) = 0LL;
    }
    else
    {
      v9 = dword_140D06D40;
      if ( dword_140D06D40 )
      {
        v10 = __readmsr(dword_140D06D40);
        v9 = v10;
      }
      v11 = __readmsr(v9 + dword_140D06AC8);
      *(_DWORD *)(v0 + 152) = v11;
      v12 = dword_140D06B04;
      *(_DWORD *)(v0 + 156) = HIDWORD(v11);
      *(_QWORD *)(v0 + 144) = __readmsr(v9 + v12);
      *(_QWORD *)(v0 + 168) = __readmsr(dword_140D06C20);
      *(_QWORD *)(v0 + 160) = __readmsr(dword_140D06C24);
      v13 = __readmsr(0x1D9u);
      v14 = HIDWORD(v13);
      result = (unsigned int)v13 & 0xFFFFFFFC;
      __writemsr(0x1D9u, __PAIR64__(v14, result));
    }
  }
  if ( (Pcr[89] & 0x355) != 0 )
  {
    v15 = Pcr[85];
    __writedr(0, Pcr[84]);
    __writedr(1u, v15);
    v16 = Pcr[87];
    __writedr(2u, Pcr[86]);
    __writedr(3u, v16);
    v17 = Pcr[89];
    result = 0LL;
    __writedr(6u, 0LL);
    __writedr(7u, v17);
    if ( (BYTE2(KeGetPcr()[94].Unused3) & 2) != 0 && (v17 & 0x300) != 0 && (dword_140C2BD48 & 2) == 0 )
    {
      if ( (v17 & 0x200) != 0 )
        LODWORD(result) = 2;
      if ( (v17 & 0x100) != 0 )
        LODWORD(result) = result | 1;
      v18 = result;
      v19 = __readmsr(0x1D9u);
      v20 = HIDWORD(v19);
      result = v18 | (unsigned int)v19 & 0xFFFFFFFC;
      __writemsr(0x1D9u, __PAIR64__(v20, result));
    }
  }
  return result;
}
