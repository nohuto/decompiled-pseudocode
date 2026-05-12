/*
 * XREFs of sub_1C0055B44 @ 0x1C0055B44
 * Callers:
 *     sub_1C007AF40 @ 0x1C007AF40 (sub_1C007AF40.c)
 *     sub_1C007B258 @ 0x1C007B258 (sub_1C007B258.c)
 *     sub_1C007CF64 @ 0x1C007CF64 (sub_1C007CF64.c)
 *     sub_1C007D14C @ 0x1C007D14C (sub_1C007D14C.c)
 *     sub_1C007DA18 @ 0x1C007DA18 (sub_1C007DA18.c)
 *     sub_1C007DF34 @ 0x1C007DF34 (sub_1C007DF34.c)
 *     sub_1C007F52C @ 0x1C007F52C (sub_1C007F52C.c)
 *     sub_1C007FA90 @ 0x1C007FA90 (sub_1C007FA90.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1C0055B44(_DWORD *a1, __int64 a2, _QWORD *a3, _DWORD *a4)
{
  unsigned int v4; // r10d

  v4 = 0;
  if ( *a1 == 1431193940 || *a1 == 1094997074 )
  {
    if ( *(_BYTE *)(a2 + 2) == 40 )
    {
      *a3 = *(_QWORD *)(a2 + 64);
      *a4 = *(_DWORD *)(a2 + 60);
    }
    else
    {
      *a3 = *(_QWORD *)(a2 + 24);
      *a4 = *(_DWORD *)(a2 + 16);
    }
  }
  else
  {
    return (unsigned int)-1073741637;
  }
  return v4;
}
