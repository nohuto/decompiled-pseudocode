/*
 * XREFs of RtlpScanEnvironment @ 0x180033880
 * Callers:
 *     RtlQueryEnvironmentVariable @ 0x180036CE0 (RtlQueryEnvironmentVariable.c)
 * Callees:
 *     memmove @ 0x1800AAB40 (memmove.c)
 *     RtlpCreateAndInsertEnvironmentHashTableEntry @ 0x1800D92C8 (RtlpCreateAndInsertEnvironmentHashTableEntry.c)
 */

__int64 __fastcall RtlpScanEnvironment(
        char *a1,
        unsigned __int16 *a2,
        __int64 a3,
        _WORD *a4,
        unsigned __int64 a5,
        unsigned __int64 *a6,
        int a7)
{
  unsigned __int16 *v7; // rbp
  __int64 v8; // rdi
  char *v12; // rbx
  unsigned int v13; // r15d
  unsigned __int16 *v14; // r11
  unsigned __int16 *v15; // r10
  unsigned __int64 v16; // r8
  unsigned __int64 v17; // r9
  unsigned __int16 v18; // ax
  int v19; // esi
  char *i; // rdi
  char *v21; // r8
  _BYTE *v22; // rdi
  __int64 v23; // r8
  unsigned __int64 v25; // rbx
  size_t v26; // rbx
  int inserted; // eax
  __int64 v28; // [rsp+60h] [rbp+8h]

  v7 = &a2[a3];
  v8 = qword_1801776F8;
  v28 = qword_1801776F8;
  v12 = a1;
  if ( !*(_WORD *)a1 )
  {
LABEL_20:
    if ( a7 )
    {
      qword_18017A878 = (__int64)v12;
      byte_18017A870 = 1;
    }
    return 3221225728LL;
  }
  v13 = 0;
  while ( 1 )
  {
    v14 = (unsigned __int16 *)v12;
    v15 = a2;
    if ( a2 >= v7 )
    {
LABEL_8:
      if ( v15 == v7 && *(_WORD *)v12 == 61 )
      {
        v19 = 1;
        goto LABEL_14;
      }
    }
    else
    {
      while ( 1 )
      {
        v16 = *(unsigned __int16 *)v12;
        if ( !(_WORD)v16 )
          break;
        if ( (unsigned int)v16 >= 0x61 )
        {
          if ( (unsigned int)v16 > 0x7A )
          {
            if ( v8 && (unsigned __int16)v16 >= 0xC0u )
              LOWORD(v16) = *(_WORD *)(v8
                                     + 2
                                     * ((v16 & 0xF)
                                      + *(unsigned __int16 *)(v8
                                                            + 2LL
                                                            * (((unsigned __int8)v16 >> 4)
                                                             + (unsigned int)*(unsigned __int16 *)(v8 + 2 * (v16 >> 8))))))
                          + v16;
          }
          else
          {
            LOWORD(v16) = v16 - 32;
          }
        }
        v17 = *v15;
        if ( (unsigned int)v17 >= 0x61 )
        {
          if ( (unsigned int)v17 > 0x7A )
          {
            if ( v8 && (unsigned __int16)v17 >= 0xC0u )
              LOWORD(v17) = *(_WORD *)(v8
                                     + 2
                                     * ((v17 & 0xF)
                                      + *(unsigned __int16 *)(v8
                                                            + 2LL
                                                            * (((unsigned __int8)v17 >> 4)
                                                             + (unsigned int)*(unsigned __int16 *)(v8 + 2 * (v17 >> 8))))))
                          + v17;
          }
          else
          {
            LOWORD(v17) = v17 - 32;
          }
        }
        if ( (_WORD)v16 == (_WORD)v17 )
        {
          v12 += 2;
          if ( ++v15 < v7 )
            continue;
        }
        goto LABEL_8;
      }
    }
    v18 = *(_WORD *)v12;
    v19 = 0;
    if ( *(_WORD *)v12 )
      break;
LABEL_19:
    v12 += 2;
    if ( !*(_WORD *)v12 )
      goto LABEL_20;
  }
  while ( v18 != 61 || v12 == (char *)v14 )
  {
    v18 = *((_WORD *)v12 + 1);
    v12 += 2;
    if ( !v18 )
      goto LABEL_19;
  }
LABEL_14:
  for ( i = v12; *(_WORD *)v12; v12 += 2 )
    ;
  v21 = i;
  v22 = i + 2;
  v23 = (v21 - (char *)v14) >> 1;
  if ( a7 && qword_18017A878 < (unsigned __int64)v12 )
  {
    inserted = RtlpCreateAndInsertEnvironmentHashTableEntry(
                 (unsigned int)&RtlpEnvironmentHashTable,
                 (_DWORD)v14,
                 v23,
                 (_DWORD)v22,
                 (v12 - v22) >> 1);
    if ( inserted < 0 )
    {
      if ( inserted != -1073741771 )
        a7 = 0;
    }
    else
    {
      qword_18017A878 = (__int64)v12;
    }
  }
  if ( !v19 )
  {
    v8 = v28;
    goto LABEL_19;
  }
  v25 = (v12 - v22) >> 1;
  if ( a4 )
  {
    if ( v25 < a5 )
    {
      *a6 = v25;
      v26 = v25;
      memmove(a4, v22, v26 * 2);
      a4[v26] = 0;
      return v13;
    }
    if ( a5 )
      *a4 = 0;
  }
  v13 = -1073741789;
  *a6 = v25 + 1;
  return v13;
}
