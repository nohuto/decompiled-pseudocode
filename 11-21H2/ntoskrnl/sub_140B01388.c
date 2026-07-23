/*
 * XREFs of sub_140B01388 @ 0x140B01388
 * Callers:
 *     sub_140AFFF64 @ 0x140AFFF64 (sub_140AFFF64.c)
 * Callees:
 *     sub_140368C88 @ 0x140368C88 (sub_140368C88.c)
 *     sub_14057D738 @ 0x14057D738 (sub_14057D738.c)
 *     sub_140B001A8 @ 0x140B001A8 (sub_140B001A8.c)
 *     sub_140B01420 @ 0x140B01420 (sub_140B01420.c)
 *     sub_140B014B0 @ 0x140B014B0 (sub_140B014B0.c)
 */

__int64 sub_140B01388()
{
  int v0; // ebx
  int v1; // ebx
  int v2; // ebx
  char v4; // al
  __int64 v5; // rcx
  char v6; // al
  __int64 v7; // rcx
  char v8; // al
  __int64 v9; // rcx

  v0 = sub_140B014B0();
  if ( v0 < 0 )
  {
    v4 = dword_140D04880;
    v5 = ((unsigned __int8)_InterlockedExchangeAdd(&dword_140C2A200, 1u) + 1) & 0x3F;
    dword_140C2A220[2 * v5 + 1] = v0;
    dword_140C2A220[2 * v5] = 655516;
    if ( (v4 & 2) != 0 )
      sub_14057D738(0LL, "KSE: KsepMatchInitAcpiOemInfo failed [0x%08x]\n", v0);
    sub_140368C88(0LL, (__int64)"KSE: KsepMatchInitAcpiOemInfo failed [0x%08x]\n", v0);
  }
  v1 = sub_140B01420();
  if ( v1 < 0 )
  {
    v6 = dword_140D04880;
    v7 = ((unsigned __int8)_InterlockedExchangeAdd(&dword_140C2A200, 1u) + 1) & 0x3F;
    dword_140C2A220[2 * v7 + 1] = v1;
    dword_140C2A220[2 * v7] = 655522;
    if ( (v6 & 2) != 0 )
      sub_14057D738(0LL, "KSE: KsepMatchInitCpuInfo failed\n [0x%08x]\n", v1);
    sub_140368C88(0LL, (__int64)"KSE: KsepMatchInitCpuInfo failed\n [0x%08x]\n", v1);
  }
  v2 = sub_140B001A8();
  if ( v2 < 0 )
  {
    v8 = dword_140D04880;
    v9 = ((unsigned __int8)_InterlockedExchangeAdd(&dword_140C2A200, 1u) + 1) & 0x3F;
    dword_140C2A220[2 * v9 + 1] = v2;
    dword_140C2A220[2 * v9] = 655528;
    if ( (v8 & 2) != 0 )
      sub_14057D738(0LL, "KSE: KsepMatchInitBiosInfo failed [0x%08x]\n", v2);
    sub_140368C88(0LL, (__int64)"KSE: KsepMatchInitBiosInfo failed [0x%08x]\n", v2);
  }
  qword_140C2A6E0 = (__int64)&xmmword_140C5A8F8;
  qword_140C2A6E8 = (__int64)&xmmword_140C5AB38;
  qword_140C2A6F0 = (__int64)&xmmword_140C5AB70;
  qword_140C2A6F8 = (__int64)&xmmword_140C5ABA8;
  return 0LL;
}
