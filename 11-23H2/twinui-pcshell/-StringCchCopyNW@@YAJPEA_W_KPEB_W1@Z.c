/*
 * XREFs of ?StringCchCopyNW@@YAJPEA_W_KPEB_W1@Z @ 0x1802ED5F0
 * Callers:
 *     ?_Initialize@?$NativeString@V?$CoTaskMemPolicy@_W@Internal@Windows@@@Internal@Windows@@AEAAJPEB_W_K@Z @ 0x180782AA4 (-_Initialize@-$NativeString@V-$CoTaskMemPolicy@_W@Internal@Windows@@@Internal@Windows@@AEAAJPEB_.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall StringCchCopyNW(wchar_t *a1, __int64 a2, const wchar_t *a3, unsigned __int64 a4)
{
  __int64 v4; // r10
  __int64 result; // rax
  __int64 v6; // r9
  signed __int64 v7; // r8
  wchar_t v8; // ax
  wchar_t *v9; // rax

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
    *a1 = 0;
    return result;
  }
  v6 = a4 - a2;
  v7 = (char *)a3 - (char *)a1;
  do
  {
    if ( !(v6 + v4) )
      break;
    v8 = *(wchar_t *)((char *)a1 + v7);
    if ( !v8 )
      break;
    *a1++ = v8;
    --v4;
  }
  while ( v4 );
  v9 = a1 - 1;
  if ( v4 )
    v9 = a1;
  *v9 = 0;
  return v4 == 0 ? 0x8007007A : 0;
}
