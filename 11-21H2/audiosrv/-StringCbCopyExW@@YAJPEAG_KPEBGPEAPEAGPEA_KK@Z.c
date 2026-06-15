/*
 * XREFs of ?StringCbCopyExW@@YAJPEAG_KPEBGPEAPEAGPEA_KK@Z @ 0x180006B20
 * Callers:
 *     s_sndevtResolveSoundAlias @ 0x180006200 (s_sndevtResolveSoundAlias.c)
 *     ?GetSoundRegistryPath@@YAHPEAG_KPEBG22@Z @ 0x1800069C0 (-GetSoundRegistryPath@@YAHPEAG_KPEBG22@Z.c)
 * Callees:
 *     memset_0 @ 0x18005F9D8 (memset_0.c)
 *     StringExHandleOtherFlagsW @ 0x1800C52DC (StringExHandleOtherFlagsW.c)
 */

__int64 __fastcall StringCbCopyExW(
        STRSAFE_LPWSTR pszDest,
        size_t cbDest,
        char *a3,
        unsigned __int16 **a4,
        unsigned __int64 *a5,
        DWORD a6)
{
  DWORD dwFlags; // r9d
  size_t v8; // rsi
  size_t v12; // r8
  STRSAFE_LPWSTR v13; // rbx
  unsigned int v14; // edi
  size_t v15; // rax
  signed __int64 v16; // r11
  STRSAFE_LPWSTR v17; // rdx
  wchar_t v18; // cx
  __int64 result; // rax
  size_t v20; // r8
  const unsigned __int16 *v21; // rax
  size_t pcchRemaining[7]; // [rsp+30h] [rbp-38h] BYREF
  STRSAFE_LPWSTR ppszDestEnd; // [rsp+78h] [rbp+10h] BYREF

  dwFlags = a6;
  v8 = cbDest >> 1;
  v12 = 0LL;
  if ( (a6 & 0x100) == 0 )
  {
    if ( v8 - 1 <= 0x7FFFFFFE )
      goto LABEL_3;
    goto LABEL_25;
  }
  if ( !pszDest && v8 || v8 > 0x7FFFFFFF )
LABEL_25:
    v12 = 2147942487LL;
LABEL_3:
  if ( (v12 & 0x80000000) == 0LL )
  {
    v13 = pszDest;
    ppszDestEnd = pszDest;
    pcchRemaining[0] = cbDest >> 1;
    if ( (a6 & 0x100) != 0 )
    {
      v21 = (const unsigned __int16 *)&unk_18017F160;
      if ( a3 )
        v21 = (const unsigned __int16 *)a3;
      a3 = (char *)v21;
    }
    v14 = 0;
    if ( (a6 & 0xFFFFE000) != 0 )
    {
      v14 = -2147024809;
      if ( v8 )
        *pszDest = 0;
    }
    else
    {
      if ( v8 )
      {
        v15 = cbDest >> 1;
        v16 = a3 - (char *)pszDest;
        v17 = pszDest;
        v12 = 0LL;
        while ( 2147483646 - v8 + v15 )
        {
          v18 = *(STRSAFE_LPWSTR)((char *)v17 + v16);
          if ( !v18 )
          {
            if ( !v15 )
            {
LABEL_36:
              *(v17 - 1) = 0;
              v13 = &pszDest[v12 - 1];
              v8 -= v12 - 1;
              ppszDestEnd = v13;
              pcchRemaining[0] = v8;
              v14 = -2147024774;
              goto LABEL_37;
            }
            break;
          }
          *v17 = v18;
          ++v12;
          ++v17;
          if ( !--v15 )
            goto LABEL_36;
        }
        v8 -= v12;
        *v17 = 0;
        v13 = &pszDest[v12];
        if ( (dwFlags & 0x200) != 0 )
        {
          v20 = (cbDest & 1) + 2 * v8;
          if ( v20 > 2 )
            memset_0(v13 + 1, (unsigned __int8)dwFlags, v20 - 2);
        }
        goto LABEL_14;
      }
      if ( !*(_WORD *)a3 )
      {
LABEL_14:
        if ( a4 )
          *a4 = v13;
        if ( a5 )
          *a5 = (cbDest & 1) + 2 * v8;
        return v14;
      }
      v14 = -2147024809;
      if ( pszDest )
        v14 = -2147024774;
    }
LABEL_37:
    if ( (dwFlags & 0x1C00) != 0 && cbDest )
    {
      StringExHandleOtherFlagsW(pszDest, cbDest, v12, &ppszDestEnd, pcchRemaining, dwFlags);
      v13 = ppszDestEnd;
      v8 = pcchRemaining[0];
    }
    if ( (int)(v14 + 0x80000000) >= 0 && v14 != -2147024774 )
      return v14;
    goto LABEL_14;
  }
  result = (unsigned int)v12;
  if ( v8 )
    *pszDest = 0;
  return result;
}
