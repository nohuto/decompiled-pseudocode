/*
 * XREFs of ??R_lambda_fe718337787c493ce2d833414db25eba_@@QEBAJPEBGPEADPEAG_K@Z @ 0x1800472A8
 * Callers:
 *     ?InitializeFormat@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEBGZZ @ 0x180010F8C (-InitializeFormat@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJ.c)
 * Callees:
 *     _get_errno @ 0x18001756E (_get_errno.c)
 *     _set_errno @ 0x1800175C4 (_set_errno.c)
 *     ?StringCchVPrintfW@@YAJPEAG_KPEBGPEAD@Z @ 0x18001A370 (-StringCchVPrintfW@@YAJPEAG_KPEBGPEAD@Z.c)
 */

__int64 __fastcall _lambda_fe718337787c493ce2d833414db25eba_::operator()(
        __int64 a1,
        size_t *a2,
        va_list a3,
        unsigned __int16 *a4,
        unsigned __int64 a5)
{
  unsigned int v8; // eax
  unsigned int v9; // ebx
  __int64 Value; // [rsp+30h] [rbp+8h] BYREF

  Value = a1;
  set_errno(0);
  v8 = StringCchVPrintfW(a4, a5, a2, a3);
  v9 = -2147024774;
  if ( v8 != -2147024774 )
    return v8;
  get_errno((int *)&Value);
  if ( (_DWORD)Value == 22 )
    return (unsigned int)-2147024809;
  return v9;
}
