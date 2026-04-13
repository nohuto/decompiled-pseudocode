/*
 * XREFs of ?StringCchCopyNExW@@YAJPEAG_KPEBG1PEAPEAGPEA_KK@Z @ 0x18005F594
 * Callers:
 *     ??$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z @ 0x18004F51C (--$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z.c)
 *     ??$_AllocString@VCTCoAllocPolicy@@@@YAJPEAXKPEB_WPEAPEA_W@Z @ 0x1800BABBC (--$_AllocString@VCTCoAllocPolicy@@@@YAJPEAXKPEB_WPEAPEA_W@Z.c)
 * Callees:
 *     memset_0 @ 0x180022C6D (memset_0.c)
 */

__int64 __fastcall StringCchCopyNExW(char *a1, unsigned __int64 a2, wchar_t *a3, unsigned __int64 a4)
{
  unsigned int v5; // ebx
  wchar_t *v6; // r8
  __int64 v7; // r9
  unsigned __int64 v8; // r9
  unsigned __int64 v9; // r10
  signed __int64 v10; // r8
  unsigned __int16 *v11; // r11
  __int64 v12; // rbx
  unsigned __int16 v13; // ax
  __int64 v14; // r9
  unsigned __int16 *v15; // rax
  unsigned __int64 v16; // rdx

  if ( (a1 || !a2) && a2 <= 0x7FFFFFFF && a4 < 0x7FFFFFFF )
  {
    v6 = word_1801070C4;
    if ( a3 )
      v6 = a3;
    v7 = a4 & -(__int64)(a3 != 0LL);
    if ( a2 )
    {
      v8 = v7 - a2;
      v9 = a2;
      v10 = (char *)v6 - a1;
      v11 = (unsigned __int16 *)a1;
      v12 = 0LL;
      do
      {
        if ( !(v8 + v9) )
          break;
        v13 = *(unsigned __int16 *)((char *)v11 + v10);
        if ( !v13 )
          break;
        *v11 = v13;
        ++v12;
        ++v11;
        --v9;
      }
      while ( v9 );
      v14 = v12 - 1;
      v15 = v11 - 1;
      if ( v9 )
      {
        v15 = v11;
        v14 = v12;
      }
      *v15 = 0;
      v16 = a2 - v14;
      v5 = v9 == 0 ? 0x8007007A : 0;
      if ( v9 && v16 > 1 && 2 * v16 > 2 )
        memset_0(&a1[2 * v14 + 2], 0, 2 * v16 - 2);
    }
    else
    {
      v5 = 0;
      if ( v7 && *v6 )
        return a1 != 0LL ? -2147024774 : -2147024809;
    }
  }
  else
  {
    v5 = -2147024809;
    if ( a2 )
      *(_WORD *)a1 = 0;
  }
  return v5;
}
