/*
 * XREFs of RtlpComputeLangListCheckSum @ 0x180043308
 * Callers:
 *     RtlGetThreadPreferredUILanguages @ 0x1800494B0 (RtlGetThreadPreferredUILanguages.c)
 * Callees:
 *     RtlUpcaseUnicodeString @ 0x18000F280 (RtlUpcaseUnicodeString.c)
 *     RtlCopyUnicodeString @ 0x180034770 (RtlCopyUnicodeString.c)
 *     NLS_UPCASE @ 0x180041758 (NLS_UPCASE.c)
 *     RtlInitUnicodeStringEx @ 0x180047F30 (RtlInitUnicodeStringEx.c)
 *     RtlLCIDToCultureName @ 0x18004B690 (RtlLCIDToCultureName.c)
 *     RtlIntegerToUnicodeString @ 0x180074000 (RtlIntegerToUnicodeString.c)
 *     __security_check_cookie @ 0x180093840 (__security_check_cookie.c)
 *     memset @ 0x1800AAE00 (memset.c)
 */

__int64 __fastcall RtlpComputeLangListCheckSum(__int64 a1)
{
  __int64 v2; // rbx
  __int64 v3; // r15
  unsigned int v4; // r14d
  __int64 v5; // r8
  int v6; // ecx
  int v7; // ecx
  int v8; // ecx
  __int64 *v9; // rcx
  __int64 v10; // rax
  int inited; // edi
  unsigned int v12; // r10d
  unsigned __int16 *v13; // r9
  unsigned __int64 v14; // r11
  int v15; // r10d
  __int64 v16; // r9
  __int64 v18; // rcx
  __int64 v19; // r8
  unsigned __int8 *v20; // r9
  unsigned __int64 v21; // r10
  __int64 v22; // rcx
  __int64 v23; // rax
  int v24; // r8d
  int v25; // r8d
  int v26; // r8d
  int v27; // r8d
  int v28; // r8d
  int v29; // r8d
  __int128 v30; // [rsp+28h] [rbp-E0h] BYREF
  unsigned __int16 v31; // [rsp+38h] [rbp-D0h]
  unsigned __int16 v32; // [rsp+40h] [rbp-C8h] BYREF
  __m256i v33; // [rsp+48h] [rbp-C0h] BYREF
  int v34; // [rsp+68h] [rbp-A0h]
  _BYTE v35[176]; // [rsp+78h] [rbp-90h] BYREF

  v2 = 0LL;
  memset(v35, 0, 0xAAuLL);
  v30 = 0LL;
  if ( !a1 )
    return 3221225485LL;
  v3 = *(_QWORD *)(a1 + 16);
  if ( !v3 )
    return 3221225485LL;
  v4 = 0;
  if ( !*(_WORD *)(a1 + 4) )
  {
LABEL_17:
    LODWORD(v30) = 1310720;
    *((_QWORD *)&v30 + 1) = a1 + 44;
    return (unsigned int)RtlIntegerToUnicodeString((unsigned int)v2, 16LL, &v30);
  }
  while ( 1 )
  {
    v5 = *(_QWORD *)(a1 + 24);
    memset(&v33.m256i_u64[1], 0, 24);
    v6 = *(unsigned __int16 *)(v5 + 6LL * v4);
    v34 = 0;
    if ( v6 )
      break;
LABEL_16:
    if ( ++v4 >= *(unsigned __int16 *)(a1 + 4) )
      goto LABEL_17;
  }
  v7 = v6 - 1;
  if ( !v7 )
  {
    v33.m256i_i16[6] = *(_WORD *)(v5 + 6LL * v4 + 4);
LABEL_20:
    v9 = &v33.m256i_i64[1];
LABEL_8:
    v10 = *((__int16 *)v9 + 3);
    if ( (__int16)v10 <= 0 )
    {
      v18 = *((unsigned __int16 *)v9 + 2);
      *((_QWORD *)&v30 + 1) = v35;
      LODWORD(v30) = 11141120;
      if ( !(unsigned __int8)RtlLCIDToCultureName(v18, &v30) )
        return (unsigned int)-1073741595;
    }
    else
    {
      inited = RtlInitUnicodeStringEx(
                 &v32,
                 *(_QWORD *)(*(_QWORD *)(v3 + 32) + 24LL)
               + 2LL * *(__int16 *)(*(_QWORD *)(*(_QWORD *)(v3 + 32) + 16LL) + 2 * v10));
      if ( inited < 0 )
        return (unsigned int)inited;
      LODWORD(v30) = 11141120;
      *((_QWORD *)&v30 + 1) = v35;
      RtlCopyUnicodeString((unsigned __int16 *)&v30, &v32);
    }
    if ( !v2 )
    {
      v12 = 314159;
      v13 = (unsigned __int16 *)*((_QWORD *)&v30 + 1);
      v14 = *((_QWORD *)&v30 + 1) + 2 * ((unsigned __int64)(unsigned __int16)v30 >> 1);
      while ( (unsigned __int64)v13 < v14 )
      {
        v31 = NLS_UPCASE(qword_1801776F8, *v13);
        v13 = (unsigned __int16 *)(v16 + 2);
        v12 = HIBYTE(v31) + 37 * ((unsigned __int8)v31 + 37 * v15);
      }
      v2 = v12;
      goto LABEL_16;
    }
    RtlUpcaseUnicodeString(&v30, (unsigned __int16 *)&v30, 0);
    v19 = (unsigned __int16)v30;
    v20 = (unsigned __int8 *)*((_QWORD *)&v30 + 1);
    if ( (unsigned __int16)v30 >= 8uLL )
    {
      v21 = (unsigned __int64)(unsigned __int16)v30 >> 3;
      v19 = (unsigned __int16)v30 - 8 * v21;
      do
      {
        v22 = v20[6]
            + 37 * (v20[5] + 37 * (v20[4] + 37 * (v20[3] + 37 * (v20[2] + 37 * (v20[1] + 37 * (*v20 + 37 * v2))))));
        v23 = v20[7];
        v20 += 8;
        v2 = v23 + 37 * v22;
        --v21;
      }
      while ( v21 );
    }
    if ( (unsigned __int64)(v19 - 1) > 6 )
      goto LABEL_27;
    v24 = v19 - 1;
    if ( v24 )
    {
      v25 = v24 - 1;
      if ( v25 )
      {
        v26 = v25 - 1;
        if ( v26 )
        {
          v27 = v26 - 1;
          if ( v27 )
          {
            v28 = v27 - 1;
            if ( v28 )
            {
              v29 = v28 - 1;
              if ( v29 )
              {
                if ( v29 != 1 )
                  goto LABEL_27;
                LODWORD(v2) = *v20++ + 37 * v2;
              }
              LODWORD(v2) = *v20++ + 37 * v2;
            }
            LODWORD(v2) = *v20++ + 37 * v2;
          }
          LODWORD(v2) = *v20++ + 37 * v2;
        }
        LODWORD(v2) = *v20++ + 37 * v2;
      }
      LODWORD(v2) = *v20++ + 37 * v2;
    }
    LODWORD(v2) = *v20 + 37 * v2;
LABEL_27:
    v2 = (unsigned int)v2;
    goto LABEL_16;
  }
  v8 = v7 - 1;
  if ( !v8 )
  {
    v9 = (__int64 *)(*(_QWORD *)(*(_QWORD *)(v3 + 24) + 16LL) + 28LL * *(__int16 *)(v5 + 6LL * v4 + 4));
    goto LABEL_8;
  }
  if ( v8 == 1 )
  {
    v33.m256i_i16[7] = *(_WORD *)(v5 + 6LL * v4 + 4);
    goto LABEL_20;
  }
  return (unsigned int)-1073741595;
}
