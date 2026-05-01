/*
 * XREFs of HamHostIdInitializeKey @ 0x1800087D0
 * Callers:
 *     <none>
 * Callees:
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1800082C0 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     StringCopyWorkerW @ 0x180010FF8 (StringCopyWorkerW.c)
 *     StringValidateDestW @ 0x1800110B8 (StringValidateDestW.c)
 *     memset_0 @ 0x18001570E (memset_0.c)
 *     ?StringCchLengthW@@YAJPEBG_KPEA_K@Z @ 0x18001C6B8 (-StringCchLengthW@@YAJPEBG_KPEA_K@Z.c)
 */

__int64 __fastcall HamHostIdInitializeKey(
        STRSAFE_PCNZWCH pszSrc,
        PSID SourceSid,
        int a3,
        int a4,
        unsigned __int16 *a5,
        STRSAFE_LPWSTR pszDest)
{
  __int64 v6; // rsi
  __int64 result; // rax
  size_t *v11; // r8
  const wchar_t *v12; // rcx
  size_t v13; // r8
  unsigned int v14; // r11d
  size_t *v15; // r8
  unsigned int v16; // r11d
  unsigned int v17; // r11d
  size_t v18; // [rsp+20h] [rbp-38h]
  size_t v19; // [rsp+20h] [rbp-38h]
  unsigned __int64 v20[5]; // [rsp+30h] [rbp-28h] BYREF

  v6 = a4;
  if ( !(unsigned __int8)PsmIsValidKey() )
    return 3221225711LL;
  if ( !RtlValidSid(SourceSid) )
    return 3221225712LL;
  if ( (unsigned int)v6 > 3 )
    return 3221225714LL;
  if ( a5 && (int)StringCchLengthW(a5, 0x100uLL, v20) < 0 )
    return 3221225715LL;
  memset_0(pszDest, 0, 0x418uLL);
  StringCopyWorkerW(pszDest, 0xE8uLL, v11, pszSrc, v18);
  RtlCopySid(0x44u, pszDest + 232, SourceSid);
  if ( a5 )
  {
    StringCchCopyW(pszDest + 268, 0x100uLL, (size_t *)a5);
    *((_DWORD *)pszDest + 133) = a3;
    return v14;
  }
  else if ( StringValidateDestW(v12, 0x100uLL, v13) < 0 )
  {
    pszDest[268] = v16;
    result = v16;
    *((_DWORD *)pszDest + 133) = a3;
  }
  else
  {
    StringCopyWorkerW(pszDest + 268, 0x100uLL, v15, off_180023B48[v6], v19);
    *((_DWORD *)pszDest + 133) = a3;
    return v17;
  }
  return result;
}
