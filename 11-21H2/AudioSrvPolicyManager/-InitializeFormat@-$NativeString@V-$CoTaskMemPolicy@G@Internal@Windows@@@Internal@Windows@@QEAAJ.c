/*
 * XREFs of ?InitializeFormat@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEBGZZ @ 0x180044118
 * Callers:
 *     _lambda_715f26a8cf03ec1bdf3d6747fabae5e9_::operator() @ 0x1800437AC (_lambda_715f26a8cf03ec1bdf3d6747fabae5e9_--operator().c)
 *     _lambda_7a32b90734f372e87ecd5e5e89c702f7_::operator() @ 0x1800439CC (_lambda_7a32b90734f372e87ecd5e5e89c702f7_--operator().c)
 *     _lambda_d1e543e32deb761d4b0a6b2d9b3a008a_::operator() @ 0x180043C14 (_lambda_d1e543e32deb761d4b0a6b2d9b3a008a_--operator().c)
 * Callees:
 *     _get_errno @ 0x18000340E (_get_errno.c)
 *     _set_errno @ 0x180003464 (_set_errno.c)
 *     _vsnwprintf @ 0x1800034F4 (_vsnwprintf.c)
 *     ?_EnsureCapacity@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJ_K@Z @ 0x180041FB4 (-_EnsureCapacity@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJ_.c)
 */

__int64 Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::InitializeFormat(
        __int64 a1,
        const wchar_t *a2,
        ...)
{
  unsigned __int64 v4; // rcx
  __int64 v5; // rdi
  int v6; // ebx
  __int64 v7; // rbp
  wchar_t *v8; // r14
  size_t v9; // rbp
  int v10; // eax
  unsigned __int64 v11; // rax
  int Value[18]; // [rsp+20h] [rbp-48h] BYREF
  va_list Args; // [rsp+80h] [rbp+18h] BYREF

  va_start(Args, a2);
  v4 = 32LL;
  v5 = 0LL;
  while ( 1 )
  {
    v6 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_EnsureCapacity(a1, v4);
    if ( v6 < 0 )
      break;
    v7 = *(_QWORD *)(a1 + 16);
    v8 = *(wchar_t **)a1;
    set_errno(0);
    if ( (unsigned __int64)(v7 - 1) > 0x7FFFFFFE )
    {
      v6 = -2147024809;
      if ( v7 )
      {
        *v8 = 0;
LABEL_20:
        if ( v6 >= 0 )
        {
          v5 = -1LL;
          goto LABEL_17;
        }
        break;
      }
    }
    else
    {
      v9 = v7 - 1;
      v6 = 0;
      v10 = vsnwprintf(v8, v9, a2, Args);
      if ( v10 < 0 || v10 > v9 )
      {
        v8[v9] = 0;
        v6 = -2147024774;
      }
      else if ( v10 == v9 )
      {
        v8[v9] = 0;
      }
    }
    if ( v6 != -2147024774 )
      goto LABEL_20;
    get_errno(Value);
    if ( Value[0] == 22 )
    {
      v6 = -2147024809;
      goto LABEL_20;
    }
    v11 = *(_QWORD *)(a1 + 16);
    v4 = v11 + 32;
    if ( v11 + 32 < v11 )
    {
      v6 = -2147024362;
      break;
    }
  }
  if ( *(_QWORD *)a1 )
  {
    CoTaskMemFree(*(LPVOID *)a1);
    *(_QWORD *)a1 = 0LL;
  }
  *(_QWORD *)(a1 + 16) = 0LL;
LABEL_17:
  *(_QWORD *)(a1 + 8) = v5;
  return (unsigned int)v6;
}
