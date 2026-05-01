/*
 * XREFs of ?_EnsureCapacity@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJ_K@Z @ 0x18000C644
 * Callers:
 *     ?Initialize@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEBG@Z @ 0x18000C4BC (-Initialize@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEBG@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_EnsureCapacity(
        __int64 a1,
        unsigned __int64 a2)
{
  unsigned __int64 v2; // rsi
  unsigned __int64 v4; // rcx
  __int64 v5; // rax
  unsigned int v6; // ebx
  _WORD *v7; // rcx
  _WORD *v8; // rax
  unsigned __int64 v9; // r14
  LPVOID v10; // rax

  v2 = a2 + 1;
  if ( a2 + 1 < a2 )
    return (unsigned int)-2147024362;
  v4 = *(_QWORD *)(a1 + 16);
  v5 = -1LL;
  v6 = 0;
  if ( v4 == -1LL )
  {
    v7 = *(_WORD **)a1;
    if ( *(_QWORD *)(a1 + 8) == -1LL )
    {
      if ( v7 )
      {
        do
          ++v5;
        while ( v7[v5] );
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
    v4 = (v5 + 1) & -(__int64)(v7 != 0LL);
    *(_QWORD *)(a1 + 16) = v4;
  }
  if ( v4 )
  {
    if ( v2 <= v4 )
      return v6;
    if ( is_mul_ok(v4, 2uLL) )
    {
      v9 = v4 + 2048;
      if ( v4 <= 0x800 )
        v9 = 2 * v4;
      if ( v2 > v9 )
        v9 = a2 + 1;
      v10 = CoTaskMemRealloc(*(LPVOID *)a1, 2 * v9);
      if ( v10 )
      {
        *(_QWORD *)(a1 + 16) = v9;
        *(_QWORD *)a1 = v10;
        return v6;
      }
      return (unsigned int)-2147024882;
    }
    return (unsigned int)-2147024362;
  }
  if ( !is_mul_ok(v2, 2uLL) )
    return (unsigned int)-2147024362;
  v8 = CoTaskMemAlloc(2 * v2);
  if ( !v8 )
    return (unsigned int)-2147024882;
  *(_QWORD *)(a1 + 16) = v2;
  *(_QWORD *)a1 = v8;
  *v8 = 0;
  return v6;
}
