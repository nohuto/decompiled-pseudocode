/*
 * XREFs of sub_140788D90 @ 0x140788D90
 * Callers:
 *     sub_1406C1FDC @ 0x1406C1FDC (sub_1406C1FDC.c)
 *     sub_140785234 @ 0x140785234 (sub_140785234.c)
 *     sub_1407886D0 @ 0x1407886D0 (sub_1407886D0.c)
 *     sub_140789970 @ 0x140789970 (sub_140789970.c)
 *     sub_140A2E5CC @ 0x140A2E5CC (sub_140A2E5CC.c)
 *     sub_140A2ED3C @ 0x140A2ED3C (sub_140A2ED3C.c)
 * Callees:
 *     sub_14077FC64 @ 0x14077FC64 (sub_14077FC64.c)
 */

__int64 __fastcall sub_140788D90(__int64 a1, void *a2, __int64 a3, _DWORD *a4, _WORD *a5, unsigned int a6, _DWORD *a7)
{
  int v9; // eax
  _WORD *v11; // rbx
  int v12; // eax
  int *v13; // r9
  const WCHAR *v14; // rdx
  unsigned int v15; // eax
  unsigned int v16; // edx
  int v17; // eax
  unsigned int v18; // ecx
  __int64 v20[3]; // [rsp+30h] [rbp-18h] BYREF
  int v21; // [rsp+50h] [rbp+8h] BYREF
  int v22; // [rsp+54h] [rbp+Ch]
  int v23; // [rsp+60h] [rbp+18h] BYREF

  v22 = HIDWORD(a1);
  v23 = 0;
  v21 = 0;
  v9 = *(_DWORD *)(a3 + 8);
  v11 = a5;
  if ( v9 == 17 || v9 == 5 )
  {
    v13 = &v21;
    v12 = 4;
  }
  else
  {
    v12 = a6;
    v13 = (int *)a5;
  }
  v14 = *(const WCHAR **)(a3 + 16);
  LODWORD(v20[0]) = v12;
  v15 = sub_14077FC64(a2, v14, &v23, v13, (unsigned int *)v20);
  v16 = v15;
  if ( v15 == -1073741772 )
    return (unsigned int)-1073741275;
  if ( !v15 || v15 == -1073741789 )
  {
    if ( v23 == *(_DWORD *)(a3 + 24) )
    {
      *a4 = *(_DWORD *)(a3 + 8);
      v17 = *(_DWORD *)(a3 + 8);
      if ( v17 == 5 )
      {
        *a7 = 2;
        if ( !v11 || a6 < 2 )
          return (unsigned int)-1073741789;
        if ( v16 != -1073741789 )
        {
          *v11 = v21;
          return v16;
        }
      }
      else
      {
        if ( v17 != 17 )
        {
          v18 = v20[0];
          *a7 = v20[0];
          if ( v11 && a6 >= v18 )
            return v16;
          return (unsigned int)-1073741789;
        }
        *a7 = 1;
        if ( !v11 || !a6 )
          return (unsigned int)-1073741789;
        if ( v16 != -1073741789 )
        {
          *(_BYTE *)v11 = -(v21 != 0);
          return v16;
        }
      }
    }
    return (unsigned int)-1073741595;
  }
  return v16;
}
