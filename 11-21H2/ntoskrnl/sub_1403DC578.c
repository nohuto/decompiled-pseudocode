/*
 * XREFs of sub_1403DC578 @ 0x1403DC578
 * Callers:
 *     sub_1403DC4D0 @ 0x1403DC4D0 (sub_1403DC4D0.c)
 * Callees:
 *     RtlImageDirectoryEntryToData @ 0x1402D6CB0 (RtlImageDirectoryEntryToData.c)
 */

char sub_1403DC578()
{
  _DWORD *v0; // r8
  _DWORD *i; // r9
  int v2; // eax
  _DWORD *v4; // rcx
  _DWORD *v5; // rdx
  ULONG Size; // [rsp+30h] [rbp+8h] BYREF

  Size = 0;
  v0 = RtlImageDirectoryEntryToData((PVOID)0x140000000LL, 1u, 6u, &Size);
  if ( v0 )
  {
    for ( i = &v0[7 * (Size / 0x1CuLL)]; v0 < i; v0 += 7 )
    {
      v2 = v0[3];
      if ( v2 == 10 )
      {
        v4 = (_DWORD *)(0x140000000LL + (unsigned int)v0[5]);
        v5 = &v4[(unsigned __int64)(unsigned int)v0[4] >> 2];
        while ( v4 < v5 )
        {
          if ( *v4 == 1346849024 )
            return 1;
          ++v4;
        }
      }
      else if ( v2 == 13 && v0[4] >= 0x10u && *(_DWORD *)((unsigned int)v0[5] + 0x140000000LL) == 1346849024 )
      {
        return 1;
      }
    }
  }
  return 0;
}
