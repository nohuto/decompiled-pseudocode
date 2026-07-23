/*
 * XREFs of RtlpLocateActivationContextSection @ 0x18001DC40
 * Callers:
 *     RtlFindActivationContextSectionString @ 0x18001D420 (RtlFindActivationContextSectionString.c)
 *     RtlpFindNextActivationContextSection @ 0x18001DAC0 (RtlpFindNextActivationContextSection.c)
 *     RtlpLocateActivationContextSectionForQuery @ 0x18007B25C (RtlpLocateActivationContextSectionForQuery.c)
 *     RtlQueryActivationContextApplicationSettings @ 0x18007D8E0 (RtlQueryActivationContextApplicationSettings.c)
 *     RtlpFindActivationContextSection_FillOutReturnedData @ 0x180081504 (RtlpFindActivationContextSection_FillOutReturnedData.c)
 * Callees:
 *     DbgPrintEx @ 0x1800538D0 (DbgPrintEx.c)
 *     __security_check_cookie @ 0x18008EF90 (__security_check_cookie.c)
 *     bsearch @ 0x180091F30 (bsearch.c)
 *     ARRAY_FITS @ 0x1800EB530 (ARRAY_FITS.c)
 */

__int64 __fastcall RtlpLocateActivationContextSection(_DWORD *a1, _QWORD *a2, unsigned int a3, _QWORD *a4, _DWORD *a5)
{
  unsigned int v5; // r11d
  unsigned int v10; // edi
  __int64 v11; // rax
  _DWORD *v12; // rax
  unsigned int v13; // r8d
  __int64 v14; // r9
  unsigned __int64 v15; // rcx
  int v16; // edx
  unsigned int *v17; // rcx
  unsigned int v18; // r9d
  unsigned int *v19; // rdx
  __int64 v20; // r9
  unsigned int v21; // r8d
  unsigned int v22; // eax
  __int64 v24; // rcx
  __int64 v25; // rcx
  __int64 v26; // r9
  int v27; // r11d
  unsigned int v28; // edx
  __int64 v29; // rcx
  int v30; // r8d
  unsigned int v31; // r11d
  char *v32; // r8
  int v33; // r14d
  __int64 v34; // rax
  char *v35; // r9
  __int64 v36; // rcx
  int v37; // r8d
  unsigned int v38; // ebp
  __int64 v39; // rdx
  unsigned int v40; // eax
  _DWORD *i; // rdx
  unsigned int Key[4]; // [rsp+40h] [rbp-58h] BYREF

  v5 = a1[3];
  if ( v5 < 0x20 || a1[1] < 0x20u )
  {
    DbgPrintEx(
      0x33u,
      0,
      "SXS/RTL: Activation context data at %p too small; TotalSize = %lu; HeaderSize = %lu\n",
      a1,
      v5,
      a1[1]);
    return (unsigned int)-1072365565;
  }
  v10 = 0;
  if ( a2 )
  {
    v24 = (unsigned int)a1[5];
    if ( !(_DWORD)v24 )
      return (unsigned int)-1072365567;
    if ( !(unsigned __int8)ARRAY_FITS(v24, 1LL, 16LL, v5) )
    {
      DbgPrintEx(
        0x33u,
        0,
        "SXS/RTL: Extended TOC offset (%ld) is outside bounds of activation context data (%lu bytes)\n",
        v25,
        v27);
      return (unsigned int)-1072365565;
    }
    if ( !(unsigned __int8)ARRAY_FITS(
                             *(unsigned int *)((char *)a1 + v25 + 8),
                             *(unsigned int *)((char *)a1 + v25 + 4),
                             24LL,
                             v26) )
    {
      DbgPrintEx(
        0x33u,
        0,
        "SXS/RTL: Extended TOC entry array (starting at offset %ld; count = %lu; entry size = %u) is outside bounds of ac"
        "tivation context data (%lu bytes)\n",
        v29,
        v28,
        v30,
        v31);
      return (unsigned int)-1072365565;
    }
    v32 = (char *)a1 + v29;
    v33 = 0;
    if ( !v28 )
      return (unsigned int)-1072365567;
    while ( 1 )
    {
      v34 = *a2 - *(_QWORD *)&v32[24 * v33];
      v35 = &v32[24 * v33];
      if ( *a2 == *(_QWORD *)v35 )
        v34 = a2[1] - *((_QWORD *)v35 + 1);
      if ( !v34 )
        break;
      if ( ++v33 >= v28 )
        return (unsigned int)-1072365567;
    }
    if ( !(unsigned __int8)ARRAY_FITS(*((unsigned int *)v35 + 4), 1LL, 16LL, v31) )
    {
      DbgPrintEx(
        0x33u,
        0,
        "SXS/RTL: Extended TOC section TOC %d (offset: %ld, size: %u) is outside activation context data bounds (%lu bytes)\n",
        v33,
        v36,
        v37,
        v5);
      return (unsigned int)-1072365565;
    }
    v12 = (_DWORD *)((char *)a1 + v36);
  }
  else
  {
    v11 = (unsigned int)a1[4];
    if ( !(_DWORD)v11 )
      return (unsigned int)-1072365567;
    v12 = (_DWORD *)((char *)a1 + v11);
  }
  if ( !v12 )
    return (unsigned int)-1072365567;
  v13 = v12[1];
  if ( !v13 )
    return (unsigned int)-1072365567;
  v14 = (unsigned int)v12[2];
  v15 = 16LL * v13;
  if ( v15 > 0xFFFFFFFF
    || (int)v15 + (int)v14 < (unsigned int)v15
    || (unsigned int)v14 >= v5
    || (int)v15 + (int)v14 > v5 )
  {
    DbgPrintEx(
      0x33u,
      0,
      "SXS/RTL: TOC entry array (offset: %ld; count = %lu; entry size = %u) is outside bounds of activation context data (%lu bytes)\n",
      v14,
      v13,
      16,
      v5);
    return (unsigned int)-1072365565;
  }
  v16 = v12[3];
  v17 = (_DWORD *)((char *)a1 + v14);
  if ( (v16 & 2) == 0 )
  {
    v40 = 0;
    for ( i = (_DWORD *)((char *)a1 + v14); *i != a3; i += 4 )
    {
      if ( ++v40 >= v13 )
        return (unsigned int)-1072365567;
    }
    v39 = v40;
    goto LABEL_49;
  }
  if ( a3 < *v17 )
    return (unsigned int)-1072365567;
  v18 = v12[1];
  if ( (v16 & 1) != 0 )
  {
    v38 = a3 - *v17;
    if ( v38 < v18 )
    {
      v39 = v38;
LABEL_49:
      v19 = &v17[4 * v39];
      goto LABEL_16;
    }
    return (unsigned int)-1072365567;
  }
  Key[0] = a3;
  v19 = (unsigned int *)bsearch(Key, v17, v18, 0x10uLL, RtlpCompareActivationContextDataTOCEntryById);
LABEL_16:
  if ( !v19 )
    return (unsigned int)-1072365567;
  v20 = v19[1];
  if ( !(_DWORD)v20 )
    return (unsigned int)-1072365567;
  v21 = v19[2];
  v22 = a1[3];
  if ( (unsigned int)v20 + v21 < v21 || (unsigned int)v20 >= v22 || (unsigned int)v20 + v21 > v22 )
  {
    DbgPrintEx(
      0x33u,
      0,
      "SXS/RTL: Section found (offset %ld; length %lu) extends past end of activation context data (%lu bytes)\n",
      v20,
      v21,
      a1[3]);
    return (unsigned int)-1072365565;
  }
  *a4 = (char *)a1 + v20;
  *a5 = v19[2];
  return v10;
}
