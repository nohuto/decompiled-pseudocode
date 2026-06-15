/*
 * XREFs of ?_EnsureCapacity@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJ_K@Z @ 0x180041FB4
 * Callers:
 *     ?InitializeFormat@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEBGZZ @ 0x180044118 (-InitializeFormat@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_EnsureCapacity(
        __int64 a1,
        unsigned __int64 a2)
{
  unsigned __int64 v2; // rsi
  unsigned __int64 v4; // r8
  __int64 v5; // rax
  _WORD *v6; // rcx
  unsigned int v7; // ebx
  _WORD *v8; // rax
  unsigned __int64 v9; // rdx
  LPVOID v10; // rax

  v2 = a2 + 1;
  if ( a2 + 1 < a2 )
    return (unsigned int)-2147024362;
  v4 = *(_QWORD *)(a1 + 16);
  v5 = -1LL;
  if ( v4 == -1LL )
  {
    v6 = *(_WORD **)a1;
    if ( *(_QWORD *)(a1 + 8) == -1LL )
    {
      if ( v6 )
      {
        do
          ++v5;
        while ( v6[v5] );
      }
      else
      {
        v5 = 0LL;
      }
      *(_QWORD *)(a1 + 8) = v5;
    }
    else
    {
      v5 = *(_QWORD *)(a1 + 8);
    }
    v4 = (v5 + 1) & -(__int64)(v6 != 0LL);
    *(_QWORD *)(a1 + 16) = v4;
  }
  if ( v4 )
  {
    v7 = 0;
    if ( v2 <= v4 )
      return v7;
    if ( is_mul_ok(v4, 2uLL) )
    {
      v9 = v4 + 2048;
      if ( v4 <= 0x800 )
        v9 = 2 * v4;
      if ( v2 <= v9 )
        v2 = v9;
      v10 = CoTaskMemRealloc(*(LPVOID *)a1, 2 * v2);
      if ( v10 )
      {
        *(_QWORD *)(a1 + 16) = v2;
        *(_QWORD *)a1 = v10;
        return v7;
      }
      return (unsigned int)-2147024882;
    }
    return (unsigned int)-2147024362;
  }
  if ( !is_mul_ok(v2, 2uLL) )
    return (unsigned int)-2147024362;
  v7 = 0;
  v8 = CoTaskMemAlloc(2 * v2);
  if ( !v8 )
    return (unsigned int)-2147024882;
  *(_QWORD *)(a1 + 16) = v2;
  *(_QWORD *)a1 = v8;
  *v8 = 0;
  return v7;
}
