/*
 * XREFs of sub_1406DDAE0 @ 0x1406DDAE0
 * Callers:
 *     sub_140336B30 @ 0x140336B30 (sub_140336B30.c)
 *     sub_1406DDA18 @ 0x1406DDA18 (sub_1406DDA18.c)
 *     sub_1406DDB48 @ 0x1406DDB48 (sub_1406DDB48.c)
 * Callees:
 *     sub_140255844 @ 0x140255844 (sub_140255844.c)
 *     sub_140255870 @ 0x140255870 (sub_140255870.c)
 */

void __fastcall sub_1406DDAE0(__int64 a1, unsigned int a2, __int64 *a3)
{
  __int64 *v5; // rax
  __int64 *v6; // rcx
  __int64 *v7; // rbx

  if ( (*(_BYTE *)(a1 + 34) & 2) != 0 )
  {
    v5 = sub_140255844(a1, a2);
    v7 = v5;
    if ( (*((_DWORD *)v5 + 20))-- == 1 )
    {
      sub_140255870(*v6, a1, (__int64)v5, 0);
      *((_DWORD *)v7 + 20) = *(_DWORD *)(a1 + 44);
      *v7 = *a3;
      v7[8] = a1;
      *a3 = (__int64)v7;
    }
  }
}
