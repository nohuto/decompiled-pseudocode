/*
 * XREFs of ??$_InitializeHelper@V_lambda_255728157cf8e92998065ff06efe801f_@@@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBGPEADAEBV_lambda_255728157cf8e92998065ff06efe801f_@@@Z @ 0x1805238A4
 * Callers:
 *     ?InitializeMessage@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEBGZZ @ 0x18052449C (-InitializeMessage@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAA.c)
 *     ?InitializeResMessage@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEAUHINSTANCE__@@HZZ @ 0x18053BFC4 (-InitializeResMessage@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@Q.c)
 * Callees:
 *     ?_EnsureCapacity@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJ_K@Z @ 0x18008D0C0 (-_EnsureCapacity@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJ_.c)
 *     ?ResultFromKnownLastError@@YAJXZ @ 0x1800E7D10 (-ResultFromKnownLastError@@YAJXZ.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18010FD6C (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 */

__int64 Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_InitializeHelper<_lambda_255728157cf8e92998065ff06efe801f_>(
        __int64 a1,
        const void *a2,
        va_list a3,
        ...)
{
  unsigned __int64 v5; // rcx
  int v7; // ebx
  signed int Error; // eax
  unsigned __int64 v9; // rax
  WCHAR *lpBuffer; // [rsp+20h] [rbp-28h]
  DWORD nSize; // [rsp+28h] [rbp-20h]
  va_list Arguments; // [rsp+68h] [rbp+20h] BYREF
  va_list va; // [rsp+68h] [rbp+20h]
  va_list va1; // [rsp+70h] [rbp+28h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  Arguments = va_arg(va1, va_list);
  v5 = 32LL;
  while ( 1 )
  {
    v7 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_EnsureCapacity(
           (LPVOID *)a1,
           v5);
    if ( v7 < 0 )
      goto LABEL_7;
    nSize = *(_QWORD *)(a1 + 16);
    lpBuffer = *(WCHAR **)a1;
    va_copy(Arguments, a3);
    if ( FormatMessageW(0x400u, a2, 0, 0, lpBuffer, nSize, (va_list *)va) )
    {
      v7 = 0;
      goto LABEL_12;
    }
    Error = ResultFromKnownLastError();
    v7 = Error;
    if ( Error != -2147024774 )
      break;
    v9 = *(_QWORD *)(a1 + 16);
    v5 = v9 + 32;
    if ( v9 + 32 < v9 )
    {
      v7 = -2147024362;
LABEL_7:
      Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(a1);
      return (unsigned int)v7;
    }
  }
  if ( Error < 0 )
    goto LABEL_7;
LABEL_12:
  *(_QWORD *)(a1 + 8) = -1LL;
  return (unsigned int)v7;
}
