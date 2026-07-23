/*
 * XREFs of sub_140A2A8B4 @ 0x140A2A8B4
 * Callers:
 *     sub_140A2AAB0 @ 0x140A2AAB0 (sub_140A2AAB0.c)
 *     sub_140A2B388 @ 0x140A2B388 (sub_140A2B388.c)
 * Callees:
 *     _wcsicmp @ 0x1403E1490 (_wcsicmp.c)
 *     sub_140A29C1C @ 0x140A29C1C (sub_140A29C1C.c)
 *     sub_140A29D04 @ 0x140A29D04 (sub_140A29D04.c)
 */

__int64 __fastcall sub_140A2A8B4(
        __int64 a1,
        __int64 a2,
        const wchar_t *a3,
        const wchar_t *a4,
        const WCHAR *a5,
        _WORD *a6,
        unsigned int a7,
        unsigned int *a8)
{
  const wchar_t *v8; // rbp
  int v9; // ebx
  _WORD *v10; // rdi
  int v11; // esi
  unsigned int v12; // r14d
  int v13; // eax
  int v14; // r12d
  __int64 v15; // r9
  int v16; // eax
  int v17; // eax
  __int64 v18; // rax
  unsigned int v19; // esi
  _DWORD v21[18]; // [rsp+40h] [rbp-48h] BYREF
  const wchar_t *v24; // [rsp+A8h] [rbp+20h]

  v24 = a4;
  v8 = a3;
  v21[0] = 0;
  v9 = 0;
  v10 = 0LL;
  v11 = 0;
  v12 = 0;
  if ( a6 )
  {
    if ( a7 < 2 )
      return (unsigned int)-1073741811;
    v12 = a7;
    v10 = a6;
    *a6 = 0;
  }
  if ( !a3 )
  {
    v13 = sub_140A29C1C(a1, a2, a5, (__int64)a4, (__int64)v10, v12, v21);
    v11 = v21[0];
    v9 = v13;
    goto LABEL_25;
  }
  if ( *a3 )
  {
    while ( 1 )
    {
      v14 = v9;
      if ( !wcsicmp(v8, a4) )
      {
        v16 = sub_140A29C1C(a1, a2, a5, v15, (__int64)v10, v12, v21);
        v9 = v16;
        if ( v16 == -1073741789 )
        {
          v9 = -1073741789;
          v11 += v21[0];
          v10 = 0LL;
        }
        else
        {
          if ( v16 < 0 )
            break;
          v9 = v14;
          v11 += v21[0];
          if ( v10 )
          {
            v12 -= v21[0];
            v10 += (unsigned __int64)v21[0] >> 1;
          }
        }
      }
      v17 = sub_140A29D04(a1, a2, (__int64)v8, v10, v12, v21);
      if ( v17 == -1073741789 )
      {
        v11 += v21[0];
        v9 = -1073741789;
        v10 = 0LL;
      }
      else
      {
        if ( (int)(v17 + 0x80000000) >= 0 && v17 != -1073741772 )
        {
          v9 = v17;
          break;
        }
        v11 += v21[0];
        if ( v10 )
        {
          v12 -= v21[0];
          v10 += (unsigned __int64)v21[0] >> 1;
        }
      }
      v18 = -1LL;
      do
        ++v18;
      while ( v8[v18] );
      v8 += v18 + 1;
      if ( !*v8 )
        break;
      a4 = v24;
    }
  }
LABEL_25:
  v19 = v11 + 2;
  *a8 = v19;
  if ( v9 >= 0 && v19 > a7 )
    return (unsigned int)-1073741789;
  return (unsigned int)v9;
}
