/*
 * XREFs of sub_140999230 @ 0x140999230
 * Callers:
 *     sub_140999A80 @ 0x140999A80 (sub_140999A80.c)
 * Callees:
 *     sub_14020A9C4 @ 0x14020A9C4 (sub_14020A9C4.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

unsigned int __fastcall sub_140999230(__int64 a1)
{
  unsigned int v1; // esi
  unsigned int result; // eax
  __int64 *v4; // r15
  unsigned int v5; // edi
  unsigned int *v6; // r10
  char *v7; // r12
  unsigned int v8; // r11d
  unsigned int v9; // r14d
  unsigned int v10; // r9d
  unsigned int v11; // ecx
  unsigned int v12; // r9d
  unsigned int v13; // r13d
  __int64 v14; // rcx
  unsigned int v15; // ett
  unsigned __int8 *v16; // rdx
  ULONG v17; // [rsp+28h] [rbp-69h]
  __int64 v18; // [rsp+38h] [rbp-59h] BYREF
  __int64 v19; // [rsp+40h] [rbp-51h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v20[2]; // [rsp+48h] [rbp-49h] BYREF
  __int64 *v21; // [rsp+68h] [rbp-29h]
  __int64 v22; // [rsp+70h] [rbp-21h]
  __int64 *v23; // [rsp+78h] [rbp-19h]
  __int64 v24; // [rsp+80h] [rbp-11h]
  __int64 *v25; // [rsp+88h] [rbp-9h]
  __int64 v26; // [rsp+90h] [rbp-1h]
  __int64 v27; // [rsp+98h] [rbp+7h]
  __int64 v28; // [rsp+A0h] [rbp+Fh]
  _DWORD v29[4]; // [rsp+A8h] [rbp+17h] BYREF

  v1 = *(_DWORD *)(a1 + 108);
  result = 5;
  v29[0] = 2;
  v29[1] = 5;
  v29[2] = 5;
  v29[3] = 5;
  if ( v1 )
  {
    v4 = (__int64 *)(a1 + 112);
    v5 = 0;
    v6 = (unsigned int *)(a1 + 112);
    v7 = (char *)v29 - a1;
    v8 = 0;
    v9 = 0;
    while ( 1 )
    {
      v10 = *v6;
      if ( *v6 != v8 )
      {
        if ( v10 <= v8 || (result = v10 / v1, v10 % v1) )
        {
          if ( (unsigned int)dword_140C03A00 <= 2 )
            return result;
          v18 = a1;
          v21 = &v18;
          v16 = (unsigned __int8 *)word_140031592;
          v23 = v4;
          v17 = 4;
          v24 = 16LL;
LABEL_23:
          v22 = 8LL;
          return sub_14020A9C4((__int64)&dword_140C03A00, v16, 0LL, 0LL, v17, v20);
        }
        v11 = *(_DWORD *)&v7[(_QWORD)v6 - 112];
        v12 = v10 - v8;
        LODWORD(v18) = 0;
        v13 = v12 / v1;
        result = v12;
        if ( v12 / v1 >= v11 )
          v13 = v11;
        LODWORD(v19) = v12;
        if ( v13 )
        {
          while ( v5 < 0x11 )
          {
            v14 = v5++;
            v15 = result / v13;
            result = v12 + v19;
            LODWORD(v19) = v12 + v19;
            *(_DWORD *)(a1 + 4 * v14 + 132) = v8 + v15 - v15 % v1;
            LODWORD(v18) = v18 + 1;
            if ( (unsigned int)v18 >= v13 )
              goto LABEL_11;
          }
          if ( (unsigned int)dword_140C03A00 > 2 )
          {
            LODWORD(v18) = v5;
            v21 = &v19;
            v16 = (unsigned __int8 *)&dword_14003166C;
            v25 = v4;
            v23 = &v18;
            v26 = 16LL;
            v27 = a1 + 132;
            v17 = 6;
            v28 = 68LL;
            goto LABEL_22;
          }
          return result;
        }
LABEL_11:
        v8 = *v6;
      }
      ++v9;
      ++v6;
      if ( v9 >= 4 )
      {
        *(_DWORD *)(a1 + 128) = v5;
        if ( (unsigned int)dword_140C03A00 > 4 )
        {
          v21 = &v18;
          LOWORD(v19) = v5;
          v25 = &v19;
          v27 = a1 + 132;
          v28 = 4 * (unsigned int)(unsigned __int16)v5;
          v18 = a1;
          v22 = 8LL;
          v23 = v4;
          v24 = 16LL;
          v26 = 2LL;
          result = sub_14020A9C4((__int64)&dword_140C03A00, (unsigned __int8 *)byte_140031621, 0LL, 0LL, 6u, v20);
        }
        *(_BYTE *)(a1 + 88) = 1;
        _InterlockedIncrement(&dword_140C22308);
        return result;
      }
    }
  }
  if ( (unsigned int)dword_140C03A00 > 2 )
  {
    LODWORD(v18) = 0;
    v21 = &v19;
    v16 = (unsigned __int8 *)&byte_1400315D7;
    v23 = &v18;
    v17 = 4;
LABEL_22:
    v19 = a1;
    v24 = 4LL;
    goto LABEL_23;
  }
  return result;
}
