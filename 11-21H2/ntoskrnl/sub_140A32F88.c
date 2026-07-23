/*
 * XREFs of sub_140A32F88 @ 0x140A32F88
 * Callers:
 *     sub_14065A018 @ 0x14065A018 (sub_14065A018.c)
 *     sub_140A31F7C @ 0x140A31F7C (sub_140A31F7C.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memcmp @ 0x1403E1D90 (memcmp.c)
 *     sub_140A33D28 @ 0x140A33D28 (sub_140A33D28.c)
 *     sub_140A33E74 @ 0x140A33E74 (sub_140A33E74.c)
 */

__int64 __fastcall sub_140A32F88(const void **a1, unsigned int *a2, char *a3, _OWORD *a4)
{
  __int64 v4; // rsi
  unsigned int v5; // ebx
  __int64 v6; // rdx
  char v9; // r15
  int v10; // r14d
  int v11; // edi
  int v12; // ecx
  int v14; // [rsp+30h] [rbp-59h] BYREF
  __int64 v15; // [rsp+38h] [rbp-51h] BYREF
  _OWORD *v16; // [rsp+40h] [rbp-49h]
  _BYTE v17[16]; // [rsp+50h] [rbp-39h] BYREF
  int v18; // [rsp+60h] [rbp-29h]
  int v19; // [rsp+70h] [rbp-19h]
  const void *v20; // [rsp+78h] [rbp-11h]
  __int128 v21; // [rsp+90h] [rbp+7h]

  v4 = *((_QWORD *)a2 + 1);
  v5 = 0;
  v6 = *a2;
  v16 = a4;
  v15 = 0LL;
  v9 = 0;
  v14 = 0;
  if ( (_DWORD)v6 )
  {
    if ( (int)sub_140A33D28(v4, v6, &v14, &v15) > 0 )
    {
      v10 = v14;
      v11 = v15;
      if ( v14 )
      {
        while ( 1 )
        {
          v14 = 4;
          v12 = sub_140A33E74(v11, v10, (unsigned int)&v14, (unsigned int)&qword_14000AF70, 5, (__int64)v17);
          if ( v12 <= 0 )
            break;
          if ( !v9 && *(_DWORD *)a1 == v19 && !memcmp(a1[1], v20, *(unsigned int *)a1) )
          {
            v9 = 1;
            *v16 = v21;
          }
          v11 += v18;
          v10 -= v18;
          if ( !v10 )
            goto LABEL_11;
        }
        if ( !v12 )
          v12 = -1;
        v5 = v12 + v4 - v11;
      }
      else
      {
LABEL_11:
        v5 = v11 - v4;
      }
    }
    else
    {
      v5 = -1;
    }
  }
  *a3 = v9;
  return v5;
}
