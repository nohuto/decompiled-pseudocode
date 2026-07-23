/*
 * XREFs of PfpUpdateRepurposedByPrefetch @ 0x14075D9D0
 * Callers:
 *     PfpVolumePrefetchMetadata @ 0x140684C04 (PfpVolumePrefetchMetadata.c)
 *     PfpPrefetchFilesTrickle @ 0x14075D680 (PfpPrefetchFilesTrickle.c)
 *     PfpPrefetchDirectoryStream @ 0x1407D7DDC (PfpPrefetchDirectoryStream.c)
 *     PfpPrefetchPrivatePages @ 0x14097E468 (PfpPrefetchPrivatePages.c)
 * Callees:
 *     MmQueryMemoryListInformation @ 0x1402F8BE8 (MmQueryMemoryListInformation.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     PfpGetPageListCount @ 0x14075DAEC (PfpGetPageListCount.c)
 */

_OWORD *__fastcall PfpUpdateRepurposedByPrefetch(_OWORD *a1, unsigned __int64 a2)
{
  __int64 v4; // r9
  __int64 PageListCount; // rax
  __int64 v6; // r10
  unsigned __int64 v7; // rax
  _OWORD *result; // rax
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  _OWORD *v16; // rdi
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int64 v19; // [rsp+30h] [rbp-D8h] BYREF
  _OWORD v20[11]; // [rsp+40h] [rbp-C8h] BYREF

  memset(v20, 0, sizeof(v20));
  LODWORD(v19) = 0;
  MmQueryMemoryListInformation(0xFFFFFFFFFFFFFFFFuLL, v20, 0xB0u, v4, &v19);
  PfpGetPageListCount((char *)a1 + 104, 0LL);
  PageListCount = PfpGetPageListCount((char *)&v20[6] + 8, 0LL);
  v7 = PageListCount - v6;
  if ( v7 > a2 )
    v7 = a2;
  if ( v7 )
    _InterlockedExchangeAdd64(&qword_140C65100, v7);
  result = v20;
  v9 = v20[1];
  *a1 = v20[0];
  v10 = v20[2];
  a1[1] = v9;
  v11 = v20[3];
  a1[2] = v10;
  v12 = v20[4];
  a1[3] = v11;
  v13 = v20[5];
  a1[4] = v12;
  v14 = v20[6];
  a1[5] = v13;
  v15 = v20[8];
  a1[6] = v14;
  v16 = a1 + 8;
  *(v16 - 1) = v20[7];
  v17 = v20[9];
  *v16 = v15;
  v18 = v20[10];
  v16[1] = v17;
  v16[2] = v18;
  return result;
}
