/*
 * XREFs of ?StringCchCopyNExW@@YAJPEAG_KPEBG1PEAPEAGPEA_KK@Z @ 0x18002D260
 * Callers:
 *     ??$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z @ 0x18002D1B8 (--$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z.c)
 *     ?RuntimeClassInitialize@CDeviceGraphObjectsStore@@QEAAJPEBG@Z @ 0x18002D328 (-RuntimeClassInitialize@CDeviceGraphObjectsStore@@QEAAJPEBG@Z.c)
 * Callees:
 *     memset_0 @ 0x180067A54 (memset_0.c)
 */

__int64 __fastcall StringCchCopyNExW(char *a1, unsigned __int64 a2, const unsigned __int16 *a3, unsigned __int64 a4)
{
  const WCHAR *v4; // r10
  unsigned int v7; // edi
  unsigned __int64 v8; // r9
  unsigned __int64 v9; // rax
  signed __int64 v10; // r10
  unsigned __int16 *v11; // rdx
  __int64 v12; // r8
  unsigned __int16 v13; // cx
  unsigned __int64 v14; // r11
  unsigned int v16; // eax

  v4 = a3;
  if ( !a1 && a2 || a2 > 0x7FFFFFFF || a4 >= 0x7FFFFFFF )
  {
    v7 = -2147024809;
    if ( a2 )
      *(_WORD *)a1 = 0;
  }
  else
  {
    v7 = 0;
    if ( !a3 )
    {
      v4 = &String2;
      a4 = 0LL;
    }
    if ( a2 )
    {
      v8 = a4 - a2;
      v9 = a2;
      v10 = (char *)v4 - a1;
      v11 = (unsigned __int16 *)a1;
      v7 = 0;
      v12 = 0LL;
      while ( v8 + v9 )
      {
        v13 = *(unsigned __int16 *)((char *)v11 + v10);
        if ( !v13 )
          break;
        *v11 = v13;
        ++v12;
        ++v11;
        if ( !--v9 )
        {
          *(v11 - 1) = 0;
          return (unsigned int)-2147024774;
        }
      }
      v14 = a2 - v12;
      *v11 = 0;
      if ( v14 > 1 && 2 * v14 > 2 )
        memset_0(&a1[2 * v12 + 2], 0, 2 * v14 - 2);
    }
    else if ( a4 && *v4 )
    {
      v16 = -2147024774;
      if ( !a1 )
        return (unsigned int)-2147024809;
      return v16;
    }
  }
  return v7;
}
