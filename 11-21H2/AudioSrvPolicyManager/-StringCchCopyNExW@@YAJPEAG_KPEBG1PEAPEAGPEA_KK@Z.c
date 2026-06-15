/*
 * XREFs of ?StringCchCopyNExW@@YAJPEAG_KPEBG1PEAPEAGPEA_KK@Z @ 0x18001C76C
 * Callers:
 *     ??$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z @ 0x180013EB0 (--$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z.c)
 * Callees:
 *     memset_0 @ 0x1800034E8 (memset_0.c)
 */

__int64 __fastcall StringCchCopyNExW(char *a1, unsigned __int64 a2, const unsigned __int16 *a3, unsigned __int64 a4)
{
  __int64 v5; // rbx
  const unsigned __int16 *v6; // r8
  __int64 v7; // r9
  unsigned __int64 v8; // r9
  unsigned __int64 v9; // r10
  signed __int64 v10; // r8
  unsigned __int16 *v11; // r11
  unsigned __int16 v12; // ax
  __int64 v13; // r9
  unsigned __int16 *v14; // rax
  unsigned __int64 v15; // rdx

  if ( (a1 || !a2) && a2 <= 0x7FFFFFFF && a4 < 0x7FFFFFFF )
  {
    v6 = (const unsigned __int16 *)&unk_18004DC10;
    v5 = 0LL;
    if ( a3 )
      v6 = a3;
    v7 = a4 & -(__int64)(a3 != 0LL);
    if ( a2 )
    {
      v8 = v7 - a2;
      v9 = a2;
      v10 = (char *)v6 - a1;
      v11 = (unsigned __int16 *)a1;
      do
      {
        if ( !(v8 + v9) )
          break;
        v12 = *(unsigned __int16 *)((char *)v11 + v10);
        if ( !v12 )
          break;
        *v11 = v12;
        ++v5;
        ++v11;
        --v9;
      }
      while ( v9 );
      v13 = v5 - 1;
      v14 = v11 - 1;
      if ( v9 )
      {
        v14 = v11;
        v13 = v5;
      }
      *v14 = 0;
      v15 = a2 - v13;
      LODWORD(v5) = v9 == 0 ? 0x8007007A : 0;
      if ( v9 && v15 > 1 && 2 * v15 > 2 )
        memset_0(&a1[2 * v13 + 2], 0, 2 * v15 - 2);
    }
    else if ( v7 && *v6 )
    {
      LODWORD(v5) = a1 != 0LL ? -2147024774 : -2147024809;
    }
  }
  else
  {
    LODWORD(v5) = -2147024809;
    if ( a2 )
      *(_WORD *)a1 = 0;
  }
  return (unsigned int)v5;
}
