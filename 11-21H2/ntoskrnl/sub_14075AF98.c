/*
 * XREFs of sub_14075AF98 @ 0x14075AF98
 * Callers:
 *     sub_14073B5A0 @ 0x14073B5A0 (sub_14073B5A0.c)
 * Callees:
 *     memset @ 0x140435E00 (memset.c)
 *     sub_14075AF34 @ 0x14075AF34 (sub_14075AF34.c)
 */

__int64 __fastcall sub_14075AF98(unsigned int *a1, int a2, char *a3, unsigned int a4, _DWORD *a5)
{
  unsigned int v6; // edi
  __int64 v7; // rbx

  if ( a2 == 4 && a4 >= 0x244 )
  {
    v6 = *a1;
    if ( *a1 >= *(_DWORD *)&RegistryPath.Length )
    {
      *a5 = 0;
      return 2147483674LL;
    }
    else
    {
      v7 = *((_QWORD *)&RegistryPath.Buffer + v6);
      memset(a3, 0, a4);
      *(_WORD *)a3 = v6;
      *((_WORD *)a3 + 1) = RegistryPath.Length;
      *((_DWORD *)a3 + 1) = *(_DWORD *)v7;
      *((_DWORD *)a3 + 2) = *(_DWORD *)(v7 + 4);
      *((_DWORD *)a3 + 3) = *(_DWORD *)(v7 + 8);
      *((_DWORD *)a3 + 4) = *(_DWORD *)(v7 + 12);
      *((_DWORD *)a3 + 144) = *(_DWORD *)(v7 + 800);
      sub_14075AF34(a3 + 20, 0x80u, (const UNICODE_STRING *)(v7 + 16));
      sub_14075AF34(a3 + 148, 0x80u, (const UNICODE_STRING *)(v7 + 64));
      sub_14075AF34(a3 + 276, 0x80u, (const UNICODE_STRING *)(v7 + 80));
      sub_14075AF34(a3 + 404, 0x80u, (const UNICODE_STRING *)(v7 + 96));
      sub_14075AF34(a3 + 532, 0x1Au, (const UNICODE_STRING *)(v7 + 32));
      sub_14075AF34(a3 + 558, 0x10u, (const UNICODE_STRING *)(v7 + 48));
      *a5 = 580;
      return 0LL;
    }
  }
  else
  {
    *a5 = 0;
    return 3221225476LL;
  }
}
