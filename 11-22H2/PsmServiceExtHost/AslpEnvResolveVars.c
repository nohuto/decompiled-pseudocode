/*
 * XREFs of AslpEnvResolveVars @ 0x1800A097C
 * Callers:
 *     AslEnvExpandStrings2 @ 0x1800A01D0 (AslEnvExpandStrings2.c)
 * Callees:
 *     ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x180074ADC (-RtlStringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     RtlStringCchCatW @ 0x18008FE7C (RtlStringCchCatW.c)
 *     AslLogCallPrintf @ 0x180098620 (AslLogCallPrintf.c)
 */

__int64 __fastcall AslpEnvResolveVars(
        unsigned __int16 *a1,
        unsigned int a2,
        unsigned __int16 *a3,
        unsigned int a4,
        unsigned __int16 a5,
        unsigned __int16 a6,
        unsigned int *a7)
{
  int v7; // ebx
  __int64 v8; // r13
  int v9; // r15d
  unsigned int v10; // esi
  unsigned __int64 v12; // r14
  const wchar_t *v14; // r9
  unsigned int v15; // ecx
  __int64 v16; // r11
  unsigned __int16 v17; // cx
  unsigned __int64 i; // rdi
  unsigned __int16 v19; // ax
  int v20; // eax
  unsigned int v21; // ebx
  __int64 v22; // r11
  const char *v23; // r9
  int v24; // r8d
  __int64 v26; // [rsp+20h] [rbp-48h]
  __int64 v27; // [rsp+28h] [rbp-40h]

  v7 = 0;
  v8 = a4;
  v9 = 0;
  v10 = 0;
  v12 = 0LL;
  v14 = a1;
  do
  {
    if ( v7 )
      goto LABEL_36;
    v15 = dword_1800DB480[6 * v12];
    if ( a2 > v15 )
    {
      if ( _wcsnicmp(v14, off_1800DB470[3 * v12], v15) )
      {
LABEL_21:
        v14 = a1;
        goto LABEL_22;
      }
      v16 = 3 * v12;
      v10 = a2 + dword_1800DB484[6 * v12] - dword_1800DB480[6 * v12];
      if ( v10 > (unsigned int)v8 )
      {
        v21 = -1073741789;
        goto LABEL_37;
      }
      if ( v12 )
      {
        if ( v9 )
        {
LABEL_20:
          v7 = 1;
          goto LABEL_21;
        }
      }
      else
      {
        v17 = a5;
        for ( i = 0LL; i < 16; i += 2LL )
        {
          v19 = a6;
          if ( *(_WORD *)((char *)&unk_1800DB4D0 + i * 8) == v17 && *(_WORD *)((char *)&unk_1800DB4D2 + i * 8) == a6 )
          {
            v20 = RtlStringCchCopyW(a3, v8, L"%systemroot%");
            v21 = v20;
            if ( v20 < 0 )
            {
              v24 = 940;
              goto LABEL_29;
            }
            v20 = RtlStringCchCatW(a3, v8, (__int64)(&off_1800DB4D8)[i]);
            v21 = v20;
            if ( v20 < 0 )
            {
              v23 = "RtlStringCchCatW failed [%x]";
              v24 = 946;
              goto LABEL_30;
            }
            v20 = RtlStringCchCatW(a3, v8, (__int64)&a1[dword_1800DB480[0]]);
            v21 = v20;
            if ( v20 < 0 )
            {
              v23 = "RtlStringCchCatW failed [%x]";
              v24 = 952;
              goto LABEL_30;
            }
            v17 = a5;
            v19 = a6;
            v9 = 1;
          }
        }
        if ( v9 )
          goto LABEL_20;
        LODWORD(v27) = v19;
        LODWORD(v26) = v17;
        AslLogCallPrintf(
          1LL,
          (unsigned int)"AslpEnvResolveVars",
          963,
          (unsigned int)"Invalid combination of Host/Current processor architectures passed to AslpEnvResolveVars Host: %x4 Current: %x4",
          v26,
          v27);
        v16 = 0LL;
      }
      v20 = RtlStringCchCopyW(a3, v8, (&off_1800DB478)[v16]);
      v21 = v20;
      if ( v20 < 0 )
      {
        v24 = 980;
        goto LABEL_29;
      }
      v20 = RtlStringCchCatW(a3, v8, (__int64)&a1[dword_1800DB480[2 * v22]]);
      v21 = v20;
      if ( v20 < 0 )
      {
        v23 = "RtlStringCchCatW failed [%x]";
        v24 = 986;
        goto LABEL_30;
      }
      goto LABEL_20;
    }
LABEL_22:
    ++v12;
  }
  while ( v12 < 4 );
  if ( !v7 )
  {
    v10 = a2;
    if ( a2 > (unsigned int)v8 )
    {
      v21 = -1073741789;
      *a7 = a2;
      return v21;
    }
    v20 = RtlStringCchCopyW(a3, v8, v14);
    v21 = v20;
    if ( v20 < 0 )
    {
      v24 = 1018;
LABEL_29:
      v23 = "RtlStringCchCopyW failed [%x]";
LABEL_30:
      LODWORD(v26) = v20;
      AslLogCallPrintf(1LL, (unsigned int)"AslpEnvResolveVars", v24, (_DWORD)v23, v26);
      return v21;
    }
  }
LABEL_36:
  v21 = 0;
LABEL_37:
  *a7 = v10;
  return v21;
}
