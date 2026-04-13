/*
 * XREFs of ?StringCchCopyNW@@YAJPEAG_KPEBG1@Z @ 0x180079368
 * Callers:
 *     ?_Initialize@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_K@Z @ 0x1800793E4 (-_Initialize@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_.c)
 *     ?_Concat@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_K@Z @ 0x1800C4664 (-_Concat@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_K@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall StringCchCopyNW(char *a1, __int64 a2, char *a3, unsigned __int64 a4)
{
  __int64 v4; // r10
  __int64 result; // rax
  __int64 v6; // r9
  signed __int64 v7; // r8
  unsigned __int16 v8; // ax
  unsigned __int16 *v9; // rax

  v4 = a2;
  if ( (unsigned __int64)(a2 - 1) > 0x7FFFFFFE )
  {
    result = 2147942487LL;
    if ( !a2 )
      return result;
    goto LABEL_12;
  }
  if ( a4 > 0x7FFFFFFE )
  {
    result = 2147942487LL;
LABEL_12:
    *(_WORD *)a1 = 0;
    return result;
  }
  v6 = a4 - a2;
  v7 = a3 - a1;
  do
  {
    if ( !(v6 + v4) )
      break;
    v8 = *(_WORD *)&a1[v7];
    if ( !v8 )
      break;
    *(_WORD *)a1 = v8;
    a1 += 2;
    --v4;
  }
  while ( v4 );
  v9 = (unsigned __int16 *)(a1 - 2);
  if ( v4 )
    v9 = (unsigned __int16 *)a1;
  *v9 = 0;
  return v4 == 0 ? 0x8007007A : 0;
}
