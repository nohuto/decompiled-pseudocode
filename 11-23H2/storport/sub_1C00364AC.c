/*
 * XREFs of sub_1C00364AC @ 0x1C00364AC
 * Callers:
 *     sub_1C0036360 @ 0x1C0036360 (sub_1C0036360.c)
 *     sub_1C0036528 @ 0x1C0036528 (sub_1C0036528.c)
 * Callees:
 *     sub_1C001F308 @ 0x1C001F308 (sub_1C001F308.c)
 */

__int64 __fastcall sub_1C00364AC(__int64 a1, IRP *a2, unsigned int *a3, ULONG a4)
{
  int v6; // edx
  __int64 v7; // rcx

  v6 = sub_1C001F308(a1, a2, a3, a4, (__int64 (__fastcall *)(_QWORD))sub_1C0020E00, 0, 64);
  if ( v6 >= 0 )
  {
    v7 = a3[11];
    if ( *(unsigned int *)((char *)a3 + v7) == 2 && *(unsigned int *)((char *)a3 + v7 + 4) == 24 )
    {
      *(_DWORD *)(a1 + 5300) = 2;
      *(_BYTE *)(a1 + 110) ^= (*(_BYTE *)(a1 + 110) ^ (2 * *((_BYTE *)a3 + v7 + 12))) & 2;
    }
    else
    {
      *(_DWORD *)(a1 + 5300) = 1;
    }
  }
  return (unsigned int)v6;
}
