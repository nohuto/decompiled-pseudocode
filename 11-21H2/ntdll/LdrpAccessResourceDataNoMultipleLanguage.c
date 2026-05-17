/*
 * XREFs of LdrpAccessResourceDataNoMultipleLanguage @ 0x18003A234
 * Callers:
 *     LdrpGetRcConfig @ 0x1800385FC (LdrpGetRcConfig.c)
 *     LdrpAccessResourceData @ 0x180038740 (LdrpAccessResourceData.c)
 *     RtlpFileIsWin32WithRCManifest @ 0x180063EB0 (RtlpFileIsWin32WithRCManifest.c)
 *     LdrpFindMessageInAlternateModule @ 0x18006D5A8 (LdrpFindMessageInAlternateModule.c)
 * Callees:
 *     RtlAddressInSectionTable @ 0x180033A60 (RtlAddressInSectionTable.c)
 *     RtlSectionTableFromVirtualAddress @ 0x180034310 (RtlSectionTableFromVirtualAddress.c)
 *     LdrpGetImageSize @ 0x18003A4FC (LdrpGetImageSize.c)
 *     RtlpImageDirectoryEntryToDataEx @ 0x18003C720 (RtlpImageDirectoryEntryToDataEx.c)
 *     RtlImageNtHeaderEx @ 0x18003CF10 (RtlImageNtHeaderEx.c)
 */

__int64 __fastcall LdrpAccessResourceDataNoMultipleLanguage(
        unsigned __int64 a1,
        unsigned int *a2,
        unsigned __int64 *a3,
        _DWORD *a4)
{
  unsigned int *v6; // rdi
  unsigned __int64 v7; // rbx
  int v8; // eax
  __int64 v9; // rsi
  unsigned __int64 v10; // rcx
  BOOL v11; // eax
  unsigned int v12; // r8d
  _DWORD *v13; // rdx
  unsigned int v14; // r10d
  unsigned int v15; // r9d
  unsigned int v16; // ecx
  unsigned __int64 v17; // rdx
  __int64 v18; // r15
  __int64 v19; // rsi
  unsigned int ImageSize; // [rsp+30h] [rbp-78h]
  unsigned __int64 v22; // [rsp+38h] [rbp-70h] BYREF
  __int64 v23; // [rsp+40h] [rbp-68h] BYREF
  BOOL v24; // [rsp+48h] [rbp-60h]
  int v25; // [rsp+4Ch] [rbp-5Ch]
  __int64 v26; // [rsp+50h] [rbp-58h] BYREF
  __int64 v27; // [rsp+58h] [rbp-50h] BYREF
  _DWORD *v28; // [rsp+60h] [rbp-48h]
  __int64 v29; // [rsp+68h] [rbp-40h]
  unsigned __int64 v30; // [rsp+70h] [rbp-38h]
  unsigned __int64 v31; // [rsp+B0h] [rbp+8h]

  v31 = a1;
  v6 = a2;
  v7 = a1;
  LOBYTE(a2) = 1;
  v8 = RtlpImageDirectoryEntryToDataEx(a1, (_DWORD)a2, 2, (unsigned int)&v22, (__int64)&v23);
  v9 = v23;
  if ( v8 < 0 )
    v9 = 0LL;
  v23 = v9;
  v29 = v9;
  if ( !v9 )
    return 3221225609LL;
  v27 = 0LL;
  ImageSize = LdrpGetImageSize(v7, &v27);
  if ( ImageSize == -1073741701 )
    return 3221225595LL;
  v10 = v7 & 0xFFFFFFFFFFFFFFFCuLL;
  v30 = v7 & 0xFFFFFFFFFFFFFFFCuLL;
  if ( (unsigned __int64)v6 <= (v7 & 0xFFFFFFFFFFFFFFFCuLL) || v27 && (unsigned __int64)v6 >= v10 + v27 )
    return 3221225595LL;
  v11 = 0;
  v24 = 0;
  if ( (v7 & 3) != 0 )
  {
    v11 = (v7 & 1) != 0;
    v24 = v11;
    v7 &= 0xFFFFFFFFFFFFFFFCuLL;
    v31 = v10;
  }
  if ( v11 )
  {
    v26 = 0LL;
    RtlImageNtHeaderEx(1LL, v7, 0LL, &v26);
    v23 = v26;
    if ( !v26 )
      return 3221225609LL;
    if ( *(_WORD *)(v26 + 24) == 267 )
    {
      v12 = *(_DWORD *)(v26 + 136);
    }
    else if ( *(_WORD *)(v26 + 24) == 523 )
    {
      v12 = *(_DWORD *)(v26 + 152);
    }
    else
    {
      v12 = 0;
    }
    if ( !v12 )
      return 3221225609LL;
    v22 = v7 + v12 - v9;
    v13 = (_DWORD *)(*(unsigned __int16 *)(v26 + 20) + v26 + 24);
    v28 = v13;
    v14 = *(unsigned __int16 *)(v26 + 6);
    v15 = 0;
    v25 = 0;
    while ( v15 < v14 )
    {
      v16 = v13[3];
      if ( v12 >= v16 && v12 < v13[4] + v16 )
        goto LABEL_19;
      v13 += 10;
      v28 = v13;
      v25 = ++v15;
    }
    v13 = 0LL;
LABEL_19:
    if ( !v13 )
      return 3221225609LL;
    if ( *v6 > v13[2] )
    {
      v18 = (unsigned int)v13[3];
      v19 = RtlSectionTableFromVirtualAddress(v23, (__int64)v13, *v6);
      if ( !v19 )
        return 3221225609LL;
      v7 = v31;
      v22 += v29 + *(unsigned int *)(v19 + 12) - v18 - RtlAddressInSectionTable();
    }
    else
    {
      v7 = v31;
    }
  }
  else
  {
    v22 = 0LL;
  }
  if ( a3 && ((v17 = v7 + *v6 - v22, *a3 = v17, v17 <= v30) || v27 && v17 >= v30 + v27) )
  {
    *a3 = 0LL;
    return 3221225595LL;
  }
  else
  {
    if ( a4 )
      *a4 = v6[1];
    return ImageSize;
  }
}
