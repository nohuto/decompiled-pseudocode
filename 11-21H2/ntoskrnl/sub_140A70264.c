/*
 * XREFs of sub_140A70264 @ 0x140A70264
 * Callers:
 *     sub_1403AE2FC @ 0x1403AE2FC (sub_1403AE2FC.c)
 *     sub_140A73B94 @ 0x140A73B94 (sub_140A73B94.c)
 * Callees:
 *     <none>
 */

struct _KPRCB *__fastcall sub_140A70264(_DWORD *a1, unsigned int a2, int *a3)
{
  int v3; // edi
  struct _KPRCB *result; // rax
  unsigned int v7; // r11d
  int v8; // r9d
  int v9; // edx
  int v10; // r11d
  int v11; // edx
  int v12; // r9d
  unsigned int v13; // r9d
  int v14; // edx
  int v15; // ecx
  int v16; // r9d
  int v17; // r11d
  int v18; // ecx
  int v19; // edx

  v3 = a1[12];
  result = KeGetCurrentPrcb();
  *a3 = v3 & 0x10001F;
  if ( (v3 & *((_DWORD *)result + 8818) & 0x100040) == 0x100040 )
  {
    v7 = a1[309];
    if ( a2 < v7 )
      return result;
    v8 = a1[308];
    v9 = a1[310];
    if ( v8 > v9 )
      return result;
    v10 = v8 + v7;
    result = (struct _KPRCB *)(unsigned int)(v9 + a1[311]);
    if ( (int)result > v10 )
      return result;
    if ( v9 > (int)result )
      return result;
    v11 = a1[312];
    if ( v8 > v11 )
      return result;
    v12 = v11 + a1[313];
    if ( v12 > v10 || v11 > v12 )
      return result;
    *a3 = v3 & 0x1F | 0x100040;
  }
  result = KeGetCurrentPrcb();
  if ( (v3 & *((_DWORD *)result + 8818) & 0x100080) == 0x100080 )
  {
    v13 = a1[309];
    if ( a2 >= v13 )
    {
      v14 = a1[308];
      v15 = a1[310];
      if ( v14 <= v15 )
      {
        v16 = v14 + v13;
        v17 = v15 + a1[311];
        if ( v17 <= v16 && v15 <= v17 )
        {
          v18 = a1[314];
          if ( v14 <= v18 )
          {
            v19 = v18 + a1[315];
            if ( v19 <= v16 && v18 <= v19 )
              *a3 |= 0x100080u;
          }
        }
      }
    }
  }
  return result;
}
