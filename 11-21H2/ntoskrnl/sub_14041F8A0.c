/*
 * XREFs of sub_14041F8A0 @ 0x14041F8A0
 * Callers:
 *     sub_14041FB10 @ 0x14041FB10 (sub_14041FB10.c)
 *     sub_14041FF90 @ 0x14041FF90 (sub_14041FF90.c)
 *     sub_1404206B0 @ 0x1404206B0 (sub_1404206B0.c)
 *     sub_140420C10 @ 0x140420C10 (sub_140420C10.c)
 *     sub_1404215E0 @ 0x1404215E0 (sub_1404215E0.c)
 *     sub_140421A20 @ 0x140421A20 (sub_140421A20.c)
 *     sub_140421E60 @ 0x140421E60 (sub_140421E60.c)
 *     sub_1404222A0 @ 0x1404222A0 (sub_1404222A0.c)
 *     sub_1404226D0 @ 0x1404226D0 (sub_1404226D0.c)
 *     sub_140423360 @ 0x140423360 (sub_140423360.c)
 *     sub_140423B80 @ 0x140423B80 (sub_140423B80.c)
 *     sub_140424840 @ 0x140424840 (sub_140424840.c)
 *     sub_140425050 @ 0x140425050 (sub_140425050.c)
 *     sub_140426820 @ 0x140426820 (sub_140426820.c)
 *     sub_140426C70 @ 0x140426C70 (sub_140426C70.c)
 *     sub_140427360 @ 0x140427360 (sub_140427360.c)
 *     sub_140427B30 @ 0x140427B30 (sub_140427B30.c)
 *     sub_140428220 @ 0x140428220 (sub_140428220.c)
 *     sub_14042A6B0 @ 0x14042A6B0 (sub_14042A6B0.c)
 *     sub_14042CF40 @ 0x14042CF40 (sub_14042CF40.c)
 *     sub_14042DB00 @ 0x14042DB00 (sub_14042DB00.c)
 *     sub_14042E1C0 @ 0x14042E1C0 (sub_14042E1C0.c)
 *     sub_140430000 @ 0x140430000 (sub_140430000.c)
 *     sub_140430F00 @ 0x140430F00 (sub_140430F00.c)
 *     sub_140431640 @ 0x140431640 (sub_140431640.c)
 *     sub_140432080 @ 0x140432080 (sub_140432080.c)
 *     sub_140432780 @ 0x140432780 (sub_140432780.c)
 *     sub_140434000 @ 0x140434000 (sub_140434000.c)
 *     sub_140434E40 @ 0x140434E40 (sub_140434E40.c)
 *     sub_140435300 @ 0x140435300 (sub_140435300.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14041F8A0()
{
  unsigned __int64 *v0; // rbp
  unsigned __int64 v1; // rdx
  unsigned __int64 v2; // rdx
  unsigned __int64 v3; // rdx
  __int64 result; // rax
  int v5; // r8d
  unsigned __int64 v6; // rax
  unsigned int v7; // edx

  __writedr(7u, 0LL);
  v1 = v0[12];
  __writedr(0, v0[11]);
  __writedr(1u, v1);
  v2 = v0[14];
  __writedr(2u, v0[13]);
  __writedr(3u, v2);
  v3 = v0[16];
  result = 0LL;
  __writedr(6u, 0LL);
  __writedr(7u, v3);
  if ( (__readgsbyte(0x8B22u) & 2) != 0 && (v3 & 0x300) != 0 && (dword_140C2BD48 & 2) == 0 )
  {
    if ( (v3 & 0x200) != 0 )
      LODWORD(result) = 2;
    if ( (v3 & 0x100) != 0 )
      LODWORD(result) = result | 1;
    v5 = result;
    v6 = __readmsr(0x1D9u);
    v7 = HIDWORD(v6);
    result = v5 | (unsigned int)v6 & 0xFFFFFFFC;
    __writemsr(0x1D9u, __PAIR64__(v7, result));
  }
  return result;
}
