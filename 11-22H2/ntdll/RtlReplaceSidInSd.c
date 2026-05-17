/*
 * XREFs of RtlReplaceSidInSd @ 0x1800F16A0
 * Callers:
 *     <none>
 * Callees:
 *     RtlGetOwnerSecurityDescriptor @ 0x18006CA50 (RtlGetOwnerSecurityDescriptor.c)
 *     RtlGetDaclSecurityDescriptor @ 0x18006CAE0 (RtlGetDaclSecurityDescriptor.c)
 *     RtlGetSaclSecurityDescriptor @ 0x180079CF0 (RtlGetSaclSecurityDescriptor.c)
 *     RtlGetGroupSecurityDescriptor @ 0x18007F4A0 (RtlGetGroupSecurityDescriptor.c)
 *     memcmp @ 0x180092B10 (memcmp.c)
 *     memmove @ 0x1800A5980 (memmove.c)
 */

__int64 __fastcall RtlReplaceSidInSd(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  int v5; // r14d
  unsigned int v7; // r14d
  __int64 v9; // r13
  __int64 result; // rax
  __int64 v11; // rdi
  int v12; // eax
  int v13; // ecx
  __int64 v14; // rdi
  int v15; // eax
  int v16; // ecx
  __int64 v17; // rsi
  __int64 v18; // rdi
  size_t v19; // r13
  __int64 v20; // rdx
  int v21; // eax
  int v22; // ecx
  void *v23; // r14
  __int64 v24; // rsi
  __int64 v25; // rdi
  __int64 v26; // rdx
  int v27; // eax
  int v28; // ecx
  unsigned int v29; // r15d
  void *v30; // r14
  unsigned int v31; // [rsp+20h] [rbp-18h]
  _QWORD v32[2]; // [rsp+28h] [rbp-10h] BYREF
  bool v34; // [rsp+88h] [rbp+50h] BYREF
  __int64 v35; // [rsp+90h] [rbp+58h]
  __int64 v36; // [rsp+98h] [rbp+60h] BYREF

  v35 = a3;
  *a4 = 0;
  v5 = *(unsigned __int8 *)(a2 + 1);
  v36 = 0LL;
  v7 = 4 * v5;
  v31 = v7;
  v9 = a1;
  result = RtlGetOwnerSecurityDescriptor(a1, &v36, &v34);
  if ( (int)result >= 0 )
  {
    v11 = v36;
    if ( v36 )
    {
      if ( *(_BYTE *)v36 == *(_BYTE *)a2 )
      {
        v12 = *(unsigned __int8 *)(a2 + 1);
        if ( *(_BYTE *)(v36 + 1) == (_BYTE)v12 || *(unsigned __int8 *)(v36 + 1) == v12 + 1 )
        {
          v13 = *(_DWORD *)(v36 + 2) - *(_DWORD *)(a2 + 2);
          if ( !v13 )
            v13 = *(unsigned __int16 *)(v36 + 6) - *(unsigned __int16 *)(a2 + 6);
          if ( !v13 && !memcmp((const void *)(v36 + 8), (const void *)(a2 + 8), v7) )
          {
            memmove((void *)(v11 + 8), (const void *)(a3 + 8), v7);
            ++*a4;
          }
        }
      }
    }
    v36 = 0LL;
    result = RtlGetGroupSecurityDescriptor(v9, &v36, &v34);
    if ( (int)result >= 0 )
    {
      v14 = v36;
      if ( v36 )
      {
        if ( *(_BYTE *)v36 == *(_BYTE *)a2 )
        {
          v15 = *(unsigned __int8 *)(a2 + 1);
          if ( *(_BYTE *)(v36 + 1) == (_BYTE)v15 || *(unsigned __int8 *)(v36 + 1) == v15 + 1 )
          {
            v16 = *(_DWORD *)(v36 + 2) - *(_DWORD *)(a2 + 2);
            if ( !v16 )
              v16 = *(unsigned __int16 *)(v36 + 6) - *(unsigned __int16 *)(a2 + 6);
            if ( !v16 && !memcmp((const void *)(v36 + 8), (const void *)(a2 + 8), v7) )
            {
              memmove((void *)(v14 + 8), (const void *)(a3 + 8), v7);
              ++*a4;
            }
          }
        }
      }
      v32[0] = 0LL;
      result = RtlGetDaclSecurityDescriptor(v9, &v36, v32, &v34);
      if ( (int)result >= 0 )
      {
        if ( (_BYTE)v36 )
        {
          if ( v32[0] )
          {
            v17 = *(unsigned __int16 *)(v32[0] + 4LL);
            v18 = v32[0] + 8LL;
            if ( *(_WORD *)(v32[0] + 4LL) )
            {
              v19 = v7;
              while ( *(_BYTE *)v18 > 3u )
              {
                if ( *(_BYTE *)v18 == 4 )
                {
                  v20 = v18 + 4 * (*(unsigned __int8 *)(v18 + 13) + 5LL);
                  goto LABEL_30;
                }
LABEL_38:
                v18 += *(unsigned __int16 *)(v18 + 2);
                if ( !--v17 )
                {
                  v9 = a1;
                  v7 = v31;
                  goto LABEL_40;
                }
              }
              v20 = v18 + 8;
LABEL_30:
              if ( *(_BYTE *)v20 == *(_BYTE *)a2 )
              {
                v21 = *(unsigned __int8 *)(a2 + 1);
                if ( *(_BYTE *)(v20 + 1) == (_BYTE)v21 || *(unsigned __int8 *)(v20 + 1) == v21 + 1 )
                {
                  v22 = *(_DWORD *)(v20 + 2) - *(_DWORD *)(a2 + 2);
                  if ( !v22 )
                    v22 = *(unsigned __int16 *)(v20 + 6) - *(unsigned __int16 *)(a2 + 6);
                  if ( !v22 )
                  {
                    v23 = (void *)(v20 + 8);
                    if ( !memcmp((const void *)(v20 + 8), (const void *)(a2 + 8), v19) )
                    {
                      memmove(v23, (const void *)(v35 + 8), v19);
                      ++*a4;
                    }
                  }
                }
              }
              goto LABEL_38;
            }
          }
        }
LABEL_40:
        v32[0] = 0LL;
        result = RtlGetSaclSecurityDescriptor(v9, &v36, v32, &v34);
        if ( (int)result >= 0 && (_BYTE)v36 && v32[0] )
        {
          v24 = *(unsigned __int16 *)(v32[0] + 4LL);
          v25 = v32[0] + 8LL;
          if ( *(_WORD *)(v32[0] + 4LL) )
          {
            while ( *(_BYTE *)v25 > 3u )
            {
              if ( *(_BYTE *)v25 == 4 )
              {
                v26 = v25 + 4 * (*(unsigned __int8 *)(v25 + 13) + 5LL);
                goto LABEL_48;
              }
LABEL_56:
              v7 = v31;
              v25 += *(unsigned __int16 *)(v25 + 2);
              if ( !--v24 )
                return 0LL;
            }
            v26 = v25 + 8;
LABEL_48:
            if ( *(_BYTE *)v26 == *(_BYTE *)a2 )
            {
              v27 = *(unsigned __int8 *)(a2 + 1);
              if ( *(_BYTE *)(v26 + 1) == (_BYTE)v27 || *(unsigned __int8 *)(v26 + 1) == v27 + 1 )
              {
                v28 = *(_DWORD *)(v26 + 2) - *(_DWORD *)(a2 + 2);
                if ( !v28 )
                  v28 = *(unsigned __int16 *)(v26 + 6) - *(unsigned __int16 *)(a2 + 6);
                if ( !v28 )
                {
                  v29 = v7;
                  v30 = (void *)(v26 + 8);
                  if ( !memcmp((const void *)(v26 + 8), (const void *)(a2 + 8), v29) )
                  {
                    memmove(v30, (const void *)(v35 + 8), v29);
                    ++*a4;
                  }
                }
              }
            }
            goto LABEL_56;
          }
          return 0LL;
        }
      }
    }
  }
  return result;
}
