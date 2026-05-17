/*
 * XREFs of RtlpFindUnicodeStringInSection @ 0x18001D750
 * Callers:
 *     RtlFindActivationContextSectionString @ 0x18001D420 (RtlFindActivationContextSectionString.c)
 *     RtlQueryActivationContextApplicationSettings @ 0x18007D8E0 (RtlQueryActivationContextApplicationSettings.c)
 * Callees:
 *     RtlCompareUnicodeString @ 0x180014A70 (RtlCompareUnicodeString.c)
 *     DbgPrintEx @ 0x1800538D0 (DbgPrintEx.c)
 *     RtlHashUnicodeString @ 0x180062710 (RtlHashUnicodeString.c)
 *     __security_check_cookie @ 0x18008EF90 (__security_check_cookie.c)
 *     bsearch @ 0x180091F30 (bsearch.c)
 */

__int64 __fastcall RtlpFindUnicodeStringInSection(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int16 *a3,
        unsigned int *a4,
        _DWORD *a5,
        int *a6)
{
  unsigned int *v6; // r12
  unsigned __int64 v8; // r10
  char v9; // r9
  unsigned __int8 v11; // r15
  unsigned int v12; // eax
  __int64 v13; // rsi
  int v14; // r9d
  unsigned __int16 *v15; // r11
  int v16; // r10d
  unsigned __int64 v17; // rax
  unsigned int v18; // edx
  char v19; // cl
  int v20; // r12d
  __int64 v21; // rcx
  __int64 v22; // rsi
  __int64 v23; // rdx
  __int64 v24; // rcx
  unsigned int *v25; // r13
  unsigned int v26; // r15d
  char *v27; // r14
  int *i; // rbx
  unsigned __int64 v29; // rcx
  char *v30; // rbp
  __int64 result; // rax
  size_t v32; // r8
  char *v33; // rbx
  char *v34; // rsi
  char *v35; // rax
  int v36; // ebx
  unsigned __int64 v37; // rcx
  __int64 v38; // rdx
  int v39; // eax
  int v40; // ebx
  char v41; // [rsp+50h] [rbp-88h]
  char v42; // [rsp+51h] [rbp-87h]
  int v43; // [rsp+54h] [rbp-84h] BYREF
  unsigned __int16 v44; // [rsp+58h] [rbp-80h] BYREF
  unsigned __int16 v45; // [rsp+5Ah] [rbp-7Eh]
  __int64 v46; // [rsp+60h] [rbp-78h]
  unsigned __int64 v47; // [rsp+68h] [rbp-70h]
  unsigned __int16 *v48; // [rsp+70h] [rbp-68h]
  unsigned int *v49; // [rsp+78h] [rbp-60h]
  int Key[6]; // [rsp+80h] [rbp-58h] BYREF

  v6 = a4;
  v49 = a4;
  v8 = a2;
  v9 = 1;
  v48 = a3;
  v47 = a2;
  v41 = 1;
  v11 = (*(_BYTE *)(a1 + 16) & 1) != 0;
  v42 = v11;
  if ( *(_DWORD *)a1 != 1682469715 )
    return 3222601731LL;
  if ( !*(_DWORD *)(a1 + 20) )
    return 3222601736LL;
  v12 = *(_DWORD *)(a1 + 28);
  if ( v12 != -1 )
  {
    if ( *a5 == v12 )
      goto LABEL_15;
    v13 = qword_180184808;
    v14 = 0;
    if ( a3 )
    {
      if ( a6 )
      {
        v15 = (unsigned __int16 *)*((_QWORD *)a3 + 1);
        *a6 = 0;
        v16 = *a3 >> 1;
        if ( v12 <= 1 )
        {
          if ( v16 )
          {
            if ( v11 )
            {
              do
              {
                v17 = *v15++;
                --v16;
                if ( (unsigned int)v17 >= 0x61 )
                {
                  if ( (unsigned int)v17 > 0x7A )
                  {
                    if ( v13 && (unsigned __int16)v17 >= 0xC0u )
                      LOWORD(v17) = *(_WORD *)(v13
                                             + 2
                                             * ((v17 & 0xF)
                                              + *(unsigned __int16 *)(v13
                                                                    + 2LL
                                                                    * (((unsigned __int8)v17 >> 4)
                                                                     + (unsigned int)*(unsigned __int16 *)(v13 + 2 * (v17 >> 8))))))
                                  + v17;
                  }
                  else
                  {
                    LOWORD(v17) = v17 - 32;
                  }
                }
                v14 = (unsigned __int16)v17 + 65599 * v14;
              }
              while ( v16 );
            }
            else
            {
              do
              {
                v39 = *v15++;
                v14 = v39 + 65599 * v14;
                --v16;
              }
              while ( v16 );
            }
          }
          v8 = v47;
          *a6 = v14;
          v9 = 1;
          *a5 = *(_DWORD *)(a1 + 28);
          goto LABEL_15;
        }
      }
    }
    result = RtlHashUnicodeString(a3, v11, 0LL, &v43);
    if ( (int)result < 0 )
      return result;
    DbgPrintEx(
      51LL,
      0LL,
      "RtlpFindUnicodeStringInSection: Unsupported hash algorithm %lu found in string section.\n",
      *(_DWORD *)(a1 + 28));
    v8 = v47;
  }
  v9 = 0;
  v41 = 0;
LABEL_15:
  if ( *(_DWORD *)(a1 + 8) == 1 )
  {
    v18 = *(_DWORD *)(a1 + 32);
    v19 = 0;
    if ( v18 )
      v19 = v9;
    if ( v19 )
    {
      v20 = *a6;
      v21 = v18;
      v22 = 0LL;
      v23 = (unsigned int)*a6 % *(_DWORD *)(v18 + a1);
      v24 = a1 + *(unsigned int *)(v21 + a1 + 4);
      v43 = v23;
      v25 = (unsigned int *)(v24 + 8 * v23);
      v26 = *v25;
      v27 = (char *)(a1 + *(unsigned int *)(v24 + 8LL * (unsigned int)v23 + 4));
      if ( !*v25 )
        return 3222601736LL;
      for ( i = (int *)(a1 + *(unsigned int *)(v24 + 8LL * (unsigned int)v23 + 4)); ; ++i )
      {
        v29 = *i;
        if ( v29 > v8 )
          break;
        v30 = (char *)(a1 + v29);
        if ( !v9 || *(_DWORD *)v30 == v20 )
        {
          v37 = *((unsigned int *)v30 + 1);
          if ( v37 > v8 )
          {
            DbgPrintEx(
              51LL,
              0LL,
              "SXS: String hash table entry at %p has invalid key offset (= %ld)\n"
              "   Header = %p; Index = %lu; Bucket = %p; Chain = %p\n",
              v30,
              v37,
              (const void *)a1,
              v43,
              v25,
              v27);
            return 3222601731LL;
          }
          v44 = *((_WORD *)v30 + 4);
          v45 = v44;
          v46 = a1 + v37;
          if ( !(unsigned int)RtlCompareUnicodeString(v48, &v44, v42) )
          {
            v6 = v49;
            goto LABEL_42;
          }
          v9 = v41;
          v8 = v47;
        }
        v22 = (unsigned int)(v22 + 1);
        if ( (unsigned int)v22 >= v26 )
          return 3222601736LL;
      }
      DbgPrintEx(51LL, 0LL, "SXS: String hash collision chain offset at %p (= %ld) out of bounds\n", &v27[4 * v22], v29);
      return 3222601731LL;
    }
  }
  if ( v9 && (*(_BYTE *)(a1 + 16) & 2) != 0 )
  {
    v32 = *(unsigned int *)(a1 + 20);
    v33 = (char *)(a1 + *(unsigned int *)(a1 + 24));
    v34 = &v33[24 * (unsigned int)(v32 - 1)];
    Key[0] = *a6;
    v35 = (char *)bsearch(Key, v33, v32, 0x18uLL, RtlpCompareActivationContextStringSectionEntryByPseudoKey);
    if ( !v35 )
      return 3222601736LL;
    for ( ; v35 != v33; v35 -= 24 )
    {
      if ( *(_DWORD *)v35 != *a6 )
        break;
    }
    v36 = *a6;
    v30 = v35 + 24;
    if ( *(_DWORD *)v35 == *a6 )
      v30 = v35;
    while ( 1 )
    {
      v44 = *((_WORD *)v30 + 4);
      v45 = v44;
      v46 = a1 + *((unsigned int *)v30 + 1);
      if ( !(unsigned int)RtlCompareUnicodeString(a3, &v44, v11) )
        break;
      v30 += 24;
      if ( v30 > v34 )
        return 3222601736LL;
      if ( *(_DWORD *)v30 != v36 )
        goto LABEL_37;
    }
    if ( v30 > v34 )
      return 3222601736LL;
LABEL_37:
    if ( *(_DWORD *)v30 != v36 )
      return 3222601736LL;
LABEL_43:
    if ( !*((_DWORD *)v30 + 3) )
      return 3222601736LL;
    if ( v6 )
    {
      v38 = *v6;
      v6[1] = *(_DWORD *)(a1 + 12);
      *((_QWORD *)v6 + 1) = a1 + *((unsigned int *)v30 + 3);
      v6[4] = *((_DWORD *)v30 + 4);
      if ( v6 + 17 <= (unsigned int *)((char *)v6 + v38) )
        v6[16] = *((_DWORD *)v30 + 5);
    }
    return 0LL;
  }
  v40 = *(_DWORD *)(a1 + 20);
  v30 = (char *)(a1 + *(unsigned int *)(a1 + 24));
  if ( !v40 )
    return 3222601736LL;
  while ( 1 )
  {
    v44 = *((_WORD *)v30 + 4);
    v45 = v44;
    v46 = a1 + *((unsigned int *)v30 + 1);
    if ( v9 && *(_DWORD *)v30 != *a6 )
      goto LABEL_69;
    if ( !(unsigned int)RtlCompareUnicodeString(a3, &v44, v11) )
      break;
    v9 = v41;
LABEL_69:
    v30 += 24;
    if ( !--v40 )
      return 3222601736LL;
  }
LABEL_42:
  if ( v30 )
    goto LABEL_43;
  return 3222601736LL;
}
