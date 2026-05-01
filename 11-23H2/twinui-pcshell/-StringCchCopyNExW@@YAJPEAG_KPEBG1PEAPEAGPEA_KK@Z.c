/*
 * XREFs of ?StringCchCopyNExW@@YAJPEAG_KPEBG1PEAPEAGPEA_KK@Z @ 0x1800C3650
 * Callers:
 *     ?GetPackageFullNameFromAppId@CallerIdentity@@YAJPEBGPEAPEAG@Z @ 0x1800C0B90 (-GetPackageFullNameFromAppId@CallerIdentity@@YAJPEBGPEAPEAG@Z.c)
 *     ??$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z @ 0x1800ECDD4 (--$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z.c)
 * Callees:
 *     memset_0 @ 0x1801C750C (memset_0.c)
 */

__int64 __fastcall StringCchCopyNExW(char *a1, unsigned __int64 a2, const unsigned __int16 *a3, unsigned __int64 a4)
{
  const WCHAR *v7; // r9
  unsigned __int64 v8; // r10
  unsigned __int64 v9; // r10
  unsigned __int64 v10; // rax
  signed __int64 v11; // r9
  unsigned __int16 *v12; // rdx
  unsigned int v13; // esi
  __int64 v14; // r8
  unsigned __int16 v15; // cx
  unsigned __int64 v16; // r11
  unsigned int v18; // eax

  if ( !a1 && a2 || a2 > 0x7FFFFFFF || a4 >= 0x7FFFFFFF )
  {
    v13 = -2147024809;
    if ( a2 )
      *(_WORD *)a1 = 0;
  }
  else
  {
    v7 = &LocaleName;
    if ( a3 )
      v7 = a3;
    v8 = 0LL;
    if ( a3 )
      v8 = a4;
    if ( a2 )
    {
      v9 = v8 - a2;
      v10 = a2;
      v11 = (char *)v7 - a1;
      v12 = (unsigned __int16 *)a1;
      v13 = 0;
      v14 = 0LL;
      while ( v9 + v10 )
      {
        v15 = *(unsigned __int16 *)((char *)v12 + v11);
        if ( !v15 )
          break;
        *v12 = v15;
        ++v14;
        ++v12;
        if ( !--v10 )
        {
          *(v12 - 1) = 0;
          return (unsigned int)-2147024774;
        }
      }
      v16 = a2 - v14;
      *v12 = 0;
      if ( v16 > 1 && 2 * v16 > 2 )
        memset_0(&a1[2 * v14 + 2], 0, 2 * v16 - 2);
    }
    else if ( v8 && *v7 )
    {
      v18 = -2147024774;
      if ( !a1 )
        return (unsigned int)-2147024809;
      return v18;
    }
    else
    {
      return 0;
    }
  }
  return v13;
}
