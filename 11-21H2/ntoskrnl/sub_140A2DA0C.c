/*
 * XREFs of sub_140A2DA0C @ 0x140A2DA0C
 * Callers:
 *     sub_1407880F0 @ 0x1407880F0 (sub_1407880F0.c)
 *     sub_1407881D0 @ 0x1407881D0 (sub_1407881D0.c)
 *     sub_140789110 @ 0x140789110 (sub_140789110.c)
 *     sub_140A30A20 @ 0x140A30A20 (sub_140A30A20.c)
 * Callees:
 *     sub_1407829F8 @ 0x1407829F8 (sub_1407829F8.c)
 *     sub_140782BB0 @ 0x140782BB0 (sub_140782BB0.c)
 *     sub_140784454 @ 0x140784454 (sub_140784454.c)
 *     sub_140A2DB88 @ 0x140A2DB88 (sub_140A2DB88.c)
 */

__int64 __fastcall sub_140A2DA0C(__int64 *a1, int a2, wchar_t *a3, unsigned int a4)
{
  int v5; // edi
  char v7; // r13
  int v8; // eax
  __int64 v9; // r8
  const UNICODE_STRING *v10; // r15
  unsigned int v11; // ebx
  int v12; // eax
  const UNICODE_STRING *v13; // r14
  int v14; // eax
  int v15; // edi
  __int64 v16; // r8
  void *v18; // [rsp+20h] [rbp-10h] BYREF
  const UNICODE_STRING *v19; // [rsp+28h] [rbp-8h] BYREF
  wchar_t *v21; // [rsp+80h] [rbp+50h] BYREF
  unsigned int v22; // [rsp+88h] [rbp+58h]

  v22 = a4;
  v21 = a3;
  v18 = 0LL;
  v5 = a2;
  v19 = 0LL;
  v7 = 0;
  v8 = sub_140784454((__int64)a1, a3, &v21, &v19);
  v10 = v19;
  v11 = v8;
  if ( v8 >= 0 )
  {
    if ( v19 )
    {
      v12 = sub_1407829F8(a1, (__int64)v19, v5, &v18);
      v11 = v12;
      if ( v12 >= 0 )
      {
        v11 = sub_140A2DB88(a1, v18, v21, a4);
      }
      else if ( v12 == -1073740697 )
      {
        v11 = -1073741662;
      }
    }
    else
    {
      v13 = (const UNICODE_STRING *)a1[2];
      if ( v13 != (const UNICODE_STRING *)(a1 + 2) )
      {
        while ( 1 )
        {
          v10 = v13;
          v14 = sub_1407829F8(a1, (__int64)v13, v5, &v18);
          v15 = v14;
          if ( v14 == -1073740697 )
          {
            v15 = -1073741662;
          }
          else
          {
            if ( v14 < 0 )
              break;
            v15 = sub_140A2DB88(a1, v18, v21, v22);
            sub_140782BB0((__int64)a1, (__int64)v13, v16, v18);
            v18 = 0LL;
            if ( v15 < 0 )
            {
              if ( v15 != -1073741772 )
                goto LABEL_18;
            }
            else
            {
              v7 = 1;
            }
          }
          v13 = *(const UNICODE_STRING **)&v13->Length;
          if ( v13 == (const UNICODE_STRING *)(a1 + 2) )
            break;
          v5 = a2;
        }
        if ( v15 == -1073741772 )
          goto LABEL_20;
LABEL_18:
        if ( v15 != -1073741662 )
        {
          v11 = v15;
          goto LABEL_22;
        }
LABEL_20:
        v11 = v15;
        if ( v7 )
          v11 = 0;
      }
    }
  }
LABEL_22:
  if ( v18 )
    sub_140782BB0((__int64)a1, (__int64)v10, v9, v18);
  return v11;
}
