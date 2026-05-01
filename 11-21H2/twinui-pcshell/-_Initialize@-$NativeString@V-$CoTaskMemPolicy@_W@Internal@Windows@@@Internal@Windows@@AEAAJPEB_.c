/*
 * XREFs of ?_Initialize@?$NativeString@V?$CoTaskMemPolicy@_W@Internal@Windows@@@Internal@Windows@@AEAAJPEB_W_K@Z @ 0x180444FB8
 * Callers:
 *     ?InitializeResFormat@?$NativeString@V?$CoTaskMemPolicy@_W@Internal@Windows@@@Internal@Windows@@QEAAJPEAUHINSTANCE__@@HZZ @ 0x180443FBC (-InitializeResFormat@-$NativeString@V-$CoTaskMemPolicy@_W@Internal@Windows@@@Internal@Windows@@Q.c)
 * Callees:
 *     ?StringCchCopyNW@@YAJPEA_W_KPEB_W1@Z @ 0x1802F0D60 (-StringCchCopyNW@@YAJPEA_W_KPEB_W1@Z.c)
 *     ?_EnsureCapacity@?$NativeString@V?$CoTaskMemPolicy@_W@Internal@Windows@@@Internal@Windows@@AEAAJ_K@Z @ 0x180444E54 (-_EnsureCapacity@-$NativeString@V-$CoTaskMemPolicy@_W@Internal@Windows@@@Internal@Windows@@AEAAJ.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@_W@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x180444F80 (-_Free@-$NativeString@V-$CoTaskMemPolicy@_W@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 */

__int64 __fastcall Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<wchar_t>>::_Initialize(
        __int64 a1,
        const wchar_t *a2,
        unsigned __int64 a3)
{
  unsigned __int64 v3; // rdi
  int v6; // esi
  unsigned __int64 v7; // rbx
  unsigned __int64 v8; // rax

  v3 = a3;
  v6 = 0;
  if ( a2 )
  {
    v7 = -1LL;
    v8 = -1LL;
    do
      ++v8;
    while ( a2[v8] );
    if ( a3 == -1LL )
    {
      v3 = v8;
      v7 = v8;
    }
    else if ( a3 >= v8 )
    {
      do
        ++v7;
      while ( a2[v7] );
    }
    else
    {
      v7 = a3;
    }
    v6 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<wchar_t>>::_EnsureCapacity(a1, v3);
    if ( v6 >= 0 )
    {
      StringCchCopyNW(*(wchar_t **)a1, v3 + 1, a2, v7);
      *(_QWORD *)(a1 + 8) = v7;
    }
  }
  else
  {
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<wchar_t>>::_Free(a1);
  }
  return (unsigned int)v6;
}
