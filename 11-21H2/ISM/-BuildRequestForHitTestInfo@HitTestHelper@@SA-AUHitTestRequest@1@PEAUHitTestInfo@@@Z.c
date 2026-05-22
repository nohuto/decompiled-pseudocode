/*
 * XREFs of ?BuildRequestForHitTestInfo@HitTestHelper@@SA?AUHitTestRequest@1@PEAUHitTestInfo@@@Z @ 0x180198DF4
 * Callers:
 *     ?HitTest@DWMInputRouter@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUIInputTarget@@PEAPEAU4@@Z @ 0x18019A990 (-HitTest@DWMInputRouter@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUIInputTarget@@PEAPEAU4@@Z.c)
 * Callees:
 *     memset_0 @ 0x18004A918 (memset_0.c)
 *     ?ConvertInputTypeToPointerType@HitTestHelper@@SA?BHW4InputType@@@Z @ 0x180198EBC (-ConvertInputTypeToPointerType@HitTestHelper@@SA-BHW4InputType@@@Z.c)
 */

_DWORD *__fastcall HitTestHelper::BuildRequestForHitTestInfo(_DWORD *a1, unsigned int *a2)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  int v6; // eax
  unsigned int v7; // r8d
  unsigned int v8; // edx
  int v9; // ecx
  int v10; // eax

  memset_0(a1, 0, 0x88uLL);
  v6 = HitTestHelper::ConvertInputTypeToPointerType(*a2, v4, v5);
  *a1 = v6;
  if ( v6 == 4 )
  {
    v7 = a2[8];
    v8 = 0;
    if ( (v7 & 0x180000) != 0 )
    {
      v8 = (((*((__int16 *)a2 + 18) >> 31) & 0xFFFFFFFE) + 3) | 4;
      if ( (v7 & 0x100000) == 0 )
        v8 = ((*((__int16 *)a2 + 18) >> 31) & 0xFFFFFFFE) + 3;
    }
    v9 = v8 | 8;
    if ( (v7 & 0x10000) == 0 )
      v9 = v8;
    v10 = v9 | 0x20;
    if ( !*((_BYTE *)a2 + 52) )
      v10 = v9;
    a1[26] = v10;
  }
  *(_QWORD *)(a1 + 1) = *(_QWORD *)(a2 + 11);
  a1[27] = a2[6];
  return a1;
}
