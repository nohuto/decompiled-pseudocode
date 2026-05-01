/*
 * XREFs of AslpEnvResolveVars @ 0x1800EDEB0
 * Callers:
 *     AslEnvExpandStrings2 @ 0x1800EDD8C (AslEnvExpandStrings2.c)
 * Callees:
 *     RtlStringCchCopyW @ 0x1800EF3EC (RtlStringCchCopyW.c)
 *     _wcsnicmp @ 0x1801C744C (_wcsnicmp.c)
 *     AslLogCallPrintf @ 0x180738B40 (AslLogCallPrintf.c)
 *     RtlStringCchCatW @ 0x180738E08 (RtlStringCchCatW.c)
 */

__int64 __fastcall AslpEnvResolveVars(
        wchar_t *String1,
        unsigned int a2,
        __int64 a3,
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
  unsigned int v16; // ebx
  __int64 v18; // r11
  unsigned __int16 v19; // cx
  unsigned __int64 i; // rdi
  unsigned __int16 v21; // ax
  int v22; // eax
  __int64 v23; // r11
  const char *v24; // r9
  int v25; // r8d
  __int64 v26; // [rsp+20h] [rbp-48h]
  __int64 v27; // [rsp+28h] [rbp-40h]

  v7 = 0;
  v8 = a4;
  v9 = 0;
  v10 = 0;
  v12 = 0LL;
  v14 = String1;
  do
  {
    if ( v7 )
      goto LABEL_11;
    v15 = dword_1809870C0[6 * v12];
    if ( a2 > v15 )
    {
      if ( wcsnicmp(v14, off_1809870B0[3 * v12], v15) )
      {
LABEL_5:
        v14 = String1;
        goto LABEL_6;
      }
      v18 = 3 * v12;
      v10 = a2 + dword_1809870C4[6 * v12] - dword_1809870C0[6 * v12];
      if ( v10 > (unsigned int)v8 )
      {
        v16 = -1073741789;
        goto LABEL_36;
      }
      if ( v12 )
      {
        if ( v9 )
        {
LABEL_28:
          v7 = 1;
          goto LABEL_5;
        }
      }
      else
      {
        v19 = a5;
        for ( i = 0LL; i < 16; i += 2LL )
        {
          v21 = a6;
          if ( *(_WORD *)((char *)&unk_18098B6B0 + i * 8) == v19 && *(_WORD *)((char *)&unk_18098B6B2 + i * 8) == a6 )
          {
            v22 = RtlStringCchCopyW(a3, v8, L"%systemroot%");
            v16 = v22;
            if ( v22 < 0 )
            {
              v25 = 940;
              goto LABEL_32;
            }
            v22 = RtlStringCchCatW(a3, v8, (&off_18098B6B8)[i]);
            v16 = v22;
            if ( v22 < 0 )
            {
              v24 = "RtlStringCchCatW failed [%x]";
              v25 = 946;
              goto LABEL_33;
            }
            v22 = RtlStringCchCatW(a3, v8, &String1[dword_1809870C0[0]]);
            v16 = v22;
            if ( v22 < 0 )
            {
              v24 = "RtlStringCchCatW failed [%x]";
              v25 = 952;
              goto LABEL_33;
            }
            v19 = a5;
            v21 = a6;
            v9 = 1;
          }
        }
        if ( v9 )
          goto LABEL_28;
        LODWORD(v27) = v21;
        LODWORD(v26) = v19;
        AslLogCallPrintf(
          1,
          (unsigned int)"AslpEnvResolveVars",
          963,
          (unsigned int)"Invalid combination of Host/Current processor architectures passed to AslpEnvResolveVars Host: %x4 Current: %x4",
          v26,
          v27);
        v18 = 0LL;
      }
      v22 = RtlStringCchCopyW(a3, v8, (&off_1809870B8)[v18]);
      v16 = v22;
      if ( v22 < 0 )
      {
        v25 = 980;
LABEL_32:
        v24 = "RtlStringCchCopyW failed [%x]";
        goto LABEL_33;
      }
      v22 = RtlStringCchCatW(a3, v8, &String1[dword_1809870C0[2 * v23]]);
      v16 = v22;
      if ( v22 < 0 )
      {
        v24 = "RtlStringCchCatW failed [%x]";
        v25 = 986;
LABEL_33:
        LODWORD(v26) = v22;
        AslLogCallPrintf(1, (unsigned int)"AslpEnvResolveVars", v25, (_DWORD)v24, v26);
        return v16;
      }
      goto LABEL_28;
    }
LABEL_6:
    ++v12;
  }
  while ( v12 < 4 );
  if ( !v7 )
  {
    v10 = a2;
    if ( a2 > (unsigned int)v8 )
    {
      v16 = -1073741789;
      *a7 = a2;
      return v16;
    }
    v22 = RtlStringCchCopyW(a3, v8, v14);
    v16 = v22;
    if ( v22 < 0 )
    {
      v25 = 1018;
      goto LABEL_32;
    }
  }
LABEL_11:
  v16 = 0;
LABEL_36:
  *a7 = v10;
  return v16;
}
