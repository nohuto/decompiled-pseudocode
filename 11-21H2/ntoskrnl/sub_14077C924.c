/*
 * XREFs of sub_14077C924 @ 0x14077C924
 * Callers:
 *     sub_140697384 @ 0x140697384 (sub_140697384.c)
 *     sub_140698298 @ 0x140698298 (sub_140698298.c)
 *     sub_1406988E0 @ 0x1406988E0 (sub_1406988E0.c)
 *     sub_14069984C @ 0x14069984C (sub_14069984C.c)
 *     sub_1406BA8F4 @ 0x1406BA8F4 (sub_1406BA8F4.c)
 *     sub_140745620 @ 0x140745620 (sub_140745620.c)
 *     sub_140746270 @ 0x140746270 (sub_140746270.c)
 *     sub_140746CCC @ 0x140746CCC (sub_140746CCC.c)
 *     sub_14076E714 @ 0x14076E714 (sub_14076E714.c)
 *     sub_1407702BC @ 0x1407702BC (sub_1407702BC.c)
 *     sub_140771B04 @ 0x140771B04 (sub_140771B04.c)
 *     sub_14077B908 @ 0x14077B908 (sub_14077B908.c)
 *     sub_14077DBE8 @ 0x14077DBE8 (sub_14077DBE8.c)
 *     sub_140789AEC @ 0x140789AEC (sub_140789AEC.c)
 *     sub_14094AA64 @ 0x14094AA64 (sub_14094AA64.c)
 *     sub_14094C2D0 @ 0x14094C2D0 (sub_14094C2D0.c)
 *     sub_14094CFE8 @ 0x14094CFE8 (sub_14094CFE8.c)
 *     sub_14094D930 @ 0x14094D930 (sub_14094D930.c)
 *     DoScreenSave @ 0x14094EA0C (DoScreenSave.c)
 *     sub_14094F4CC @ 0x14094F4CC (sub_14094F4CC.c)
 *     sub_140A26068 @ 0x140A26068 (sub_140A26068.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_14077CA18 @ 0x14077CA18 (sub_14077CA18.c)
 */

__int64 __fastcall sub_14077C924(__int64 a1, __int64 a2, int a3, int a4, char a5, __int64 a6)
{
  __int64 v10; // rdi
  int v11; // eax
  unsigned int v12; // eax
  unsigned int v13; // ebx
  int v15; // eax
  int v16; // ecx
  unsigned int v17; // eax
  __int64 v18[10]; // [rsp+48h] [rbp-29h] BYREF

  memset(v18, 0, sizeof(v18));
  v10 = *(_QWORD *)(a1 + 488);
  HIDWORD(v18[4]) = 0;
  BYTE4(v18[2]) = a5;
  v18[3] = a6;
  LODWORD(v18[2]) = a4;
  if ( v10 )
  {
    v11 = sub_14042A5E0(a1, a2);
    if ( v11 == -1073741822 )
    {
      v10 = 0LL;
    }
    else
    {
      if ( v11 == -1073741536 )
        return LODWORD(v18[0]);
      if ( v11 )
        return (unsigned int)-1073741595;
    }
  }
  v12 = sub_14077CA18(a1, a2, a3, v18[2], SBYTE4(v18[2]), v18[3], (__int64)&v18[4], HIDWORD(v18[4]));
  v13 = v12;
  if ( !v10 )
    return v13;
  LODWORD(v18[0]) = v12;
  v15 = sub_14042A5E0(a1, a2);
  v16 = v15;
  if ( v15 == -1073741822 )
    return v13;
  if ( v15 == -1073741536 )
    return LODWORD(v18[0]);
  v17 = v13;
  if ( v16 )
    return (unsigned int)-1073741595;
  return v17;
}
