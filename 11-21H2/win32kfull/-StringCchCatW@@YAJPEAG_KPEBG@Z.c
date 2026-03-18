/*
 * XREFs of ?StringCchCatW@@YAJPEAG_KPEBG@Z @ 0x1C00149E4
 * Callers:
 *     ?bAppendSysDirectory@@YAHPEAGPEBGI@Z @ 0x1C0014850 (-bAppendSysDirectory@@YAHPEAGPEBGI@Z.c)
 *     ?FinishStockFontInitInternal@@YAXPEBGH@Z @ 0x1C00C83A0 (-FinishStockFontInitInternal@@YAXPEBGH@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall StringCchCatW(unsigned __int16 *a1, __int64 a2, char *a3)
{
  __int64 v4; // r9
  unsigned __int16 *v5; // rax
  __int64 v6; // r8
  __int64 result; // rax
  unsigned __int16 *v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rax
  char *v11; // r10
  unsigned __int16 v12; // r8
  unsigned __int16 *v13; // rax

  v4 = 260LL;
  v5 = a1;
  do
  {
    if ( !*v5 )
      break;
    ++v5;
    --v4;
  }
  while ( v4 );
  v6 = (260 - v4) & -(__int64)(v4 != 0);
  result = v4 == 0 ? 0x80070057 : 0;
  if ( v4 )
  {
    v8 = &a1[v6];
    v9 = 260 - v6;
    if ( 260 != v6 )
    {
      v10 = 2147483646LL;
      v11 = (char *)(a3 - (char *)v8);
      do
      {
        if ( !v10 )
          break;
        v12 = *(unsigned __int16 *)((char *)v8 + (_QWORD)v11);
        if ( !v12 )
          break;
        *v8 = v12;
        --v10;
        ++v8;
        --v9;
      }
      while ( v9 );
    }
    v13 = v8 - 1;
    if ( v9 )
      v13 = v8;
    *v13 = 0;
    return v9 == 0 ? 0x8007007A : 0;
  }
  return result;
}
