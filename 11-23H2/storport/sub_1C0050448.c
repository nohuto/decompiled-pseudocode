/*
 * XREFs of sub_1C0050448 @ 0x1C0050448
 * Callers:
 *     sub_1C0001770 @ 0x1C0001770 (sub_1C0001770.c)
 *     sub_1C0008F40 @ 0x1C0008F40 (sub_1C0008F40.c)
 *     sub_1C0009BC0 @ 0x1C0009BC0 (sub_1C0009BC0.c)
 *     sub_1C0017AF4 @ 0x1C0017AF4 (sub_1C0017AF4.c)
 *     sub_1C0036C8C @ 0x1C0036C8C (sub_1C0036C8C.c)
 *     sub_1C0038530 @ 0x1C0038530 (sub_1C0038530.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1C0050448(__int64 a1)
{
  __int64 v1; // rdx
  unsigned int v3; // r10d
  __int64 v4; // r9
  __int64 v5; // rcx
  unsigned __int64 v6; // rbx

  v1 = 0LL;
  if ( *(_BYTE *)(a1 + 2) == 40 && (*(_BYTE *)(a1 + 24) & 0xC0) == 0xC0 )
  {
    v3 = *(_DWORD *)(a1 + 56);
    v4 = 0LL;
    if ( v3 )
    {
      while ( 1 )
      {
        v5 = *(unsigned int *)(a1 + 4 * v4 + 120);
        v1 = 0LL;
        if ( (unsigned int)v5 >= 0x80 )
        {
          v6 = *(unsigned int *)(a1 + 16);
          if ( (unsigned int)v5 <= (unsigned int)v6 && *(_DWORD *)(v5 + a1) == 1 && v5 + 24 <= v6 )
            break;
        }
        v4 = (unsigned int)(v4 + 1);
        if ( (unsigned int)v4 >= v3 )
          return v1;
      }
      return v5 + a1;
    }
  }
  return v1;
}
