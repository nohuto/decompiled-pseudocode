/*
 * XREFs of ??R_lambda_fe718337787c493ce2d833414db25eba_@@QEBAJPEBGPEADPEAG_K@Z @ 0x1800C5690
 * Callers:
 *     ?InitializeFormat@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEBGZZ @ 0x1800C55FC (-InitializeFormat@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJ.c)
 *     ?InitializeResFormat@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEAUHINSTANCE__@@HZZ @ 0x180162620 (-InitializeResFormat@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QE.c)
 *     ?ConcatFormat@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEBGPEAD@Z @ 0x1802E6312 (-ConcatFormat@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEBG.c)
 * Callees:
 *     _vsnwprintf @ 0x1801C7578 (_vsnwprintf.c)
 */

__int64 __fastcall _lambda_fe718337787c493ce2d833414db25eba_::operator()(
        __int64 a1,
        const wchar_t *a2,
        va_list a3,
        wchar_t *a4,
        __int64 a5)
{
  unsigned __int64 v8; // rdi
  unsigned int v9; // ebx
  int v10; // eax
  __int64 v12; // [rsp+40h] [rbp+8h] BYREF

  v12 = a1;
  _o__set_errno(0LL);
  if ( (unsigned __int64)(a5 - 1) > 0x7FFFFFFE )
  {
    v9 = -2147024809;
    if ( a5 )
    {
      *a4 = 0;
      return (unsigned int)-2147024809;
    }
  }
  else
  {
    v8 = a5 - 1;
    v9 = 0;
    v10 = vsnwprintf(a4, a5 - 1, a2, a3);
    if ( v10 < 0 )
    {
LABEL_7:
      a4[v8] = 0;
      v9 = -2147024774;
      goto LABEL_5;
    }
    if ( v10 != v8 )
    {
      if ( v10 <= v8 )
        goto LABEL_5;
      goto LABEL_7;
    }
    a4[v8] = 0;
  }
LABEL_5:
  if ( v9 != -2147024774 )
    return v9;
  _o__get_errno(&v12);
  if ( (_DWORD)v12 == 22 )
    return (unsigned int)-2147024809;
  return 2147942522LL;
}
